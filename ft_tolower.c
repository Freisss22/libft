/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cafreire <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 18:44:30 by cafreire          #+#    #+#             */
/*   Updated: 2023/10/17 18:44:32 by cafreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <ctype.h>

int     ft_tolower(int c)
{
        if (c >= 65 && c <= 90)
        {
                c = c + 32;
        }
        return (c);
}

int     main(void)
{
        int     i;

        i = 0;
        char    cadena[] = "2caDEna2 dE 3PruebA3";
        while (cadena[i] != '\0')
        {
                cadena[i] = ft_tolower(cadena[i]);
                i ++;
        }
        printf("%s\n", cadena);
        return (0);
}
