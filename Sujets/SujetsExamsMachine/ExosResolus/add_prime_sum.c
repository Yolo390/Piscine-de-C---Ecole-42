/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/24 18:20:26 by exam              #+#    #+#             */
/*   Updated: 2015/07/24 19:24:30 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_pow(int n, int p)
{
	int x;

	x = 1;
	while (p > 0)
	{
		x *= n;
		p--;
	}
	return (x);
}

void	ft_putnbr(int nbr)
{
	int c;
	int x;

	if (nbr < 0)
	{
		ft_putchar('-');
		nbr = -nbr;
	}
	c = 0;
	x = nbr;
	while (x > 0)
	{
		c++;
		x /= 10;
	}
	x = 0;
	while (x < c)
	{
		ft_putchar('0' + (nbr / ft_pow(10, c - x - 1) % 10));
		x++;
	}
}

int		ft_is_prime(int nbr)
{
	int i;

	if (nbr < 2)
		return (0);
	i = 2;
	while (i < nbr)
	{
		if (nbr % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int		ft_atoi(char *str)
{
	int neg;
	int c;
	int i;
	int x;

	neg = 1;
	i = 0;
	while (str[i] == '+' || str[i] == '-' || str[i] == ' ' || str[i] == '\t')
	{
		if (str[i] == '-')
			neg = -neg;
		i++;
	}
	c = 0;
	while (str[i + c] >= '0' && str[i + c] <= '9')
		c++;
	x = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		x += neg * (str[i] - '0') * ft_pow(10, c - i - 1);
		i++;
	}
	return (x);
}

int		main(int argc, char **argv)
{
	int value;
	int result;
	int i;

	if (argc == 2)
	{
		i = 1;
		value = ft_atoi(argv[1]);
		result = 0;
		if (value < 2)
		{
			ft_putchar('0');
			ft_putchar('\n');
			return (0);
		}
		while (i++ < value)
			if (ft_is_prime(i))
				result += i;
		ft_putnbr(result);
	}
	else
		ft_putchar('0');
	ft_putchar('\n');
	return (0);
}
