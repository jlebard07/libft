/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlebard <jlebard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 12:38:52 by jlebard           #+#    #+#             */
/*   Updated: 2023/11/17 11:19:20 by jlebard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptr;
	unsigned char	temp;

	ptr = s;
	temp = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		ptr[i] = temp;
		i++;
	}
	return (s);
}

// int main()
// {
// 	char buffer[10];
// 	int c = 8;
// 	size_t n = 10;
// 	printf("Adresse : %p\n", (void *)ft_memset(buffer, c, n));
// 	return 0;
// }
