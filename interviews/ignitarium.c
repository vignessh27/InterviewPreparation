/*
   *
  * *
 * * *
* * * *
*/
int main()
{
  printf("Enter number of lines\n");

  int lines;
  scanf("%d",&lines);
  int j=0;
  for (int i=0; i<lines; i++)
  {
     for(j =0; j < lines - i; j++)
     {
        printf(" ");
     }
     
     for(int k=0; k <= i; k++)
     {
	printf("* ");
     }
     
     printf("\n");  
  }
}

int arr[]={1,2,4,5,3}

void sort_arr(int *arr, int len)
{
  int temp;
  for(int i=0; i < len; i++)
  {
    for(int j=i+1; j < len; j++)
    {
       if(arr[i] > arr[j])
       {
	 temp = arr[j];
	 arr[j] = arr[i];
	 arr[i] = temp;
       }
    }
  }
}

// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< 2nd Round >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> //

#include <stdio.h>

#define SET_BIT(inp, index)\
do\
{\
}\
while(0)

// 000111
// 001000
// 000111
int main()
{
    int inp = 7;
    int index = 2;
    // SET_BIT(input, 3);
    int value_for_set = 0;
    for(int i=0; i<=index; i++)
    {
        printf("iter:%d step0:%d\n", i, value_for_set);
        value_for_set = value_for_set | 1;
        printf("iter:%d step1:%d\n", i, value_for_set);
        if(i < index)
        {
        value_for_set<<=1;
        }
        printf("iter:%d step2:%d\n", i, value_for_set);
    }
    inp = inp & 0;
    inp = inp | value_for_set;
    printf("%d\n",inp);
    
    int a[5] = {1,2,3,4,5};
    int *ptr = (int*)(&a+1);
    printf("%p %p %p", a, &a+1, ptr);
    printf("%d %d", *(a+1), *(ptr-1));
    return 0;
}
