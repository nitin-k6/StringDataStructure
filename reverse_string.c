#include<stdio.h>
#include<string.h>

int main(){
    char s[10];
    printf("Enter the string");
    gets(s);
    printf("the reversed string is:\n");
    printf("%s",strrev(s));
    return 0;

}