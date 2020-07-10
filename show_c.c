/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   show_c.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fassani <fassani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/15 03:49:12 by fassani           #+#    #+#             */
/*   Updated: 2020/07/09 10:09:08 by fassani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	show_c(t_conv array, int integer)
{
	if (array.width < 0)
	{
		array.width = -array.width;
		array.signs = '-';
	}
	array.prec = 1;
	if (array.signs == '0')
	{
		show_width(' ', (array.width - 1));
		ft_putchar_fd(integer, 1);
	}
	else if (array.signs == '-')
	{
		ft_putchar_fd(integer, 1);
		show_width(' ', (array.width - 1));
	}
	if (array.width == 0)
		return (1);
	else
		return (array.width);
}
