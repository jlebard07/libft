/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlebard <jlebard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 12:14:46 by jlebard           #+#    #+#             */
/*   Updated: 2023/11/20 12:14:46 by jlebard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	int		i;
	int		j;
	int		k;
	char	*temp1;
	char	*temp2;

	temp1 = (char *)s1;
	temp2 = (char *)s2;
	i = 0;
	j = 0;
	k = 0;
	while (temp1[i] && n > 0)
	{
		if (temp1[i] == temp2[j])
		{
			k = i;
			while (temp1[k++] == temp2[j++])
				if (temp2[j] == '\0')
					return (temp2);
		}
		j = 0;
		n--;
		i++;
	}
	return (NULL);
}

// void main()
// {
// 	char *s1 = "bonjour comment ca va";
// 	char *s2 = "comment";
// 	size_t n = 9;
// 	printf("%s", ft_strnstr(s1, s2, n));
// }
