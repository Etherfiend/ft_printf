#include <stdio.h>
#include "includes/ft_printf.h"

int main()
{
	int STD = printf("Hello %s %s %d %u %% World\n", "AAAA", "alp", 123, -42);
	int MY = ft_printf("Hello %s %s %d %u %% World\n", "AAAA", "alp", 123, -42);

	printf("%d || %d", STD, MY);
}
