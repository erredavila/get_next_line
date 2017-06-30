/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavila <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/11 16:15:14 by rdavila           #+#    #+#             */
/*   Updated: 2017/01/12 14:11:22 by rdavila          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrev(char *s)
{
	int		i;
	int		len;
	char	buff;

	i = 0;
	len = ft_strlen(s);
	while (len - 1 > i)
	{
		buff = s[i];
		s[i] = s[len - 1];
		s[len - 1] = buff;
		len--;
		i++;
	}
	return (s);
}
