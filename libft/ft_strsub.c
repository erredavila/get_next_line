/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavila <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/10 15:05:17 by rdavila           #+#    #+#             */
/*   Updated: 2017/01/10 17:16:28 by rdavila          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(const char *s, unsigned int start, size_t len)
{
	char *ret;
	char *tmp;

	if (!s)
		return (NULL);
	ret = ft_memalloc(len + 1);
	if (!ret)
		return (NULL);
	tmp = ret;
	while (s[start] && len)
	{
		*tmp = s[start];
		tmp++;
		start++;
		len--;
	}
	*tmp = '\0';
	return (ret);
}
