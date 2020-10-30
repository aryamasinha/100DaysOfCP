#include <iostream>
using namespace std;

int main()
{
   int t;
   cin >> t;

   while (t--)
   {
      int p, count = 0;
      cin >> p;
      for (int i = 2048; p > 0; i = i / 2)
      {
         count = count + p / i;
         p = p % i;
      }

      cout << count << endl;
   }

   return 0;
}