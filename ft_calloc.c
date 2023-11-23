/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlebard <jlebard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 12:11:01 by jlebard           #+#    #+#             */
/*   Updated: 2023/11/23 14:00:46 by jlebard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	void	*dest;

	dest = malloc(n * size);
	if (dest == NULL)
		return (NULL);
	ft_memset((unsigned char *)dest, 0, n * size);
	return (dest);
}

// int main()
// {
// 	size_t n = 65535; 
// 	size_t size = 65535;
// 	printf("%p\n", ft_calloc(n, size));
// 	printf("vrai calloc : %p\n", calloc(n, size));
// 	return 0;
// }
