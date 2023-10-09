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
