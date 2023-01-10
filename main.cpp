
#include <iostream>
using namespace std;
void rows_by_snake (int n, int m, int **a) {

    int i,j,k=0;
    for (i=0; i<n; i++)
        for (j=0; j<m; j++) {
            a[i][j]=(i%2?(i+1)*m-j-1:k);
            k++;
        }
}



void output_matrix (int n,int m,int **a) {
    int i,j;
    for (i=0; i<n; i++) {
        cout << endl;
        for (j=0; j<m; j++) cout << a[i][j] << " ";
    }
}

int main () {
    int n=0,m=0;
    cout << "n=";
    cin >> n;
    cout << "m=";
    cin >> m;
    int **a,i;
    a = new int * [n];
    for (i=0; i<n; i++) a[i] = new int [m];
    rows_by_snake (n,m,a);
    output_matrix (n,m,a);
  //  cols_by_snake (n,m,a);
   // output_matrix (n,m,a);
    return 0;
}