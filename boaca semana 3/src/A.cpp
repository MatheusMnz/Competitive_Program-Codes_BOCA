#include <bits/stdc++.h>

int main(int argc, char *argv[])
{
	
int N,M,flag=0,i,troca;
std::vector<int> primos;
int carry=2;

scanf("%d %d",&N,&M);

if(N<M){
	N++;
	while(N<M){
		flag=1;
		if(N==0||N==1)
			flag=0;

		for(i=2;i<=N/2;i++){
			if(N%i==0){
				flag=0;
				break;
				}
		}

		if(flag)
			primos.push_back(N);

		N++;

	}
		for(int x=0;x<primos.size();x++){
		
		printf("%d ",primos[x]);

		}
		if(primos.size()==0)
			printf("0");
			
		printf("\n");
		
	}	
	else{	
		M++;
	while(M<N){
		flag=1;
		if(M==0||M==1)
			flag=0;

		for(i=2;i<=M/2;i++){
			if(M%i==0){
				flag=0;
				break;
				}
		}

		if(flag)
			primos.push_back(M);

		M++;

	}

	for(int x=primos.size()-1;x>=0;x--){
		
		printf("%d ",primos[x]);
	}
	if(primos.size()==0)
		printf("0");

		printf("\n");

	
	}


}