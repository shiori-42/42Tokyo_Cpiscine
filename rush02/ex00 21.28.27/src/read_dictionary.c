#include "rush02.h"
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>

#define INITIAL_SIZE 10
#define SIZE_MULTIPLIER 2

void parse_line(char *buffer, char **key, char **value)
{
    int delimiter_pos = 0;
    while (buffer[delimiter_pos] != ':' && buffer[delimiter_pos] != '\0')
        delimiter_pos++;

    if (buffer[delimiter_pos] == '\0')
        return;

    buffer[delimiter_pos] = '\0';
    *key = malloc(delimiter_pos + 1);
    *value = malloc(delimiter_pos + 1);
    if (!(*key) || !(*value))
        return;

    for (int i = 0; i < delimiter_pos; i++)
    {
        (*key)[i] = buffer[i];
    }
    (*key)[delimiter_pos] = '\0';

    for (int i = 0; buffer[delimiter_pos + 1 + i] != '\0'; i++)
    {
        (*value)[i] = buffer[delimiter_pos + 1 + i];
    }
    (*value)[delimiter_pos] = '\0';
}

t_dict_entry *resize_dictionary(t_dict_entry *old_dict, int old_size, int new_size) {
    t_dict_entry *new_dict = malloc(sizeof(t_dict_entry) * new_size);
    if (!new_dict) return NULL;

    for (int i = 0; i < old_size; i++) {
        new_dict[i] = old_dict[i];
    }
    free(old_dict);

    return new_dict;
}

t_dict_entry *read_dictionary(const char *filename) {
    int fd;
    char buffer[1025];
    t_dict_entry *dictionary;
    int idx = 0, size = INITIAL_SIZE;
    ssize_t bytes_read;
    char *key = NULL, *value = NULL;

    fd = open(filename, O_RDONLY);
    if (fd < 0) {
        write(1, "Dict Error\n", 11);
        return NULL;
    }

    dictionary = malloc(sizeof(t_dict_entry) * size);
    if (!dictionary) {
        write(1, "Dict Error\n", 11);
        close(fd);
        return NULL;
    }

    while ((bytes_read = read(fd, buffer, 1024)) > 0) {
        buffer[bytes_read] = '\0';
        parse_line(buffer, &key, &value);
        
        if (idx == size) {
            size *= SIZE_MULTIPLIER;
            dictionary = resize_dictionary(dictionary, idx, size);
            if (!dictionary) {
                write(1, "Dict Error\n", 11);
                close(fd);
                return NULL;
            }
        }

        dictionary[idx].key = key;
        dictionary[idx].value = value;
        idx++;
    }

    dictionary[idx].key = NULL;
    dictionary[idx].value = NULL;
    close(fd);

    if (idx == 0) {
        write(1, "Dict Error\n", 11);
        free(dictionary);
        return NULL;
    }

    return dictionary;
}
