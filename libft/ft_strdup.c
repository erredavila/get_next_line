/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavila <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/07 11:58:23 by rdavila           #+#    #+#             */
/*   Updated: 2017/01/09 13:27:21 by rdavila          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*ret;
	char	*tmp;

	tmp = (char *)malloc(sizeof(*ret) * (ft_strlen(s1) + 1));
	ret = tmp;
	if (tmp == NULL)
		return (NULL);
	while (*s1)
	{
		*tmp = *s1;
		tmp++;
		s1++;
	}
	*tmp = '\0';
	return (ret);
}
