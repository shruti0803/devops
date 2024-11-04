#include <stdio.h> 


float calculateAverage(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i]; 
    }
    return (float)sum / size; 
}

int main() {
    int n;

    
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int numbers[100]; 

    printf("Enter %d numbers:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

   
    float avg = calculateAverage(numbers, n);

    
    printf("The average is: %.2f\n", avg);

    return 0;
}
