#include <stdio.h>
#include <math.h>

int main() {
    int oxyvalue1[3][3];
    float avg[3] = {0};
    int i, j;

  
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            int value;
            while (1) {
                printf("Oxygen level for round %d candidate %d: ", i + 1, j + 1);
                scanf("%d", &value);
                if (value >= 1 && value <= 100) {
                    oxyvalue1[i][j] = value;
                    break;
                } else {
                    printf("Invalid oxygen value. Please enter a value between 1 and 100.\n");
                }
            }
        }
    }

    
    printf("\nEntered Oxygen Values:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("%d\t", oxyvalue1[i][j]);
        }
        printf("\n");
    }

    
    int maxAvg = 0;
    for(j = 0; j < 3; j++) {
        int sum = 0;
        for(i = 0; i < 3; i++) {
            sum += oxyvalue1[i][j];
        }
        avg[j] = round((float)sum / 3);
        if (avg[j] > maxAvg) {
            maxAvg = avg[j];
        }
    }

    
    if (maxAvg < 70) {
        printf("\nAll trainees are unfit\n");
        return 0;
    }

   
    printf("\n");
    for(i = 0; i < 3; i++) {
        if ((int)avg[i] == maxAvg) {
            printf("Trainee Number : %d\n", i + 1);
        }
    }

    return 0;
}
