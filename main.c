#include <stdio.h>
#include "include/ft_printf.h"

int main()
{
	char *s = "hello world";
	printf("%d\n", ft_printf("%p\n", s));
	printf("%d\n", printf("%p\n", s));
}
