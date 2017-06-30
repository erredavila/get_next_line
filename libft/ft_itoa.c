/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavila <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/11 16:11:39 by rdavila           #+#    #+#             */
/*   Updated: 2017/01/14 17:14:40 by rdavila          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_is_negative(int *n)
{
	if (*n < 0)
	{
		*n *= -1;
		return (1);
	}
	return (0);
}

static char	*ft_add_minus(char *s)
{
	*s = '-';
	s++;
	return (s);
}

char		*ft_itoa(int n)
{
	char	*ret;
	char	*tmp;
	int		sign;

	sign = ft_is_negative(&n);
	ret = (char *)malloc(sizeof(*ret) * (ft_num_length(n) + sign + 1));
	if (!ret)
		return (NULL);
	if (n == -2147483648)
		return (ft_memcpy(ret, "-2147483648", ft_num_length(n) + 2));
	if (n == 0)
		return (ft_memcpy(ret, "0", 2));
	tmp = ret;
	while (n)
	{
		*tmp = (n % 10) + '0';
		n /= 10;
		tmp++;
	}
	if (sign)
		tmp = ft_add_minus(tmp);
	*tmp = '\0';
	return (ft_strrev(ret));
}
