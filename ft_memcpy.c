/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjeuneje <sjeuneje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 14:08:38 by sjeuneje          #+#    #+#             */
/*   Updated: 2021/11/04 12:28:56 by sjeuneje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*dst_bis;
	char	*src_bis;

	if (dst == NULL && src == NULL)
		return (NULL);
	dst_bis = (char *)dst;
	src_bis = (char *)src;
	i = 0;
	while (n > 0)
	{
		dst_bis[i] = src_bis[i];
		i++;
		n--;
	}
	return (dst);
}
