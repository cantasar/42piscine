#include <stdio.h>

int ft_iterative_power(int nb, int power)
{
	int	i;

	i = 1;
	if (power == 0)
		return (1);
	if (power == 1)
		return (nb);
	if (power <= -1)
		return (0);
	while (power > i)
	{
		nb = nb * nb;
		i++;
	}
	return (nb);
}

int main()
{
    printf("%d",ft_iterative_power(12,2));
    return 0;
}
