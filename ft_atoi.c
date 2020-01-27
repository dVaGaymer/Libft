/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alopez-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/25 09:34:07 by alopez-g          #+#    #+#             */
/*   Updated: 2020/01/27 14:52:50 by alopez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	long	aux;
	int		sign;

	aux = 0;
	sign = 1;
	while (*str == ' ' || *str == '\n' || *str == '\v' || *str == '\t'
			|| *str == '\r' || *str == '\f')
		str++;
	if (*str == 43 || *str == 45)
	{
		if (*str == 45)
			sign = -1;
		str++;
	}
	while (*str >= 48 && *str <= 57)
	{
		aux = aux * 10 + (*str - 48);
		str++;
		if (aux * sign > 2147483647)
			return (-1);
		if (aux * sign < -2147483648)
			return (0);
	}
	return ((long)(aux * sign));
}
