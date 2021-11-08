/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjeuneje <sjeuneje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 14:01:48 by sjeuneje          #+#    #+#             */
/*   Updated: 2021/11/03 17:58:31 by sjeuneje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int		i;
	int		j;
	char	*hay_bis;
	char	*need_bis;

	i = 0;
	hay_bis = (char *)haystack;
	need_bis = (char *)needle;
	if (hay_bis == need_bis || *needle == '\0')
		return (hay_bis);
	if (hay_bis[0] == '\0' || need_bis[0] == '\0')
		return (NULL);
	while (hay_bis[i] && len > 0)
	{
		j = 0;
		while (hay_bis[i + j] == need_bis[j] && (len - j > 0))
		{
			if (hay_bis[i + j] == need_bis[j] && need_bis[j + 1] == '\0')
				return (&hay_bis[i]);
			j++;
		}
		i++;
		len--;
	}
	return (NULL);
}
