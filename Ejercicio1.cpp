#include <iostream>

using namespace std;

void SumaDeMatrices(int A[][3], int B[][3], int C[][3], int i, int j, int size)
{
    if(i < size)
    {
        C[i][j] = A[i][j] + B[i][j];
        j++;

        if(j < size)
        {
            SumaDeMatrices(A, B, C, i, j , size);
        }
        else
        {
            i++;
            SumaDeMatrices(A, B, C, i, 0 , size);
        }
    }
}

int main()
{
    int A[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
    int B[3][3] = {{3,5,4}, {2,1,3}, {1,1,0}};
    int C[3][3];

    SumaDeMatrices(A, B, C, 0, 0, 3);
        
    for(int i = 0; i < 3; i++)
     {
        for (int j = 0; j < 3 ; j++)
        {
            cout << C[i][j]<< " ";
        }
        cout << endl;
    }

    return 0;

}
