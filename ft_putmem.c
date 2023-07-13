/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putmem.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raalonso <raalonso@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 21:17:05 by raalonso          #+#    #+#             */
/*   Updated: 2023/07/13 22:16:16 by raalonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_putmem(void *mem)
{
	int count;
	
	count = 0;
	write(1, "0x", 2);
	write(1, (unsigned int)&mem, 1);
	return (count + 2);
}