/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlachheb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/20 12:53:57 by mlachheb          #+#    #+#             */
/*   Updated: 2019/10/20 20:01:14 by mlachheb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list *lst_new;

	lst_new = malloc(sizeof(t_list));
	if (lst_new == NULL)
		return (NULL);
	lst_new->content = content;
	lst_new->next = NULL;
	return (lst_new);
}
