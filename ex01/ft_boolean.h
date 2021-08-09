#ifndef FT_BOOLEAN_H
#define FT_BOOLEAN_H
#include <unistd.h>
#define TRUE 1
#define FALSE 0

#define EVEN(n) ((n%2 == 0) ? 1 : 0)
#define EVEN_MSG "I have an even number of arguments."
#define ODD_MSG "I have an odd number of arguments."
#define SUCCESS 0

typedef	int t_bool;
enum { FALSE, TRUE };
void	ft_putstr(char *str);

#endif
