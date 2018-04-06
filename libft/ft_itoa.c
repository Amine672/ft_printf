/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akabbouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/11 06:03:34 by akabbouc          #+#    #+#             */
/*   Updated: 2016/11/12 02:53:44 by akabbouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_itoa(long int n)
{
	int			len;
	long int	nb_tmp;
	char		*str;

	if (!n)
		return (ft_strdup("0"));
	len = ((n <= 0) ? 1 : 0);
	nb_tmp = n;
	while (++len && nb_tmp)
		nb_tmp /= 10;
	if (!(str = (char*)malloc(sizeof(char) * (len))))
		return (NULL);
	str[--len] = '\0';
	*str = '0';
	nb_tmp = n;
	while (nb_tmp != 0)
	{
		str[--len] = '0' + ((n < 0) ? -1 : 1) * (nb_tmp % 10);
		nb_tmp /= 10;
	}
	if (n < 0)
		*str = '-';
	return (str);
}
