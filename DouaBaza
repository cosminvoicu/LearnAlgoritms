#include<iostream>

using namespace std;

int main()
{
    long int n,numar_b4=0,copie_numar_b4;
    cin>>n;
    //transforma numar din baza 2 in baza 4
    while(n)
    {
        for(int i=0;i<2;++i)
        {
            if(i==0)
            {
                numar_b4+=(n%10)*1;
                n/=10;
            }
            else
            {
                numar_b4+=(n%10)*2;
                n/=10;
            }
        }
        if(n)
        numar_b4*=10;
    }
    copie_numar_b4=numar_b4;
    numar_b4=0;
    //inverseaza numar
    while(copie_numar_b4)
    {
        numar_b4+=(copie_numar_b4%10);
        copie_numar_b4/=10;
        if(copie_numar_b4)
            numar_b4*=10;
    }
    cout<<numar_b4;
    return 0;
}

