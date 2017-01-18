#include <iostream>

using namespace std;

int main()
{
    int z;
    int x;
    int y;
    int summa;
    double dalijums;
    int starpiba;
    int reizinajums;
    int mod;
    int rezultats1;
    int rezultats2;
    int rezultats3;
   
    
    
    
    
    
    
    x = 6;
    y = 8;
    z = 5;
    
    rezultats3 = x * x * ( y - z );
    rezultats2 = ( x * y + x * z ) * 2;
    rezultats1 = 2 * x + 3 * y + z;
    reizinajums = x * y;
    dalijums = x / (double) y;
    summa = x + y;
    starpiba = x - y;
    mod = x % y;
    
    cout <<  " Skaitla "  << x << " un " << y << " dalijums ir "<< dalijums << endl;
    cout <<  " Skaitla " << x << " un " << y << " reizinajums ir " << reizinajums << endl;
    cout <<  " Skaitla " << x << " un " << y << " summa ir " << summa << endl;
    cout <<  " Skaitla " << x << " un " << y << " starpiba ir" << starpiba << endl;
     cout <<  " Skaitla " << x << " un " << y << " mod ir " << mod << endl;
      cout <<  " Skaitla " << x << " un " << y << " rezultats1 ir " << rezultats1 << endl;
      cout <<  " Skaitla " << x << " un " << y << " rezultats2 ir " << rezultats2 << endl;
      cout <<  " Skaitla " << x << " un " << y << " rezultats3 " << rezultats3 << endl;
   cout << "Evelīna Siliņa" << endl; 
    cout << "Sveika pasaule" << endl; 
   return 0;
}

