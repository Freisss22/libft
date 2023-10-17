/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hashmap.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsirpa-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 07:16:14 by lsirpa-g          #+#    #+#             */
/*   Updated: 2023/08/27 23:15:40 by danibane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_HASHMAP_H
# define FT_HASHMAP_H

typedef struct s_map_entry
{
	long	key;
	char	*word;
}	t_map_entry;

void	fill_hmap(char *file_name, int size, t_map_entry *map);
long	find_key(int fd);
char	*find_word(int fd);
char	*ft_strcpy(char *dest, char *src);
long	ft_atoi(char *str);
void	ft_putstr(char *str);
int		get_value(long num, t_map_entry *map, int size);
int		ft_strlen(char *str);
void	convert(long number, t_map_entry *map, int map_size);
void	show_num(char *number, t_map_entry *map, int size);
void	convert_tens(long number, t_map_entry *map, int map_size);
void	convert_hundreds(long number, t_map_entry *map, int map_size);
void	convert_thousands(long number, t_map_entry *map, int map_size);
void	convert_millions(long number, t_map_entry *map, int map_size);
void	convert_billions(long number, t_map_entry *map, int map_size);
int		find_size(char *file_name);
int		is_valid(char *argv);

#endif 
