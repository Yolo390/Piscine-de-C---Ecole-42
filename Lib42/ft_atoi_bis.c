/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_bis.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsanlavi <florent-pro@hotmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/28 17:58:04 by fsanlavi          #+#    #+#             */
/*   Updated: 2015/07/29 11:08:36 by fsanlavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** GERE LES NOMBRES NEGATIFS!
** ... mais ne gere pas les overflows!
*/

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
	int		is_neg;
	int		i;

	is_neg = 0;
	i = 0;
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

int		main(int argc, char **argv)
{
	if (argc == 2)
		ft_putnbr(ft_atoi(argv[1]));
	return (0);
}
