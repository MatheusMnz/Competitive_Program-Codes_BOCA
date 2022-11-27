#include <bits/stdc++.h>


int main(int argc, char *argv[])
{
	
int criancas,marcas,carry,total=0;
std::vector<int> doces;

scanf("%d %d",&criancas,&marcas);

for(int x=0;x<marcas;x++){

	scanf("%d",&carry);
	//doces.push_back(carry);
	total+=carry;
}

printf("%d\n",total*criancas);

}