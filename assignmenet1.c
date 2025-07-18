#include <stdio.h>

int main() {
   
    int N, M, k;
    int purchase_amount;

    
    printf("Enter the maximum capacity of the JAR (N): ");
    scanf("%d", &N);

    
    printf("Enter the refill threshold (k, when to refill): ");
    scanf("%d", &k);

    
    if (k >= N) {
        printf("Error: Refill threshold 'k' must be less than the total capacity 'N'.\n");
        return 1; 
    }

    
    M = N;
    printf("\nJAR is now at the counter and it is full.\n");
    
    
    while (1) {
        
        printf("\nAvailable Candies in JAR: %d\n", M);

       
        printf("Enter number of candies to purchase (enter 0 to exit): ");
        scanf("%d", &purchase_amount);

        // If the user enters 0, exit the simulation loop.
        if (purchase_amount <= 0) {
            printf("Exiting simulation.\n");
            break;
        }

        
        if (purchase_amount > M) {
            printf("\nINVALID INPUT\n");
            continue; 
        }

        M = M - purchase_amount;

        
        printf("\nCandies Sold: %d\n", purchase_amount);
        printf("Updated Candies in JAR: %d\n", M);

        
        if (M <= k) {
            printf("\nCandy count is low. Refilling the JAR...\n");
            M = N; 
            printf("JAR has been refilled and is now full.\n");
        }
        
    }

    return 0;
}