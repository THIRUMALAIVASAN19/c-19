// 		Write a function that counts how many bits are 1 in a number.

#include<stdio.h>
#include<stdint.h>

int main(){
	char count=0;
	uint8_t reg=0x87;
	char size=((sizeof(reg) *8)-1);
 	while(size >=0){
 		if(1 & (reg >> size)){
 			count=count+1;
		 }
	
		 
		 size=size-1;
	 }
	 
	printf("%d",count);
}
