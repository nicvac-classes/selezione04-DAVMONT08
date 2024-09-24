#include <iostream>
using namespace std;

int main() {
            float n1,n2,n3,nmax;
            cout<< "inserisci tre numeri"<<endl;
            cin>>n1;
            cin>>n2;
            cin>>n3;
            if(n1>n2)
            {
                nmax=n1;
            }
         if(n1>n3)
         {
            nmax=n1;
        }
     {
        nmax=n2;
        }  
        {
            nmax=n2;
            }
            if(n2>n3)
            {
                nmax=n2;
                }
             {
                 nmax=n3;
                }
                cout<<"il massimo tra questi tre numeri è" << nmax <<endl;



}


//LEGGERE LE ISTRUZIONI NEL FILE README.md
