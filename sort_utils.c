/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: datran <datran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 16:07:42 by datran            #+#    #+#             */
/*   Updated: 2023/03/06 15:28:07 by datran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	stack_min(t_list *stack)
{
	int	min;
	int	num;

	min = ft_atoi(stack->content);
	while (stack)
	{
		num = ft_atoi(stack->content);
		if (min > num)
			min = num;
		stack = stack->next;
	}
	return (min);
}

int	stack_max(t_list *stack)
{
	int	max;
	int	num;

	max = ft_atoi(stack->content);
	while (stack)
	{
		num = ft_atoi(stack->content);
		if (max < num)
			max = num;
		stack = stack->next;
	}
	return (max);
}

int	min(int a, int b)
{
	if (a <= b)
		return (a);
	return (b);
}

int	count_rotate(int a, int b)
{
	if ((a >= 0 && b >= 0) || (a <= 0 && b <= 0))
		return (min(ft_abs(a), ft_abs(b)) + ft_abs(a - b));
	return (ft_abs(a) + ft_abs(b));
}
