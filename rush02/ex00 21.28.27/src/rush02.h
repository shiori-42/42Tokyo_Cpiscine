#ifndef RUSH02_H
#define RUSH02_H
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

typedef struct s_dict_entry
{
    char *key;
    char *value;
} t_dict_entry;

t_dict_entry *read_dictionary(const char *filename);
void parse_line(char *buffer, char **key, char **value);
char *number_to_word(unsigned int number, t_dict_entry *dict);
char *chunk_to_word(int number, t_dict_entry *dict);
void free_dictionary(t_dict_entry *dict);
int ft_atoi(char *str);
int is_valid_number(char *str);

extern const char *tens[];
extern const char *less_than_20[];
extern const char *thousands[];

#endif

