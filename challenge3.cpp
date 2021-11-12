#include<stdio.h>


int main(){
	
	float M,metre;
	
	printf("donner la distance en metre:");
	scanf (	"%f", &metre);
	
    M = metre/1609;
    
    printf("distance en mile est : %f",M);
    
    return(0);
    
	
}
