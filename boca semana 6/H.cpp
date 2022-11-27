#include <bits/stdc++.h>
using namespace std;


typedef long long int ll;

int main(int argc, char *argv[])
{

	int n_entr,carry;
	multiset<int> peixes;
	set<int> tam_peixe; 
	vector<int> batata;


	while(scanf("%d",&carry)!= EOF){

		peixes.insert(carry);
		tam_peixe.insert(carry);

	}

	for(auto x :tam_peixe){
		batata.push_back(x);
	}

	for(int z=batata.size()-1;z>=0;z--){

		printf("%d %d\n",batata[z],peixes.count(batata[z]));

	}

}