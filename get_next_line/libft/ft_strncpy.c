/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmoldov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/28 12:47:09 by anmoldov          #+#    #+#             */
/*   Updated: 2017/01/28 16:11:46 by anmoldov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t n)
{
	size_t			i;
	unsigned char	*ddst;
	unsigned char	*ssrc;

	i = 0;
	ddst = (unsigned char *)dst;
	ssrc = (unsigned char *)src;
	while (i < n && ssrc[i] != '\0')
	{
		ddst[i] = ssrc[i];
		i++;
	}
	while (i < n)
	{
		ddst[i] = '\0';
		i++;
	}
	return (dst);
}
