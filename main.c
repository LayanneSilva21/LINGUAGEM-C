#include <stdio.h>
#include <stdlib.h>

void main(){
	
	float num;
	
	int i;
	
	for(i=1; i<=10; i++){
	
	
	printf("Informe um numero: \n");
	
	scanf("%f", &num);
	
	while(num<=0){
		
		printf("Informe um numero maior que zero:\n");
		
		scanf("%f", &num);
	}
	printf("Quadrado: %f \n", num * num);
}

}
