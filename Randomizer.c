#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* Define a structue to hold entries*/

  struct entry {
    char getDown[20];
    char blowUps[20];
    char signatures[20];
    
  };
  
  /*Declare an array of structures*/
  
  
  int i;
  
  int main (void)
  {
    
    int size;
    int j,s,b; // randomizers
    
    printf("Number of Moves: ");
    scanf("%d", &size);
    /*Loop to input data for four people. */
    
    struct entry list[size];
    
    for (i = 0; i < size; i++){
      printf("\nEnter Get Down: ");
      scanf(" %[^\n]s ", list[i].getDown);
 
    }
    
     for (i = 0; i < size; i++){
      printf("\nEnter Signature: ");
      scanf(" %[^\n]s ", list[i].signatures);
  
    }
    
        
     for (i = 0; i < size; i++){
      printf("\nEnter Blow Ups: ");
      scanf(" %[^\n]s ", list[i].blowUps);
    }
    
    
    /* Print two blank lines */
    
    
    srand(time(NULL));
    j = (rand() % size);
    s = (rand() % size);
    b = (rand() % size);
    
    puts("*****************************************");
    printf("\nNew Round: %s -> %s -> %s", list[j].getDown, list[s].signatures, list[b].blowUps);
    
    return 0;
  }
