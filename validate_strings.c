#include<stdio.h>
#include<stdlib.h>
#include<string.h>

// Not working
int isvalidate(char *S){
//C does not have boolean data types, and normally uses integers for boolean testing. Zero is used to represent false, and One is used to represent true.
    int i;
    for(i=0;S[i]!='\0';i++){
        if(!(S[i]>=57 &&S[i]<=90) && !(S[i]>=97 && S[i]<=122) && !(S[i]>=0 &&S[i]<=9)){
            return 0;
        }
    }
return 1;
}

int main(){
char *S="67Nitin@KUmar";
if(isvalidate(S)){
printf("String Invalid");
}
else{
    printf("Valid String");
}
}


