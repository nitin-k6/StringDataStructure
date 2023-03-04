#include<stdio.h>
#include<conio.h>
#include<string.h>

void count_vowels_consonants(char *S){
 int i;
    int vcount=0,ccount=0;
    //The fundamental difference is that in one char* you are assigning it to a pointer, which is a variable. In char[] you are assigning it to an array which is not a variable.
    for(i=0;S[i]!='\0';i++){
            if (S[i] == 'a' || S[i] == 'A' || S[i] == 'e' || S[i] == 'E' || S[i] == 'i' || S[i] == 'I' || S[i] =='o' || S[i]=='O' || S[i] == 'u' || S[i] == 'U'){
                vcount++;
            }
            else if(S[i]== ' '){
                continue; 
            
            }
            else{
                ccount++;
            }
    }
    printf("No of vowels are:%d\n",vcount);
    printf("No of consonants are:%d\n",ccount);

}

int main(){
    
    char *S="How are you";  //C uses char type to store characters and letters.
    count_vowels_consonants(S);
    return 0;

}


