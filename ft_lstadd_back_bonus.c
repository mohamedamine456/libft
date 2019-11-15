/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlachheb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/20 14:22:43 by mlachheb          #+#    #+#             */
/*   Updated: 2019/10/20 19:56:45 by mlachheb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list *lst;

	lst = *alst;
	if (*alst == NULL)
		*alst = new;
	else
	{
		lst = ft_lstlast(*alst);
		lst->next = new;
		lst++;
		lst = new;
	}
}
