/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fassani <fassani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/15 03:57:13 by fassani           #+#    #+#             */
/*   Updated: 2020/07/09 10:09:28 by fassani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_printf.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*str;
	size_t			i;

	if (!s)
		return (0);
	if (!(str = newline(len + 1)))
		return (0);
	i = 0;
	if (!(start > ft_strlen(s)))
	{
		while (i < len && s[start + i])
		{
			str[i] = s[start + i];
			i++;
		}
	}
	str[i] = 0;
	return (str);
}
