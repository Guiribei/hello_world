#include "hello.h"

char *create_string(const char *input)
{
	int 	size;
	int 	i;
	char 	*result;

	size = 0;
	while (input[size])
		size++;
	result = (char *)(malloc((size + 1) * sizeof(char)));
	if (result == NULL)
		return (NULL);
	i = 0;
	while (input[i])
	{
		result[i] = input[i];
		i++;
	}
	result[i] = '\0';
	return (result);
}