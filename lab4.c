// Flow of control and nested statements

#include <stdio.h>

int main() {
    int order = 0, time = 0;
    float cost = 0;

    printf("Welcome to Fiifi's Ice Cream Shop\nWhat would you like to order?\n");
    int flavor = 0, size = 0;

    do {
        printf("\n1 - Vanilla\n2 - Strawberry\n3 - Chocolate\n4 - Mango\n5 - Enquiries\n");
        scanf("%d", &flavor);

        if (flavor == 5) {
            printf("A customer service agent will be with you soon.\n");
        } else if (flavor >= 1 && flavor <= 4) {
            printf("1 - small\n2 - large\n");
            scanf("%d", &size);

            if (size == 1) {
                switch (flavor) {
                    case 1:
                        cost += 5;
                        time += 2;
                        printf("Flavor: Vanilla\nSize: Small\nCost: %.2f cedis\nTime: %d mins\n", cost, time);
                        break;
                    case 2:
                        cost += 5;
                        time += 2;
                        printf("Flavor: Strawberry\nSize: Small\nCost: %.2f cedis\nTime: %d mins\n", cost, time);
                        break;
                    case 3:
                        cost += 6;
                        time += 2;
                        printf("Flavor: Chocolate\nSize: Small\nCost: %.2f cedis\nTime: %d mins\n", cost, time);
                        break;
                    case 4:
                        cost += 7;
                        time += 2;
                        printf("Flavor: Mango\nSize: Small\nCost: %.2f cedis\nTime: %d mins\n", cost, time);
                        break;
                    default:
                        printf("Invalid flavor entry.\n");
                        break;
                }
            } else if (size == 2) {
                switch (flavor) {
                    case 1:
                        cost += 8;
                        time += 3;
                        printf("Flavor: Vanilla\nSize: Large\nCost: %.2f cedis\nTime: %d mins\n", cost, time);
                        break;
                    case 2:
                        cost += 8;
                        time += 3;
                        printf("Flavor: Strawberry\nSize: Large\nCost: %.2f cedis\nTime: %d mins\n", cost, time);
                        break;
                    case 3:
                        cost += 9;
                        time += 3;
                        printf("Flavor: Chocolate\nSize: Large\nCost: %.2f cedis\nTime: %d mins\n", cost, time);
                        break;
                    case 4:
                        cost += 10;
                        time += 3;
                        printf("Flavor: Mango\nSize: Large\nCost: %.2f cedis\nTime: %d mins\n", cost, time);
                        break;
                    default:
                        printf("Invalid flavor entry.\n");
                        break;
                }
            } else {
                printf("Invalid size entry.\n");
            }
        } else {
            printf("Invalid flavor entry.\n");
        }

    } while (order > 0);

    return 0;
}

