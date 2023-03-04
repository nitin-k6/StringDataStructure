#include<stdio.h>
#include<string.h>
#include<conio.h>

int main(){
    int i;
    int vcount=0,ccount=0;
    char S[]="How are you";
    
    for(i=0;S[i]!='\0';i++){
            if (S[i] == 'a' || S[i] == 'A' || S[i] == 'e' || S[i] == 'E' || S[i] == 'i' || S[i] == 'I' || S[i] =='o' || S[i]=='O' || S[i] == 'u' || S[i] == 'U'){
                vcount++;
            }
            else if(S[i]== ' '){
                continue;  // skips blank space left
            
            }
            else{
                ccount++;
            }
    }
    printf("No of vowels are:%d\n", vcount);
    printf("No of consonants are:%d\n", ccount);

    return 0;
}