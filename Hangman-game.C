//Hangman-game
#include <stdio.h>
#include <conio.h>
#include <string.h>
main() {
   char fruit[5][20] = {"apple","babana","cherry","orange","strawberry"};
      char show[20],old_guess[100];
      int choice.i,j=0,check=0,guess=0,status=0;
      char guess_word;
      clrscr();
      printf("Hangman game/n");         
      //choice1=apple,choice2=babana,choice3=cherry,choice4=orange,choice5=strawberry
      printf("please select choice 1-5 : ");
      scanf("%d" ,&choice);
      for(i=0;i<strlen(fruit[choice-1]);i++){
         if(fruit[choice-1][i]=='a'    fruit[choice-1][i]=='e'    fruit[choice][i]=='i'      fruit[choice][i]=='o'     fruit[choice][i]=='u'){
            
    
