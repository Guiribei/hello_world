#ifndef HELLO_H
#define HELLO_H

#include <unistd.h>
#include <stdlib.h>

typedef struct s_node 
{
	char	letter;
	struct s_node  *next;
} t_node;

char *create_string(const char *input);

#endif