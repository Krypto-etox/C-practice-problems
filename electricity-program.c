#include <stdio.h>

int main() {
    char name[50];
    int units;
    float amountCharged, surcharge = 0, totalAmount;

    // Input customer name
    printf("Enter the customer name: ");
    fgets(name, sizeof(name), stdin);

    // Input units consumed
    printf("Enter the units consumed by customer: ");
    scanf("%d", &units);

    // Calculate amount charged
    if (units <= 200) {
        amountCharged = units * 0.8f;
    } else if (units <= 300) {
        amountCharged = 200 * 0.8f + (units - 200) * 0.9f;
    } else {
        amountCharged = 200 * 0.8f + 100 * 0.9f + (units - 300) * 1.0f;
    }

    // Add minimum meter charge
    amountCharged += 100;

    // Check if surcharge applies
    if (amountCharged > 400) {
        surcharge = 0.15 * amountCharged;
        totalAmount = amountCharged + surcharge;
    } else {
        totalAmount = amountCharged;
    }

    // Output result
    printf("\nCustomer name: %s", name);
    printf("Units consumed: %d\n", units);
    printf("Amount charged: %.6f\n", amountCharged - 100);
    printf("Surcharges: %.6f\n", surcharge);
    printf("Total amount to be paid by the customer: %.6f\n", totalAmount);

    return 0;
}


// version 2

#include <stdio.h>

int main() {
    char name[50];
    int units;
    float amountCharged, surcharge = 0, totalAmount;

    // Input customer name
    printf("Enter the customer name: ");
    fgets(name, sizeof(name), stdin);

    // Input units consumed
    printf("Enter the units consumed by customer: ");
    scanf("%d", &units);

    // Calculate amount charged
    if (units <= 200) {
        amountCharged = units * 0.8f;
    } else if (units <= 300) {
        amountCharged = 200 * 0.8f + (units - 200) * 0.9f;
    } else {
        amountCharged = 200 * 0.8f + 100 * 0.9f + (units - 300) * 1.0f;
    }

    // Add minimum meter charge
    amountCharged += 100;

    // Check if surcharge applies
    if (amountCharged > 400) {
        surcharge = 0.15 * amountCharged;
        totalAmount = amountCharged + surcharge;
    } else {
        totalAmount = amountCharged;
    }

    // Output result with adjusted formatting
    printf("\nCustomer name: %s", name);
    printf("Units consumed: %d\n", units);
    printf("Amount charged: %.6f\n", amountCharged);
    printf("Surcharges: %.6f\n", surcharge);
    printf("Total amount to be paid by the customer: %.6f\n", totalAmount);

    return 0;
}
