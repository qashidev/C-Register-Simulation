#include <stdio.h>
#include <stdbool.h>

void menu(const unsigned int *r1, const unsigned int *r2);
void load8(unsigned int *reg, unsigned int value);
void add8(unsigned int *dest, unsigned int value);
void sub8(unsigned int *dest, unsigned int value);
void swap8(unsigned int *a, unsigned int *b);
void dreg(const unsigned int *reg);
void inputreg(unsigned int *a);

int main(void){
  unsigned int r1 = 0, r2 = 0, v = 0;
  int choice;

  while (true){
    menu(&r1, &r2); printf("\n> ");
    if (scanf("%d",&choice) != 1){
      printf("\nEnter a valid option next time\n");
      return 1;
    }

    switch (choice){
      case 1: //load r1
        inputreg(&v);
        load8(&r1,v);break;

      case 2: // load r2
        inputreg(&v);
        load8(&r2,v); break;

       case 3: // add r2 to r1
         add8(&r1,r2);
         break;

       case 4: // sub r2 from r1
         sub8(&r1,r2);
         break;

       case 5: // swap r1 in r2
         load8(&r2, r1);
         break;
       case 6: // swap r1 in r2
          swap8(&r2,&r1); break;

       case 7: // display regs
         dreg(&r1); dreg(&r2);
         break;

       case 8: // reset
         load8(&r1, 0); load8(&r2, 0);
         break;

       case 9: // exit
         printf("Program Exiting\n");
         return 0;

       default:
         printf("Invalid Option, try again.\n");
    }
  }
  return 0;
}

void inputreg(unsigned int *a){
    int b = 0;
    do {
        printf("\nEnter value (0-255)\n> ");
        scanf("%d", &b);
    } while (b < 0 || b > 255);
    *a = b;
}

void load8(unsigned int *r, unsigned int v){
  *r = v; 
  printf("\n%u\n\n\n",*r);
}

void add8(unsigned int *d, unsigned int v){
  *d = (*d + v) % 256;
}

void sub8(unsigned int *d, unsigned int v){
  *d = (*d + 256 - v) % 256;
}

void swap8(unsigned int *a, unsigned int *b){
  unsigned int x = *a;
  *a = *b; *b = x;
}

void dreg(const unsigned int *reg){
  printf("%u : ",*reg); unsigned int x = *reg;
  for (int y = 128, bit; y >= 1; y /= 2){
    bit = (x / y) % 2;
    printf("%d",bit);
  } printf("\n\n\n");
}


void menu(const unsigned int *r1, const unsigned int *r2){
  printf("R1 = %u : R2 = %u\n", *r1, *r2);
  printf("\n1. Load A                "); printf("2. Load B\n");
  printf("3. ADD                   "); printf("4. SUB\n");
  printf("5. MOV                   "); printf("6. SWAP\n");
  printf("7. Display Registers     "); printf("8. Reset Registers\n");
  printf("9. Exit\n");
}
