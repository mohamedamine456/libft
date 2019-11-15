/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlachheb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 15:34:14 by mlachheb          #+#    #+#             */
/*   Updated: 2019/10/21 12:35:17 by mlachheb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	int i;

	i = 0;
	while (i < (int)n)
	{
		((char *)dst)[i] = ((char *)src)[i];
		if (((unsigned char *)src)[i] == (unsigned char)c)
			return (dst + i + 1);
		i++;
	}
	return (0);
}
