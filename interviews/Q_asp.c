uint8_t Fxxx(uint8_t input) 
{
    uint8_t output=0;
    for (uint8_t i = 0; i < 8; i++) 
    { // 
        if (input & (1 << i)) 
        { // 
            output |= 1 << (7-i);
        }
    }
    return output;
}

/*uint8_t Fxxx(uint8_t input) 
{
    // 5
    // 0 0 0 0 0 1 0 1
    // 
    uint8_t output=0;
    for (uint8_t i = 0; i < 8; i++) 
    { // 
        if (input & (1 << i)) 
        { // 
            output |= 1 << (7-i);
            // 0 | 1 0 0 0 0 0 0 0
            // 1 0 0 0 0 0 0 0
            // 0 0 1 0 0 0 0 0
            // 1 0 1 0 0 0 0 0
        }
    }
}*/
///////////////////////////////////////////////////

int* allocateArray(int size, int value) {
    int arr[size];
    
    for(int i=0; i < size; i++) {
    arr[i]=value;
    }
    return arr;
}

int* allocateArray(int size, int value){
    int *arr = (int*)malloc(size*sizeof(int)); 
    for (int i=0; i < size; i++) {
      arr[i]=value;
    }
    return arr;
}

///////////////////////////////////////////////////
void allocateArray(int **arr, int size, int value) 
{
    *arr = (int*)malloc(size*sizeof(int));
    if(*arr != NULL)
    {
    for (int i=0; i < size; i++) {
        *(*arr+i)=value;
    }
    }
    return arr;
}

/*
Fix to add in above function
    if(*arr != NULL)
*/
//////////////////////////////////////////////////
// function ptr and void ptr
typedef void(*func)();
struct* interface{}

void algo(void* data)
{

}
/////////////////////////////////////////////////
// interrupt ISRsss
gnu
backtrace

int func(a,b)
{
  
}

/////////////////////////////////////////////////
// memory leak
int *arr1 = realloc(*arr, size1);
free(*arr)
malloc(*arr)

/////////////////////////////////////////////////
// 101 binary to decimal in a linked list
int binary_to_dec(test* head)
{
    if(head == NULL)
    {
        printf("List is empty");
        return -1;
    }

    int sum = 0;
    while(head != NULL)
    {
        sum<<=1;
        sum += head->data;
        head=head->next;
    }
    return sum;
}