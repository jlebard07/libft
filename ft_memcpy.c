/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 17:04:15 by marvin            #+#    #+#             */
/*   Updated: 2023/11/09 17:04:15 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	*ft_memcpy(void *dest, const void   *src, size_t    n)
{
	unsigned char   *s;
	unsigned char   *d;
	size_t  i;
	
	d = (unsigned char*)dest;
	s = (unsigned char*)src;
	i = 0;
	while (i < n && dest != src)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}

// int main()
// {
// 	unsigned char	*src[12];
// 	unsigned char	*dest[10];
// 	size_t	n = 8;
// 	printf("%p", ft_memcpy(dest, src, n));
// }
