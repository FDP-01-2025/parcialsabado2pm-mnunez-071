#include <iostream>
using namespace std;

int main(){
 int dat[10], sum=0;
   cout << "ingrese 10 numeros enteros: "<< endl;
   for (int i=0; i<10; i++){
      cout << "numero #"<< i+1 << ": ";
      cin >> dat[i];
      sum += dat[i];
   }
   cout << "la suma de los numeros es: " << sum;

    return 0;
}