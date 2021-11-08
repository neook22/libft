/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjeuneje <sjeuneje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 11:50:07 by sjeuneje          #+#    #+#             */
/*   Updated: 2021/10/25 19:38:44 by sjeuneje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*s1_cpy;
	int		i;

	s1_cpy = malloc((ft_strlen(s1) + 1) * sizeof(char));
	if (s1_cpy == NULL)
		return (NULL);
	i = 0;
	while (*s1)
	{
		s1_cpy[i] = *s1;
		i++;
		s1++;
	}
	s1_cpy[i] = '\0';
	return (s1_cpy);
}
