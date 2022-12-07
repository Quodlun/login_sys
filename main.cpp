#include <iostream>
#include <unistd.h>
#include <stdlib.h>
using namespace std;

int main () 
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

    if (accoinput == accoa and passinput == passa or accoinput == accob and passinput == passb)
    {
      printf ("Login successful.\n");

      break;
    }
    
    else 
    {
      error ++;

      printf (">> Account or password error. (%d times).\n", error);
    }
 
    if (error == 5) 
    {
      printf ("Error 5 times, plese try again 30 seconds later\n");

      error = 0;
      sleep (30);
    }
    
  }

  sleep (3);
    
  int randinput;
  bool verify = false;

  while (verify == false)
  {
    int min = 1;
    int max = 9;
    
    int randx = rand() % (max - min + 1) + min;
  
    printf ("Enter this number below: %d\n");
    cin >> randinput;

    if (randinput == randx)
    {
      verify = true;
      printf ("verify successful.\n");
    }
  }
  return 0;
}