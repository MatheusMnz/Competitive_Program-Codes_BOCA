#include <bits/stdc++.h>


int main(int argc, char *argv[])
{
	
    long long int n_participantes,resposta;

    scanf("%lld",&n_participantes);

    resposta=n_participantes*(n_participantes-1)/2;

    printf("%lld\n",resposta);


}