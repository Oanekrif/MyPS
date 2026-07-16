/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oanekrif <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/15 22:24:26 by oanekrif          #+#    #+#             */
/*   Updated: 2026/07/16 02:13:51 by oanekrif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

/*int main(void)
 {
 	ft_putchar('c'); // "c"
	ft_putchar('x'); // "x"
	ft_putchar(' '); // " "
	ft_putchar('\n'); // "new line"
	ft_putchar('\t'); // "tab"
	ft_putchar('\0'); // "NULL"
	ft_putchar('\xFF'); // "non print table char"
 }
*/
