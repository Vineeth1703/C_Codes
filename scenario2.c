#include <stdio.h>

void calculateTime(int n){    
    if(n < 0 || n > 7000){
        printf("INVALID INPUT\n");
    }
    else if(n == 0){
        printf("Time Estimated: 0 minutes\n");
    }
    else if(n <= 2000){
        printf("Time Estimated: 25 minutes\n");
    }
    else if(n <= 4000){
        printf("Time Estimated: 35 minutes\n");
    }
    else if(n <= 7000){
        printf("Time Estimated: 45 minutes\n");
    }
    else{
        printf("OVERLOADED\n");
    }
}

int main(){
    int machineWeight;
    scanf("%d", &machineWeight);
    calculateTime(machineWeight);
    return 0;
}
