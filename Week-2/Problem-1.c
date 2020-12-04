#include <stdio.h>

int main() {
	int a,b,n,m=-1;
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &n);
    if(a<=b){
	    while(a<=b){
            printf("%d",a);
            a+=n;
            printf(" ");
            m+=1;
        }
        
    }
    else{
        while (a>(b-n)){
            printf("%d",a);
            a-=n;
            printf(" ");
            m+=1;
        }
    }
	printf("\n%d",m);
	return 0;
}
