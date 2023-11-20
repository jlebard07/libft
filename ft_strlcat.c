/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlebard <jlebard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 12:13:49 by jlebard           #+#    #+#             */
/*   Updated: 2023/11/20 12:13:53 by jlebard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char	*src, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0' && j < n)
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (i + j);
}

// int main()
// {
// 	char *src = "hudzo";
// 	char dest[] = "ndiozcs";
// 	size_t	n = 0;
// 	printf("%s\n", ft_strlcat(dest, src, n));
//	printf("vrai strlcat : %s\n", strlcat(dest, src, n));
// 	return 0;
// }
