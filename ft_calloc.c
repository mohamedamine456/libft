/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlachheb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 13:27:57 by mlachheb          #+#    #+#             */
/*   Updated: 2019/10/18 16:03:37 by mlachheb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*str;
	int		i;

	i = 0;
	str = (char *)malloc(size * count);
	if (str == 0)
		return (0);
	while (((char *)str)[i] != '\0')
	{
		((char *)str)[i] = 0;
		i++;
	}
	return (str);
}
