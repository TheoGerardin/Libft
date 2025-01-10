#include "../includes/libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	char	*strr;
	size_t	i;

	strr = str;
	i = 0;
	while (i < n)
	{
		*strr = (unsigned char)c;
		strr++;
		i++;
	}
	return (str);
}
