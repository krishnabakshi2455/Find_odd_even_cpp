#include <iostream>
using namespace std;

int main(){

    int range;
    cin>>range;

    for (int i = 1; i <=range; i++)
    {
        if (i % 2 == 1)
        {
            cout<<"I am odd "<<i<<endl;
        }else{
            cout<<"I am even "<<i<<endl;
        }
        
    }
    




    return 0;
}