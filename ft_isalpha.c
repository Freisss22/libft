/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cafreire <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 18:42:04 by cafreire          #+#    #+#             */
/*   Updated: 2023/10/17 18:42:08 by cafreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <ctype.h>

int	ft_isalpha(int c)
{
	if ((c < 65 || c > 90) && (c < 97 || c > 122))
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

	pbr = '1';
	str = '1';
	aux = ft_isalpha(str);
	printf("%d\n",aux);
	prueba = isalpha(pbr);
	printf("%d\n",prueba);
	return (0);
}
