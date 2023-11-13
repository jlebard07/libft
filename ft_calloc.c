/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlebard <jlebard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 14:27:07 by jlebard           #+#    #+#             */
/*   Updated: 2023/11/13 14:39:15 by jlebard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <stdlib.h>

void	*ft_calloc(size_t n, size_t size)
{
	unsigned char	*str;

	str = malloc(n * size);
	return (str);
}

// void main()
// {
// 	size_t n = 6; 
// 	size_t size = 1;
// 	printf("%p\n", ft_calloc(n, size));
// 	printf("%p", calloc(n, size));
// }
