/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlebard <jlebard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
<<<<<<< HEAD
/*   Created: 2023/11/09 17:42:00 by marvin            #+#    #+#             */
/*   Updated: 2023/11/20 11:32:33 by jlebard          ###   ########.fr       */
=======
/*   Created: 2023/11/09 17:42:00 by jlebard            #+#    #+#             */
/*   Updated: 2023/11/17 11:42:17 by jlebard          ###   ########.fr       */
>>>>>>> origin/main
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
