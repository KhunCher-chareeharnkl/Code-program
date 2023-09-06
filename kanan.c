#include <stdio.h>
int main() {
  
    int grades_count[5] = {0, 0, 0, 0, 0};
    for (int i = 0; i < 5; i++) {
        int score;
        printf("Enter Score %d: ", i + 1);
        scanf("%d", &score);

        if (score >= 80) {
            grades_count[0]++;
        } else if (score >= 70) {
            grades_count[1]++;
        } else if (score >= 60) {
            grades_count[2]++;
        } else if (score >= 50) {
            grades_count[3]++;
        } else {
            grades_count[4]++;
        }
    }
    printf("Grade A: %d \n", grades_count[0]);
    printf("Grade B: %d \n", grades_count[1]);
    printf("Grade C: %d \n", grades_count[2]);
    printf("Grade D: %d \n", grades_count[3]);
    printf("Grade F: %d \n", grades_count[4]);
    return 0;
}