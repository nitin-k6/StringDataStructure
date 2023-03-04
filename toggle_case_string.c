#include<stdio.h>
#include<string.h>
#include<conio.h>


int main(){
int i;
char S[]="WelcOmE";
for(i=0;S[i]!='\0';i++){
    if(S[i]>=65 && S[i]<=90){
        S[i]+=32;
    }
    else if(S[i]>='a' && S[i]<=122){
        S[i]-=32;
    }
}
printf("%s",S);
return 0;
}