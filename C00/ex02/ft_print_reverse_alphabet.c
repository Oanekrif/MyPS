/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oanekrif <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/15 23:44:51 by oanekrif          #+#    #+#             */
/*   Updated: 2026/07/16 02:15:06 by oanekrif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	alpha;

	alpha = 'z';
	while (alpha >= 'a')
	{
		write(1, &alpha, 1);
		alpha--;
	}
}

/*
int	main(void)
{
	ft_print_reverse_alphabet(); // "zyxwvutsrqponmlkjihgfedcba"
	return (0);
}
*/
