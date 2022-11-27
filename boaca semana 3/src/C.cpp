#include <bits/stdc++.h>

int main(int argc, char *argv[])
{
	
int area,flag=0,atual=1;;

scanf("%d",&area);
int teste =1;
atual=teste*teste;
while(atual<=area){
	teste++;
	atual=teste*teste;
	if(atual==area){
		flag=1;
		break;
		}

}
if(atual>area){
	teste--;
	atual=teste*teste;
}



if(flag){
	printf("Quadrado perfeito\n");
	printf("%d\n%d\n",atual,teste);
}
else{
	printf("Nao eh quadrado perfeito\n");
	printf("%d\n%d\n",atual,teste);
}


}