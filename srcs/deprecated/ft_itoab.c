/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoab.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alopez-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/26 16:17:32 by alopez-g          #+#    #+#             */
/*   Updated: 2020/07/12 01:43:18 by alopez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "../includes/libft.h"

void		put_nbr(size_t n, int bs_cnt, char *base, char **str);
int			check_repeated(char *tab, int cnt);

char	*ft_str_add_char(char const *s1, char const c)
{
	size_t	len;
	char	*str;
	int		aux;
	
	if (!s1)
		return (0);
	aux = 0;
	len = ft_strlen(s1) + 1;
	if (!(str = (char *)malloc(sizeof(char) * (len + 1))))
		return (0);
	while (*s1)
		*(str + aux++) = *s1++;
	*(str + aux++) = c;
	*(str + len) = 0;
	return (str);
}

char			*ft_itoab(size_t nbr, char *base)
{
	size_t	base_cnt;
	int		valid;
	char	*str;

	str = (char *)malloc(sizeof(char));
	valid = 1;
	base_cnt = 0;
	while (*(base + base_cnt) != '\0')
	{
		if (*(base + base_cnt) == 43 || *(base + base_cnt) == 45)
			valid = !valid;
		base_cnt++;
	}
	if (base_cnt > 1 && valid && check_repeated(base, base_cnt))
		put_nbr(nbr, base_cnt, base, &str);
	return (str);
}

int				check_repeated(char *tab, int cnt)
{
	int aux;

	while (cnt > 0)
	{
		aux = cnt - 1;
		while (aux >= 0)
		{
			if (*(tab + cnt) == *(tab + aux))
				return (0);
			aux--;
		}
		cnt--;
	}
	return (1);
}

void			put_nbr(size_t n, int bs_cnt, char *base, char **str)
{
	char	dig;
	long	num;
	char	*temp;
	char 	*c;

	num = n;
	if (num < 0)
	{
		write(1, "-", 1);
		num = num * -1;
	}
	if (num >= bs_cnt)
		put_nbr(num / bs_cnt, bs_cnt, base, str);
	dig = *(base + num % bs_cnt);
	temp = *str;
	*str = ft_str_add_char(*str, dig);
}