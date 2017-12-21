#include<stdio.h>
#include<conio.h>
void main()
{
 char letter;
 clrscr();
 printf("enter the value:");
 scanf("%c",&letter);
 if(letter=='A'||letter=='E'||letter=='I'||letter=='O'||letter=='U'||letter=='a'||letter=='e'||letter=='o'||letter=='i'||letter=='u')
 {
  printf("\nthe letter is vowel");
 }
 else
  printf("\nthe letter is consonant");
  getch();
  }
