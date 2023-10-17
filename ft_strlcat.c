/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cafreire <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 18:47:30 by cafreire          #+#    #+#             */
/*   Updated: 2023/10/17 18:48:45 by cafreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_strlen(char *dest)
{
    unsigned int    i;

    i = 0;
    while (dest[i] != '\0')
    {
        i ++;
    }
    return (i);
}

unsigned int    ft_strlcat(char *dest, char *src, unsigned int size)
{
    unsigned int        i;
    unsigned int        j;
    unsigned int        large_1;
    unsigned int        large_2;

    i = 0;
    j = 0;
    while (dest[j] != '\0')
    {
        j ++;
    }
    large_1 = j;
    large_2 = ft_strlen(src);
    if (size == 0 || size <= large_1)
        return (large_2 + size);
    while (src[i] != '\0' && i < size - large_1 - 1)
    {
        dest[j] = src[i];
        i ++;
        j ++;
    }
    dest[j] = '\0';
    return (large_1 + large_2);
}
