/*In C programming, the collection of characters is stored in the form of arrays. This is also supported in C++ programming. Hence it's called C-strings.
C-strings are arrays of type char terminated with null character, that is, \0 (ASCII value of null character is 0).*/


#include<stdio.h>

int main(){
    int i;
    char S[]="Nitin kumar";
     for (i=0; S[i]!='\0'; i++){}
     //C-strings are simply implemented as a char array which is terminated by a null ...
        printf("The length of the string is %d",i);

     return 0;

}