/*
References:
i)  https://leetcode.com/discuss/interview-question/3695233/all-types-of-patterns-for-bits-manipulations-and-how-to-use-it
*/
#include <stdio.h>
#include <stdlib.h>

unsigned int rangeToggle(unsigned int num, unsigned int i , unsigned int j)
{
    // i-2 j-4
    // input - > 00001000 -> 8
    // output -> 00010100 -> 20
    // j -i = 2
    // 1 << j - i -> 00000100
    // 1 << (j - i) + 1 -> 00001000
    // (1 << (j - i) + 1) -1 -> 00000111
    // ((1 << (j - i) + 1) -1) << i -> 00011100
    // mask  -> 00011100
    // 8     -> 00001000
    // result-> 00010100
    printf("1 << j - i :%u\n", 1 << j - i);
    printf("1 << (j - i) + 1 : %u\n", 1 << (j - i) + 1);
    printf("(1 << (j - i) + 1) -1: %u\n",((1<<(j-i)+1)-1));
    printf("((1 << (j - i) + 1) -1) << i: %u\n", ((1<<(j-i)+1)-1)<<i);
    return num ^ ((1<<(j-i)+1)-1)<<i;
}

int toggle_bits(int num, int l, int h)
{
    int mask = ((1<<(l-1))-1) ^ ((1<<h)-1);
    printf("\ninside function mask:%d\n",mask);
    num = num ^ mask;
    return num;
}

unsigned int set_bit(unsigned int num, unsigned int pos)
{
    return num | 1 << pos;
}

unsigned int unset_bit(unsigned int num, unsigned int pos)
{
    return num & ~(1 << pos);
}

bool is_pow_two(unsigned int num)
{
    bool pow_two = true;
    if(num & (num -1))
    {
        pow_two = false;
    }

    return pow_two;
}

int set_bits_count(unsigned int num)
{
    int count = 0;
    while(num)
    {
        count++;
        num &= (num -1); 
    }

    return count;
}

void update_array(int **arr, int size)
{
    for(int i=0; i < size; i++)
    {
        (*arr)[i] = i;
    }
}

void create_and_update(int **arr, int size)
{
    *arr = (int*) malloc(sizeof(int) * size);
    if(*arr != NULL)
    {
        printf("malloc returned address %p\n", *arr);
        for(int i=0; i < size; i++)
        {
            *(*arr+i) = 1;
        }
    }
}

int main()
{
    unsigned int i = 2;
    unsigned int j = 4;
    // printf("%d\n", ((1<<(j-i)+1)-1)<<i);
    printf("rangeToggle for 8:%d\n", rangeToggle(8,1,3));
    // printf("cus for 8:%d\n", toggle_bits(8,2,4));
    printf("rangeToggle for 245:%d\n", rangeToggle(245,4,7));
    printf("unset 1st bit in 2:%u\n", unset_bit(2,1));
    printf("32 is power of 2: %d\n", is_pow_two(32));
    printf("number of set bits in %d is: %d", 5, set_bits_count(5));

    int a[4] = {2,3,5};
    int *ar = a;

    update_array(&ar, 4);
    printf("Updated array:");
    for(int i=0; i<4; i++)
    {
        printf("%d",a[i]);
    }

    printf("\n######################\n");
    int **ptr = (int**)malloc(sizeof(int*));
    create_and_update(ptr, 4);
    for(int i=0; i<4; i++)
    {
        printf("%d",*(*ptr+i));
    }
    return 0;
}