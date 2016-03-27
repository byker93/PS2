#include <stdio.h>
#include <stdlib.h>

#include "playfair.h"
#include "bmp.h"

int main(int argc, char **argv) {
    printf("Hello World!\n");
    char *table;
    table = makeTable("Hello");
    
    for (int i=0;i<=sizeof(table)/sizeof(char); i++) {
      printf("%c ", table[i]);
      if (i % 5 == 0) printf("\n");
    }
    return 0;
}
