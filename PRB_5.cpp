#include <iostream>
#include <conio.h>
using namespace std;
 
int main()
{
   int n = 22, c, first = 0, second = 1, next;
 
   cout << "Fibonacci numbers: \n" << endl;
 
   for ( c = 0 ; c < n ; c++ )
   {
      if ( c <= 1 )
         next = c;
      else
      {
         next = first + second;
         first = second;
         second = next;
      }
      cout << next << ", " ;
   }
   
   getch (); 	
   return 0;
}
