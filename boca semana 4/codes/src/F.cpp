#include <bits/stdc++.h>


int main(int argc, char *argv[])
{
	
    long long unsigned int n_dias,carry1=1,carry2=1,carry3=1,carry4=1,resposta=0;

    scanf("%lld",&n_dias);
    if(n_dias<4)
        printf("%lld\n",1);
    else{
    for(int x=0;x<n_dias-3;x++){
        carry4=carry3;
        carry3=carry1+carry2+carry3;
        carry1=carry2;
        carry2=carry4;
    }

    printf("%lld\n",carry3);
    }
}