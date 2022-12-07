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
    
  int randinput;
  bool verify = false;

  while (verify == false)
  {
    int vinput;
    int x = 0;
    
    x = rand() % (99999 - 10000 + 1) + 10000;

    printf (">> Type this munber below: %d\n", x);
    cin >> vinput;
    
    if (vinput == x)
    {
      verify = true;

      printf (">> Verify successful.\n");
    }
  }
  return 0;
}