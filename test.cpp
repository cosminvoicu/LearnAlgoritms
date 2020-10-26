
#include<iostream>
#include<cstring>

using namespace std;

int este_litera(char c)
{
    if(('a'<=c&&c<='z')||('A'<=c&&c<='Z'))
        return 1;
    return 0;
}
int este_vocala(char c)
{   if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
              return 1;
              return 0;
}
void cuvant(int k,char s[251])
{   int am_cuvant=0;
    int nr_vocale=0,contor=0;
    char voc[251];
    int lg=strlen(s);
    for(int i=0;i<lg;++i)
        if(este_litera(s[i]))
        {
            am_cuvant=1;
            voc[contor]=s[i];
            ++contor;
            if(este_vocala(s[i]))
              ++nr_vocale;
        }
    else if (am_cuvant==1)
    {

       if(nr_vocale>=k)
        {

            for(int j=0;j<contor;++j)
                cout<<voc[j];
                 cout<<"\n";
        }

        nr_vocale=0;
        am_cuvant=0;
        contor=0;
    }
    if(am_cuvant==1)
    {
       if(nr_vocale>=k)
        {

            for(int j=0;j<contor;++j)
                cout<<voc[j];
                cout<<"\n";
        }

        nr_vocale=0;
        am_cuvant=0;
        contor=0;
    }
}
int main()
{
int suma;
char line[251];
cin>>suma;

for(int i=0;!(cin.eof());++i)
{cin.getline(line,250);
cuvant(suma,line);}

}
