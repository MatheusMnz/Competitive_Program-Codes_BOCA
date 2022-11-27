#include <bits/stdc++.h>
using namespace std;


typedef long long int ll;

int main(int argc, char *argv[])
{

	string referencia ;
	string teste;
	int num_teste,cond=1;

	cin>>referencia;
	scanf("%d",&num_teste);

	while(num_teste--){

		cin>>teste;

		referencia.find(teste);


		if(referencia.find(teste)!= string::npos)
			printf("1\n");
		else
			printf("0\n");

		teste.clear();
	}

}