#include <iostream>

using namespace std;

int main()
{
    
    
    int x;
    int rez;
    
    cout << " Ievadi skaitli kuru vēlies kāpināt kvadrātā " << endl;
    cin >> x;
    
    if(x > 0){
       // Sis izpildisies ja x nebus lielaks par 0
       cout << " X ir lielaks par 0 " << endl;
        rez = x * x;
    
    
    cout << x << " kvadrata ir "<< rez << endl;
    
    }else{
       // Sis izpildisies ja x nebus lielaks par 0 
      cout << " Nevar kapinat "<<endl;
      
    }
    
   
   return 0;
}

