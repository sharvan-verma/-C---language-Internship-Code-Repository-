#include <stdio.h>
int main() {
    int numSubjects;
    float grades[100]; 
    float totalGrade, averageGrade;
    
    printf("How many subjects did you take? ");
    scanf("%d", &numSubjects);
    
    if (numSubjects <= 0) {
        printf("opps,You dont mention number of subject !\n");
        return 1; 
    }
    
    printf("Alright, let's getting those grades!\n");
    
    // Ask for  user to input grades for each subject
    for (int i = 0; i < numSubjects; i++) {
        printf("Enter grade for subject %d: ", i + 1);
        scanf("%f", &grades[i]);
   
        if (grades[i] < 0 || grades[i] > 100) {
            printf("Sorry, that's an invalid grade!\n");
            i--; //decrements i by 1 to allow the user to re-enter the grade for the current subject.
        } else {
            totalGrade = totalGrade + grades[i];
        }
    }
    
    // Calculating the average of grade
    averageGrade = totalGrade / numSubjects;
    
    printf("Average grade is: %.2f\n", averageGrade); 
    
    return 0;
}
