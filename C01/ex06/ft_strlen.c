/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oanekrif <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/16 23:11:04 by oanekrif          #+#    #+#             */
/*   Updated: 2026/07/16 23:20:31 by oanekrif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

/*
int main(void)
{
	char	name[25] = "Oanekrif";
	printf("strlen value: %d\nft_strlen value: %d\n", \
	(int)strlen(name), ft_strlen(name));
	return (0);
}
*/
