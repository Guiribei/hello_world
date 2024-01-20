#include "hello.h"

int main(void)
{
	char 	*str;
	int		i;

	str = create_string("Hello world!\n");
	if (!str)
		return (1);
	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	free(str);
	return(0);
}