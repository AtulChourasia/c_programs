  
#include <stdio.h>

int main() {
  int n,i,j;
    printf("Enter the Size of pattern : ");
  scanf("%d",&n);
  for(i=1;i<n+1;i++){
  for(j=1;j<=i;j++){
    printf("%d ",i);
  }
    printf("\n");
    
  }
    return 0;
}


//OUTPUT

/*

Enter the Size of pattern : 5
1 
2 2 
3 3 3 
4 4 4 4 
5 5 5 5 5 

*/
