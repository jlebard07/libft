/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlebard <jlebard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 13:38:25 by jlebard           #+#    #+#             */
/*   Updated: 2023/11/17 11:22:05 by jlebard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	while (i < size)
	{
		dst[i] = src[i];
		i++;
	}
	return (size);
}

// int main()
// {
// 	char		*dst;
// 	char	const	*src = "huwdiwh";
// 	size_t size = 3;
// 	printf("%ld, %s", ft_strlcpy(dst, src, size), dst);
// 	return 0;	
// }
