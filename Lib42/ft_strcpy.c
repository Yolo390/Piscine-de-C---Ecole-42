/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsanlavi <florent-pro@hotmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/25 20:46:41 by fsanlavi          #+#    #+#             */
/*   Updated: 2015/07/29 10:56:37 by fsanlavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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

char	*ft_strcpy(char *s1, char *s2)
{
	int		i;

	i = 0;
	while (s2[i])
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}

int		main(void)
{
	char	str[] = "Florent";
	char	str1[] = "Alexis";

	ft_putstr(str);
	ft_putchar('\n');
	ft_putstr(str1);
	ft_putchar('\n');
	ft_putstr(ft_strcpy(str, str1));
	ft_putchar('\n');
	return (0);
}
