/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   assert_equal_int.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdragan <rdragan@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 16:46:09 by rdragan           #+#    #+#             */
/*   Updated: 2023/05/27 10:10:19 by rdragan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	assert_equal_int(int function_output, int expected_output)
{
	reset_color();
	if (function_output != expected_output)
	{
		fail();
		return (0);
	}
	pass();
	return (1);
}