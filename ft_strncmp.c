/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlebard <jlebard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 12:14:41 by jlebard           #+#    #+#             */
/*   Updated: 2023/11/20 12:14:41 by jlebard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char	*s1, const char	*s2, size_t n)
{
	int	i;

	i = 0;
	while (s1[i++] && s2[i] && i < (int)n)
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	return (0);
}

// void main()
// {
// 	char *s1 = "dhwohid";
// 	char *s2 = "dhwohPd";
// 	size_t n = 6;
// 	printf("%d", ft_strncmp(s1, s2, n));
// }
