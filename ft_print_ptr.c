/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dohanyan <dohanyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 18:59:52 by dohanyan          #+#    #+#             */
/*   Updated: 2023/02/13 17:09:17 by dohanyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_ptr_len(unsigned long long ptr)
{
	int	len;

	len = 0;
	while (ptr != 0)
	{
		len++;
		ptr = ptr / 16;
	}
	return (len);
}

void	ft_put_ptr(unsigned long long ptr)
{
	if (ptr >= 16)
	{
		ft_put_ptr(ptr / 16);
		ft_put_ptr(ptr % 16);
	}
	else
	{
		if (ptr <= 9)
			ft_putchar_fd(ptr + '0');
		else
			ft_putchar_fd(ptr - 10 + 'a');
	}
}

int	ft_print_ptr(unsigned long long ptr)
{
	int	siz;

	siz = 0;
	siz += write(1, "0x", 2);
	if (ptr == 0)
	{
		siz += write(1, "0", 1);
		return (siz);
	}
	else
		ft_put_ptr(ptr);
	return (ft_ptr_len(ptr) + siz);
}
