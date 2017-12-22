#include "libftprintf.h"

int		main()
{
	int	ret;
	
	ret = ft_printf("%C\n", L'A');
	printf("ret ==> %d\n", ret);
	ret = ft_printf("%C\n", L'߿');
	printf("ret ==> %d\n", ret);
	ret = ft_printf("%C\n", L'');
	printf("ret ==> %d\n", ret);
	ret = ft_printf("%C\n", L'𐀀');
	printf("ret ==> %d\n", ret);
	return (0);
}
