/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oanekrif <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/18 12:01:53 by oanekrif          #+#    #+#             */
/*   Updated: 2026/07/18 12:31:50 by oanekrif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	min;
	int	tmp;

	i = 0;
	while (i < size -1)
	{
		j = i +1;
		min = i;
		while (j < size)
		{
			if (tab[min] > tab[j])
				min = j;
			j++;
		}
		if (min != i)
		{
			tmp = tab[i];
			tab[i] = tab[min];
			tab[min] = tmp;
		}
		i++;
	}
}

/*
void	show(int *T, int n)
{
	int	i;
	
	i = 0;
	while (i < n)
	{
		printf("%d ", T[i]);
		i++;
	}
	printf("\n");
}

int	main(void)
{
	int T[] = {9,5,3,2,1,4,6};
	int n = sizeof(T) / sizeof(*T);

	show(T, n);
	ft_sort_int_tab(T, n);
	show(T, n);
}
*/
