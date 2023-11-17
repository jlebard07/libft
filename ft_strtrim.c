/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlebard <jlebard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 09:41:20 by jlebard           #+#    #+#             */
/*   Updated: 2023/11/17 11:30:36 by jlebard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_char_in_set(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t		i;
	size_t		start;
	size_t		end;
	char		*dest;

	start = 0;
	while (s1[start] && ft_char_in_set(s1[start], set) == 1)
		start ++;
	end = ft_strlen(s1);
	while (s1[end - 1] && ft_char_in_set(s1[end - 1], set) == 1 && end > start)
		end--;
	dest = (char *)malloc(sizeof(*s1) * (end - start + 1));
	if (!dest)
		return (NULL);
	i = 0;
	while (s1[start] && start < end)
		dest[i++] = s1[start++];
	return (dest);
}

// void main()
// {
// 	char const *s1 = "bonjour comment ca va";
// 	char const *set = "ca va";
// 	printf("%s", ft_strtrim(s1, set));
// }
