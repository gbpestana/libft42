#include "libft.h"

int	ft_len(unsigned int nbr);
char	*ft_char_atoi(unsigned int nbr, int len, int sig);

char	*ft_itoa(int n)
{
	unsigned int	nbr;
	int	signal;
	int	count;
	char	*ptr;

	if (n < 0)
	{
		signal = 1;
		nbr = (unsigned int) -(long)n;
	}
	else
	{
		signal = 0;
		nbr = (unsigned int) n;
	}
	count = ft_len(nbr);
	return (ft_char_atoi(nbr, count, signal));
}

int	ft_len(unsigned int nbr)
{
	int	len;

	len = 1;
	while (nbr > 9)
	{
		nbr /= 10;
		len ++;
	}
	return (len);
}

char	*ft_char_atoi(unsigned int nbr, int len, int sig)
{
	char	*str;

	str = malloc (len + sig + 1);
	if (str == NULL)
		return (NULL);
	str[len + sig] = '\0';
	while (len > 0)
	{
		str[--len + sig] = '0' + (nbr % 10);
		nbr /= 10;
	}
	if (sig)
		str[0] = '-';
	return (str);
}
