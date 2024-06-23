/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madamou <madamou@contact.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 19:05:26 by madamou           #+#    #+#             */
/*   Updated: 2024/06/06 12:42:42 by madamou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <limits.h>
# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include "libft.h"

int		ft_printf(const char *str, ...);
int		ft_strlen1(char *str);
int		ft_size_malloc(long nb, int len_base);
int		ft_size_malloc_long(unsigned long long int nb, int len_base);
int		ft_len_print(int cas);
int		ft_check_basic(const char *str, int i);

char	*ft_itoa_printf(int n);
char	*ft_itoa_unsigned(unsigned int n);
char	*ft_printf_bis(char *print, const char *str, va_list args);
char	*ft_itoa_base(unsigned int nb, char *base);
char	*ft_itoa_long_long(unsigned long long int nb, char *base);
char	*ft_strcpyy(char *dest, char *src);
char	*ft_strcatt(char *print, char *src);
char	*ft_reallocc(char *print, int len_realloc);
char	*ft_char(char *print, char c);
char	*ft_string(char *print, char *str);
char	*ft_decimal(char *print, int nb, int cas);
char	*ft_unsigned(char *print, unsigned int nb);
char	*ft_hexa_lowercase(char *print, unsigned int nb, int cas);
char	*ft_hexa_uppercase(char *print, unsigned int nb, int cas);
char	*ft_pointer(char *print, void *ptr);
char	*ft_str_to_print(char *print, char c);
char	*ft_check_if_format(const char *str, int i, char *print, va_list args);

void	ft_putstr(char *s);

#endif