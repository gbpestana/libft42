#include <stdlib.h>

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	i;
	char	*ptr;

	if (nmemb == 0 || size == 0)
		{
			ptr = malloc(1);
			if (ptr != NULL)
				*ptr = 0;
			return (ptr);
		}
	ptr = malloc(nmemb * size);
	if (ptr != NULL)
	{
		i = 0;
		while (i < (nmemb * size))
		ptr[i++] = 0;
	}
	return (ptr);
}
