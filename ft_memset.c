/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlebard <jlebard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 12:38:52 by jlebard           #+#    #+#             */
/*   Updated: 2023/11/08 13:31:11 by jlebard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	int		array[n];

	i = 0;
	s = &array[i];
	while (i < n)
	{
		array[i] = c;
		i++;
	}
	return (s);
}

// int main()
// {
// 	void *s;
// 	int c = 8;
// 	size_t n = 10;
// 	printf("adresse de c:%p", ft_memset(s, c, n));
// 	return 0;
// }