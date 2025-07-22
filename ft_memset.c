/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grodrig2 <grodrig2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 20:10:08 by grodrig2          #+#    #+#             */
/*   Updated: 2025/07/21 20:25:22 by grodrig2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memset(void *s, int c, unsigned long int n)
{
    unsigned char   *ptr;
    
    ptr = (unsigned char *)s;
    while (n > 0)
    {
        n--;
        ptr[n] = (unsigned char)c;
    }
    return (s);
}
