#include <unistd.h>
#include <stdio.h>
#include <ctype.h>

int     ft_isdigit(int c)
{
        if (c < 48 || c > 57)
        {
                return (0);
        }
        return (1);
}

int     main(void)
{
	int	aux;
	int	prueba;
	int	str;
	int	pbr;

	pbr = 'a';
	str = 'a';
	aux = ft_isdigit(str);
	printf("%d\n",aux);
	prueba = isdigit(pbr);
	printf("%d\n",prueba);
	return (0);
}
