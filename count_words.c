#include<stdio.h>
#include<string.h>
#include<conio.h>

int main(){
    char S[]="How are      you";
    int i,word;
for(i=0;S[i]!='\0';i++){
    if(S[i]==' ' && S[i-1]!=' '){ //S[i-1]!= ' ' will take are of wide blank space (i.e will consider wide long space as oe only)
        word++;
    }
}
printf("No of words are : %d\n", word+1);
return 0;
}