#include <bits/stdc++.h>
using namespace std;


int main(int argc, char *argv[])
{

	int num_pessoas=1,carry_time,resposta=0;
	vector<int> time_pessoas;

	while(1){

		scanf("%d",&num_pessoas);
		resposta=0;
		if(num_pessoas==0){
			break;
		}

		for(int x=0;x<num_pessoas;x++){

			scanf("%d",&carry_time);

			time_pessoas.push_back(carry_time);

		}
		resposta=10;

		for(int x=0;x<num_pessoas-1;x++){

			if(time_pessoas[x+1]-time_pessoas[x]>10)
				resposta+=10;
			else
				resposta+=time_pessoas[x+1]-time_pessoas[x];

		}
		time_pessoas.clear();

		printf("%d\n",resposta);

	}





}