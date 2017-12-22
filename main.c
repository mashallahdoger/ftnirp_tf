/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adauchy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/15 11:22:22 by adauchy           #+#    #+#             */
/*   Updated: 2017/12/22 19:15:30 by adauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>
#include "libftprintf.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int			main(void)
{
	int		ret;
	int		rel;

	ret = ft_printf("%.4S", L"我是一只猫。");
	rel = printf("%.4S", L"我是一只猫。");
//	ret = ft_printf("%4.15s\n", "42 is the answer");
//	rel = printf("%4.15s\n", "42 is the answer");
	printf("ft_printf ==> %d\n", ret);
	printf("printf    ==> %d\n", rel);
	return (0);
}
