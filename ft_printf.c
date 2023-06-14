/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dohanyan <dohanyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 18:57:24 by dohanyan          #+#    #+#             */
/*   Updated: 2023/05/22 17:43:33 by dohanyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_kjogenq(const char *str, int index, int len, va_list args)
{
	char	c;

	if (str[index + 1] == 'd' || str[index + 1] == 'i')
		len += ft_putnbr_fd(va_arg(args, int));
	if (str[index + 1] == 's')
		len += ft_print_str(va_arg(args, char *));
	if (str[index + 1] == 'u')
		len += ft_neg_case(va_arg(args, unsigned int));
	if (str[index + 1] == 'x' || str[index + 1] == 'X')
		len += ft_print_hex(va_arg(args, unsigned int), str[index + 1]);
	if (str[index + 1] == 'p')
		len += ft_print_ptr(va_arg(args, unsigned long long));
	if (str[index + 1] == 'c')
	{
		c = va_arg(args, int);
		len += write(1, &c, 1);
	}
	if (str[index + 1] == '%')
	{
		write (1, "%%", 1);
		len++;
	}
	return (len);
}	

int	ft_printf(const char *str, ...)
{
	int		len;
	int		index;
	va_list	args;

	len = 0;
	index = 0;
	va_start(args, str);
	while (str[index] != '\0')
	{
		if (str[index] == '%' && (str[index + 1] == 'c'
				|| str[index + 1] == 's' || str[index + 1] == 'd'
				|| str[index + 1] == 'i' || str[index + 1] == 'p'
				|| str[index + 1] == 'x' || str[index + 1] == 'X'
				|| str[index + 1] == 'u' || str[index + 1] == '%'
				|| str[index + 1] == 'p'))
		{
			len = ft_kjogenq(str, index, len, args);
			index++;
		}
		else if (str[index] != '%')
			len += write(1, &str[index], 1);
		index++;
	}
	va_end(args);
	return (len);
}

int main()
{
	int len = 0;
	 len = ft_printf("%dz");
	//  len = printf("%d");
	 printf("\n%d",len);
}