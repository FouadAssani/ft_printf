/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   show_x.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fassani <fassani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/15 03:49:12 by fassani           #+#    #+#             */
/*   Updated: 2020/07/09 10:08:26 by fassani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t			calcul_prec(int len, int prec)
{
	if (len >= prec)
		return (0);
	else
		return (prec - len);
}

size_t			show_x(t_conv a, unsigned int integer, int maj)
{
	t_save	v;

	v.prec_buff = 0;
	v.len = 0;
	if (a.width < 0)
	{
		a.width = -a.width;
		a.signs = '-';
	}
	if (maj == 0)
	{
		v.buff = usignednbr_tobase(integer, "0123456789abcdef");
		ft_rev_char_tab(v.buff, ft_strlen(v.buff));
	}
	else
	{
		v.buff = usignednbr_tobase(integer, "0123456789ABCDEF");
		ft_rev_char_tab(v.buff, ft_strlen(v.buff));
	}
	if (a.prec_is_on == 'n')
		a.prec = ft_strlen(v.buff);
	v.prec_buff = calcul_prec(ft_strlen(v.buff), a.prec);
	next_step_x(&a, &v, integer);
	free(v.buff);
	return (v.len);
}
