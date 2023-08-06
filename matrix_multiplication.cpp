// Author: Nirupam Pal
// Date: 04/08/2023
// Description: This program is used for matrix multiplications

#include<iostream>
using namespace std;

int main() {

    cout << "*-----------------------------------------*-----------------------------------------*" << endl;
    cout << "|                                 Author: Nirupam Pal                               |" << endl;
    cout << "|                                   Date: 02/08/2023                                |" << endl;
    cout << "|           Description: This program is used for matrix multiplications            |" << endl;
    cout << "*-----------------------------------------*---------------------------------------- *" << endl;

    // Defining the variables
    int row_a, row_b, col_a, col_b; 

    // Taking the no. of rows and columns for the matrices
    cout << "Enter the no. of rows for the first matrix : ";
    cin >> row_a;
    cout << "Enter the no. of columns for the first matrix : ";
    cin >> col_a;
    cout << "Enter the no. of rows for the second matrix : ";
    cin >> row_b;
    cout << "Enter the no. of columns for the second matrix : ";
    cin >> col_b;
    bool run = true;

// Checking if the mulitiplication is possible
    while (run == true) {

        if (col_a == row_b) {
            float a[row_a][col_a], b[row_b][col_b], ans[row_a][col_b];

            // Taking the input for the first matrix
            for (int i = 0; i < row_a; i++) {
                for (int j = 0; j < col_a; j++) {
                    cout << "A[" << i+1 << "][" << j+1 << "] : ";
                    cin >> a[i][j];
                }
            }
            // Printing the matrix A
            cout << "Matix A :" << endl;
            for (int i = 0; i < row_a; i++) {
                for (int j = 0; j < col_a; j++) {
                    cout << a[i][j] << "  ";
                }
                cout << endl;
            }
            // Taking the input for the first matrix
            for (int i = 0; i < row_b; i++) {
                for (int j = 0; j < col_b; j++) {
                    cout << "A[" << i+1 << "][" << j+1 << "] : ";
                    cin >> b[i][j];
                }
            }
            // Printing the matrix B
            cout << "Matix B :" << endl;
            for (int i = 0; i < row_b; i++) {
                for (int j = 0; j < col_b; j++) {
                    cout << b[i][j] << "  ";
                }
                cout << endl;
            }
            cout << "The matrix multiplication is possible." << endl;

            // Solving for matrix multiplication
            for (int i = 0; i < row_a; i++) {
                for (int j = 0; j < col_b; j++) {
                    ans[i][j] = 0; // Initialization of the solution matrix element
                    for (int k = 0; k < row_b; k++) {
                        ans[i][j] += a[i][k] * b[k][j];
                    }
                }
            }
            // Plotting the solution matrix
            cout << "A x B = C" << endl;
            cout << "Matrix C :" << endl; 
            for (int i = 0; i < row_a; i++) {
                for (int j = 0; j < col_b; j++) {
                    cout << ans[i][j] << "  ";
                }
                cout << endl;
            }
            break;
        }
        else {
            cout << "The matrix multiplication is not possible." << endl;
            break;
        }
    }
    return 0;
}