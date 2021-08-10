#include "ft_stock_str.h"
#include <stdlib.h>
char	*ft_strdup(char *src)
{
	char	*dest;
	int		src_len;
	int		i;

	src_len = 0;
	while (src[src_len])
		src_len++;
	dest = (char *)malloc(sizeof(char) * src_len + 1);
	if (!dest)
		return (NULL);
	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str		*s_av;
	int				i;

	s_av = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
	if (!s_av)
		return (0);
	i = 0;
	while (av[i] != 0 && i < ac)
	{
		s_av[i].size = ft_strlen(av[i]);
		s_av[i].str = av[i];
		s_av[i].copy = ft_strdup(av[i]);
		i++;
	}
	s_av[i].size = 0;
	s_av[i].str = 0;
	s_av[i].copy = 0;
	return (s_av);
}
/*
#include <stdio.h>
int main(int ac, char **av)
{
	t_stock_str string;
	string = *ft_strs_to_tab(ac, av);
	printf("%s", string.str);
	printf("%s", string.copy);
	printf("%d", string.size);
}
*/
