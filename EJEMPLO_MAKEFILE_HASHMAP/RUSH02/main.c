/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsirpa-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 05:19:16 by lsirpa-g          #+#    #+#             */
/*   Updated: 2023/08/27 22:02:26 by danibane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include "ft_hashmap.h"
#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	int			size;
	t_map_entry	*map;

	if (argc == 2 && is_valid(argv[1]) == 1)
	{
		size = find_size("numbers.dict");
		map = (t_map_entry *)malloc(size * sizeof(t_map_entry));
		if (map == NULL)
			return (1);
		fill_hmap("numbers.dict", size, map);
		show_num(argv[1], map, size);
		free(map);
	}
	else if (argc == 3 && is_valid(argv[2]) == 1)
	{
		size = find_size(argv[1]);
		map = (t_map_entry *)malloc(size * sizeof(t_map_entry));
		if (map == NULL)
			return (1);
		fill_hmap(argv[1], size, map);
		show_num(argv[2], map, size);
		free(map);
	}
	else
		write(1, "Error\n", 6);
}
