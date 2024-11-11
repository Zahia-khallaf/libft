/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekhallaf <ekhallaf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 14:42:20 by ekhallaf          #+#    #+#             */
/*   Updated: 2024/11/11 22:12:33 by ekhallaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_word(char const *s, char c)
{
	int		len;
	int		in_word;
	size_t	i;

	len = 0;
	in_word = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c && in_word == 0)
		{
			in_word = 1;
			len++;
		}
		else if (s[i] == c)
		{
			in_word = 0;
		}
		i++;
	}
	return (len);
}

static int	len_word(char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

static void	*ft_free(int i, char **split)
{
	while (i--)
		free(split[i]);
	free(split);
	return (NULL);
}

static char	*allocate_word(char const **s, char c)
{
	char	*word;
	int		len;
	int		i;

	len = len_word(*s, c);
	word = malloc(len + 1);
	if (!word)
		return (NULL);
	i = 0;
	while (**s && **s != c)
	{
		word[i++] = *(*s)++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	char	**split;

	if (!s)
		return (NULL);
	split = malloc((count_word(s, c) + 1) * sizeof(char *));
	if (!split)
		return (NULL);
	i = 0;
	while (*s)
	{
		if (*s != c)
		{
			split[i] = allocate_word(&s, c);
			if (!split[i])
				return (ft_free(i, split));
			i++;
		}
		else
			s++;
	}
	split[i] = NULL;
	return (split);
}

int	main(void)
{
	int		i;
	char	str[] = "hhuhjhb hkb jkjb ";
	char	**res;

	i = 0;
	res = ft_split(str, ' ');
	while (res[i])
	{
		printf("'%s'\n", res[i]);
		i++;
	}
	printf("'%s'\n", res[3]);
}
