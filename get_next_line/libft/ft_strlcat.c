/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmoldov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/28 12:52:04 by anmoldov          #+#    #+#             */
/*   Updated: 2017/01/28 13:01:41 by anmoldov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len;
	size_t	i;

	len = ft_strlen(dst);
	i = 0;
	if (len < size)
	{
		while (i < size - len - 1)
		{
			dst[i + len] = src[i];
			i++;
		}
		dst[i + len] = '\0';
		return (ft_strlen(src) + len);
	}
	if (len == size)
		return (ft_strlen(src) + len);
	return (ft_strlen(src) + size);
}
