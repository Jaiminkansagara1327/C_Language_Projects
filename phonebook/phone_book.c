#include <stdio.h>

// Define a structure for a contact in the phone book
struct contact {
    char name[50];
    int age;
    int phone_number;
    int DOB; // Date of Birth
    char address[50];
};

int main() {
    int i, n, choice;

    printf("WELCOME TO PHONE BOOK\n\n");
    printf("MENU\n");s
    printf("Press 1 to add a new contact\n");
    printf("Press 2 to exit\n");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Enter number of contacts to be added: ");
        scanf("%d", &n);
        struct contact phonebook[n]; // Create an array of contacts

        printf("-----------------\n");

        // Input contact information for each contact
        for (i = 0; i < n; i++) {
            printf("\nEnter name of contact %d: ", i + 1);
            scanf("%s", phonebook[i].name);
            printf("Enter age of contact %d: ", i + 1);
            scanf("%d", &phonebook[i].age);
            printf("Enter phone number of contact %d: ", i + 1);
            scanf("%d", &phonebook[i].phone_number);
            printf("Enter DOB of contact %d: ", i + 1);
            scanf("%d", &phonebook[i].DOB);
            printf("Enter address of contact %d: ", i + 1);
            scanf("%s", phonebook[i].address);
            printf("-----------------\n");
        }

        printf("Do you want to display entered data?\n");
        printf("Press 1 for yes\n");
        printf("Press 2 to exit\n");
        scanf("%d", &choice);

        if (choice == 1) {
            // Display the entered contact information
            for (i = 0; i < n; i++) {
                printf("\nName of contact %d: %s\n", i + 1, phonebook[i].name);
                printf("Age of contact %d: %d\n", i + 1, phonebook[i].age);
                printf("Phone number of contact %d: %d\n", i + 1, phonebook[i].phone_number);
                printf("DOB of contact %d: %d\n", i + 1, phonebook[i].DOB);
                printf("Address of contact %d: %s\n", i + 1, phonebook[i].address);
                printf("-----------------\n");
            }
        } else if (choice == 2) {
            printf("Exiting phone book. Goodbye!\n");
        } else {
            printf("Invalid choice\n");
        }
    }
    else if (choice == 2) {
        printf("Exiting phone book. Goodbye!\n");
    }
    else {
        printf("Enter a valid number\n");
    }

    return 0;
}
