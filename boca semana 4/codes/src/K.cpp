#include <bits/stdc++.h>


int main(int argc, char *argv[])
{
	
    long long int n_participantes,p_selecionados,q_finalistas,resposta,cabos,sargentos;

    scanf("%lld",&n_participantes);
    p_selecionados= (n_participantes*63)/100;
    q_finalistas = (p_selecionados*80)/100;
    cabos= (q_finalistas*30)/100;
    sargentos = (q_finalistas*5)/100;

    resposta= tgamma(cabos+sargentos+1)/(tgamma(cabos+sargentos-8+1));
    if(resposta%2!=0){
        resposta++;
    }
    printf("[%lld,%lld,%lld]\n",p_selecionados,q_finalistas,resposta);


}