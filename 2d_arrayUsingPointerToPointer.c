#include<stdio.h>
#include<stdlib.h>

/**
* read_Matrix -- This action take  the followign params and create a matrix using double pointers
and put value into the pointer values
* @param {rows} <int> number of rows
* @param {cols} <int> number of columns
* @return {pointer} <double type>
*/
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

/**
* print_Matrix -- This action takes the following params and print matrix row vise
* @param {rows} <int> number of rows
* @param {cols} <int> number of columns
* @param {mat} <double> pointer to poitner of matrix return by read_Matrix
* @return {void} 
*/
void print_Matrix(int rows ,int cols,double** mat){
   int i=0,j=0;
   for(i=0;i<rows;i++){
     for(j=0;j<cols;j++){
       printf("%.2f\t",mat[i][j]);
}
}
}

/**
* free_Matrix -- This Action free the heap memory 
* @param {rows} <int> number of rows
* @param {mat} <double**> pointer** to matrix
* @return {void} 
*/
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

