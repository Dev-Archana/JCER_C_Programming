#include <stdio.h>

double bal = 0.0;
int pin = 1234;  

void deposit();
void withdrawal();
void pinChange();

int main() {
    int choice;

    while (1) {
        printf("\nATM Menu:\n");
        printf("1. Deposit\n");
        printf("2. Withdrawal\n");
        printf("3. Change PIN\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                deposit();
                break;
            case 2:
                withdrawal();
                break;
            case 3:
                pinChange();
                break;
            case 4:
                printf("Thank you for using the ATM. Goodbye!\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
    return 0;
}

void deposit() {
    double amt;
    printf("Enter amount to be deposited: ");
    scanf("%lf", &amt);

    if (amt > 0) {
        bal += amt;
        printf("Deposit successful! Current balance: %.2lf\n", bal);
    } else {
        printf("Error: Deposit amount must be positive.\n");
    }
}

void withdrawal() {
    double amt;
    printf("Enter amount to withdraw: ");
    scanf("%lf", &amt);

    if (amt > 0 && amt <= bal) {
        bal -= amt;
        printf("Withdrawal successful! Current balance: %.2lf\n", bal);
    } else if (amt > bal) {
        printf("Error: Insufficient balance.\n");
    } else {
        printf("Error: Withdrawal amount must be positive.\n");
    }
}

void pinChange() {
    int oldPin, newPin, confirmPin;
    printf("Enter your current PIN: ");
    scanf("%d", &oldPin);

    if (oldPin == pin) {
        
        printf("Enter your new PIN: ");
        scanf("%d", &newPin);

        
        printf("Confirm your new PIN: ");
        scanf("%d", &confirmPin);

        if (newPin == confirmPin) {
            pin = newPin; 
            printf("PIN successfully changed!\n");
        } else {
            printf("Error: New PIN and confirmation PIN do not match.\n");
        }
    } else {
        printf("Error: Incorrect current PIN.\n");
    }
}
