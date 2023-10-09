#include <unistd.h>
#include <stdio.h>
#include <string.h>

int	ft_strlen(char	*str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i ++;
	}
	return (i);
}

int	main(void)
{
	int	aux;
	char	*str;

	str = "supercalifragilisticoespialidoso";
	aux = ft_strlen(str);
	printf("La longitud de la cadena es: %d\n", aux);
}
