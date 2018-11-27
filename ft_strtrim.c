/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgaujard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/19 12:14:46 by fgaujard          #+#    #+#             */
/*   Updated: 2018/11/27 18:59:32 by fgaujard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		i;
	int		j;
	int		k;
	char	*dest;

	i = 0;
	j = ft_strlen(s);
	while ((s[i] == '\t') || (s[i] == '\n') || (s[i] == ' '))
		i++;
	while ((s[j] == '\t') || (s[j] == '\n') || (s[j] == ' '))
		j--;
	if (!(dest = (char *)malloc(sizeof(char) * ((j - i) + 1))))
		return (0);
	k = 0;
	while (i < j)
		dest[k++] = s[i++];
	dest[k] = '\0';
	return (dest);
}
