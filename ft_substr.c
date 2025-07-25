#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*sub_str;

	if (s == NULL)
		return(NULL);
	sub_str = ft_calloc(ft_strlen(s), len + 1);
	if (sub_str == NULL)
		return (NULL);
	if (ft_strlen(s) <= start)
		return (sub_str);
	s += start;
	i = 0;
	while (i < len && *s)
		sub_str[i++] = *s++;
	return (sub_str);
}
