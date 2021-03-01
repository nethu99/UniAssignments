#include <stdio.h>

float calcFinalMark(float assignmentMark, float paperMark);

char findGrades(float finalMark);

void printDetails(char name[], float finalMarks, char grade);

int main() {

    int count = 0;

    float assignment;

    float paperMarks = 0;

    float final_Marks;

    char grade;

    char name[10];


    while (count != 5) {

        printf("\nEnter The Name :");
        scanf("%s", &name);

        printf("\nEnter Assignment Marks :");
        scanf("%f", &assignment);

        if (assignment > 50) {
            printf("\nEnter Paper Marks :");
            scanf("%f", &paperMarks);

            final_Marks = calcFinalMark(assignment, paperMarks);
        }

        final_Marks = calcFinalMark(assignment, paperMarks);


        grade = findGrades(final_Marks);

        printDetails(name, final_Marks, grade);

        count++;
    }


    return 0;

}

float calcFinalMark(float assignmentMark, float paperMark) {
    float finalMarks;

    finalMarks = assignmentMark * 30 / 100;
    finalMarks += paperMark * 70 / 100;

    return finalMarks;

}

char findGrades(float finalMark) {

    if (finalMark < 50) {
        return 'F';
    } else if (finalMark <= 60) {
        return 'C';
    } else if (finalMark <= 75) {
        return 'B';
    } else if (finalMark > 75) {
        return 'A';
    }

}

void printDetails(char name[], float finalMarks, char grade) {

    /* printf("\nName\t\tFinal Marks\t\tGrade\n");
     printf("\n%s\t", name);
     printf("%f\t", finalMarks);
     printf("%c\t\t", grade);*/

    printf("\nName \t\tFinal Marks \tGrade \n%s\t%f\t%c", name, finalMarks, grade);
