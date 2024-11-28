#include <stdio.h>
#include "include/ft_printf.h"

int main()
{
	int STD = printf("%x ve %X", 14, 17);
	printf("\n");
	int MY = ft_printf("%x ve %X", 14, 17);

	printf("%d || %d", STD, MY);
}
