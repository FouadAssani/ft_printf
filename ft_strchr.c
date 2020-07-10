/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fassani <fassani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 13:38:28 by fassani           #+#    #+#             */
/*   Updated: 2020/07/09 10:09:40 by fassani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*
**	La fonction strchr() renvoie un pointeur sur la première
**	occurrence du caractère c dans la chaîne s.
*/

char	*ft_strchr(const char *s, int c)
{
	int i;

	i = 0;
	while (s[i] && s[i] != (char)c)
	{
		i++;
	}
	if (!(char)c && s[i] == 0)
		return ((char *)&s[i]);
	if (s[i] == (char)c)
		return ((char *)&s[i]);
	return (0);
}
