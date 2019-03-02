/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdelabro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 14:27:43 by tdelabro          #+#    #+#             */
/*   Updated: 2019/03/02 20:30:20 by tdelabro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

char	*ft_strchr(const char *s, int c)
{
	int i;

	i = 0;
	if (s)
	{
		while (s[i] != (char)c && s[i] != '\0')
			i++;
		if (s[i] == (char)c)
			return (&((char*)s)[i]);
	}
	return (NULL);
}
