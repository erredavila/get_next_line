/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavila <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/10 14:22:09 by rdavila           #+#    #+#             */
/*   Updated: 2017/01/10 17:15:41 by rdavila          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*ret;
	char	*tmp;
	size_t	len;

	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	ret = ft_memalloc(len + 1);
	if (!ret)
		return (NULL);
	tmp = ret;
	while (*s)
	{
		*tmp = f(*s);
		s++;
		tmp++;
	}
	*tmp = '\0';
	return (ret);
}
