/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavila <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/05 19:33:09 by rdavila           #+#    #+#             */
/*   Updated: 2017/01/14 17:02:14 by rdavila          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_check_max_value(const char *s, int *ret, int sign)
{
	if (ft_strlen(s) > 19 && sign == 1 && ft_only_digit(s))
	{
		*ret = -1;
		return (1);
	}
	else if (ft_strlen(s) > 19 && sign == -1 && ft_only_digit(s))
	{
		*ret = 0;
		return (1);
	}
	else if (ft_strlen(s) == 19)
	{
		if (sign == 1 && ft_strcmp(s, "9223372036854775807") >= 0)
		{
			*ret = -1;
			return (1);
		}
		else if (sign == -1 && ft_strcmp(s, "9223372036854775808") >= 0)
		{
			*ret = (0);
			return (1);
		}
	}
	return (0);
}

int			ft_atoi(const char *str)
{
	int	sign;
	int	n;
	int ret;

	sign = 1;
	n = 0;
	ret = 0;
	while (*str == ' ' || *str == '\t' || *str == '\n' ||
			*str == '\r' || *str == '\f' || *str == '\v')
		str++;
	if (*str == '-')
		sign = -1;
	if (*str == '+' || *str == '-')
		str++;
	while (*str == '0')
		str++;
	if (ft_check_max_value(str, &ret, sign))
		return (ret);
	while (*str && *str >= '0' && *str <= '9')
	{
		n *= 10;
		n += *str - '0';
		str++;
	}
	return (n * sign);
}
