/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabplusone.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaitalla <yaitalla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/29 23:56:13 by yaitalla          #+#    #+#             */
/*   Updated: 2015/10/21 16:30:16 by yaitalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		**tabtabplus(char **av, char *str)
{
	char		**table;
	int			i;
	int			j;

	i = ft_tablen(av) + 1;
	j = 0;
	table = (char **)malloc(sizeof(char *) * i + 1);
	if (av && *av)
	{
		while (j <= i)
		{
			table[j] = av[j];
			j++;
		}
	}
	i = 0;
	free(av);
	table[j] = str;
	return (table);
}
