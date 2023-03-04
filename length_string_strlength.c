#include<stdio.h>
#include<string.h>

int main(){
   char s[10];
   int i,length;
   printf("Enter string\n");
   gets(s);

   length=strlen(s);  // In c++ .length() or .size() is used while in c strlen() is used.
   printf("%d",length);
   return 0;
}