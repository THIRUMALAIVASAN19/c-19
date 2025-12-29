#include<stdio.h>
#include<stdint.h>


/*
Check bit 3  
If bit 3 is 1  
    Check bit 5  
    If bit 5 is 1  
        Clear bit 3
*/
int main(){
	uint8_t reg=0x28;
	if( reg & (1<<3)){
		if( reg &(1<<5)){
			//reg &= ~(1 << bit_position);
			reg &=~(1<<3);
		}
	}
	printf("%x",reg);
	
}
