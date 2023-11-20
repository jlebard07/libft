/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlebard <jlebard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 12:14:50 by jlebard           #+#    #+#             */
/*   Updated: 2023/11/20 12:14:50 by jlebard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	while (*((s + i--) - 1))
		if (*(s + i) == c)
			return ((char *)(s + i));
	return (NULL);
}

// int main()
// {
// 	char *s = "djwhiddewfewfrgwrgrewfgef3qrfwefdhw";
// 	char c = 'g';
// 	printf("%p", ft_strrchr(s, c));
// }
