/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmolokwa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/28 10:14:58 by pmolokwa          #+#    #+#             */
/*   Updated: 2020/01/28 11:09:56 by pmolokwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int i  = 0;
	if (argc != 2)
	{
		write(1,"a\n",2);
	}
	else 
	{
		while(argv[1][i])
		{
			if(argv[1][i] == 'a')
			{
				write(1,&argv[1][i],1);
				break;
			}
			i++;
		}
	}
write(1,"\n",1);
return(0);
}