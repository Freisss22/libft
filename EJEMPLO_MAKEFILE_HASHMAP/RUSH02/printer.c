/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printer.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsirpa-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 11:41:06 by lsirpa-g          #+#    #+#             */
/*   Updated: 2023/08/27 22:02:47 by danibane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_hashmap.h"
#include <unistd.h>
#include <stdlib.h>

void	convert_below_20(long number, t_map_entry *map, int map_size)
{
	ft_putstr(map[get_value(number, map, map_size)].word);
}

void	convert(long number, t_map_entry *map, int map_size)
{
	if (number < 20)
		convert_below_20(number, map, map_size);
	else if (number < 100)
		convert_tens(number, map, map_size);
	else if (number < 1000)
		convert_hundreds(number, map, map_size);
	else if (number < 1000000)
		convert_thousands(number, map, map_size);
	else if (number < 1000000000)
		convert_millions(number, map, map_size);
	else
		convert_billions(number, map, map_size);
}

void	show_num(char *number, t_map_entry *map, int map_size)
{
	long	num;
	int		i;

	num = ft_atoi(number);
	if (num == 0)
		write (1, "Dict Error\n", 11);
	convert(num, map, map_size);
	i = 0;
	while (i < map_size)
	{
		free(map[i].word);
		i++;
	}
}
