#include <iostream>

using namespace std;

int main()
{
   int x;
   int y;
   int z;
   
   cout << " Ievadi 1. ciparu " << endl;
   cin >> x;
   
   cout <<" Ievadi 2.ciparu " << endl;
   cin >> y;
   
   cout << " Ievadi 3.ciparu " << endl;
   cin >> z;
   
   if( x>y && x>z){
       cout << " Lielakais ir " << x << endl;
       if ( y>z){
           cout<< x << y << z << endl;
           
       }else{
           cout << x << z << y << endl;
           
           
       }
   }
   
   if ( y>x && y>z){
       cout << " Lielakais ir " << y << endl;
       if ( x>z){
           cout << y << x << z << endl;
           
       }else{
           cout << y << z << y << endl;
       }
   }
   
   if ( z>y && z>x){
       cout <<  " Lielakais ir " << z << endl;
       if ( y>x){
           cout << z << y << x << endl;
           
       }else{
           cout << z << x << y << endl;
       }
   }
   
   
   
   
   return 0;
}

