#include<stdio.h>
int Captain_America(int X, int I){
    //I indicates identity of Avenger, take 0=Hawkeye(O for lameness) & 1=BW
    if (I){
        return is_palindrome(X);
    }
    else{
        return transform(X);
        
    }
}
int is_palindrome(int num){
    int N = num, M = 0;
    while (N){
        M*=10;
        M+=(N%10);
        N/=10;
    }
    N = num;
    return (M==N);
}
int transform(int num){
    int N=num, M = 0, changes = 0;
    while (N){
        M*=10;
        M+=(N%10);
        N/=10;
    }
    N=num;
    while(N>0){
        if (N%10!=M%10){
            changes++;   
        }
        N=N/10;
        M=M/10;
    }
    changes=changes/2; //Note changes will always be even 
    return changes;
}
int main()
{
    int A, B;
    scanf("%d %d", &A, &B);
    printf("%d %d", Captain_America(A,1), Captain_America(B,0));
    return 0;
}
