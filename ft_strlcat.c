/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 17:42:00 by marvin            #+#    #+#             */
/*   Updated: 2023/11/09 17:42:00 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	*ft_strlcat(char    *dest, const char	*src, size_t	n)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0' && j < (int)n)
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

// int main()
// {
// 	char *src = "hudzo";
// 	char dest[] = "ndiozcs";
// 	size_t	n = 0;
// 	printf("%s\n", ft_strlcat(dest, src, n));
// 	return 0;
// }
