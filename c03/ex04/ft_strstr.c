#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
    int	i;
    int	j;
    int	k;

    i = 0;
    while (str[i])
    {
        j = 0;
        k = i;
        while (str[k] == to_find[j] && to_find[j])
        {
            j++;
            k++;
        }
        if (!to_find[j])
            return (&str[i]);
        i++;
    }
    return (0);
}


int	main()
{
	char str[] = "afsfewfwewe abc fewfewfwfewf";
	char find[] = "abc";
	printf("%s\n", ft_strstr(str, find));
	printf("%s", strstr(str, find));
}