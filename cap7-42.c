#include <stdio.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

void justify(char[],int,int);

int main(){
    char name[50];
    int n,num;
    printf("Digite uma palavra");
    gets(name);
    printf("Digite o modo");
    scanf("%d",&n);
    printf("Digite a quantidade");
    scanf("%d",&num);

    justify(name,n,num);

    return 0;
}

void justify(char name[],int modo, int num){
    int tam=strlen(name);

    printf("'");
    if(modo == 0){
        int res = num-tam,i=0;

        for(int i=0;i < tam;i++){
                printf("%c",name[i]);
        }

        while(i < res){
            printf(" ");
            i++;
        }
    }else if(modo == 1){
        int res = (num-tam)/2,i=0;
        
        while(i < res){
            printf(" ");
            i++;
        }
        
        for(i=0;i < tam;i++){
                printf("%c",name[i]);

        }
        i=0;
        while(i < res){
            printf(" ");
            i++;
        }
    }else if(modo == 2){
        int res = num-tam,i=0;

        while(i < res){
            printf(" ");
            i++;
        }
        
        for(int i=0;i < tam;i++){
                printf("%c",name[i]);
        }
    }
    printf("'");
}