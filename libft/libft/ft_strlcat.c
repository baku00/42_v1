/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgloriod <dgloriod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 14:37:22 by dgloriod          #+#    #+#             */
/*   Updated: 2021/11/03 18:36:04 by dgloriod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len;
	size_t	i;

	len = ft_strlen(dst);
	i = 0;
	if (size == 0)
		return ft_strlen(src);
	if (size - len - 1 > size)
	{
		while ((long long) i < (long long) (size - len - 1) && src[i]) {
			dst[len + i] = src[i];
			i++;
		}
	}
	else
	{
		while (i < size - len - 1 && src[i]) {
			dst[len + i] = src[i];
			i++;
		}
	}
	if (i < size || len <= size)
		dst[len + i] = '\0';
	if (size < len)
		return ft_strlen(src) + size;
	return ft_strlen(src) + len;
}
