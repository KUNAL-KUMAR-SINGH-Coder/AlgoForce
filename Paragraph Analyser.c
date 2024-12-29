#include <stdio.h>
#include <string.h>

int main()
{   int v=0,c=0,l=0,w=0;
	char Name[8000];
    printf("Feel free to Enter your thoughts:");
    scanf("%[^\n]%*c",&Name); //Input Statement gets() can be used too
    for(int i=0; i<strlen(Name); i++){


        if(Name[i]=='a'||Name[i]=='e'||Name[i]=='i'||Name[i]=='o'||Name[i]=='u'||Name[i]=='A'||Name[i]=='E'||Name[i]=='I'||Name[i]=='O'||Name[i]=='U'){ 
            v+=1;
            l+=1;
        }

        else if (Name[i]==' '){
            w+=1;
                continue;
        }
        else{
            c+=1;
            l+=1;
        }
    }
    if(strlen(Name)!=0){ //To count the last word 
        w+=1;
    }
    printf("\n---------------------------------------\n");
    printf("Total Words: %d",w);
    printf("\nTotal Letters: %d",l);
    printf("\nNo of Vowels: %d",v);
    printf("\nNo of Consonants: %d",c);
}
