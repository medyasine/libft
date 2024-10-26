#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <limits.h>


int main() {
    printf("%d\n", atoi("-9223372036854775808"));
    printf("%d", ft_atoi("-9223372036854775808"));

    return 0;
}