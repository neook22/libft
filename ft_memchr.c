/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjeuneje <sjeuneje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 13:43:06 by sjeuneje          #+#    #+#             */
/*   Updated: 2021/11/03 17:54:15 by sjeuneje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*s_bis;

	s_bis = (unsigned char *)s;
	while (n > 0)
	{
		if (*s_bis == (unsigned char)c)
			return (s_bis);
		s_bis++;
		n--;
	}
	return (NULL);
}
