/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjeuneje <sjeuneje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 17:05:03 by sjeuneje          #+#    #+#             */
/*   Updated: 2021/11/04 12:27:19 by sjeuneje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_dec(int n)
{
	unsigned int	un_n;
	int				cpt;

	cpt = 1;
	un_n = (unsigned int)n;
	if (n < 0)
	{
		un_n = -n;
		cpt++;
	}
	while (un_n >= 10)
	{
		cpt++;
		un_n /= 10;
	}
	return (cpt);
}

static char	ft_select_digit(unsigned int n, int i, int n_len)
{
	int	j;

	j = 0;
	while (j < n_len - i - 1)
	{
		n /= 10;
		j++;
	}
	return ((n % 10) + '0');
}

char	*ft_itoa(int n)
{
	char				*num;
	unsigned int		un_n;
	int					len;
	int					i;

	i = 0;
	num = NULL;
	len = ft_count_dec(n);
	un_n = (unsigned int)n;
	num = malloc((len + 1) * sizeof(char));
	if (num == NULL)
		return (NULL);
	if (n < 0)
	{
		un_n = (unsigned int)-n;
		num[0] = '-';
		i++;
	}
	while (i < len)
	{
		num[i] = ft_select_digit(un_n, i, len);
		i++;
	}
	num[i] = '\0';
	return (num);
}
