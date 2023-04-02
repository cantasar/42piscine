#include <stdio.h>

int ft_recursive_factorial(int nb)
{
	if (nb >= 2)
		return (nb * ft_recursive_factorial(nb - 1));
	else if (nb < 0)
		return (0);
	else
		return (1);
}

int main()
{
    printf("%d",ft_recursive_factorial(4));
    return 0;
}
