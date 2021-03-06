/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewallner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 14:29:07 by ewallner          #+#    #+#             */
/*   Updated: 2016/11/07 23:02:54 by ewallner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t n)
{
	char	*s;

	s = ft_memalloc(n + 1);
	if (s == NULL)
		return (NULL);
	else
		s[n + 1] = '\0';
	return (s);
}
