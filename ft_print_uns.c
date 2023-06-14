/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_uns.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dohanyan <dohanyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 19:29:09 by dohanyan          #+#    #+#             */
/*   Updated: 2023/02/06 19:29:32 by dohanyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_unputnbr_fd(unsigned int n)
{
	int	len;

	len = 0;
	if (n <= 9)
	{
		ft_putchar_fd(n + '0');
		len++;
	}
	else
	{
		len += ft_unputnbr_fd(n / 10);
		len += ft_unputnbr_fd(n % 10);
	}
	return (len);
}

int	ft_neg_case(unsigned int val)
{
	unsigned int	num;
	int				len;

	len = 0;
	num = 0;
	len = ft_unputnbr_fd(val);
	return (len);
}
