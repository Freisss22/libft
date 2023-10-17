/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   converters.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsirpa-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 18:46:17 by lsirpa-g          #+#    #+#             */
/*   Updated: 2023/08/27 19:24:39 by lsirpa-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_hashmap.h"
#include <unistd.h>

void	convert_tens(long number, t_map_entry *map, int map_size)
{
	long	tens;
	long	ones;

	tens = number / 10 * 10;
	ones = number % 10;
	ft_putstr(map[get_value(tens, map, map_size)].word);
	if (ones > 0)
	{
		write(1, " ", 1);
		ft_putstr(map[get_value(ones, map, map_size)].word);
	}
}

void	convert_hundreds(long number, t_map_entry *map, int map_size)
{
	long	hundreds;
	long	remainder;

	hundreds = number / 100;
	remainder = number % 100;
	ft_putstr(map[get_value(hundreds, map, map_size)].word);
	write(1, " ", 1);
	ft_putstr(map[get_value(100, map, map_size)].word);
	if (remainder > 0)
	{
		write(1, " and ", 5);
		convert(remainder, map, map_size);
	}
}

void	convert_thousands(long number, t_map_entry *map, int map_size)
{
	long	thousands;
	long	remainder;

	thousands = number / 1000;
	remainder = number % 1000;
	convert(thousands, map, map_size);
	write(1, " ", 1);
	ft_putstr(map[get_value(1000, map, map_size)].word);
	if (remainder > 0)
	{
		write(1, " ", 1);
		convert(remainder, map, map_size);
	}
}

void	convert_millions(long number, t_map_entry *map, int map_size)
{
	long	millions;
	long	remainder;

	millions = number / 1000000;
	remainder = number % 1000000;
	convert(millions, map, map_size);
	write(1, " ", 1);
	ft_putstr(map[get_value(1000000, map, map_size)].word);
	if (remainder > 0)
	{
		write(1, " ", 1);
		convert(remainder, map, map_size);
	}
}

void	convert_billions(long number, t_map_entry *map, int map_size)
{
	long	billions;
	long	remainder;

	billions = number / 1000000000;
	remainder = number % 1000000000;
	convert(billions, map, map_size);
	write(1, " ", 1);
	ft_putstr(map[get_value(1000000000, map, map_size)].word);
	if (remainder > 0)
	{
		write(1, " ", 1);
		convert(remainder, map, map_size);
	}
}
