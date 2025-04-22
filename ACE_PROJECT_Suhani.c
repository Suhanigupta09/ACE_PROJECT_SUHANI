#include <stdio.h>

void check_balance(float balance);
float withdraw_money(float balance);
float deposit_money(float balance);

int main() {
    float balance = 1000.0f;
    int choice;
    int valid_input;

    do {
        printf("\nATM Menu\n");
        printf("1. Check Balance\n");
        printf("2. Withdraw Money\n");
        printf("3. Deposit Money\n");
        printf("4. Exit\n");
        printf("Enter your choice (1-4): ");
        valid_input = scanf("%d", &choice);

        if (!valid_input || choice < 1 || choice > 4) {
            printf("Invalid choice. Please enter a number between 1 and 4.\n");
            continue;
        }

        switch (choice) {
            case 1:
                check_balance(balance);
                break;
            case 2:
                balance = withdraw_money(balance);
                break;
            case 3:
                balance = deposit_money(balance);
                break;
            case 4:
                printf("Thank you for using the ATM. Goodbye!\n");
                break;
        }
    } while (choice != 4);

    return 0;
}

void check_balance(float balance) {
    printf("Your current balance is: $%.2f\n", balance);
}

float withdraw_money(float balance) {
    float amount;
    int valid_input;

    do {
        printf("Enter amount to withdraw: ");
        valid_input = scanf("%f", &amount);

        if (!valid_input || amount <= 0) {
            printf("Invalid amount. Please enter a positive number.\n");
        } else if (amount > balance) {
            printf("Insufficient balance. You cannot withdraw more than your current balance.\n");
        } else {
            balance -= amount;
            printf("Withdrawal successful. New balance: $%.2f\n", balance);
            break;
        }
    } while (1);

    return balance;
}

float deposit_money(float balance) {
    float amount;
    int valid_input;

    do {
        printf("Enter amount to deposit: ");
        valid_input = scanf("%f", &amount);

        if (!valid_input || amount <= 0) {
            printf("Invalid amount. Please enter a positive number.\n");
        } else {
            balance += amount;
            printf("Deposit successful. New balance: $%.2f\n", balance);
            break;
        }
    } while (1);

    return balance;
}

