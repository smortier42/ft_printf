/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smortier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/07 18:45:27 by smortier          #+#    #+#             */
/*   Updated: 2017/12/07 18:47:31 by smortier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		main(int ac, char **av)
{
	char *str;

	str = ft_convert_base(av[1], av[2], av[3]);
	printf("nombr", str);
}