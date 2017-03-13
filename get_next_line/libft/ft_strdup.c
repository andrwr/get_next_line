/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmoldov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/28 12:36:47 by anmoldov          #+#    #+#             */
/*   Updated: 2017/01/28 16:16:25 by anmoldov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char *copied;

	copied = (char*)malloc(ft_strlen(s1) + 1);
	if (copied)
	{
		ft_strcpy(copied, s1);
	}
	return (copied);
}
