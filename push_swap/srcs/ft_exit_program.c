/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_exit_program.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dilopez- <dilopez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 11:15:18 by dilopez-          #+#    #+#             */
/*   Updated: 2022/05/22 16:06:32 by dilopez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
#include <stdlib.h>
#include <unistd.h>

void	ft_exit_program(t_list *stack_a, t_list *stack_b, int error)
{
	t_list	*aux;

	while (stack_a != 0)
	{
		aux = stack_a;
		stack_a = stack_a->next;
		free(aux);
	}
	while (stack_b != 0)
	{
		aux = stack_b;
		stack_b = stack_a->next;
		free(aux);
	}
	if (error == 1)
		write(1, "Error\n", 6);
	exit(2);
}
