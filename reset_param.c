/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reset_param.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adauchy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/15 18:08:29 by adauchy           #+#    #+#             */
/*   Updated: 2017/12/22 13:06:17 by adauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void			reset_param(t_param *param)
{
	param->att.ashtag = DISABLED;
	param->att.zero = DISABLED;
	param->att.minus = DISABLED;
	param->att.plus = DISABLED;
	param->att.space = DISABLED;
	param->target = 0;
	param->field_width = 0;
	param->prec = -1;
	param->modifier = 0;
	param->conv = 0;
}
