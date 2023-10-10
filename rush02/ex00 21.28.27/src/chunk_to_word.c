#include "rush02.h"
#include <stdlib.h>
#include <string.h>

char *chunk_to_word(int number, t_dict_entry *dict) {
    if (number == 0) {
        char *zero_str = dict[0].value;
        char *result = malloc(strlen(zero_str) + 1);
        strcpy(result, zero_str);
        return result;
    }

    char *result = NULL;
    if (number >= 1 && number <= 19) {
        result = strdup(dict[number].value);
    } else if (number >= 20 && number <= 99) {
        int tens = number / 10;
        int ones = number % 10;
        
        result = malloc(strlen(dict[tens * 10].value) + strlen(dict[ones].value) + 2);
        sprintf(result, "%s-%s", dict[tens * 10].value, dict[ones].value);
    }

    return result;
}
