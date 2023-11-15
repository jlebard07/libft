/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlebard <jlebard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 12:23:19 by jlebard           #+#    #+#             */
/*   Updated: 2023/11/13 12:36:56 by jlebard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*temp1;
	unsigned char	*temp2;

	temp1 = (unsigned char *)s1;
	temp2 = (unsigned char *)s2;
	while (temp1++, *temp2++, n-- > 0)
		if (*temp1 != *temp2)
			return (*temp1 - *temp2);
	return (0);
}

// void main()
// {
// 	char *s1 = "wuhdhwu";
// 	char *s2 = "wuhdhw0";
// 	size_t n = 100;
// 	printf("%d", ft_memcmp(s1, s2, n));
// }