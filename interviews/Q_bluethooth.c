typedef struct node {
int data;
struct node * next;
} node;

int main()
{
 
int *i;
 
i[0] = 1;
 
printf("%d", i[0]);
 
return 0;
}

int main() {
 
int * i = (int * )malloc(sizeof(int));
 
i[0] = 1;
 
free(i);
 
if (i == NULL)
{
i = (int * )malloc(sizeof(int));
i[0] = 2;
}
 
printf ("%d", i[0]);
 
}

// 5 4 3 2 1
// 4 5 3 2 1
// 3 5 4 2 1
// 2 5 4 3 1
// 1 5 4 3 2
// #define ARRAY_SIZE 4;
// 
node * sortLink(node * head) {
    if(head ==NULL)
    {
        printf("List is empty");
    }
    node * s = head;
    node * f = head->next;

    for(; s !=NULL; s=s->next)
    {
        for(; f!=NULL; f=f->next)
        {
            if(s->data > f->data)
            {
                int temp = s->data;
                s->data = f->data;
                f->data = temp;
            }
        }
    }

    return s;
}

// 1 2 8 3 2 9
bool canSum(int target, int * arr) 
{
    // TO DO: add solution
}

// 1 2 3 4 5
void getCombination(int * arr)
{
    for(int i =0; i<size; i++)
    {
        for(int j=i+1; j<size; j++)
        {
            printf("%d \n", arr[i], arr[j]);
        }
    }

    // TO DO: replace with recursion
}

// "Qualcomm is embedded ccompany"
// company
void isWordPresent(char *line, char *word)
{
    int i = 0;
    int j = 0;
    int last_matched = -1;
    while(line[i] != '\0')
    {
        if(line[i] == word[j])
        {
            last_matched = i;
            i++;
            j++;
            if(word[j] == '\0')
            {
                printf("word found");
                return;
            }
        }
        else
        {
            i++;
            j = 0;
        }
    }

// "Qualcomm is embedded ccompany"
// company
    for(int i=0; line[i] != '\0'; i++)
    {
        for(int j = i, w_itr = 0; line[j] != '\0'; j++)
        {
            if(line[j] == word[w_itr])
            {
                w_itr++;
                if(word[w_itr] == '\0')
                {
                    printf("word found");
                    return;
                }
            }
            else
            {
                w_itr = 0;
            }
        }
    }

    printf("word not found");
}

int swapBits(int num, int p1, int p2)
{
    // 101
    // 100
    // 001
    // 100
    // 000
    // 001

    // 0 1 -> 0
    // 1 0 -> 1
    // 0 0 -> 0
    // 1 1 -> 1

    int bit_p1 = (num >> p1) & 0x1;
    int bit_p2 = (num >> p2) & 0x1;
    /*
    num = num & ~(1<<p2);
    num = num & ~(1<<p1);
    num = num | (bit_p2 << p1);
    num = num | (bit_p1 << p2);
    */

    // better solution
    if(bit_p1 == bit_p2)
    {
        return num;
    }

    num ^= (bit_p1<<p2);
    num ^= (bit_p2<<p1);

    return num;
}