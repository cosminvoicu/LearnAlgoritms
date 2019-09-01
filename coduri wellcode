//cmmmc

#include<iostream>

using namespace std;

int main ()
{long long int a,b,x,y,r,c;
cin>>a>>b;
    x=a;
    y=b;
    while(b!=0)
    {
        r=a % b;
        a=b;
        b=r;
    }

   c=(x*y)/a;
   cout<<c;
}

//cmmdc

#include<iostream>

using namespace std;
int v[50000000];
int cmmdc(int a,int b)
{
    int r;
    while(b!=0)
    {
        r=a%b;
        a=b;
        b=r;
    }
    return a;
}

int main()
{
    int n,r=0;
    cin>>n;

    for(int i=1;i<=n;++i)
       {
         cin>>v[i];
         r=cmmdc(r,v[i]);
       }
cout<<r;


}

//inserare linie in matrice
const int MAX_ROWS = 51;
const int MAX_COLS = 51;
void inserareMedie(int n,int m ,double matrice[MAX_ROWS][MAX_COLS],int k)
{
    int i,j,c;
    double suma[51],sume;


    for(j=0;j<m;++j)
    {
        sume=0;
        for(i=0;i<n;++i)
    {
        sume+=matrice[i][j];
        suma[j]=sume/n;

    }
    } n+=1;
    for(i=n-1;i>k;--i)
        for(j=0;j<m;++j)
        matrice[i][j]=matrice[i-1][j];
    c=0;
    for(j=0;j<m;++j)
    {
         matrice[k][j]=suma[c];
         ++c;
}


    }


//sortarea unui sir

int sortare(int n,int v[100])
{
    int aux=0;
    for(int i=0;i<n;++i)
        for(int j=0;j<n;++j)
    {  if(v[i]<=v[j])

        {
           aux=v[i];
            v[i]=v[j];
            v[j]=aux;
        }
    }

}

//submatrice de suma maxima

#include <iostream>
using namespace std;

int n, m,  mt[101][101],sp[101][101],suma=0,x,y,w,e;

int main() {

                cin>>n>>m;
                for(int i=1;i<=n;++i)
                    for(int j=1;j<=m;++j)
                       {
                         cin>>mt[i][j];
                        sp[i][j]=0;

                       }

                sp[1][1]=mt[1][1];

               for(int i=1;i<=1;++i)
                    for(int j=2;j<=m;++j)
                       {
                           sp[i][j]=sp[i][j-1]+mt[i][j];



                       }
                for(int i=2;i<=n;++i)
                    for(int j=1;j<=1;++j)
                        {
                                sp[i][j]=sp[i-1][j]+mt[i][j];

                        }

                for(int i=2;i<=n;++i)
                  {

                   for(int j=2;j<=m;++j)
                     {
                          sp[i][j]=mt[i][j]+sp[i-1][j]+sp[i][j-1]-sp[i-1][j-1];

                     }

                   }


                    suma=sp[1][1];
                    int numar=0;
                    for(x=1;x<=n;++x)
                    {
                        for(y=1;y<=m;++y)
                        {
                            for(w=x;w<=n;++w)
                                for(e=y;e<=m;e++)
                        {
                            numar=sp[w][e]-sp[x-1][e]-sp[w][y-1]+sp[x-1][y-1];
                            if(numar>suma)
                                suma=numar;
                        }



                        }

                    }
                    cout<<suma;






  return 0;
}


//paralela la diagonala principala

#include<iostream>

using namespace std;

int main()
{
    int matrice[100][100],i,j,n;
    cin>>n;

        for(i=1;i<=n;++i)
            for(j=1;j<=n;++j)
                cin>>matrice[i][j];



for(j=1;j<=n;++j)
{
  int linie=n; int coloana=j;
while(linie>=1&&coloana>=1)
{
    cout<<matrice[linie][coloana]<<" ";
    --linie;
    --coloana;
}
}

for(j=n-1;j>=1;--j)
{
    int coloana=n; int linie =j;
while(linie>=1&&coloana>=1)
{
    cout<<matrice[linie][coloana]<<" ";
    --linie;
    --coloana;
}
}
return 0;

}


//interclasarea a doua siruri

#include    <iostream>

using namespace std;

int main()
{
    long int v[100000],w[100000],s[200000], n ,m,i,j,p=0;
    cin>>n;
   for(i=1;i<=n;++i)
    cin>>v[i];
    cin>>m;
   for(j=1;j<=m;++j)
cin>>w[j];
i=1;
j=1;
    while(i<=n&&j<=m)
{
    ++p;
    if(v[i]>=w[j])
    {
        s[p]=w[j];
        ++j;
    }
    else
    {
       s[p]=v[i];
        ++i;
    }
}
while(i<=n)
{
    ++p;
    s[p]=v[i];
    ++i;
}
while(j<=m)
{
    ++p;
    s[p]=w[j];
    ++j;
}
            for(i=1;i<=(m+n);++i)
                cout<<s[i]<<" ";
    return 0;
}


//stergerea unei coloane dintr-o matrice

#include <iostream>
using namespace std;

int main() {
  int n,m,i,j,k,matrice[500][500];
  cin>>n>>m>>k;
  for(i=1;i<=n;i++)
  {
      for(j=1;j<=m;j++)
        cin>> matrice[i][j];
  }

  for(i=1;i<=n;++i)
  {
      for(j=k;j<=m;++j)
      matrice[i][j]=matrice[i][j+1];
  }
  m-=1;
  for(i=1;i<=n;++i)
  {
      for(j=1;j<=m;++j)
        cout<<matrice[i][j]<<" ";
        cout<<"\n";
  }
  return 0;
}

//stergerea unei linii dintr-o matrice
#include <iostream>
using namespace std;

int main() {
  int n,m,i,j,k,matrice[500][500];
  cin>>n>>m>>k;
  for(i=1;i<=n;i++)
  {
      for(j=1;j<=m;j++)
        cin>> matrice[i][j];
  }

  for(i=k;i<=n;++i)
  {
      for(j=1;j<=m;++j)
      matrice[i][j]=matrice[i+1][j];
  }
  n-=1;
  for(i=1;i<=n;++i)
  {
      for(j=1;j<=m;++j)
        cout<<matrice[i][j]<<" ";
        cout<<"\n";
  }
  return 0;
}

//binary search

#include <iostream>
using namespace std;

int main()
{
  int N, v[100001], x;
  cin>>N;
  for (int i = 1; i <= N; ++i)
    cin>>v[i];
  cin>>x;

  // Prima data cautam in tot sirul, de la pozitia 1 pana la N
  int st = 1, dr = N, m;
  // Cat timp subsecventa are mai mult de un element, o injumatatim alegand
  // fie jumatatea din stanga, fie cea din dreapta
  while (st < dr) {
    m = (st + dr) / 2;
    if (v[m] < x)
      st = m + 1;
    else
      dr = m;
  }
  // am ajuns la o subsecventa cu un singur element
  if (v[st] == x)
    cout<<"x se gaseste in sir";
  else
    cout<<"x nu se gaseste in sir";
  return 0;
}
