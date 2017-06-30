/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavila <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/10 14:32:02 by rdavila           #+#    #+#             */
/*   Updated: 2017/01/10 14:51:58 by rdavila          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	char	*ret;
	char	*tmp;
	int		i;

	if (!s || !f)
		return (NULL);
	ret = ft_memalloc(ft_strlen(s) + 1);
	if (!ret)
		return (NULL);
	i = 0;
	tmp = ret;
	while (*s)
	{
		*tmp = f(i, *s);
		s++;
		tmp++;
		i++;
	}
	*tmp = '\0';
	return (ret);
}
