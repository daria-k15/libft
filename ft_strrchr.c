/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heveline <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 18:36:26 by heveline          #+#    #+#             */
/*   Updated: 2021/04/20 19:53:48 by heveline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr (const char *str, int ch)
{
	int			i;
	unsigned char	*a;

	a = (unsigned char*)str;
	i = ft_strlen(str);
	while (a[i] != (unsigned char)ch && (i > 0))
		i--;
	if (a[i] == (unsigned char)ch)
		return ((char *)&a[i]);
	return (NULL);
}
