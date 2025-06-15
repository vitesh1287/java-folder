#include <stdio.h>
#include<stdlib.h>
int main() {
    char buffer[15];

    printf("\nEnter a line of text: \n");
    if (fgets(buffer, sizeof(buffer), stdin) != NULL) {
        printf("You entered: %s", buffer);
    } else {
        printf("Error or EOF encountered.\n");
    }

    return 0;
}

