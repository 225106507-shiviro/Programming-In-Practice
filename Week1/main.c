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
 float total=0.0;
 char choice;
 float amount;

 while (1){
    printf("Enter airtime amount (or enter 'e' to exit): ");
    if(scanf("%f", &amount) == 1){
        total = total + amount;
        printf("Total airtime amount: %.2f\n", total);
        scanf("%c", &choice);
        if(choice == 'e'){
            break;
        }else{
            printf("Invalid input. Please enter a valid amount or 'e' to exit.\n");
        }
    }
 }
 return 0;
}