/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavila <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/06 10:55:39 by rdavila           #+#    #+#             */
/*   Updated: 2017/01/09 15:11:37 by rdavila          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *big, const char *little)
{
	char *temp_big;
	char *temp_little;

	if (!*little)
		return ((char *)big);
	while (*big)
	{
		temp_little = (char *)little;
		temp_big = (char *)big;
		while (*big && *little && *big == *little)
		{
			big++;
			little++;
		}
		if (!*little)
			return (temp_big);
		little = temp_little;
		big = temp_big;
		big++;
	}
	return (NULL);
}
