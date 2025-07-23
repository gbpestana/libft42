/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grodrig2 <grodrig2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 16:43:26 by grodrig2          #+#    #+#             */
/*   Updated: 2025/07/23 16:55:15 by grodrig2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*ptr_src;
	unsigned char	*ptr_dest;
	unsigned char	*temp;

	i = 0;
	temp = 0;
	ptr_src = (unsigned char *) src;
	ptr_dest = (unsigned char *) dest;
	while (i < n)
	{
		temp[i] = ptr_src[i];
		i++;
	}
	while (i > 0)
	{
		i--;
		ptr_dest[i] = temp[i];
	}
	return (dest);
}
