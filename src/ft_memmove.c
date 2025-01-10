#include "../includes/libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;
	size_t				i;

	d = (unsigned char *) dest;
	s = (const unsigned char *) src;
	i = -1;
	if (d == s)
		return (dest);
	if (dest < src)
	{
		while (++i < n)
			*(d++) = *(s++);
	}
	else
	{
		d += n - 1;
		s += n - 1;
		while (++i < n)
			*(d--) = *(s--);
	}
	return (dest);
}
