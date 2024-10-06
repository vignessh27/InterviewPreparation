#include <stdio.h>
#include <stdlib.h>

typedef struct test
{
    int data;
    struct test* next;
}test;

void traverse(test* head)
{
    printf("########traversing node########\n");
    if(head == NULL)
    {
        printf("List is empty\n");
        return;
    }
    do
    {
        printf("%d ",head->data);
        head = head->next;
    } while(head != NULL);
    printf("\n");
}

test* add_node(test* head, test* node)
{
    do
    {
        if(head == NULL)
        {
            printf("head NULL\n");
            head = node;
            break;
        }

        node->next = head;
        head = node;
    } while(0);

    return head;
}

test* create_node(int data)
{
    test *node = (test*)malloc(sizeof(test));
    node->data = data;
    node->next = NULL;

    return node;
}

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

test* reverse(test* head)
{
    if(head == NULL)
    {
        printf("List is empty\n");
        return head;
    }

    /*
    1->0->0->NULL
    next      0->0->NULL, 0->NULL, NULL
    cur->next NULL, 1->NULL, 0->1->NULL
    prev      1->NULL, 0->1->NULL, 0->0->1->NULL
    cur       0->0->NULL, 0->NULL, NULL
    0->0->1->NULL
    */
    test *cur = head;
    test *prev = NULL;
    test *next = NULL;

    while(cur != NULL)
    {
        next = cur->next;
        cur->next = prev;
        prev = cur;
        cur = next;
    }

    return prev;
}

test* remove_node(test* head, int index)
{
    if(head == NULL)
    {
        printf("List is empty\n");
        return head;
    }

    if(index < 1)
    {
        printf("Invalid index passed\n");
        return head;
    }

    test* temp = head;
    test* cur = head; 
    test* prev = NULL;
    if(index == 1)
    {
        head = head->next;
        free(temp);
        return head;
    }

    int count = 1;
    while(cur !=NULL && count < index)
    {
        prev = cur;
        cur = cur->next;
        count++;
        printf("while:%d\n",prev->data);
    }

    if(cur == NULL)
    {
        printf("index %d exceeds list size\n",index);
        return head;
    }
    prev->next = cur->next;
    free(cur);
    return head;
}

void decToBinary(int n)
{
    // Size of an integer is assumed to be 32 bits
    // for (int i = 31; i >= 0; i--) {
    //     int k = n >> i;
    //     if (k & 1)
    //         cout << "1";
    //     else
    //         cout << "0";
    // }
    while(n)
    {
        printf("\nwhile:%d\n",n);
        if(n &1)
        {
            printf("%d",1);
        }
        else
        {
            printf("%d",0);
        }
        n = n>>1;
    }
}

void assign(int **arr, int size)
{
    for(int i=0; i<size; i++)
    {
        *(*arr+i) = i;
    }
}

int main()
{
    // int a[5] = {1,2,3,4,5};
    // int *ptr = (int*)(&a+1);
    // printf("%p %p %p\n", a, &a+2, ptr);
    // printf("%d %d", *(a+1), *(ptr-1));
    int a,b,c,d;
    a = 2%5;
    b = -2 %5;
    c= 2%-5;
    d = -2%-5;
    printf("%d %d %d %d\n",a,b,c,d); // 2 -2 2 -2
    int mat1[2][2] = {{1, 2},
                {3, 4}};
    int mat2[2][2] = {{5, 6},
                {7, 8}};
    int res[2][2] = {0};
    for( int i=0;i <2;i++)
    {
        for(int j=0;j<2;j++)
        {
            for(int k=0; k<2;k++)
            {
                res[i][j] +=mat1[i][k] * mat2[k][j];
            }
        }
    }

    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            printf("%d ",res[i][j]);
        }
    }
    printf("\n");

    test *head = NULL;
    head = create_node(1);
    test *node = create_node(0);
    head = add_node(head, node);
    node = create_node(1);
    head = add_node(head, node);
    node = create_node(1);
    head = add_node(head, node);
    traverse(head);

    int decimal = binary_to_dec(head);

    head = reverse(head);
    traverse(head);
    head = remove_node(head, 3);
    traverse(head);
    printf("decimal:%d\n",decimal);
    // test *head = NULL;
    // head = create_node(1);
    // test *node = create_node(2);
    // head = add_node(head, node);
    // node = create_node(3);
    // head = add_node(head, node);
    // node = create_node(4);
    // head = add_node(head, node);
    // traverse(head);
    decToBinary(5);

    // head = reverse(head);
    // traverse(head);
    // int *arr = (int*)malloc(4 * sizeof(int));
    int arr[4] = {1,2,3,4};
    // int **arr_p = (int**)malloc(sizeof(int*));
    // int (*arr_p)[4] = &arr;
    // int **arr_p = (int**)&arr;
    int (*arr_p)[4] = &arr;
    // *arr_p = arr;
    // assign(arr_p, 4);
    printf("\n\n");
    // for(int i =0;i<4;i++)
    // {
    //     // printf("%d\n",arr[i]);
    //     *(*arr_p+i) = i;
    // }
    printf("%p %p %d %p\n", arr,arr+1, *arr, arr_p+1);
    // for(int i=0;i<4;i++)
    // {
    //     *arr_p+i=i;
    // }
    // for(int i =0;i<4;i++)
    // {
    //     printf("%d\n",arr[i]);
    //     // arr_p[0][i] = i;
    // }
}