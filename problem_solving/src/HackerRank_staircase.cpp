#include <iostream>
using namespace std;

int main() 
{
  int n;
  cout << "Enter a number: " << endl;
  cin >> n;
 
  if(n > 0 && n <= 100)
  {
    
    for(int a = 1; a <= n; a++)
    {
      for(int b = 0; b < n - a; b++)
      {  
        cout << " ";
      }
        for(int c = 0; c < a; c++)
        {
          cout << "#";
        }
      
      cout << endl;
    }
  }
}