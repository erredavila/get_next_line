/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavila <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/10 15:23:23 by rdavila           #+#    #+#             */
/*   Updated: 2017/02/19 17:08:32 by rdavila          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char *ret;
	char *tmp;

	if (!s1 || !s2)
		return (NULL);
	ret = (char *)malloc(sizeof(*ret) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!ret)
		return (NULL);
	tmp = ret;
	while (*s1)
	{
		*tmp = *s1;
		tmp++;
		s1++;
	}
	while (*s2)
	{
		*tmp = *s2;
		tmp++;
		s2++;
	}
	*tmp = '\0';
	return (ret);
}
