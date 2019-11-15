/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlachheb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/12 16:52:48 by mlachheb          #+#    #+#             */
/*   Updated: 2019/10/23 13:28:40 by mlachheb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		n_size(long n)
{
	int i;

	i = 0;
	if (n < 0)
	{
		i++;
		n *= -1;
	}
	while (n > 9)
	{
		i++;
		n /= 10;
	}
	return (i + 1);
}

char	*ft_strrev(char *s)
{
	int		i;
	int		j;
	char	c;

	i = 0;
	j = 0;
	c = 0;
	while (s[j] != '\0')
		j++;
	j--;
	while (i < j)
	{
		c = s[i];
		s[i] = s[j];
		s[j] = c;
		i++;
		j--;
	}
	return (s);
}

void	check_sign(char *n_str, int *i, long *nn)
{
	if (*nn < 0)
	{
		*nn *= -1;
		n_str[*i] = '-';
		*i = *i + 1;
	}
}

char	*ft_itoa(int n)
{
	char	*n_str;
	int		i;
	long	nn;

	i = 0;
	nn = n;
	n_str = (char *)malloc(n_size(nn) + 1);
	if (n_str == 0)
		return (0);
	if (nn < 0)
		check_sign(n_str, &i, &nn);
	while (nn > 9)
	{
		n_str[i] = (nn % 10) + 48;
		nn /= 10;
		i++;
	}
	n_str[i] = nn + 48;
	n_str[i + 1] = '\0';
	if (n_str[0] == '-')
		ft_strrev(n_str + 1);
	else
		ft_strrev(n_str);
	return (n_str);
}
