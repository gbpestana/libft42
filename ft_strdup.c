#include<stdlib.h>

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int	i;
	int	len;
	char *ptr;

	len = ft_strlen(s) + 1;
	ptr = malloc(len * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		ptr[i] = s[i];
		i++;
	}
	return (ptr);
}
