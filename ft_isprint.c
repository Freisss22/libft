/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cafreire <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 18:43:04 by cafreire          #+#    #+#             */
/*   Updated: 2023/10/17 18:43:06 by cafreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <ctype.h>

int	ft_isprint(int c)
{
	if (c < 32 || c > 126)
	{
		return (0);
	}
	return (1);
}

int	main(void)
{
	int	aux;
	int	prueba;
	int	str;
	int	pbr;

	pbr = '=';
	str = '=';
	aux = ft_isprint(str);
	printf("%d\n",aux);
	prueba = isprint(pbr);
	printf("%d\n",prueba);
	return (0);
}
