#include<stdio.h>
#include<string.h>


int main(){
int i,j,temp;
char A[]="python";
for(i=0;A[i]!='\0';i++){

}
i=i-1;
for(j=0;j<i;j++,i--){
temp=A[j];
A[j]=A[i];
A[i]=temp;
}
printf("The reverse string is :%s",A);
return 0;
}
