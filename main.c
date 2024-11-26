#include <stdio.h>
#include "include/ft_printf.h"

int main()
{
	int STD = printf("Hello %s %s %d %u %%%% World", "AAAA", "alp", 123, -42);
	printf("\n");
	int MY = ft_printf("Hello %s %s %d %u %%%% World", "AAAA", "alp", 123, -42);

	printf("%d || %d", STD, MY);
}
