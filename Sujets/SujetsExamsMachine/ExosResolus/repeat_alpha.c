/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsanlavi <florent-pro@hotmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/28 14:04:55 by fsanlavi          #+#    #+#             */
/*   Updated: 2015/07/28 14:22:56 by fsanlavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int argc, char **argv)
{
	int		i;
	char	*str;

	if (argc == 2)
	{
		str = argv[1];
		i = 0;
		while (*str)
		{
			if (*str >= 'a' && *str <= 'z')
				i = *str - 'a';
			else if (*str >= 'A' && *str <= 'Z')
				i = *str - 'A';
			i++;
			while (i > 0)
			{
				ft_putchar(*str);
				i--;
			}
			str++;
		}
	}
	ft_putchar('\n');
	return (0);
}
