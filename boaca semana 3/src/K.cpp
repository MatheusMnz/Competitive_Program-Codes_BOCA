#include <bits/stdc++.h>

int MDC(int a, int b){
  int resto;
 
  while(b != 0){
    resto = a % b;
    a = b;
    b = resto;
  }
 
  return a;
}

int main(int argc, char *argv[])
{
	
	int batedoras,engenheiras;
	scanf("%d %d",&batedoras,&engenheiras);

	int div =MDC(batedoras,engenheiras); 
	if(div <2){
		printf("Fica na colmeia\n");
	}
	else{
		printf("%d %d %d\n",batedoras/div,engenheiras/div,div);
	}

}