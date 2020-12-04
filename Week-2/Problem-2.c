#include <stdio.h>

int main() {
	int M,N,max=-1,temp;
	scanf("%d",&N);
	scanf("%d",&M);
	while(N>0){
	    scanf("%d",&temp);
	    if((temp<M)&&(temp>max)){
	        max=temp;
	    }
	    N--;
	}
	printf("%d",max);
	return 0;
}
