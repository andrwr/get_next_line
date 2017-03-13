/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmoldov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/28 12:51:55 by anmoldov          #+#    #+#             */
/*   Updated: 2017/01/28 12:51:57 by anmoldov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memdup(const void *src, size_t n)
{
	void	*ret;

	if (!src)
		return (NULL);
	ret = (void *)malloc(n);
	if (!ret)
		return (NULL);
	ret = ft_memcpy(ret, src, n);
	return (ret);
}
