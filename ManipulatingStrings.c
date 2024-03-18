#include <stdio.h>
int main(void){
    //this prints the proper nouns in the sentence
    const char* arr = "HelLo iM Jack and You ";
    char wordarr[10];
    int i;
    int j=0;
    while(arr[j]!='\0'){
        i=0;
        while(arr[j]!=' '){
            wordarr[i]=arr[j];
            i++;
            j++;
        }
        if(wordarr[0]>='A' && wordarr[0]<='Z'){
            for(int k=0; k<i; k++){
                printf("%c", wordarr[k]);
                wordarr[k]='!';
            }
            printf("\n");
        }
        j++;
    }
