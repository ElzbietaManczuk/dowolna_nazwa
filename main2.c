#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int tab[5][5] = {{14, 57, 71, 91, 29},
                   {36, 68, 97, 48, 79},
                   {16, 74, 24, 91, 62},
                   {62, 13, 92, 47, 36},
                   {96, 23, 88, 10, 94}};

  for (int i = 0; i < 5; i++){
    for (int j = 0; j < 5; j++) {
      printf("%d ", tab[i][j]);
    }
    printf("\n");
  }
  return 0;
}
