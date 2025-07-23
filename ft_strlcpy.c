/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grodrig2 <grodrig2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 16:44:41 by grodrig2          #+#    #+#             */
/*   Updated: 2025/07/23 17:53:21 by grodrig2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	aux_size;
	size_t	len;

	len = ft_strlen(src);
	if (size == 0)
		return (len);
	aux_size = size -1;
	while ((aux_size-- > 0) && *src)
		*dst++ = *src++;
	*dst = '\0';
	return (len);
}
