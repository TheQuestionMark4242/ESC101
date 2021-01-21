#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAXLINE 100
int isBetween(char c){                                                                 //Check if char is between d and s
    if (((c>='d')&&(c<='s'))||((c>='D')&&(c<='S'))){
        return 1;
    }
    else return 0;
}

void swap(char *a, char *b){                                                           //Character swapper standard
    char temp;
    temp =*a;
    *a = *b;
    *b = temp;
}

void read(char *c, int *i){                                                            //Read string
    char t = getchar();
    *i = 0;
    while(t!=EOF){
        *(c+(*i)) = t;
        (*i)++;
        t = getchar();
    }
}
void rev(char *c, int N ){                                                              //Interesting reverse   
    if (N>1){
        if (isBetween(*(c))&&isBetween(*(c+N-1))){
            swap(c, c+N-1);
        }
        rev(c+1,N-2);
    }
}
int main(){                                                                             //Implement
    char c[MAXLINE];
    int N;
    read(c,&N);
    rev(c,N);
    for(int j = 0; j<N;j++){
        printf("%c",c[j]);
    }
    return 0;
}
