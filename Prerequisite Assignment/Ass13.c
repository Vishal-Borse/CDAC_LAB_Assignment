// Q13. Declare an Array of type char* (Strings) and initialize it with a 
// few strings (hard-coded). Display the strings which are duplicated in that array. 
// (Hint: use strcmp())

#include <stdio.h>
#include <string.h>
int main() {
    
    char *strings[5] = {
        "apple",
        "banana",
        "apple",
        "cherry",
        "banana"
    };

    printf("Original array of strings:\n");
    for (int i = 0; i < 5; i++) {
        printf("%s\n", strings[i]);
    }

    
    printf("\nDuplicate strings:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = i + 1; j < 5; j++) {
            if (strcmp(strings[i], strings[j]) == 0) {
                printf("%s\n", strings[i]);
                break; 
            }
        }
    }

    return 0;
}
