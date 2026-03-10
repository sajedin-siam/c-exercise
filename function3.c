// write a function that prints salam if user is Bangladeshi & Bonjur if the uder is french.
 #include<stdio.h>
 void salam();
 void bonjour();

 int main(){
   printf("Enter F for Franch & B for Bangladeshi:");
char ch;
scanf("%c",&ch);
if (ch=='B')
{
    salam();
}else{
    bonjour();
}

    return 0;
 }
 void salam(){
    printf("AS-salamu alaykum\n");

 }
 void bonjour(){
    printf("Bonjour\n");
 }