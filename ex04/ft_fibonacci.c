/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlopez-m <rlopez-m@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 15:45:24 by rlopez-m          #+#    #+#             */
/*   Updated: 2021/12/22 18:26:54 by rlopez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 3)
	{
		if (index < 0)
			return (-1);
		else if (index == 0)
			return (0);
		else if (index == 1)
			return (1);
		else if (index == 2)
			return (1);
	}
	else
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
	return (0);
}
