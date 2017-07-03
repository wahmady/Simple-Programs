#include <stdio.h>

int	ft_factorial_recursive(int n)
{
	if(n == 1)
		return(1);
	else
		return(n * ft_factorial_recursive(n - 1));
}

int	main()
{
	int test;
	
	printf("%s", "Please input any integer value \n");
	scanf("%d", &test);
	printf("%d", ft_factorial_recursive(test));
	return(0);
}
