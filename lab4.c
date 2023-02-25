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
                        printf("Vanilla, small: %.2f cedis\n", cost);
                        break;
                    case 2:
                        cost += 5;
                        time += 2;
                        printf("Strawberry, small: %.2f cedis\n", cost);
                        break;
                    case 3:
                        cost += 6;
                        time += 2;
                        printf("Chocolate, small: %.2f cedis\n", cost);
                        break;
                    case 4:
                        cost += 7;
                        time += 2;
                        printf("Mango, small: %.2f cedis\n", cost);
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
                        printf("Vanilla, large: %.2f cedis\n", cost);
                        break;
                    case 2:
                        cost += 8;
                        time += 3;
                        printf("Strawberry, large: %.2f cedis\n", cost);
                        break;
                    case 3:
                        cost += 9;
                        time += 3;
                        printf("Chocolate, large: %.2f cedis\n", cost);
                        break;
                    case 4:
                        cost += 10;
                        time += 3;
                        printf("Mango, large: %.2f cedis\n", cost);
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

