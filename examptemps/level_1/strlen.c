#include <unistd.h>
#include <stdio.h>
int ft_strlen(char *str)
{
	int i = 0;
		while(str[i] != '\0')
		{
			i++;
		}
	return(i);
}
int main(void)
{
	char *s = "Broooo";
	printf("%i",ft_strlen(s));
	return(0);
}
