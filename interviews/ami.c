#include <string.h>
void reverse(char str[])
{   
    
    int len = strlen(str);
    char temp;
    //char reversed_str[len];
    for(int i = 0, j = len-1; i < len/2; i++,j--)
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp; 
    }
    printf("%s",str);
}

/*
git status
git add
git commit
git push origin 

gdb --args ex

b function ; statement is_little_endian
bt 
s
n


pthread_mutex_t
pthread_mutex_lock()
int X = 01234567;

Little Endian
1000 - 67
1001 - 45
1002 - 23
1003 - 01

Big Endian
1000  - 01
1001  - 23
1002  - 45
1003  - 67
*/

void is_little_endian(int* x)
{
    
}

// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< Other Role >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> //

/*
lambda
[capture](args)->return type
{

}
*/

int arr[10] = {1,2,3}
std::vector<int> data{};
int len = sizeof(arr)/sizeof(arr[0])
for(int i = 0; i < len; i++)
{
   vector.push_back(arr[i]);
}


std::map<std::string, int> data{};
std::string name;
int age;

while(1)
{
  std::cout << "Enter name:" << std::endl;
  std::cin >> name;
  if(name.empty())
  {
     break;
  }
  std::cout << "Enter age:" << std::endl;
  std::cin >> age;
  data.put(name,age);
}

// math.h

inline int add(int a, int b)
{
	
  return a + b;
}

int temp_add(int a, int b)
{
   return a+b;
}

int main()
{
   int ret = add(2, 3);
   int r = temp_add(3, 4);
   std::cout << r << "\n";
   std::cout << ret << "\n";
}

class algo
{
  public:
    virtual void add();
}

class dummy : public algo
{
  public:
    void add();    
}

class dummy : public algo
{
  public:
    void add()
    {
        std::cout << "inside dummy\n"; 
    }    

}

int m_i;
sample(sample obj)
{
  m_i = obj.m_i;
}

int main()
{
  algo* obj = new dummy();
  obj->add();
  sample obj1 = new sample();
  sample obj(obj1);
}


int main()
{
   int inp = 1234;

   int reverse = 0;
   int remainder = 0;
   while(inp >0)
   {
      remainder = inp % 10;
      reverser = reverse * 10 + remainder;
      inp/=10;
   }
}

/*
git main

git custom_branch

custom_branch

git pull origin main
*/