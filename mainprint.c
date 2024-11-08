#include "ft_printf.h"

int	main(void)
{
	char	*str;
	char	c;

	c = 'r';
	str = "benis";
	ft_printf("anus\n");
	ft_printf("%sntest\n", str);
	ft_printf("caesa%c\n", c);
	ft_printf("deduart: %p", 31);
	return (0);
}
