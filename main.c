/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cafreire <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 19:14:06 by cafreire          #+#    #+#             */
/*   Updated: 2023/10/25 19:15:00 by cafreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



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
