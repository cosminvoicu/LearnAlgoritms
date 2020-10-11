#include<iostream>

using namespace std;

int main()
{
    int numar1,numar2,baza=2,unu_numar1=0,unu_numar2=0,is_1,copie_nr1,copie_nr2;
    cin>>numar1>>numar2;
    copie_nr1=numar1;
    copie_nr2=numar2;
    while(numar1)
    {
        is_1=numar1%baza;
        if(is_1)
        {
            ++unu_numar1;
        }
        numar1/=baza;
    }
    while(numar2)
    {
        is_1=numar2%baza;
        if(is_1)
        {
            ++unu_numar2;
        }
        numar2/=baza;
    }
    
    if(unu_numar1>unu_numar2)
    {
        cout<<copie_nr1;
    }
    else
    {
        cout<<copie_nr2;
        
    }
    return 0;
}

