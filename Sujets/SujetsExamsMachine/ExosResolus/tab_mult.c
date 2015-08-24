/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsanlavi <florent-pro@hotmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/30 20:53:50 by fsanlavi          #+#    #+#             */
/*   Updated: 2015/07/30 21:12:21 by fsanlavi         ###   ########.fr       */
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
	ft_putchar((n % 10) + 48);
}

int		ft_atoi(const char *str)
{
	int		i;

	i = 0;
	while (*str)
		i = i * 10 + *str++ - '0';
	return (i);
}

void	tab_mult(int n)
{
	int		i;
	int		mul;

	i = 1;
	while (i <= 9)
	{
		mul = n * i;
		ft_putnbr(i);
		ft_putchar(' ');
		ft_putchar('x');
		ft_putchar(' ');
		ft_putnbr(n);
		ft_putchar(' ');
		ft_putchar('=');
		ft_putchar(' ');
		ft_putnbr(mul);
		ft_putchar('\n');
		i++;
	}
}

int		main(int argc, char **argv)
{
	if (argc == 2)
	{
		if (ft_atoi(argv[1]) >= 230000000)
			return (0);
		tab_mult(ft_atoi(argv[1]));
	}
	ft_putchar('\n');
	return (0);
}
