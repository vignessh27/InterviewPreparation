int* func(int a, int b)
{
   int c = a + b;
   return &c;
} 
////////////////////////////

int func(int a, int b)
{
  return a + b;
}

////////////////////////////
int func(int a, int b)
{
    if ((a>0 && b >0) && (a+b) < 0)
    {
        printf("overflow will happen");
    }	
 
    int c = a + b;
 
    return c;
}

struct Node
{
  int data;
  struct Node* next;
};

parent.h
#ifndef parent
#define parent
//content
int a;
#endif

#define MACRO_FUNC(a,b)\
do\
{\
  int c = a+b;\
  c = c*10;\
} while(0)


MACRO_FUNC(1,2);

child.h

#include parent.h

child2.h

#include parent.h

#include child.h -> parent.h
#include child2.h->

src.c

child.h

// 3->1->2
void add_before_head(struct Node** head, struct Node** new)
{

   if(head == NULL)
   {
      *head = *new;
   }
 
   *new->next = *head;
   *head = *new;
}

void swap(int **x,int*y)
{
//2000 1000
  int temp = *x;
  *x = *y;
  *y= temp;
  x = other_pointer;
// x 3000
}


///////////////////////////////////////////////////////////////


float compute_power(int x, int n)
{
   int pow = x;
   if( n > 0)
   {
      for(int i = 0; i < n; i++)
      {
        pow*=pow; 
      }
   }
   else
   {
      for(int i = -1; i > n; i--)
      {
        pow*=pow;	 
      }
      pow = 1/pow;
   }
   return pow;
}

int add(int, int)
int mul(int, int)

typedef int(*funct_ptr)(int,int)

struct data
{
  funct_ptr;
}

struct a
{
int a;
char b;
};

union a{
int a;
char b;
}

void check_endian()
{
   int num = 0x1;
   char *ptr = (char*)num;
   if(*ptr = )
   {

   }
}

// RAM
// MAC

// INP, 1
// INP
// 0
// INP
// INP

// INP1, INP2
// INP1, 1
// 0
// inp1
// INP2, 1
// inp2
// inp1 + inp2

// MAC

int count_no_set_bits(int inp)
{
   int no_of_bits = sizeof(int)*8;
   int count = 0;

// 2048   
while(inp > 0)
{
         
   if(inp & 1)
   {
     count++;
   }

   inp>>=1;
}
  return count;
}

