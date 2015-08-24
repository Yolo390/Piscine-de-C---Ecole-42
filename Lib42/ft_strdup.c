/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsanlavi <florent-pro@hotmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/25 20:54:40 by fsanlavi          #+#    #+#             */
/*   Updated: 2015/07/25 20:58:29 by fsanlavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strdup(char *src)
{
	char	*str;
	int		i;
	int		len;

	i = 0;
	len = 0;
	if (src == NULL)
		return (NULL);
	while (src[len] != '\0')
		len++;
	str = (char *)malloc(sizeof(*str) * (len + 1));
	if (str == NULL)
		return (NULL);
	while (i < len)
	{
		str[i] = src[i];
		i++;
	}
	str[len] = '\0';
	return (str);
}
