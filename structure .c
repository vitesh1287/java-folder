#include <stdio.h>

// Define a structure to store information of a person
struct Person {
    char name[20];
    int age;
    char address[50];
};

int main() {
    struct Person s[5];  // Array of 5 persons

    // Input details for each person
    for(int i = 0; i < 5; i++) {
        printf("Enter details for person %d:\n", i + 1);
        
        printf("Name: ");
        scanf(" %[^\n]%*c", s[i].name);  // Read full name including spaces

        printf("Age: ");
        scanf("%d", & s[i].age);

        printf("Address: ");
        scanf(" %[^\n]%*c", s[i].address);  // Read full address including spaces

        printf("\n");
    }

    // Display the details of all persons
    printf("Details of all persons:\n\n");
    for(int i = 0; i < 5; i++) {
        printf("Person %d:\n", i + 1);
        printf("Name: %s\n", s[i].name);
        printf("Age: %d\n", s[i].age);
        printf("Address: %s\n\n",s[i].address);
    }

    return 0;
}
