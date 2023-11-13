/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlebard <jlebard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 11:07:51 by jlebard           #+#    #+#             */
/*   Updated: 2023/11/13 11:35:06 by jlebard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	*ft_strchr(const char	*s, int c)
{
	while (*s++)
		if (*s == c)
			return ((char *)s);
	return (NULL);
}

// void main()
// {
// 	char *s = "bdwuidgbw";
// 	char c = 'u';
// 	printf("%p", ft_strchr(s, c));
// }