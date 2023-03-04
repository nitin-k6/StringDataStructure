#include<stdio.h>
#include<string.h>
#include<conio.h>
// Differemce between upper case and lower case is 32
int main(){
    int i;
char S[]="WELCOME";
for(i=0;S[i]!='\0';i++){
    S[i]+=32;
}
printf("%s",S);
return 0;
}
