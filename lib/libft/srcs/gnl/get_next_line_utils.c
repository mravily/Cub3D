/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravily <mravily@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 16:54:17 by mravily           #+#    #+#             */
/*   Updated: 2020/05/26 13:28:55 by mravily          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void		*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*tmp1;
	unsigned char	*tmp2;

	i = 0;
	tmp1 = (unsigned char *)dst;
	tmp2 = (unsigned char *)src;
	if ((dst == 0 && src == 0) || (dst == src))
		return (dst);
	while (n--)
		tmp1[n] = tmp2[n];
	return (dst);
}

size_t		ft_strlen(char *str)
{
	int len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

char		*ft_strdup(char *s)
{
	size_t	i;
	size_t	len_s;
	char	*dup;

	i = 0;
	len_s = ft_strlen(s);
	if (!(dup = (char *)malloc(sizeof(char) * (len_s + 1))))
		return (NULL);
	while (i < len_s)
	{
		dup[i] = s[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

char		*ft_strjoin(char *s1, char *s2)
{
	char	*new_s;
	size_t	len_s1;
	size_t	len_s2;

	if (!s1 && !s2)
		return (NULL);
	else if (!s1)
		return (ft_strdup(s2));
	else if (!s2)
		return (ft_strdup(s1));
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	if (!(new_s = malloc(sizeof(char) * (len_s1 + len_s2 + 1))))
		return (NULL);
	ft_memcpy(new_s, s1, len_s1);
	ft_memcpy(new_s + len_s1, s2, len_s2);
	new_s[len_s1 + len_s2] = '\0';
	free(s1);
	return (new_s);
}

void		ft_place(char *rest, char *tmp)
{
	printf("test");
	free(rest);
	printf("test1");
	rest = tmp;
}
