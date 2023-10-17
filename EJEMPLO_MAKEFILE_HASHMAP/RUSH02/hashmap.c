/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hashmap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsirpa-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 07:23:00 by lsirpa-g          #+#    #+#             */
/*   Updated: 2023/08/27 22:04:32 by danibane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_hashmap.h"
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

int	get_value(long num, t_map_entry *map, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		if (map[i].key == num)
			return (i);
		i++;
	}
	return (0);
}

long	find_key(int fd)
{
	char	key_str[128];
	long	key;
	int		index;
	char	c;

	index = 0;
	read(fd, &c, 1);
	while (c == 32 || (c >= 9 && c <= 13))
		read(fd, &c, 1);
	while (c >= '0' && c <= '9')
	{
		key_str[index++] = c;
		read(fd, &c, 1);
	}
	key_str[index] = '\0';
	key = atoi(key_str);
	return (key);
}

char	*find_word(int fd)
{
	char	value_str[128];
	char	*val;
	int		index;
	char	c;

	index = 0;
	read(fd, &c, 1);
	while (c == ' ' || c == '\t' || c == ':')
		read(fd, &c, 1);
	while (c != '\n')
	{
		value_str[index++] = c;
		read(fd, &c, 1);
	}
	while (index > 0
		&& (value_str[index - 1] == ' ' || value_str[index - 1] == '\t'))
		index--;
	value_str[index] = '\0';
	val = (char *)malloc(ft_strlen(value_str) + 1);
	if (val == NULL)
		exit(1);
	ft_strcpy(val, value_str);
	return (val);
}

int	find_size(char *file_name)
{
	int		fd;
	int		i;
	char	c;

	fd = open(file_name, O_RDONLY);
	i = 0;
	while ((read(fd, &c, 1)) > 0)
	{
		if (c == '\n')
			i ++;
	}
	return (i);
	close(fd);
}

void	fill_hmap(char *file_name, int size, t_map_entry *map)
{
	int	fd;
	int	i;

	fd = open(file_name, O_RDONLY);
	if (fd == -1)
	{
		write(1, "Dict Error\n", 12);
		exit(1);
	}
	i = 0;
	while (i < size)
	{
		map[i].key = find_key(fd);
		map[i].word = find_word(fd);
		i++;
	}
	close(fd);
}
