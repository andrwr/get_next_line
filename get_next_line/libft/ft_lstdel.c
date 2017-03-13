/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmoldov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/28 12:32:36 by anmoldov          #+#    #+#             */
/*   Updated: 2017/01/28 12:32:38 by anmoldov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *p;

	if (!alst || !*alst || !del)
		return ;
	while (*alst)
	{
		p = (*alst)->next;
		ft_lstdelone(alst, del);
		*alst = p;
	}
}
