/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 19:12:49 by marvin            #+#    #+#             */
/*   Updated: 2023/11/08 19:12:49 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	unsigned char	*temp;

	temp = s;
	i = 0;
	while (i > n)
	{
		temp[i] = '\0';
		i++;
	}
	return (n);
}

int main()
{
	size_t n = 4;
	char buffer[10];
	printf("%d", )
}
