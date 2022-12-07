#include <iostream>
#include <unistd.h>
#include <stdlib.h>
using namespace std;

int main () 
{
  string accoa = "Quodlun", accob = "JoshphJoestar", accoinput;
  string passa = "zj4joxu3", passb = "ALex28612", passinput;
  int error = 0;
  int x = 0;

  while (true) 
  {
    printf (">> Account: ");
    cin >> accoinput;
    
    printf (">> Password: ");
    cin >> passinput;

    if (accoinput == accoa and passinput == passa or accoinput == accob and passinput == passb)
    {
      printf (">> Login successful.\n");

      break;
    }
    
    else 
    {
      error ++;

      printf (">> Account or password error. (%d times).\n", error);
    }
 
    if (error == 5) 
    {
      printf (">> Error 5 times, plese try again 30 seconds later\n");

      error = 0;
      sleep (30);
    }
  }

  sleep (1);
    
  char a[4];
  int sum = 0;
  
  for (int i=0;i<4;i++)
  {
    sum = rand();
    sum %= 62; 
    
    if (sum <= 10)
    {
      sum = sum + 47;
    }
      
    else if (sum <= 36)
    {
      sum = sum + 54;
    }
      
    else
    {
      sum = sum + 60;
    }
    
    a[i] = (char)sum;
  }
  
  for (int i=0;i<4;i++)
  {
    printf ("%c", a[i]);
  }

  printf ("\n");
  
  return 0;
}