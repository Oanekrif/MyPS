/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oanekrif <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/16 22:11:12 by oanekrif          #+#    #+#             */
/*   Updated: 2026/07/16 22:50:31 by oanekrif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *a / *b;
	*b = tmp % *b;
}

/*
int	main(void)
{
	int	a;
	int	b;

	a = 11;
	b = 3;
	ft_ultimate_div_mod(&a, &b);
	printf("div = %d\nmod = %d\n", a, b);
	return (0);
}
*/
