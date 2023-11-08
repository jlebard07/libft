/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlebard <jlebard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 11:49:06 by jlebard           #+#    #+#             */
/*   Updated: 2023/11/06 11:51:45 by jlebard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include<stdio.h>

int	ft_isalnum(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122) || (c >= 48 && c <= 57))
		return (1);
	return (0);
}

// void main()
// {
// 	char c = '#';
// 	printf("test %d", ft_isalnum(c));
// }
