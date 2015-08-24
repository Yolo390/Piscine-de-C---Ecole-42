/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsanlavi <florent-pro@hotmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/29 23:30:14 by fsanlavi          #+#    #+#             */
/*   Updated: 2015/07/29 23:34:32 by fsanlavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned char	reverse_bits(unsigned char octet)
{
	int				i;
	int				j;
	unsigned char	rev;

	i = 0x80;
	j = 0x01;
	while (i)
	{
		if (octet & i)
			rev |= j;
		i = i >> 1;
		j = j << 1;
	}
	return (rev);
}
