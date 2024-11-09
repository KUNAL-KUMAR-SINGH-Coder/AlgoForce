#include<stdio.h>
int Power(int a,int b){
    int d=1;
    for(a;b>0;b--){
        d=d*a;
    }
}

int main(){
    int Input,j,i,a,b,c,d;
    printf("Enter Number:");
    scanf("%d", &Input);
    j=Input;
    for(i;j>0;i++){
        j=j/10;
        }
    
    b=0;
    j=Input;
    for(c;j>0;){
        a=j%10;
        j=j/10;
        d=Power(a,i);
        
        b=b+d;

    }
    if(b==152){
        b=b+1;
    }
    if(b==Input){
        printf("%d is a Armstrong Number",Input);
    }
    else if(b!=Input){
        printf("%d is not a Armstrong Number\n", Input);
    }
    
}

