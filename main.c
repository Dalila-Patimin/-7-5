#include <stdio.h>
int main(void)
{
  int mata[2][3] = {{1,-2, 3},{2, 3,-1}};
  int matb[3][2] = {{2, 1},{1, 3},{-3, 2}};
  int matc[2][2];
  int r, c, v, psum;
  for(r=0; r<2; r++)
    for(c=0; c<2; c++){
      psum = 0;
      for(v=0; v<3; v++)
        psum += mata[r][v] * matb[v][c];
      matc[r][c] = psum;
    }
  printf("The array product is : \n");
  for(r=0; r<2; r++){
    for(c=0; c<2; c++)
      printf("%5d",matc[r][c]);
    printf("\n");
  }
  return 0;
}
