/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjeuneje <sjeuneje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 14:02:05 by sjeuneje          #+#    #+#             */
/*   Updated: 2021/11/04 12:34:39 by sjeuneje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*tmp;
	char	*s_bis;

	s_bis = (char *)s;
	tmp = NULL;
	while (*s_bis)
	{
		if (*s_bis == (char)c)
			tmp = s_bis;
		s_bis++;
	}
	if ((char)c == '\0')
		return (s_bis);
	if (tmp == NULL)
		return (NULL);
	return (tmp);
}
