#include <stdio.h>
#include <string.h>
int main(){
    //Exercise 1
    char name[50];
    printf("Welcome USER!\n");
    printf("Please Enter Name:");
    scanf("%49s", name);

    if(strcmp(name, "Shikuambi") == 0){
        printf("Hello Mr Shikuambi!\n");
    }else{
        printf("bye\n");
    }
    return 0;
 //Exercise 2
}