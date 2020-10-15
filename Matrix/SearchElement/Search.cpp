// Search Element in a 2-D matrix
#include <iostream>
using namespace std;

const int m = 4;
const int n = 4;

pair<int,int> search (int mat[m][n] , int key) {

    pair<int, int> res;

    if (key < mat[0][0] || key > mat[m-1][n-1] )
        {
            res.first = -1;
            res.second = -1;
            return res;
        }

    int i;

    for (i = 0; i < n; i++) {
        if (mat[0][i] >= key)
            {
                if (mat[0][i] == key)
                    {
                        res.first = 0;
                        res.second = i;
                        return res;
                    }
                
                break;
            }
    }

    for (int j = 0; j < m; j++) {
        if (mat[i][j] == key) {
            res.first = i;
            res.second = j;
            return res;
        }
    }

    res.first = -1;
    res.second = -1;
    return res;   
    
}


int main() {

    int mat[4][4] = { {10,20,30,40},
                    {15,23, 35,45},
                    {18, 25, 37, 90},
                    {19, 28, 39, 100}};
    
    pair<int, int> result = search(mat, 25);

    if (result.first == -1 || result.second == -1)
        cout << "Not Found!!!\n";

    else {
        cout << result.first + 1 <<", " << result.second + 1 << "\n";
    }
    

    return 0;
}