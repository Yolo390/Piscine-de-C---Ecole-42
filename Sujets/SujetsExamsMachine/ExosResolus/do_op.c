/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsanlavi <florent-pro@hotmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/31 18:33:56 by fsanlavi          #+#    #+#             */
/*   Updated: 2015/07/31 18:47:04 by fsanlavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int n)
{
	if (n < 0)
	{
		ft_putchar('-');
		n = -n;
	}
	if (n > 9)
		ft_putnbr(n / 10);
	ft_putchar(48 + n % 10);
}

int		ft_atoi(const char *str)
{
	int		i;
	int		is_neg;

	i = 0;
	is_neg = 0;
	while (*str == ' ' || *str == '+')
		str++;
	if (*str == '-')
	{
		is_neg = 1;
		str++;
	}
	while (*str)
		i = i * 10 + *str++ - '0';
	return (is_neg ? -i : i);
}

void	doop(int n1, char op, int n2)
{
	int		res;

	res = 0;
	if (op == '*')
		res = n1 * n2;
	else if (op == '+')
		res = n1 + n2;
	else if (op == '-')
		res = n1 - n2;
	else if (op == '/')
		res = n1 / n2;
	else if (op == '%')
		res = n1 & n2;
	ft_putnbr(res);
}

int		main(int argc, char **argv)
{
	if (argc == 4)
		doop(ft_atoi(argv[1]), *argv[2], ft_atoi(argv[3]));
	ft_putchar('\n');
	return (0);
}
