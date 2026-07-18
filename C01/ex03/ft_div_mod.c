/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oanekrif <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/16 21:33:36 by oanekrif          #+#    #+#             */
/*   Updated: 2026/07/16 22:10:09 by oanekrif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*
int	main(void)
{
	int	a;
	int	b;
	int	div;
	int	mod;

	a = 11;
	b = 3;
	ft_div_mod(a, b, &div, &mod);
	printf("%d / %d = %d\n%d %% %d = %d\n", a, b, div, a, b, mod);
}
*/
