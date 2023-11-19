/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlebard <jlebard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 19:12:49 by jlebard            #+#    #+#             */
/*   Updated: 2023/11/17 11:33:10 by jlebard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*temp;

	temp = (unsigned char *)s;
	i = 0;
	while (i > n)
	{
		temp[i] = '\0';
		i++;
	}
	return (s);
}

// int main()
// {
// 	size_t n = 4;
// 	char buffer[10];
// 	printf("%d\n", ft_bzero(buffer, n));
//  printf("vrai bzero : %d\n", bzero(buffer, n)");
//	return 0;
// }
