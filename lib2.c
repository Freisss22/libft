/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib2.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cafreire <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 18:52:41 by cafreire          #+#    #+#             */
/*   Updated: 2023/10/25 19:54:22 by cafreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strchr(const char *str, int c)
{
    while (*str != '\0')
    {
        if (*str == c)
        {
            return ((char *)str);
        }
        str++;
    }
    return (0);
}

int ft_strncmp(char *s1, char *s2, unsigned int n)
{
    unsigned int        i;

    i = 0;
    while (s1[i] != '\0' && s2[i] != '\0' && i < n)
    {
        if (s1[i] < s2[i])
            return (-1);
        if (s1[i] > s2[i])
            return (1);
        i ++;
    }
    if (i < n)
    {
        if (s1[i] && !s2[i])
            return (1);
        if (s2[i] && !s1[i])
            return (-1);
    }
    return (0);
}

char    *ft_strnstr(char *str, char *to_find)
{
    int i;
    int j;

    i = 0;
    j = 0;
    if  (to_find[0] == '\0')
        return (str);
    while (str[i] != '\0')
    {
        while (str[i + j] == to_find[j] && str[i + j] != '\0')
        {
            j++;
            if (to_find[j] == '\0')
                return (str + i);
        }
        i++;
        j = 0;
    }
    return (0);
}

char    *ft_strrchr(const char *str, int c)
{
    int i;

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
    return (0);
}
