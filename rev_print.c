/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmolokwa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/27 13:36:39 by pmolokwa          #+#    #+#             */
/*   Updated: 2020/01/27 13:50:43 by pmolokwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	main(int argc, char **argv)
{
	int count;
	count = 0;
	while (argv[1][count] != '\0')
		{
			count++;
		}
	while (count >=0)
	{
		write(1,&argv[1][count],1);
			count--;
	}
	return (0);
}
