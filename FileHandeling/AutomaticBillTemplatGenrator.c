
//First create a bill.txt file in same directory.


#include <stdio.h>
#include <string.h>
#include <stdlib.h>


char * replaceWord(const char * str,const char * oldWord, const char * newWord){
    char * resultString;
    int i,count=0;
    int newWordLength = strlen(newWord);
    int oldWordLength = strlen(oldWord);

    for(i=0;str[i] !='\0';i++){
        if(strstr(&str[i],oldWord)== &str[i]){
            count++;

            i=i+oldWordLength-1;
        }
    }

    resultString= (char *)malloc(i +count * (newWordLength-oldWordLength) +1);

    i=0;
    while(*str){
        if(strstr(str,oldWord)==str){
            strcpy(&resultString[i],newWord);
            i+=newWordLength;
            str += oldWordLength;
        }
        else{
            resultString[i]= *str;
            i += 1;
            str += 1;
        }
    }
resultString[i] = '\0';
return resultString;
}

int main ()
{

    FILE * ptr=NULL;
    FILE * ptr2=NULL;
    ptr = fopen("bill.txt","r");
    ptr2 = fopen("genbill.txt","w");

    char str[200];

    fgets(str,200,ptr);

    printf("The bill template was: %s \n",str);

    char * newStr = str;

    newStr =replaceWord(str,"{{item}}","shoes");
    newStr =replaceWord(newStr,"{{outlet}}","myShop");
    newStr =replaceWord(newStr,"{{name}}","atul");

    printf("The actual bill genrated is: %s \n",newStr);

    fprintf(ptr2,"%s",newStr);

    fclose(ptr);
    fclose(ptr2);

    return 0;

}
