#include<stdio.h>

//Declaration of Function, which will check if input is a Prime Number
void IsPrime(int n);

int main(){
    int n;
    printf("Enter Number Upto which Prime Numbers to be Printed:");   //Input Statement
    scanf("%d",&n);
    for(int i=0;i<=n;i++){   //Put the Function into a loop to check all the numbers upto the input, whethere they are prime or not
        IsPrime(i);
        }
}

void IsPrime(int n){
    if(n<0){                       //If User gives negative NUmber as Input
        printf("Invalid Input");
    }
    if(n==0||n==1||n==2){   // Special Case
        
    }
    else if(n==3){          // Special Case
        printf("%d",n);
        printf(",");
    }
    int f=n/2;
    for(int i=2;i<=f;i++){  //Loop To check whether The Input is Prime or not
        if(n%i==0){
            break;
        }
        else if(i==f){
            printf("%d",n);
            printf(","); //It is to organise the Output
            break;
            }
            
        }
         
    }


