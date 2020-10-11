#include<iostream>

using namespace std;

void selectionSort(int Vector[50001], int N)
{
    for(int i = 0; i < N - 1; i++)
    {
        for(int j = i + 1; j < N; j++)
        {
            if(Vector[i] > Vector[j])
            {
                int aux = Vector[i];
                Vector[i] = Vector[j];
                Vector[j] = aux;
            }
        }
    }
}

int main() {

  int n, power[50001];

  cin>>n;
  int suma = 0;
  for (int i = 1; i<=n; ++i) {
    cin>>power[i];
  }
  int found_div = 0;
  int divizibil =1;
  while(!found_div)
  { ++divizibil;
    for(int j=1;j<=n;++j)
    {
      if(power[j] % divizibil == 0)
      {
        found_div = divizibil;
      }
    }
  }

 for(int k =0; k<=n;++k) {
   suma+=power[k];
 }
selectionSort(power,n);

power[1]*=found_div;

int x_quit = 0;
int position = n+1;
while(!x_quit) {
  --position;
  if(power[position]%found_div==0)
  {
    power[position]/=found_div;
    x_quit=1;
  }
}
suma=0;
for(int kk =1 ; kk<=n; ++kk)
{
  suma+=power[kk];
}
cout<<suma<<"\n";


  return 0;
}
