#include <stdio.h>
#include <stdlib.h>
void reader(int* a, int size){
    if(size<1) goto skip;
    for (int j = 0; j<size; j++){
        scanf("%d",(a+j) );
    }
    skip:{}
}
void display(int* a, int size){  
    for (int i = 0; i < size; i++){
        printf("%d ", *(a+i));
    }
    
}
void findNext(int* a, int* ctr, int size){
    while((*(a+(*ctr))== (*(a+(*ctr)+1)))&&(*ctr)<size-1){
        (*ctr)++;
    }
    (*ctr)++;
}
int* merge(int* a, int* b, int m, int n, int* merged_len) {
    int* merged;
    merged = (int*) malloc((m+n)*sizeof(int));
    int c1 = 0, c2 = 0;
    *merged_len = 0;
    while((c1<m)&&(c2<n)){
        if(*(a+c1)>*(b+c2)){
            *(merged+(*merged_len)) = *(b+c2);
            findNext(b,&c2,n);
            (*merged_len)++;
        }
        else if(*(a+c1)<*(b+c2)){
            *(merged+(*merged_len)) = *(a+c1);
            findNext(a,&c1,m);
            (*merged_len)++;        
        }
        else{
            *(merged+(*merged_len)) = *(b+c2);
            findNext(a,&c1,m);
            findNext(b,&c2,n);
            (*merged_len)++;
        }
    }
    if(c1<m){
        while(c1<m){
            *(merged+(*merged_len)) = *(a+c1);
            findNext(a,&c1,m);
            (*merged_len)++;
        }
    }
    if(c2<n){
        while(c2<n){
            *(merged+(*merged_len)) = *(b+c2);
            findNext(b,&c2,n);
            (*merged_len)++;
        }
    }
    return merged;
}

int main() {
	int m, n;
    scanf("%d %d", &m, &n);
    int* a,* b;
    a =(int*) malloc(m*sizeof(int));
    b =(int*) malloc(n*sizeof(int));
    reader(a,m);
    reader(b,n);
    int len = 0;
    int* merged = merge(a, b, m, n, &len);
    printf("%d\n",len);
    display(merged, len);
  
	return 0;
}
