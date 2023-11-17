/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlebard <jlebard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 23:11:08 by marvin            #+#    #+#             */
/*   Updated: 2023/11/17 11:22:55 by jlebard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	unsigned int	k;
	char			*dest;

	i = 0;
	k = 0;
	while (s[i] && i < start)
		i++;
	while (s[i + k] && k < (unsigned int)len)
		k++;
	dest = malloc(k * sizeof(char) + 1);
	k = 0;
	if (s != NULL)
	{
		while (s[i + k] && k < (unsigned int)len)
		{
			dest[k] = s[i + k];
			k++;
		}
		dest[k] = '\0';
	}
	return (dest);
}

// void main()
// {
// 	char *str = "bonjour comment ça va";
// 	unsigned int index = 4;
// 	size_t len = 10;
// 	printf("%s", ft_substr(str, index, len));
// }
