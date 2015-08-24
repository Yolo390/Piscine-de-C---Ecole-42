/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsanlavi <florent-pro@hotmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/30 20:46:31 by fsanlavi          #+#    #+#             */
/*   Updated: 2015/07/30 20:49:37 by fsanlavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int start, int end)
{
	int		*tab;
	int		i;

	i = 0;
	if (start >= end)
		return (0);
	tab = (int *)malloc(sizeof(*tab) * (end - start));
	if (tab == NULL)
		return (NULL);
	while (start < end)
	{
		tab[i] = start;
		start++;
		i++;
	}
	return (tab);
}
