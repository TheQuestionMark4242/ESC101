#include<stdio.h>
#include<math.h>
int check_prime(int num){
    for (int i = 2; i <= sqrt(num); i++){
        if(num%i==0){
            return 0;
        }
    }
    return 1;
}

//Complete the function definitions here
int pairs(int M){
    int n = 0;
    for (int i = 2; i <= (M/2.0);i++){
        if (check_prime(i)){
            if(check_prime(M-i)){
                n++;
            }    
        }
    }
    return n;
}

int main(){
	//Enter your code here
	int N;
	scanf("%d", &N);
	if (pairs(N)){
	    printf("%d", pairs(N));
	}
	else {
	    printf("None");
	}
	return 0;
}
