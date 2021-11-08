/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjeuneje <sjeuneje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 13:52:32 by sjeuneje          #+#    #+#             */
/*   Updated: 2021/11/03 17:55:01 by sjeuneje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*s_bis;

	s_bis = (char *)s;
	while (*s_bis)
	{
		if (*s_bis == (char)c)
			return (s_bis);
		s_bis++;
	}
	if (*s_bis == (char)c)
		return (s_bis);
	return (NULL);
}
