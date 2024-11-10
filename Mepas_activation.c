#include <stdio.h>

// Function to activate M-Pesa
void Activate_Mpesa() {
    int choice, password1, password2, password3;
    int pin1, pin2, pin3;

    printf("1. Wezesha\n");
    printf("2. Activate\n");
    printf("Choose Any Of The above:\n ");
    scanf("%d", &choice);

    // Merging case 1 and case 2 since the process is the same
    switch (choice) {
        case 1:
        case 2:
            printf("Enter 0000 as the pin:\n ");
            scanf("%d", &password1);

            // Validate initial pin
            if (password1 == 0) {
                printf("Enter a new pin (4 digits): \n");
                scanf("%d", &password2);

                // Check if the new pin is a valid 4-digit number
                if (password2 >= 1000 && password2 <= 9999) {
                    printf("Re-enter your new pin again: \n");
                    scanf("%d", &password3);

                    // Check if the new pins match
                    if (password2 == password3) {
                        printf("Congratulations for successfully opening an M-Pesa account!\n");
                        printf("Keep your device on to receive the menu display updates.\n");
                    } else {
                        printf("Sorry, but your pins do not match.\n");
                        printf("Ensure the two pins match.\n");
                    }
                } else {
                    printf("Invalid pin. Please make it a 4-digit pin.\n");
                }
            } else {
                printf("Invalid Pin. Please enter 0000 to proceed.\n");
            }
            break;

        default:
            printf("INVALID CHOICE\n");
    }
}

int main() {
    Activate_Mpesa();
    return 0;
}
