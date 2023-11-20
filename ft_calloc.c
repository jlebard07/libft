/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlebard <jlebard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 12:11:01 by jlebard           #+#    #+#             */
/*   Updated: 2023/11/20 12:11:04 by jlebard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	unsigned char	*str;
	size_t			i;

	i = 0;
	str = malloc(n * size);
	if (str != NULL)
	{
		while (i < n)
		{
			str[i] = '\0';
			i++;
		}
	}
	return (str);
}

// int main()
// {
// 	size_t n = 6; 
// 	size_t size = 1;
// 	printf("%p\n", ft_calloc(n, size));
// 	printf("vrai calloc : %p\n", calloc(n, size));
//	return 0;
// }
