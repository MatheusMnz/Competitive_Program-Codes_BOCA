#include <bits/stdc++.h>

typedef long long int ll;
int main(int argc, char *argv[])
{
	
    
    ll n_perg,n_alter;
    double resposta;

    scanf("%d %d",&n_alter,&n_perg);

    resposta=100.0/pow(n_alter,n_perg);

    printf("%0.6f",resposta);
    printf("%%\n");


}
/*
#include <bits/stdc++.h>

typedef long long unsigned int ll;
int main(int argc, char *argv[])
{
	
    
    ll t_senha,resposta=7290;

    scanf("%lld",&t_senha);

    if(t_senha<20){
        for(int x=0;x<t_senha-4;x++)
            resposta*=9;

        printf("%lld\n",resposta);
    }
    else{
        printf("13508517176729920890\n");
    }


}
*/