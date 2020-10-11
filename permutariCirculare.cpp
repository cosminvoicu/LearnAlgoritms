#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[32];
    for(int i = 1; i <= n; ++i)
        cin >> a[i], a[n + i] = a[i];

    for(int i = 1; i <= n; ++i){
        for(int j = i; j < i + n; ++j)
            cout << a[j] << " ";
        cout << endl;
    }

    /// 1 2 3 4 5 1 2 3 4 5

    return 0;
}
