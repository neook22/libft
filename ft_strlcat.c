/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjeuneje <sjeuneje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 13:53:02 by sjeuneje          #+#    #+#             */
/*   Updated: 2021/11/03 17:51:22 by sjeuneje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char	*dst, const char *src, size_t dstsize)
{
	size_t	dst_len;
	size_t	dst_index;
	size_t	src_len;
	size_t	src_index;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	dst_index = dst_len;
	src_index = 0;
	if (dstsize <= 0 || dstsize < dst_len)
		return (dstsize + src_len);
	while (src[src_index] && dst_index < dstsize - 1)
	{
		dst[dst_index] = src[src_index];
		dst_index++;
		src_index++;
	}
	dst[dst_index] = '\0';
	return (dst_len + src_len);
}
