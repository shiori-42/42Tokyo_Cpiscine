#include "rush02.h"

int	ft_atoi(char *str)
{
    int	cnt_m;
    int	ans;

    cnt_m = 1;
    ans = 0;
    while (*str == '\t' || *str == '\n' || *str == '\v' || *str == '\f'
        || *str == '\r' || *str == ' ')
        str++;
    while (*str == '-' || *str == '+')
    {
        if (*str == '-')
            cnt_m *= (-1);
        str++;
    }
    while (*str >= '0' && *str <= '9')
    {
        ans = ans * 10 + (*str - '0');
        str++;
    }
    return (ans * cnt_m);
}
