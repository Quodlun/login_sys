#include <iostream>
#include <unistd.h>
using namespace std;

int main() 
{
  string accoa = "Quodlun", accob = "JoshphJoestar", accoinput;
  string passa = "zj4joxu3", passb = "ALex28612", passinput;
  int error = 0;

  while (true) 
  {
    printf (">> Account: ");
    cin >> accoinput;
    
    printf (">> Password: ");
    cin >> passinput;

    if (passa == "7355608") 
    {
      printf(">> Login successful.\n");

      sleep (3);
      return 0;
    }

    else 

    {
      error ++;

      printf (">> Error (%d times).\n", error);
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


