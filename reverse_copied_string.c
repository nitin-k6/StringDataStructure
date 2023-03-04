//The idea is to transfer the string to another string in a reverse manner
#include<stdio.h>
#include<string.h>

int main(){
int i,j;
char A[]="python";  //It is string of array of character.Then it also becomes mutable(i.e it can be changed)
char B[7];    //It was array of character and now along with the '\0' it becomes string
for(i=0;A[i]!='\0';i++){

}
i=i-1;

for(j=0;i>=0;i--,j++){
B[j]=A[i];
}
B[j]='\0';
printf("The reversed string is:%s",B);
return 0;
}