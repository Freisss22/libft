#include <unistd.h>
#include <stdio.h>
#include <string.h>

char	*ft_strchr(const char *str, int c)
{
	while (str != NULL)
	{
		if (&str == c)
		{
			return (str);
		}
		str ++;
	}
	return (NULL);
}

int	main(void)
{
	const char	*str;
	const char	*p;

	str = "supercalifragilistico";
	p = ft_strchr(str, 'f');
	while (p != NULL)
	{
		write(1, &p, 1);
		p ++;
	}
	return (0);
}
