/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmoldov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/28 12:29:28 by anmoldov          #+#    #+#             */
/*   Updated: 2017/01/28 12:29:30 by anmoldov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*ddst;
	unsigned char	*ssrc;
	unsigned char	*temp;

	temp = (unsigned char*)malloc(len);
	ddst = (unsigned char *)dst;
	ssrc = (unsigned char*)src;
	if (temp)
	{
		ft_memcpy(temp, ssrc, len);
		ft_memcpy(ddst, temp, len);
		free(temp);
	}
	return (dst);
}
