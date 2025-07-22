/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grodrig2 <grodrig2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 18:15:12 by grodrig2          #+#    #+#             */
/*   Updated: 2025/07/21 19:19:32 by grodrig2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, unsigned long int n)
{
	unsigned char	*ptr;
	
	ptr = (unsigned char *)s;
	while (n > 0)
	{
		n--;
		ptr[n] = '\0';
	}
}
