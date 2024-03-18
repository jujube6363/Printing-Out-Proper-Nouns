#include <stdio.h>
int main(void){
    //this prints the proper nouns in the sentence
    /*const char* arr = "HelLo iM Jack and You ";
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
    }*/
    /*char* str = "abcde";
    printf("before: %s\n", str);
    str[1] = 'g';
    printf("after: %c\n", str[1]);*/
    int i=0;
    int j=0;
    int counter=0;
    int letters;
    const char* str1 = "hello";
    const char* str2 = "hello";
    for(int k=0; str1[k]!='\0'; k++){
        letters++;
    }
    while(str1[i]!='\0'&&str2[j]!='\0'){
        if(str1[i]==str2[j]){
            counter++;
            i++;
        }
        j++;
    }
    if(counter==letters){
        printf("1"); //prints 1 if the character string IS a subsequence of another string
    }
    else{
        printf("0"); //prints 0 if the character string IS a subsequence of another string
    }
}