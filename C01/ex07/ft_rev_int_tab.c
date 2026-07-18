/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oanekrif <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/18 11:49:27 by oanekrif          #+#    #+#             */
/*   Updated: 2026/07/18 12:00:07 by oanekrif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	tmp;

	i = 0;
	while (i < size / 2)
	{
		tmp = tab[i];
		tab[i] = tab[size - i -1];
		tab[size - i -1] = tmp;
		i++;
	}
}

/*
void	show(int T[], int n)
{
	int	i;

	i = 0;
	while(i < n)
	{
		printf("%d ", T[i]);
		i++;
	}
	printf("\n");
}

int	main(void)
{
	int T[] = {1,3,5,4,2};
	int n = sizeof(T) / sizeof(*T);

	show(T, n);
	ft_rev_int_tab(T, n);
	show(T, n);
}
*/
