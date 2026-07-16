/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oanekrif <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/16 00:21:54 by oanekrif          #+#    #+#             */
/*   Updated: 2026/07/16 02:17:35 by oanekrif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	if (n < 0)
		write(1, "N", 1);
	else
		write(1, "P", 1);
}

/*
int	main(void)
{
	ft_is_negative(8); // "P"
	ft_is_negative(-115); // "N"
	ft_is_negative(-2147483648); // "N"
	ft_is_negative(0); // "P"
	ft_is_negative(2147483647); // "P"
	return (0);
}
*/
