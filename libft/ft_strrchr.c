/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavila <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/06 18:25:02 by rdavila           #+#    #+#             */
/*   Updated: 2017/01/10 17:15:59 by rdavila          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*ret;
	int		i;

	ret = (char *)s;
	i = 0;
	while (*ret)
	{
		ret++;
		i++;
	}
	i++;
	while (i)
	{
		if (*ret == (char)c)
			return (ret);
		ret--;
		i--;
	}
	return (NULL);
}
