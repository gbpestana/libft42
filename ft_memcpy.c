/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grodrig2 <grodrig2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 20:30:07 by grodrig2          #+#    #+#             */
/*   Updated: 2025/07/22 15:33:45 by grodrig2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*ptr;
	size_t	i;

	ptr = (unsigned char *)dest;
	i = 0;
	while (i < n)
	{
		ptr[i] = (unsigned char *)src[i];
		i++;
	}
	return (dest);
}
