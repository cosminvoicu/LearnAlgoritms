#include <iostream>
using namespace std;

const int DMAX = 618;


const int addLin[] = {-1, 0, 1, 0};
const int addCol[] = {0, 1, 0, -1};

struct Pos {
    int lin, col;
};

Pos a, b;
int m, n;
int mat[DMAX][DMAX];

int in, sf;
Pos q[DMAX * DMAX];

int vf;
Pos st[DMAX * DMAX];

void scan() {
    cin >> m >> n;
    for (int i = 1; i <= m; i++)
        for (int j = 1; j <= n; j++)
            cin >> mat[i][j];
    cin >> a.lin >> a.col;
    cin >> b.lin >> b.col;
}

void surround() {
    for (int i = 0; i <= m + 1; i++)
        mat[i][0] = mat[i][n + 1] = -1;
    for (int j = 1; j <= n; j++)
        mat[0][j] = mat[m + 1][j] = -1;
}

void lee() {
    q[0] = a;
    in = sf = 0;
    mat[a.lin][a.col] = 1;

    Pos pos;
    while (in <= sf && !mat[b.lin][b.col]) {
        pos = q[in++];
        for (int k = 0; k < 4; k++) {
            Pos ngh;
            ngh.lin = pos.lin + addLin[k];
            ngh.col = pos.col + addCol[k];

            if (!mat[ngh.lin][ngh.col]) {
                mat[ngh.lin][ngh.col] = mat[pos.lin][pos.col] + 1;
                q[++sf] = ngh;
            }
        }
    }
}

void print() {
    Pos pos = st[++vf] = b;
    while (mat[pos.lin][pos.col] > 1)
        for (int k = 0; k < 4; k++) {
            Pos ngh;
            ngh.lin = pos.lin + addLin[k];
            ngh.col = pos.col + addCol[k];

            if (mat[ngh.lin][ngh.col] == mat[pos.lin][pos.col] - 1) {
                st[++vf] = pos = ngh;
                break;
            }
        }

    if ( mat[b.lin][b.col] == 0 ) {
      cout << "Nu exista drum intre cele 2 puncte";
    } else {
      cout << mat[b.lin][b.col] - 1;
    }

}

int main() {
    scan();
    surround();

    lee();
    print();

    return 0;
}
