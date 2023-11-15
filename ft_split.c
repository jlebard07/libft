/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 15:37:47 by marvin            #+#    #+#             */
/*   Updated: 2023/11/15 15:37:47 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <stdlib.h>
// #include <stddef.h>

int	ft_count_words(const char *s, char c)
{
	int	i;
	int	compteur;

	i = 0;
	compteur = 0;
	while (s[i] == c)
		i++;
	while (s[i++])
	{
		if (s[i] == c && s[i + 1] != c && s[i + 1] != '\0')
			compteur ++;
		i++;
	}
	return (compteur);
}

char	*ft_write_word(char const *s, char c)
{
	int		i;
	char	*dest;

	i = 0;
	while (s[i] != '\0' && s[i] != c)
	{
		dest[i] = s[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_write_split(char **dest, char const *s, char c)
{
	int	i;
	int	j;
	int	word;

	i = 0;
	word = 0;
	while (s[i] != '\0')
	{
		j = 0;
		if (s[i] == c)
			i++;
		else
			while (s[i + j] != c && s[i + j] != '\0')
				j++;
		if (!(dest[word] = (char *)malloc(sizeof(*s) * (i - j + 1))))
			return (-1);
		dest[word] = ft_write_word(s + i, c);
		i += j;
		word++;		
	}
	return(0);
}

char	**ft_split(char const *s, char c)
{
	int		words;
	char	**dest;
	
	words = ft_count_words(s, c);
	if (!(dest = (char **)malloc(sizeof(char *) * (words + 1))))
		return (NULL);
	dest[words] = 0;
	if (!(ft_write_split(dest, s, c)) == -1)
		return(NULL);
	return (dest);
}

// void main()
// {
// 	int i;
// 	char *s = "bonjour je m'appelle Jean";
// 	char c = ' ';
// 	char **dest;

// 	i = 0;
// 	dest = ft_split(s, c);
// 	while (dest[i] != 0)
// 		printf("%s\n", dest[i++]);
// }