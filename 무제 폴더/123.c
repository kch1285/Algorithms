#include <stdio.h>
#include <stdlib.h>

void printMatrix(int, int, double**);

int main(void) {
  // take n by m matrix
  int n, m;
  double tmp;
  scanf("%d %d", &n, &m);
  double **matrix = (double**)malloc(sizeof(double*) * n);
  double **matrix_i = (double**)malloc(sizeof(double*) * n);

  for(int i=0; i<n; i++){
    matrix[i] = (double*)malloc(sizeof(double) * m);
    matrix_i[i] = (double*)malloc(sizeof(double) * m);
    for(int j=0; j<m; j++){
      scanf("%lf", &matrix[i][j]);
      if(i==j)
        matrix_i[i][j] = 1.0;
    }
  }
  // your codes here
  for(int i=0;i<n-1;i++){
    for(int j=i+1;j<n;j++){
      tmp = matrix[j][i] / matrix[i][i];
      for(int k=0;k<m;k++){
        matrix[j][k] = matrix[j][k] - matrix[i][k]*tmp;
        matrix_i[j][k] = matrix_i[j][k] - matrix_i[i][k]*tmp;
      }
    }
  }
  
  for(int i=0;i<n;i++){
    tmp = matrix[i][i];
    for(int j=0;j<m;j++){
      matrix[i][j] /= tmp;
      matrix_i[i][j] /= tmp;
    }
  }
  
  for(int i=n-1;i>0;i--){
    for(int j=i-1;j>=0;j--){
      tmp = matrix[j][i] / matrix[i][i];
      printf("%lf\n", tmp);
      for(int k=m-1;k>=0;k--){
        matrix[j][k] = matrix[j][k] - matrix[i][k]*tmp;
        matrix_i[j][k] = matrix_i[j][k] - matrix_i[i][k]*tmp;
      }
    }
  }
  
  printMatrix(n, m, matrix);
  printMatrix(n, m, matrix_i);


  // de-allocate the memory
  for(int i=0; i<n; i++){
    free(matrix[i]);
  }
  free(matrix);
  return 0;
}

void printMatrix(int n, int m, double **matrix){
  for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
      printf("%lf ", matrix[i][j]);
    }
    printf("\n");
  }
}