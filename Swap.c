#include<stdio.h>
int main(){
    int a=10,b=20; //Declaration

    printf("Swap Without Third Variable\n");
    printf("Before Swap\n");
    printf("a:%d\nb:%d\n",a,b);
    
    // Swap Logic
    a=a+b;
    b=a-b;
    a=a-b;
    
    printf("After Swap\n");
    printf("a:%d\nb:%d\n",a,b);
    a=10,b=20; // ReDeclaration 

    printf("----------------------------------------------\n");


    printf("Swap Using Third Variable\n");
    printf("Before Swap\n");
    printf("a:%d\nb:%d\n",a,b);
    
    //Swap Logic
    int c;
    c=a;
    a=b;
    b=c;

    printf("After Swap\n");
    printf("a:%d\nb:%d\n",a,b);

    

}


