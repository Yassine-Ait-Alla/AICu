/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putcolor.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaitalla <yaitalla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/04 17:26:00 by yaitalla          #+#    #+#             */
/*   Updated: 2015/12/20 15:56:19 by yaitalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "colors.h"

void		putcolor(char *str, char *color, int fd, int n)
{
	ft_putstr_fd(color, fd);
	if (n)
		ft_putendl_fd(str, fd);
	else
		ft_putstr_fd(str, fd);
	ft_putstr_fd(END, fd);
}
