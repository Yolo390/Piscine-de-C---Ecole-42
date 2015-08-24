/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsanlavi <florent-pro@hotmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/28 16:23:57 by fsanlavi          #+#    #+#             */
/*   Updated: 2015/07/28 16:51:09 by fsanlavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	alpha_mirror(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'M')
			ft_putchar('A' - str[i] + 'Z');
		else if (str[i] >= 'N' && str[i] <= 'Z')
			ft_putchar('Z' - str[i] + 'A');
		else if (str[i] >= 'a' && str[i] <= 'm')
			ft_putchar('a' - str[i] + 'z');
		else if (str[i] >= 'n' && str[i] <= 'z')
			ft_putchar('z' - str[i] + 'a');
		else
			ft_putchar(str[i]);
		i++;
	}
}

int		main(int argc, char **argv)
{
	if (argc == 2)
		alpha_mirror(argv[1]);
	write(1, "\n", 1);
	return (0);
}
