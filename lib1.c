/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib1.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cafreire <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 17:22:17 by cafreire          #+#    #+#             */
/*   Updated: 2023/10/25 17:26:25 by cafreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isalnum(int c)
{
    if ((c < 65 || c > 90) && (c < 97 || c > 122) && (c < 48 || c > 57))
    {
        return (0);
    }
    return (1);
}

int ft_isalpha(int c)
{
    if ((c < 65 || c > 90) && (c < 97 || c > 122))
    {
        return (0);
    }
    return (1);
}

int     ft_isascii(int c)
{
    if (c < 0 || c > 127)
    {
        return (0);
    }
    return (1);
}

int     ft_isdigit(int c)
{
        if (c < 48 || c > 57)
        {
                return (0);
        }
        return (1);
}

int ft_isprint(int c)
{
    if (c < 32 || c > 126)
    {
        return (0);
    }
    return (1);
}
