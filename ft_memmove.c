/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 17:25:40 by marvin            #+#    #+#             */
/*   Updated: 2023/11/09 17:25:40 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	*ft_memmove(void	*dest, const void	*src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;
	unsigned char	temp[n];
	size_t	i;

	i = 0;
	d = (unsigned char*)dest;
	s = (unsigned char*)src;
	while (i < n)
	{
		temp[i] = s[i];
		i++;
	}
	i = 0;
		while (i < n)
	{
		d[i] = temp[i];
		i++;
	}
	return (dest);
}

// int	main()
// {
// 	char	*src[10];
// 	char	*dest[9];
// 	size_t	n = 6;
// 	printf("%p", ft_memmove(dest, src, n));
// }
