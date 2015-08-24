/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsanlavi <florent-pro@hotmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/25 21:00:10 by fsanlavi          #+#    #+#             */
/*   Updated: 2015/07/28 18:36:47 by fsanlavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** ATTENTION: NE GERE PAS LES NEGATIFS!
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
	int		i;

	i = 0;
	while (*str)
		i = i * 10 + *str++ - '0';
	return (i);
}

int		main(int argc, char **argv)
{
	if (argc != 0)
		ft_putnbr(ft_atoi(argv[1]));
	ft_putchar('\n');
	return (0);
}
