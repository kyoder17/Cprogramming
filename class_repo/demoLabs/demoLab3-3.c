#include <stdio.h>

int main(void)
{
    int computerScicenceCourses [] = {1003, 1023, 1033, 1063, 1073};
    int myCourse = computerScicenceCourses[1];
    printf("Course = %d \n", myCourse);

    float studentGPAs [] = {2.7, 3.1, 2.9, 4, 3.9, 2.89, 3.55};
    printf("GPA = %f \n" , studentGPAs[3]);
    studentGPAs [1+2] = 3.91;
    printf("GPA = %f \n" , studentGPAs[3]);

    int i =1;
    char cardinalDirections [4] = {0};
    cardinalDirections[0]=78;
    cardinalDirections[i] = 83;
    cardinalDirections[i+i]= 'E';
    cardinalDirections[i+2]='W';
    printf("the directions are %c, %c, %c, %c \n", cardinalDirections[0],cardinalDirections[1],cardinalDirections[2],cardinalDirections[3]);

    char catchPhrae [10] = {76, 101, 103, 101, 111, 46, 46, 46, 46};
    catchPhrae[5] = 100;
    int j=1;
    for (j=0; j<10; j++)
    {
            printf("%c ", catchPhrae[j]);
    }
    return 0;

}