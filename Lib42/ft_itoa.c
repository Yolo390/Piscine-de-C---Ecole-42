/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsanlavi <florent-pro@hotmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/26 19:59:08 by fsanlavi          #+#    #+#             */
/*   Updated: 2015/07/31 17:30:51 by fsanlavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_itoa(int nbr)
{
	char	*s;

	s = (char *)malloc(sizeof(*s) * 10);
	s += ft_strlen(s);
	*s = 0;
	while ((*--s = nbr % 10 + '0') && (nbr = nbr / 10))
		;
	return (s);
}

int		main(void)
{
	ft_putstr(ft_itoa(2500));
	ft_putchar('\n');
	return (0);
}
