/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grodrig2 <grodrig2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 16:44:25 by grodrig2          #+#    #+#             */
/*   Updated: 2025/07/23 18:41:51 by grodrig2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	aux_size;
	size_t	len_src;
	size_t	len_dst;

	len_src = ft_strlen(src);
	len_dst = ft_strlen(dst);
	if (size == 0 || len_dst >= size)
		return (len_src + len_dst);
	aux_size = size - 1 - len_dst;
	while (*dst++)
		continue ;
	while ((aux_size-- > 0) && *src)
		*dst++ = *src++;
	*dst = '\0';
	return (len_src + len_dst);
}
