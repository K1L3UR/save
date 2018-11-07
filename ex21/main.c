#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

void	ft_print_alphabet();
void	ft_print_numbers();
void	ft_is_negative(int n);
void	ft_ft(int nbr);
void	ft_div_mod(int a, int b, int *div, int *mod);
int	ft_iterative_factorial(int nb);
int	ft_recursive_factorial(int nb);
int	ft_sqrt(int nb);
void	ft_putstr(char *str);
int	ft_strlen(char *str);
int	ft_strcmp(char *s1, char *s2);
char	*ft_strdup(char *src);

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

/*int	main()
{
	ft_print_alphabet();
	return (0);
}
*/

/*int	main()
{
	ft_print_numbers();
	return (0);
}
*/

/*int	main(int argc, char **argv)
{
	argc = 0;
	ft_is_negative(atoi(argv[1]));
	return (0);
}
*/

/*int	main()
{
	int *nbr;
	
	*nbr = 0;
	printf("nbr value %d\n", *nbr);
	ft_ft(nbr);
	printf("nbr value %d\n", *nbr);
	return (0);
}
*/

/*int	main()
{
	int a;
	int b;
	int div;
	int mod;

	a = 10;
	b = 3;
	div = 0;
	mod = 0;
	printf("b :a= %d\n", a);
	printf("b :b= %d\n", b);
	printf("b :div= %d\n", div);
	printf("b :mod= %d\n", mod);
	ft_div_mod(a, b, &div, &mod);
	printf("after :a= %d\n", a);
	printf("after :b= %d\n", b);
	printf("after :div= %d\n", div);
	printf("after :mod= %d\n", mod);
	return (0);
}
*/

/*int	main(int argc, char **argv)
{
	argc = 0;
	printf("%d\n", ft_iterative_factorial(atoi(argv[1])));
	return (0);
}
*/

/*int main(int argc, char **argv)
{
	argc = 0;
	printf("%d\n", ft_recursive_factorial(atoi(argv[1])));
	return (0);
}
*/

/*int	main(int argc, char **argv)
{
	printf("%d\n", ft_sqrt(atoi(argv[1])));
	return (0);
}
*/

/*int main()
{
	ft_putstr("bonjour");
	ft_putchar('\n');
	ft_putstr("123456");
	ft_putchar('\n');
	ft_putstr("b12313r");
	ft_putchar('\n');
	ft_putstr("bon335rrrr");
	ft_putchar('\n');
	ft_putstr("bonjour");
	return (0);
}
*/

/*int	main()
{
	printf("ft_strlen : %d\n", ft_strlen("bonjour"));
	printf("strlen : %lu\n", strlen("bonjour"));
	printf("ft_strlen : %d\n", ft_strlen("bonjour"));
	printf("strlen : %lu\n", strlen("bonjour"));
	return (0);
}
*/

/*int	main()
{
	printf("ft_strcmp : %d\n", ft_strcmp("bonjour", "bondour"));
	printf("strcmp : %d\n", strcmp("bonjour", "bondour"));
	printf("ft_strcmp : %d\n", ft_strcmp("123456789", "123456789"));
	printf("strcmp : %d\n", strcmp("123456789", "123456789"));
	printf("ft_strcmp : %d\n", ft_strcmp("raviolz", "ravioli"));
	printf("strcmp : %d\n", strcmp("raviolz", "ravioli"));
	printf("ft_strcmp : %d\n", ft_strcmp("abd", "abc"));
	printf("strcmp : %d\n", strcmp("abd", "abc"));
	return (0);
}
*/

/*int	main()
{
	printf("%s\n", ft_strdup("onii chan"));
	printf("%s\n", strdup("onii chan"));
	printf("%s\n", ft_strdup("aniki"));
	printf("%s\n", strdup("aniki"));
	return (0);
}
*/

int	main()
{

}
