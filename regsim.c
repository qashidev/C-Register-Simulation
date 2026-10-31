#include <stdio.h>
#include <stdbool.h>

int main(void){
  unsigned int r1 = 100; int v, choice;

  while (true){
    printf("\n1. Load a value\n");
    printf("2. Add a value\n");
    printf("3. Subtract a value\n");
    printf("4. Display register\n");
    printf("5. Reset register\n");
    printf("6. Exit\n");

    v = 0;
    printf("\n> "); scanf("%d",&choice);

    switch (choice){
      case 1: //load
        do {
          printf("\nEnter value (0-255)\n> ");
          scanf("%d",&v);
        } while (v < 0 || v > 255);
        r1 = v; printf("\nR1: %u\n",r1);
        break;

      case 2: // add
        do {
          printf("\nEnter value (0-255)\n> ");
          scanf("%d",&v);
        } while (v < 0 && v > 255);

        r1 = (r1 + v) % 256;
        printf("\n%u\n", r1); break;

       case 3: // sub
         do {
           printf("\nEnter value (0-255)\n> ");
           scanf("%d",&v);
         } while (v < 0 && v > 255);

         r1 = (r1 + 256 - v) % 256;
         printf("\nR1: %u\n",r1); break;

       case 4: // display
         printf("\nR1: %u\n", r1);
         for (int place = 128, bit; place >= 1 ;place /= 2){
           bit = (r1 / place) % 2;
           printf("%d",bit);
         }
         printf("\n"); break;
       case 5: // reset
         r1 = 0; printf("\n%u\n",r1); break;
       case 6: // exit
         printf("Program Executing");
         return 0;
       default:
         printf("Invalid Option, try again.\n");
    }
  }
  return 0;
}
