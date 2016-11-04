/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgould <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 13:23:19 by mgould            #+#    #+#             */
/*   Updated: 2016/11/04 13:23:23 by mgould           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*fun_ampm(int hour)
{
	char *ampm;

	if (hour > 23)
	{
		ampm = "A.M.";
	}
	else if (hour < 12)
	{
		ampm = "A.M.";
	}
	else
		ampm = "P.M.";
	return (ampm);
}

void	ft_takes_place(int hour)
{
	int		mod;
	int		mod1;
	char	*ampm;
	char	*ampm1;

	mod = hour % 12;
	mod1 = (hour % 12) + 1;
	ampm = fun_ampm(hour);
	ampm1 = fun_ampm(hour + 1);
	printf("THE FOLLOWING TAKES PLACE BETWEEN %d.00 %s AND %d.00 %s\n",
			mod, ampm, mod1, ampm1);
}
