/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grodrig2 <grodrig2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 20:30:07 by grodrig2          #+#    #+#             */
/*   Updated: 2025/07/21 20:43:42 by grodrig2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, unsigned long int n)
{
	unsigned char *ptr;
	unsigned long int	i;
	
	ptr = (unsigned char *)dest;
	i = 0;
	while (i < n)
	{
		ptr[i] = (const unsigned char *)src[i];
		i++;
	}
	return (dest);
}
