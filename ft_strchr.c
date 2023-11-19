/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlebard <jlebard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 11:07:51 by jlebard           #+#    #+#             */
/*   Updated: 2023/11/17 11:21:08 by jlebard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char	*s, int c)
{
	while (*s++)
		if (*s == c)
			return ((char *)s);
	return (NULL);
}

// int main()
// {
// 	char *s = "bdwuidgbw";
// 	char c = 'u';
// 	printf("%p\n", ft_strchr(s, c));
//	printf("vrai strchr : %p\n", strchr(s, c));
//	return 0;
// }
