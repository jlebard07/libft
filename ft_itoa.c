/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlebard <jlebard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 11:20:48 by jlebard           #+#    #+#             */
/*   Updated: 2023/11/20 10:33:22 by jlebard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_itoa_size(int n)
{
	int	temp;
	int	i;

	temp = n;
	i = 1;
	if (n == -2147483648)
		i = 11;
	while (temp <= -10 || temp >= 10)
	{
		temp = temp / 10;
		i++;
	}
	if (n < 0)
		i++;
	return (i);
}

char	*ft_itoa(int n)
{
	char	*dest;
	int		len;
	int		i;

	i = 0;
	len = ft_itoa_size(n);
	dest = (char *)malloc(len * sizeof(char) + 1);
	if (!dest)
		return (NULL);
	if (n == -2147483648)
		return ("-2147483648");
	if (n < 0)
	{
		dest[0] = '-';
		n = -n;
		i++;
	}
	dest[len] = '\0';
	while (i < len)
	{
		len--;
		dest[len] = (n % 10) + 48;
		n = n / 10;
	}
	return (dest);
}

// int main ()
// {
// 	int n = -2147483648;
// 	printf("%s\n", ft_itoa(n));
//	printf("vrai itoa : %s\n", itoa(n));
//	return 0;
// }
