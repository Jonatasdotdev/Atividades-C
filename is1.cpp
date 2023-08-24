#include<stdio.h>
main() {
    int T=20, U=10;
    int *R,*S; 
  
    R = &T; 
    S = &U; 
    
    *R +=U; 
    
    (*S)= T + U + *R; 
    
    printf("%d \n\n%d \n\n", T, U);
    return 0;
}
