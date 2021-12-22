/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlopez-m <rlopez-m@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 18:46:11 by rlopez-m          #+#    #+#             */
/*   Updated: 2021/12/22 18:27:36 by rlopez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = nb;
	if (nb < 0)
		return (0);
	while (i > 0)
	{
		--i;
		if (i * i == nb)
			break ;
	}
	return (i);
}