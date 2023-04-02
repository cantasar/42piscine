#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char x)
{
	write(1, &x, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putnbr(nb / 10);
		ft_putchar('8');
	}
	else if (nb < 0)
	{
		ft_putchar('-');
		ft_putnbr(-nb);
	}
	else
	{
		if (nb > 9)
			ft_putnbr(nb / 10);
		ft_putchar(48 + nb % 10);
	}
}

int		main(void)
{
    ft_putnbr(1);
    printf("\n");
    ft_putnbr(0);
    printf("\n");
    ft_putnbr(-1);
    printf("\n");
    ft_putnbr(2147483647);
    printf("\n");
    ft_putnbr(-2147483648);
    printf("\n");
    return (0);
}