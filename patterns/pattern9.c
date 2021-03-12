  
#include <stdio.h>

int main() {
  int n,i,j;
    printf("Enter the Size of pattern : ");
  scanf("%d",&n);
  for(i=0;i<n;i++){
  for(j=1;j<=i+1;j++){
    printf("%d ",j);
  }
    printf("\n");
    
  }
    return 0;
}

//OUTPUT

/*
Enter the Size of pattern : 10
1 
1 2 
1 2 3 
1 2 3 4 
1 2 3 4 5 
1 2 3 4 5 6 
1 2 3 4 5 6 7 
1 2 3 4 5 6 7 8 
1 2 3 4 5 6 7 8 9 
1 2 3 4 5 6 7 8 9 10 

*/
