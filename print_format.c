/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_format.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adauchy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/15 09:10:24 by adauchy           #+#    #+#             */
/*   Updated: 2017/12/22 15:06:15 by adauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void		print_param(t_param param)
{
	printf("att.ashtag      ==> %d\n", param.att.ashtag);
	printf("att.zero        ==> %d\n", param.att.zero);
	printf("att.minus       ==> %d\n", param.att.minus);
	printf("att.plus        ==> %d\n", param.att.plus);
	printf("att.space       ==> %d\n", param.att.space);
	printf("target          ==> %d\n", param.target);
	printf("field_width     ==> %d\n", param.field_width);
	printf("prec            ==> %d\n", param.prec);
	printf("modifier        ==> %c\n", param.modifier);
	printf("conv            ==> %c\n", param.conv);
}

int			print_format(t_data *data, const char *restrict format)
{
	int		n;
	int		index;
	int		ret;

	n = 0;
	while (format[n])
	{
		if (format[n] == '%')
		{
			n += 1;
			ret = 0;
			reset_param(&data->param);
			if (get_param(format, &n, data) == -1)
				return (-1);
			index = get_index(data->param.conv, CONVERSIONS);
			if (data->param.conv &&
				(ret = data->tab_conv[index](&data->param, &data->arg)) == -1)
				return (-1);
			data->nb_carac += ret;
		}
		else if ((data->nb_carac += 1))
			write(1, &format[n++], 1);
	}
	return (0);
}
