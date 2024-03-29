/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsriling <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/16 01:40:37 by jsriling          #+#    #+#             */
/*   Updated: 2018/02/21 11:37:23 by jsriling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int i;

	i = 1;
	if (nb < 0 || nb > 12)
		return (0);
	if (nb <= 1)
		return (1);
	while (nb != 1)
	{
		i *= nb;
		nb--;
	}
	return (i);
}
