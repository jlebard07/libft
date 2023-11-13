/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlebard <jlebard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 14:39:44 by jlebard           #+#    #+#             */
/*   Updated: 2023/11/13 14:47:46 by jlebard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

char	*ft_strdup(const char *s)
{
	char	*dest;
	int		i;

	i = 0;
	while (s[i])
		i++;
	dest = malloc(i * sizeof(char) + 1);
	i = 0;
	while (s[i])
	{
		dest[i] = s[i];
		i++;
	}
	return (dest);
}

// void main()
// {
// 	char *str = "alldwndidhwug";
// 	printf("%s\n", ft_strdup(str));
// 		printf("%s", strdup(str));

// }