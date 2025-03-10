/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oezzaou <oezzaou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 21:16:13 by oezzaou           #+#    #+#             */
/*   Updated: 2025/02/24 13:43:12 by oezzaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

//====<[ ft_strlen: ]>==========================================================
size_t	ft_strlen(const char *s)
{
	if (s == NULL)
		return (-1);
	if (*s)
		return (1 + ft_strlen(++s));
	return (0);
}
