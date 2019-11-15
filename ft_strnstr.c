/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlachheb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 11:25:12 by mlachheb          #+#    #+#             */
/*   Updated: 2019/10/23 13:53:32 by mlachheb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*check_h_n(const char *h, const char *n)
{
	if (*n == '\0')
		return ((char *)h);
	return (0);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int i;
	int found;
	int j;

	i = -1;
	if (*needle == '\0' || *haystack == '\0')
		return (check_h_n(haystack, needle));
	while (ft_strlen((char *)needle) + (++i) <= (int)len)
	{
		j = 0;
		if (haystack[i + j] == needle[j])
		{
			found = 1;
			while (j < ft_strlen((char *)needle) && found == 1)
			{
				if (haystack[i + j] != needle[j])
					found = 0;
				if (j == (ft_strlen((char *)needle) - 1) && found == 1)
					return ((char *)haystack + i);
				j++;
			}
		}
	}
	return (0);
}
