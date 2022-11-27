#include <bits/stdc++.h>


int main(int argc, char *argv[])
{
	
    int ano; float valor_base=2022.0,resultado=0;
    int flag10=0.0,flag20=0.0,flagbi=0.0;
    scanf("%d",&ano);

    if((ano%4==0 && ano%100!=0) || (ano%400 ==0)){

        flagbi=1.0;

    }
    if(ano%10==0){
        flag10=1.0;
    }
    if(ano%20==0)
        flag20=1.0;

    float desconto;
    if(flag10+flag20+flagbi>0.0){
    if((flag10*10 +flag20*20 +flagbi*5)%(flag10+flagbi+flag20)!=0 )
        desconto = (flag10*0.1 +flag20*0.2 +flagbi*0.05 +0.01)/(flag10+flagbi+flag20);
    else {
        desconto = (flag10*0.1 +flag20*0.2 +flagbi*0.05 )/(flag10+flagbi+flag20);
        resultado= (valor_base )*( 1.0 - desconto );}
        
        }
    else
        resultado=valor_base;

    printf("%0.1f\n",resultado);


}