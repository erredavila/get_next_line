/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavila <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/10 15:37:54 by rdavila           #+#    #+#             */
/*   Updated: 2017/01/10 17:16:40 by rdavila          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *s)
{
	char *ret;
	char *tmp;
	char *hold;

	if (!s)
		return (NULL);
	while (*s == ' ' || *s == '\n' || *s == '\t')
		s++;
	hold = ft_memalloc(ft_strlen(s));
	if (!hold)
		return (NULL);
	hold = ft_memcpy(hold, s, ft_strlen(s) + 1);
	tmp = hold;
	while (*hold)
		hold++;
	while (*hold == ' ' || *hold == '\n' || *hold == '\t' || *hold == '\0')
	{
		*hold = '\0';
		hold--;
	}
	ret = ft_memalloc(ft_strlen(tmp) + 1);
	if (!ret)
		return (NULL);
	ret = ft_memcpy(ret, tmp, ft_strlen(tmp) + 1);
	return (ret);
}
