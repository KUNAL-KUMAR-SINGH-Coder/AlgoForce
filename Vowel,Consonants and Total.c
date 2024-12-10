#include <stdio.h>
#include <string.h>

int main()
{   int v=0,c=0,l=0;
	char Name[100];
    printf("Enter Name:");
    scanf("%[^\n]%*c",&Name); //Input Statement gets() can be used too
    for(int i=0;i<strlen(Name);i++){


        if(Name[i]=='a'||Name[i]=='e'||Name[i]=='i'||Name[i]=='o'||Name[i]=='u'||Name[i]=='A'||Name[i]=='E'||Name[i]=='I'||Name[i]=='O'||Name[i]=='U'){ 
            v+=1;
            l+=1;
        }

        else if (Name[i]==' '){
                continue;
        }
        else{
            c+=1;
            l+=1;
        }
    }
    printf("\nTotal Letters: %d",l);
    printf("\nNo of Vowels: %d",v);
    printf("\nNo of Consonants: %d",c);
}