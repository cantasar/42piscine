#include <stdio.h>
#include <string.h>

unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i, dest_len = 0, src_len = 0;

	while (dest[dest_len] != '\0')
		dest_len++;
	while (src[src_len] != '\0')
		src_len++;
	i = 0;
	while (src[i] != '\0' && i < size - 1)
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	if (size<dest_len)
	{
		return (src_len + size);
	}
	return (dest_len + src_len);
}

int	main(void)
{
	char dest[20] = "123";
	char src[] = "4567890";
	unsigned int size = 15;
	unsigned int result = ft_strlcat(dest, src, size);

	printf("dest: %s\n", dest);
	printf("src: %s\n", src);
	printf("dest_l: %u\n", size);
	printf("ft_strlcat return: %u\n-------\n", result);

	char dest1[20] = "123";
	char src1[] = "4567890";
	unsigned int size1 = 15;
	unsigned int total_len = strlcat(dest1, src1, size1);

	printf("strlcat return: %u\n", total_len);
	return (0);
}
