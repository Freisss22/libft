/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cafreire <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 18:39:43 by cafreire          #+#    #+#             */
/*   Updated: 2023/10/25 18:51:48 by cafreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

char    *ft_strrchr(const char *str, int c)
{
	int	i;

	i = 0;
    while (*str != '\0')
    {
		str++;
		i++;
	}
	while (i > 0)
	{
        if (*str == c)
            return ((char *)str);
		str--;
		i--;
    }
    return (NULL);
}

int main(void)
{
    const char  *str;
    const char  *p;

    str = "supercalifragilistico";
    p = ft_strrchr(str, ' ');
    printf("%s\n", p);
    return (0);
}
