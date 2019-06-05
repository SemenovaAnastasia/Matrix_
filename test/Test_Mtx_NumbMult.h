#include <iostream>
#include <fstream>
#include "TKMatrixTypes.h"
#include <MatrixUtils.h>

using namespace std;
 
 ///////////Matrix-Number Multiplication 
   
//// Test number 31

void bool Test_CSR_Numb_Multiplication()
  {
    CSRMatrix A;
    A.loadFromFile("test_mat1.dat");
    CSRMatrix C;
    C.loadFromFile("test31_mul_res.dat");
    CSRMatrix D = A * B;
       if (!D.Compare(C)) {
      cout << "Test 31 failed" << endl;
    }
  };
  //// Test number 32
  void bool Test_CSC_Numb_Multiplication()
  {
    CSCMatrix A;
    A.loadFromFile("test_mat3.dat");
    CSCMatrix C;
    C.loadFromFile("test32_mul_res.dat");
    CSCMatrix D = A * B;
       if (!D.Compare(C)) {
      cout << "Test 32 failed" << endl;
    }
  };
  //// Test number 33
  void bool Test_COO_Numb_Multiplication()
  {
    COOMatrix A;
    A.loadFromFile("test_mat5.dat");
    COOMatrix C;
    C.loadFromFile("test33_mul_res.dat");
    COOMatrix D = A * B;
       if (!D.Compare(C)) {
      cout << "Test 33 failed" << endl;
    }
  };
  //// Test number 34
  void bool Test_Dense_Numb_Multiplication()
 {
    DenseMatrix A;
    A.loadFromFile("test_mat7.dat");
    DenseMatrix C;
    C.loadFromFile("test34_mul_res.dat");
    DenseMatrix D = A * B;
     if (!D.Compare(C)) {
      cout << "Test 34 failed" << endl;
    }
          
  };
  //// Test number 35
  void bool Test_Diagonal_Numb_Multiplication()
  {
    DiagonalMatrix A;
    A.loadFromFile("test_mat9.dat");
    DiagonalMatrix C;
    C.loadFromFile("test35_mul_res.dat");
    DiagonalMatrix D = A * B;
     if (!D.Compare(C)) {
      cout << "Test 35  failed" << endl;
    }
  };