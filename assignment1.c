#include <stdio.h>

int main() {
    int N, M, k;
    int purchase_amount;

    printf("Enter the maximum capacity of the JAR : ");
    scanf("%d", &N);

    printf("Refill Threshold:");
    scanf("%d", &k);

    if (k >= N) {
        printf(" Refill threshold 'k' must be less than the jar capacity.\n");
        return 1;
    }

    M = N;
    printf("\nJAR is now full.\n");

    while (1) {
        printf("\nAvailable Candies in JAR: %d\n", M);
        printf("Enter number of candies to purchase : ");
        scanf("%d", &purchase_amount);

        if (purchase_amount <= 0) {
            break;
        }

        if (purchase_amount > M) {
            printf("\nINVALID INPUT\n");
            continue;
        }

        

        printf("\nCandies Sold: %d\n", purchase_amount);
        printf("Updated Candies in JAR: %d\n", M - purchase_amount);

        if (M <= k) {
            printf("\nCandy count is low,Refilling the JAR\n");
            M = N;
            printf("JAR has been refilled \n");
        }
    }

    return 0;
}
