#include <unistd.h>
#include <stdio.h>
#include <ctype.h>

int     ft_isascii(int c)
{
	if (c < 0 || c > 127)
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

	pbr = '~';
	str = '~';
	aux = ft_isascii(str);
	printf("%d\n",aux);
	prueba = isascii(pbr);
	printf("%d\n",prueba);
	return (0);
}
