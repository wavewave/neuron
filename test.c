#include <stdlib.h>
#include <stdio.h>

void print(  int* c )
{
  for( int i = 0 ; i < 10 ; i++ ) {
    for( int j = 0 ; j < 10 ; j++ ) {
      printf("%d ", c[10*i+j]);
    }
    printf("\n");
  }

}

void neuron ( int *a, int *b )
{

  // int a[10][10];
  // int b[10][10];
  int c[100]; 
  
  for( int i = 0 ; i < 10 ; i++ ) {
    for( int j =0 ;  j < 10 ; j++ ) {
      c[10*i+j] = 0 ; 
      for( int k = 0 ;  k < 10 ; k++) {
        c[10*i+j] += a[10*i+k]*b[10*k+j];
      }
    }
  }
  print( c );
}

int main( int argc, char** argv )
{
  int a[10][10], b[10][10];
  
  for( int i = 0 ; i< 10 ;i++ ) {
    for( int j = 0 ; j < 10 ; j++ ) {
      a[i][j] = rand();
      b[i][j] = rand();
    }
  }

  neuron( (int*)a, (int*)b) ;


  printf("Hello there.\n"); 
}
