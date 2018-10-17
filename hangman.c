# hangman

#include<stdio.h>
#include<stdlib.h>
#include <string.h>

int main() {
  
   char letter; 
   char magicWord[] = "coding";
   
   int tries = 6;
   int i; //iterate through magicWord
   int wordLen;

   wordLen = strlen(magicWord);
   char currWord[wordLen];
   
  printf("Welcome to hangman! Try to guess the magic word in 6 tries!\n");
   printf("\n");
   //printf("You've entered the letter %c\n", letter);
   for(i =0; i < wordLen; i++){
     currWord[i] = '*';
   }
  
   while(tries != 0){
     printf("enter a letter: ");
     scanf("%c", letter);
    for(i =0; i < wordLen; i++) {
      if(letter == magicWord[i]){
        //change * to letter in currWord
        currWord[i] = letter;
      }else{
        //if word didnt change at all, decrement tries
        tries--;
      }
   } 
