#include <bits/stdc++.h>
using namespace std;
#define MAX 2147483648

int IsPrime(unsigned int number) { 
    	if (number <= 1) 
            return 0; // se o numero for menor ou igual a 1 então nao é primo.
    	unsigned int i;
	
    	for (i = 2;  i * i <= number; i++) {
        	if (number % i == 0) return 0;
    	}
    	return 1;
}


int main(){
    int flag = 0;
    long long int n, b_n, a_n;
    cin >> n;

    if(IsPrime(n))
        printf("mensagem falsa\n");
    else{
        for(long long int i=0; i<=MAX; i++){
            b_n = i - 1;
            a_n = i + 1; 

            // Vou ter 3 números
            if( i * b_n * a_n == n){
                printf("%lld %lld %lld\n", b_n, i, a_n);
                flag = 1;
                break;
            }

            if( i * b_n * a_n > n){
                break;
            }

        }
        if(flag == 0) 
            printf("mensagem falsa\n");
        }


}

