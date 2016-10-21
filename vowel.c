#include<stdio.h>
#include<ctype.h>
int main(){
char c;
int isLowercaseVowel,isUppercaseVowel;
do{
printf("enter an alphabet");
scanf("%c",&c);
}while(!salpha(c));
isLowercaseVowel = (c =='a' || c =='e' ||  c =='i'  || c =='o' || c =='u');
isUppercaseVowel = (c=='A' || c =='E' || c =='I' || c =='O' || c =='U');
if(isLowercaseVowel || isUppercaseVowel){
printf("%c is Vowel",c);}
else{
printf("%c is consonant",c);}
return 0;
}

