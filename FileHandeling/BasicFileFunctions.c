//before writing this code create a file myfile.txt in the same directory as your c program.


#include<stdio.h>

int main(){

    FILE *ptr = NULL;
    ptr = fopen("myfile.txt","a");
    char str[50];
    char c = fgetc(ptr);
    
    printf("the character read was : %C \n ",c);
   
    c= fgetc(ptr);
    printf("the character read was : %C \n ",c);


    fgets(str,20,ptr);

    printf("the String read was : %s \n ",str);
    
    c ='a' ;

    fputc(c,ptr);

    fputs("i am groot ",ptr);

    fclose(ptr);

    return 0;
}
