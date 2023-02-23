/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esyildir <esyildir@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 16:04:20 by esyildir          #+#    #+#             */
/*   Updated: 2023/02/15 16:11:28 by esyildir         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdio.h>

void ft_ft(int *nbr)
{
	*nbr = 42;
}

int	main()
{
	int		*nbr;
	int		number;

	nbr = &number;
	ft_ft(nbr);
	printf("%d", number);
}
