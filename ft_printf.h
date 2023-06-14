/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dohanyan <dohanyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 19:36:23 by dohanyan          #+#    #+#             */
/*   Updated: 2023/02/08 15:36:08 by dohanyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>
# include <stdio.h>

void	ft_putchar_fd(char c);
void	ft_putstr_fd(char *s);
int		ft_putnbr_fd(int n);
int		ft_strlen(char *s);
int		ft_print_str(char *str);
int		ft_kjogenq(const char *str, int index, int len, va_list args);
int		ft_unputnbr_fd(unsigned int n);
int		ft_neg_case(unsigned int val);
int		ft_hax_len(unsigned int num);
void	ft_put_hex(unsigned int num, const char format);
int		ft_print_hex(unsigned int num, const char format);
int		ft_ptr_len(unsigned long long ptr);
int		ft_print_ptr(unsigned long long ptr);
void	ft_put_ptr(unsigned long long ptr);
int		ft_printf(const char *str, ...);
#endif