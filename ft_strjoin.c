/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alopez-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/25 11:07:42 by alopez-g          #+#    #+#             */
/*   Updated: 2020/01/27 11:22:31 by alopez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len;
	char	*str;
	int		aux;

	if (!s1 || !s2)
		return (0);
	aux = 0;
	len = ft_strlen(s1) + ft_strlen(s2);
	if (!(str = (char *)malloc(sizeof(char) * len + 1)))
		return (0);
	while (*s1)
	{
		*(str + aux) = *s1;
		s1++;
		aux++;
	}
	while (*s2)
	{
		*(str + aux) = *s2;
		s2++;
		aux++;
	}
	*(str + len) = 0;
	return (str);
}
