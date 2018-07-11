#include <stdio.h>

int main(void)
{
    int studentAge[12]={0};
    studentAge[0] = 30;
    studentAge[1] = 25;
    studentAge[2] = 23;
    studentAge[3] = 29;
    studentAge[4] = 27;
    studentAge[5] = 25;
    studentAge[6] = 29;
    studentAge[7] = 25;
    studentAge[8] = 26;
    studentAge[9] = 28;    
    studentAge[10] = 27; 
    studentAge[11] = 25;   
   
    int j=1;
    for (j=0; j<12; j++)
    {
            printf("%d ", studentAge[j]);
    }
    printf("\n");
    char myPhrase[] = {'\n', 'b', 'l', 'o', 'o', 'd', '\n', 'f', 'o', 'r', '\n', 't', 'h', 'e', '\n', 'b', 'l', 'o', 'o', 'd', '\n', 'g', 'o', 'd', '\n', '\0'};

    int k=1;
    for (k=0; k<26; k++)
    {
            printf("%c ", myPhrase[k]);
    }

}