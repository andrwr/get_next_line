/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmoldov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/28 12:34:37 by anmoldov          #+#    #+#             */
/*   Updated: 2017/01/28 15:40:55 by anmoldov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t ft_len;

	ft_len = ft_strlen(little);
	if (!*little)
		return ((char *)big);
	while (*big && len >= ft_len)
	{
		if (ft_strncmp(big, little, ft_len) == 0)
			return ((char *)big);
		++big;
		--len;
	}
	return (NULL);
}
