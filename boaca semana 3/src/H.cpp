#include <bits/stdc++.h>

int main(int argc, char *argv[])
{
	
double parcela,juros,quantia_alvo,quantia_atual=0.0;
int meses=0;

scanf("%lf %lf %lf",&parcela,&juros,&quantia_alvo);

while(quantia_atual<quantia_alvo){
	quantia_atual+=parcela;
	//printf("antes, quantia at=%0.2f,juros/100 =%0.2f\n",quantia_atual,1.0+juros/100.0);
	quantia_atual*= 1.0 + juros/100.0;
	//printf("meio, quantia at=%0.2f,juros/100 =%0.2f\n",quantia_atual,1.0+juros/100.0);
	meses++;
	//printf("fim, quantia at=%0.2f,quant alvo =%0.2f\n",quantia_atual,quantia_alvo);
}

	//printf(" o valor deu %0.3f , meses =%d \n",quantia_atual,meses);

	if(meses<12){

		printf("%d mes(es)\n",meses);
	}
	else{
		int anos = meses/12;

		if(meses%12 ==0){

			printf("%d ano(s)\n",anos);
		}
		else{
			meses= meses%12;
			printf("%d ano(s) e %d mes(es)\n",anos,meses);
		}


	}



}