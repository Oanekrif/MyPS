/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oanekrif <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/16 01:15:39 by oanekrif          #+#    #+#             */
/*   Updated: 2026/07/16 01:26:06 by oanekrif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void)
{
	int	a;
	int	b;
	int	c;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			c = a / 10 + '0';
			write(1, &c, 1);
			c = a % 10 + '0';
			write(1, &c, 1);
			write(1, " ", 1);
			c = b / 10 + '0';
			write(1, &c, 1);
			c = b % 10 + '0';
			write(1, &c, 1);
			if (a != 98)
				write(1, ", ", 2);
			b++;
		}
		a++;
	}
}

/*
int	main(void)
{
	ft_print_comb2();
	return (0);
}
*/
