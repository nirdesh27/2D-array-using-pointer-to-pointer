#include<stdio.h>
#include<stdlib.h>

double  ** read_Matrix(int rows,int cols){
    int i=0;int j=0;;
    double ** mat=(double**)malloc(rows*sizeof(double*));
    for(i=0;i<rows;i++){
    mat[i]=(double*)malloc(cols*sizeof(double));
}
  for(i=0;i<rows;i++){
     for(j=0;j<cols;j++){
           scanf("%Lf",&mat[i][j]);
}
}
return mat;
}

void print_Matrix(int rows ,int cols,double** mat){
   int i=0,j=0;
   for(i=0;i<rows;i++){
     for(j=0;j<cols;j++){
       printf("%.2f\t",mat[i][j]);
}
}
}

void free_Matrix(int rows,double** mat){
 int i=0;
  for(i=0;i<rows;i++){free(mat[i]);}
    free(mat);
}

int main(){

    double** matrix;
    int rows,cols;
    printf("matrix\n");
    printf("enter numbers of rows and cols\n");
    scanf("%d %d",&rows,&cols);
    matrix=read_Matrix(rows,cols);
    printf("your matrix is..\n");
    print_Matrix(rows,cols,matrix);
    free_Matrix(rows,matrix);
return 0;

}

