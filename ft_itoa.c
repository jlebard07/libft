/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlebard <jlebard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 11:20:48 by jlebard           #+#    #+#             */
/*   Updated: 2023/11/14 12:14:12 by jlebard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdlib.h>
// #include <stdio.h>

char	*ft_reverse(char *str)
{
	char	*dest;
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (str[i])
		i++;
	dest = malloc(sizeof(*str) * i + 1);
	if (!dest)
		return (NULL);
	while (i > 0)
		dest[j++] = str[--i];
	return (dest);
}

char	*ft_itoa(int n)
{
	char	*dest;
	int		div;
	int		temp;
	int		i;

	temp = n;
	div = 1;
	i = 0;
	while (temp > 9)
	{
		temp = temp / 10;
		div++;
	}
	temp = n;
	if (n < 0)
	{
		dest = malloc(sizeof(int) * (div + 2));
		temp = -temp;
	}
	else
		dest = malloc(sizeof(int) * (div + 1));
	while (temp != 0)
	{
		dest[i] = (temp % 10) + 48;
		temp = temp / 10;
		i++;
	}
	if (n < 0)
		dest[i] = '-';
	if (n == 0)
		dest = "0";
	return (ft_reverse(dest));
}

// void main ()
// {
// 	int n = 1;
// 	printf("%s", ft_itoa(n));
// }
