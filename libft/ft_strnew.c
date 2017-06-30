/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavila <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/09 16:04:51 by rdavila           #+#    #+#             */
/*   Updated: 2017/01/09 16:08:22 by rdavila          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char *ret;
	char *tmp;

	ret = (char *)malloc(sizeof(*ret) * (size + 1));
	tmp = ret;
	if (ret == NULL)
		return (NULL);
	while (size)
	{
		*tmp = '\0';
		tmp++;
		size--;
	}
	*tmp = '\0';
	return (ret);
}
