/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlachheb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 23:53:54 by mlachheb          #+#    #+#             */
/*   Updated: 2019/10/24 18:48:02 by mlachheb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		check_car(char c, char *set)
{
	int i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int		start_car(char *s, char *set)
{
	int start;

	start = 0;
	while (s[start] != '\0' && check_car(s[start], set))
		start++;
	return (start);
}

int		end_car(char *s, char *set)
{
	int end;

	end = ft_strlen(s) - 1;
	while (end >= 0 && check_car(s[end], set))
		end--;
	return (end);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		start;
	int		end;
	int		i;

	i = 0;
	if (s1 == NULL)
		return (NULL);
	start = start_car((char *)s1, (char *)set);
	end = end_car((char *)s1, (char *)set);
	if (start > end)
		return (ft_strdup(""));
	str = (char *)malloc((end - start + 2) * sizeof(char));
	if (str == NULL)
		return (NULL);
	while (start <= end)
	{
		str[i] = s1[start];
		start++;
		i++;
	}
	str[i] = '\0';
	return (str);
}
