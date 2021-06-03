#include <iostream>
#include <string.h>
#include <stdio.h>

using namespace std;

int main()
{
  int num[5];
  int max, min , i ;
  int *p[5];
  cout << "Digite os numeros : "<< endl;
  for(i=0 ; i < 5; i++)
  {
    cin >> num[i];
    p[i]=&num[i];
  }
  max = *p[0];
  min = *p[0];

  for(i=0 ; i<5 ; i++){
    if(*p[i] < min )
    {
      min = *p[i];
    }
    if(*p[i] > max ){
      max = *p[i];
      }
  }

  cout <<"Max :" << max <<endl;
  cout <<"Min :" << min <<endl;
}