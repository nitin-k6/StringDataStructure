#include<stdio.h>
#include<string.h>

int main(){
int i,c=0;
char A[20]="Nitin";
char B[20]="nitin";

if(strlen(A)==strlen(B)){
    for(i=0;A[i]!='\0';i++){
      if(A[i]==B[i])
        c++;
        // on putting else {break} for strings Nitin and nitin  it showing strings are equal and if break not used then its howing strings are not equal
    }
    if(c==i)
        printf("Strings are equal\n");

    else
        printf("Strings are not equal");

    
}
else{
    printf("Strings are not equal");
}
return 0;

}