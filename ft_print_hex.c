/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dohanyan <dohanyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 19:27:29 by dohanyan          #+#    #+#             */
/*   Updated: 2023/05/22 17:36:21 by dohanyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hax_len(unsigned int num)
{
	int	len;

	len = 0;
	while (num != 0)
	{
		len++;
		num = num / 16;
	}
	return (len);
}

void	ft_put_hex(unsigned int num, const char format)
{
	if (num >= 16)
	{
		ft_print_hex(num / 16, format);
		ft_print_hex(num % 16, format);
	}
	else
	{
		if (num <= 9)
			ft_putchar_fd (num + '0');
		else
		{
			if (format == 'x')
				ft_putchar_fd(num - 10 + 'a');
			if (format == 'X')
				ft_putchar_fd(num - 10 + 'A');
		}
	}
}

int	ft_print_hex(unsigned int num, const char format)
{
	if (num == 0)
		return (write (1, "0", 1));
	else
		ft_put_hex(num, format);
	return (ft_hax_len(num));
}
