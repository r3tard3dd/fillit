/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_word_limit.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaddoul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/20 16:50:31 by afaddoul          #+#    #+#             */
/*   Updated: 2018/10/20 17:31:25 by afaddoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_word_limit(const char *s, char c)
{
	int		x;

	x = 0;
	while (s[x] != c && s[x])
	{
		x++;
	}
	return (x);
}