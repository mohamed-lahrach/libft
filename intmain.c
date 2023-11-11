#include "libft.h"


int main() {
    const char *test = "+=_mohamed laharch thanks you a lot_+=";
    char *result = ft_strtrim(test, "=_+");

    if (result) {
        printf("%s\n", result);
        free(result); // Free the allocated memory
    } else {
        printf("Memory allocation failed.\n");
    }
    return 0;
}