/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsanlavi <florent-pro@hotmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/28 14:23:33 by fsanlavi          #+#    #+#             */
/*   Updated: 2015/07/28 16:54:08 by fsanlavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

char	rot_uppercase(char str)
{
	str = str - 65;
	str = ((str + 13) % 26);
	str = str + 65;
	return (str);
}

char	rot_lowercase(char str)
{
	str = str - 97;
	str = ((str + 13) % 26);
	str = str + 97;
	return (str);
}

char	rotone(char str)
{
	if (str >= 'A' && str <= 'Z')
		return (rot_uppercase(str));
	else if (str >= 'a' && str <= 'z')
		return (rot_lowercase(str));
	return (str);
}

int		main(int argc, char **argv)
{
	int		i;
	char	*str;

	i = 0;
	str = argv[1];
	if (argc == 2)
	{
		while (str[i])
		{
			str[i] = rotone(str[i]);
			i++;
		}
		ft_putstr(str);
	}
	write(1, "\n", 1);
	return (0);
}
