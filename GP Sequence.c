#include<stdio.h>
#include<math.h>

int Print_Sequence(int N); //Function Declaration
int Power(int x,int y);

int main(){
    int N;
    printf("Enter Number of Terms of The Series To be Printed:"); //Input and Function Call Statements
    scanf("%d",&N);
    Print_Sequence(N);
    
    return 0;

}


// Self Declared Power Function
int Power(int x, int y){  
    int a=1;
    if(y==0){
        return 1;
    }
    for(int i=1;i<=y;i++){
        a*=x;
    }
    return a;
}


//Sequence Generation Logic 
int Print_Sequence(int N){
    for(int i=1;i<=N;i++){
        int T;
        T=Power(2,i-1);

        printf("%d",T);
        if(i<N){
            printf(","); //To showcase the Output in and ordered manner
        
        }

    }
}