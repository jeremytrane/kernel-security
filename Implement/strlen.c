#include <stdio.h>
#include <stdlib.h>
#include <string.h>

size_t str_len(const char *string);

int main(int argc, char* argv[]) {

    char my_string[] = "Get the len";
    size_t length = str_len(my_string);
    printf("The length of the string is %zu\n", length);

    return 0;

}

size_t str_len(const char *string) {
    if (string == NULL) {
        return 0;
    }

    size_t string_length = 0;

    while (string[string_length] != '\0') {
        string_length++;
    }

    return string_length;
}
