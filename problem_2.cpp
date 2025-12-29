/*
Write a function:

Return 1 if exactly one bit is set in a number, else return 0.
*/

#include<stdio.h>
#include<stdint.h>


/*
int is_one_bit(uint8_t reg)
{
    return (reg != 0) && ((reg & (reg - 1)) == 0);
}
*/
int bit(uint8_t reg);

int main()
{
    unsigned int temp;
    uint8_t reg;
    int result;

    printf("Enter register value (hex): ");
    scanf("%x", &temp);
    reg = temp;

    result = bit(reg);

    printf("%d", result);   // 1 or 0
}

int bit(uint8_t reg)
{
    int count = 0;
    int size = (sizeof(reg) * 8) - 1;   // 7

    while(size >= 0)
    {
        if( (reg >> size) & 1 )
        {
            count++;
        }
        size--;
    }

    if(count == 1)
        return 1;
    else
        return 0;
}

