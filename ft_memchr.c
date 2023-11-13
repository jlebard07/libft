/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlebard <jlebard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 12:03:53 by jlebard           #+#    #+#             */
/*   Updated: 2023/11/13 12:23:06 by jlebard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	*ft_memchr(const void	*s, int c, size_t n)
{
	unsigned char	*temp;

	temp = (unsigned char *)s;
	while (*temp++ && n-- > 0)
		if (*temp == c)
			return (temp);
	return (NULL);
}

// int main()
// {
// 	unsigned char* s = "iefhowe";
// 	char c = 'w';
// 	size_t n = 10;
// 	printf("%p", ft_memchr(s, c, n));
// }
