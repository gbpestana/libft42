/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grodrig2 <grodrig2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 16:52:53 by grodrig2          #+#    #+#             */
/*   Updated: 2025/07/21 20:15:49 by grodrig2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

int	ft_isalpha(int c);
int	ft_isdigit(int c);
int	ft_isalnum(int c);
int	ft_isascii(int c);
int	ft_isprint(int c);
unsigned long int	ft_strlen(const char *s);
void	*ft_memset(void *s, int c, unsigned long int n);
void	ft_bzero(void *s, unsigned long int n);




int	ft_toupper(int c);
int	ft_tolower(int c);

#endif
