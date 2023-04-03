#include <stdio.h>

int ft_recursive_power(int nb, int power)
{
	int	n;

	n = nb;
	if (power > 1)
		return (nb * ft_recursive_power(n, power - 1));
	else if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	else
		return (n);
}

int main()
{
    printf("%d",ft_recursive_power(0,2));
    return 0;
}
