/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlachheb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/20 14:51:46 by mlachheb          #+#    #+#             */
/*   Updated: 2019/10/22 21:52:59 by mlachheb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(f)(void *), void (*del)(void *))
{
	t_list *new_lst;
	t_list *alst;

	new_lst = malloc(sizeof(t_list));
	if (new_lst == NULL)
		return (NULL);
	alst = new_lst;
	while (lst != NULL)
	{
		alst->content = f(lst->content);
		if (lst->next != NULL)
			alst->next = malloc(sizeof(t_list));
		else
			alst->next = NULL;
		if (alst->next == NULL && lst->next != NULL)
		{
			ft_lstclear(&new_lst, del);
			break ;
		}
		alst = alst->next;
		lst = lst->next;
	}
	return (new_lst);
}
