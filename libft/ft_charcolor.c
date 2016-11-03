/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_charcolor.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaitalla <yaitalla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/04 17:26:00 by yaitalla          #+#    #+#             */
/*   Updated: 2015/12/20 13:56:31 by yaitalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "colors.h"

void		charcolor(char c, char *color, int fd, int n)
{
	ft_putstr(color);
	if (n)
	{
		ft_putchar_fd(c, fd);
		ft_putchar_fd('\n', fd);
	}
	else
		ft_putchar_fd(c, fd);
	ft_putstr(END);
}
