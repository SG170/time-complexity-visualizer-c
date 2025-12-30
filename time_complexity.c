#include <stdio.h>

// O(1) – Constant Time
void constantTime() {
    int steps = 1;
    printf("\nO(1) - Constant Time\n");
    printf("Operation executed once.\n");
    printf("Steps taken: %d\n", steps);
}

// O(n) – Linear Time
void linearTime(int n) {
    int steps = 0;
    printf("\nO(n) - Linear Time\n");
    for (int i = 1; i <= n; i++) {
        steps++;
        printf("Step %d: i = %d\n", steps, i);
    }
    printf("Total steps: %d\n", steps);
}

// O(n^2) – Quadratic Time
void quadraticTime(int n) {
    int steps = 0;
    printf("\nO(n^2) - Quadratic Time\n");
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            steps++;
            printf("Step %d: i = %d, j = %d\n", steps, i, j);
        }
    }
    printf("Total steps: %d\n", steps);
}

int main() {
    int n, choice;

    printf("====================================\n");
    printf("   TIME COMPLEXITY VISUALIZER (C)\n");
    printf("====================================\n");

    printf("\nEnter input size (n): ");
    scanf("%d", &n);

    printf("\nChoose Complexity Type:\n");
    printf("1. O(1)  - Constant Time\n");
    printf("2. O(n)  - Linear Time\n");
    printf("3. O(n^2)- Quadratic Time\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            constantTime();
            break;
        case 2:
            linearTime(n);
            break;
        case 3:
            quadraticTime(n);
            break;
        default:
            printf("\nInvalid choice!\n");
    }

    printf("\n====================================\n");
    printf(" Learning: Performance matters early \n");
    printf("====================================\n");

    return 0;
}
