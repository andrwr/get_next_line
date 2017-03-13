/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmoldov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/28 12:48:14 by anmoldov          #+#    #+#             */
/*   Updated: 2017/01/28 12:48:43 by anmoldov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char			*str;
	unsigned char	ascichar;
	size_t			i;

	str = (char *)b;
	ascichar = (unsigned char)c;
	i = 0;
	while (i < len)
	{
		str[i] = ascichar;
		i++;
	}
	return (b);
}
