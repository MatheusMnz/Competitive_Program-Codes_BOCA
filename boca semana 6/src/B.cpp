#include <bits/stdc++.h>

using namespace std;
#define MAX 2147483648

// Verifica o numero em Decimal. Retorna 1 se for igual Palindromo
int numberPalindromeDecimal(int num){
    int aux = num;
    int reverse = 0;
    while(aux != 0){
        reverse = reverse * 10 + aux % 10;
        aux = aux / 10;
    }

    if(reverse == num)
        return 1;
    else
        return 0;
}


bool isKthBitSet(unsigned int x, unsigned int k)
{
    return (x & (1 << (k - 1))) ? true : false;
}

//Verificar se é um palindromo em binário
bool isPalindrome(unsigned int x)
{
    int l = 1; // Initialize left position
    int r = sizeof(unsigned int) * 8; // initialize right position
 
    // One by one compare bits
    while (l < r)
    {
        if (isKthBitSet(x, l) != isKthBitSet(x, r))
            return false;
        l++; r--;
    }
    return true;
}


int main(){
    int n, m1, m2, sum, cont;
    cin >> n;

    for(int i=0; i<n; i++){
        sum = 0; cont = 0;

        // Leio o primeiro intervalo
        scanf("%d %d", &m1, &m2);

        for(int i = m1; i<m2; i++){
            if(isPalindrome(i) == true){
                printf("1");
                if(numberPalindromeDecimal(i)){
                    printf("2");
                    sum += i;
                    cont += 1;
                }
            }
        }
        printf("%d %d\n", sum, cont);
    }
}

