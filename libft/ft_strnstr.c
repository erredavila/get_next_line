/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavila <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/06 12:13:08 by rdavila           #+#    #+#             */
/*   Updated: 2017/01/10 17:16:08 by rdavila          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	char	*temp_big;
	char	*temp_little;
	size_t	temp_len;

	if (!*little)
		return ((char *)big);
	while (*big && len)
	{
		temp_little = (char *)little;
		temp_big = (char *)big;
		temp_len = len;
		while (*big && *little && *big == *little && len)
		{
			big++;
			little++;
			len--;
		}
		if (!*little)
			return (temp_big);
		little = temp_little;
		big = ++temp_big;
		len = temp_len;
		len--;
	}
	return (NULL);
}
