/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlachheb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/20 14:37:13 by mlachheb          #+#    #+#             */
/*   Updated: 2019/10/22 21:54:05 by mlachheb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list *ls1;
	t_list *ls2;

	ls1 = *lst;
	if (ls1 != NULL)
		while (ls1 != NULL)
		{
			ls2 = ls1->next;
			del(ls1->content);
			free(ls1);
			ls1 = ls2;
		}
	*lst = NULL;
}
