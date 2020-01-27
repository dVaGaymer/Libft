/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alopez-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/25 11:14:57 by alopez-g          #+#    #+#             */
/*   Updated: 2020/01/27 11:57:07 by alopez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		aux;
	char	*str;

	aux = -1;
	if (!s || !(str = (char *)malloc(sizeof(char) * ft_strlen(s) + 1)))
		return (0);
	while (*(s + ++aux))
		*(str + aux) = f(aux, *(s + aux));
	*(str + aux) = 0;
	return (str);
}
