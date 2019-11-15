/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlachheb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/12 18:58:17 by mlachheb          #+#    #+#             */
/*   Updated: 2019/10/24 19:04:12 by mlachheb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*new_s;

	i = 0;
	new_s = 0;
	if (s)
	{
		new_s = (char *)malloc(ft_strlen(s) + 1);
		if (new_s == 0)
			return (0);
		while (s[i] != '\0')
		{
			new_s[i] = f(i, ((char *)s)[i]);
			i++;
		}
		new_s[i] = '\0';
	}
	return (new_s);
}
