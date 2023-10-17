/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cafreire <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 18:52:41 by cafreire          #+#    #+#             */
/*   Updated: 2023/10/17 18:52:56 by cafreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_strlen(char  *src)
{
    int i;

    i = 0;
    while (src[i] != '\0')
    {
        i ++;
    }
    return (i);
}

unsigned int    ft_strlcpy(char *dest, char *src, unsigned int size)
{
    unsigned int    i;
    int             len;

    len = ft_strlen(src);
    i = 0;
    if (size != 0)
    {
        while (i < size - 1 && src[i] != '\0')
        {
            dest[i] = src[i];
            i ++;
        }
        dest[i] = '\0';
    }
    return (len);
}
