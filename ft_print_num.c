/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_num.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dohanyan <dohanyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 19:32:32 by dohanyan          #+#    #+#             */
/*   Updated: 2023/02/06 19:33:01 by dohanyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar_fd(char c)
{
	write (1, &c, 1);
}

void	ft_putstr_fd(char	*s)
{
	int	i;

	i = 0;
	if (!s)
		return ;
	while (s[i] != '\0')
	{
		write (1, &s[i], 1);
		i++;
	}
}

int	ft_putnbr_fd(int n)
{
	int	len;

	len = 0;
	if (n == -2147483648)
	{
		ft_putstr_fd("-2147483648");
		return (11);
	}
	if (n < 0)
	{
		ft_putchar_fd('-');
		n = -n;
		len++;
	}
	if (n <= 9)
	{
		ft_putchar_fd(n + '0');
		len++;
	}
	else
	{
		len += ft_putnbr_fd(n / 10);
		len += ft_putnbr_fd(n % 10);
	}
	return (len);
}
