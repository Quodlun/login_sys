#include <iostream>
#include <unistd.h>
using namespace std;

int main() 
{
  string password;
  int error = 0;

  while (true) 
  {
    printf(">> Password:");
    cin >> password;

    if (password == "7355608") 
    {
      printf(">> Login successful.\n");

      sleep (3);
      return 0;
    }

    else 
    {
      error ++;

      printf (">> Error (%d times).\n", error);

      sleep (0.5);
    }

    if (error == 3) 
    {
      printf("錯誤次數超過3次，請一分鐘後重試\n");

      error = 0;
      sleep (5);
    }
    
  }
  
  return 0;
}


