/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlachheb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 10:58:35 by mlachheb          #+#    #+#             */
/*   Updated: 2019/10/18 17:22:24 by mlachheb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	nbs;
	int		m;

	nbs = n;
	m = 0;
	if (nbs < 0)
	{
		ft_putchar_fd('-', fd);
		nbs *= -1;
	}
	if (nbs >= 0 && nbs <= 9)
		ft_putchar_fd((nbs + 48), fd);
	else
	{
		m = nbs % 10;
		nbs /= 10;
		ft_putnbr_fd(nbs, fd);
		ft_putchar_fd((m + 48), fd);
	}
}
