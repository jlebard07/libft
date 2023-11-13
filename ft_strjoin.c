/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 23:27:13 by marvin            #+#    #+#             */
/*   Updated: 2023/11/13 23:27:13 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <stdlib.h>
 
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*dest;
	int		i;
	int		j;
	
	i = 0;
	j = 0;
	dest = malloc((ft_strlen((char *)s1) + ft_strlen((char *)s2)) * sizeof(char) + 1);
	if (s1 != NULL && s2 != NULL)
	{
		while (s1[i])
		{
			dest[i] = s1[i];
			i++;
		}
		while (s2[j])
		{
			dest[i] = s2[j];
			i++;
			j++;
		}
	}
	dest[i] = '\0';
	return (dest);
}

// void main()
// {
// 	char *s1 = "bonjour";
// 	char *s2 = "comment ca va";
// 	printf("%s", ft_strjoin(s1, s2));
// }
 