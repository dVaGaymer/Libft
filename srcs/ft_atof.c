/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atof.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alopez-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/19 17:48:07 by alopez-g          #+#    #+#             */
/*   Updated: 2020/08/19 17:48:44 by alopez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

static	int	digit(int n)
{
	int	d;
	d = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		n *= -1;
	while (n)
	{
		n /= 10;
		d++;
	}
	return (d);
}

float	ft_atof(const char *str)
{
	float	num;
	float	aux;
	int	d;

	num = ft_atoi(str);
	if (!ft_strchr(str, '.'))
		return ((float)ft_atoi(str));
	if (!ft_isdigit(*(ft_strchr(str, '.') + 1)))
		return (0);
	aux = ft_atoi(ft_strchr(str, '.') + 1);
	d = digit(aux);
	while (d-- > 0)
		aux /= 10; 
	num = num < 0 ? num - aux : num + aux;
	return (num);
}
