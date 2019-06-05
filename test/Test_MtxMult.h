#include <iostream>
#include <fstream>
#include "TKMatrixTypes.h"

#include <MatrixUtils.h>


using namespace std;

///////////MatrixMultiplication


  //// Test number 1
  void  Test_CSR_CSR_MatrixMultiplication()
  {
    CSRMatrix A;
    A.loadFromFile("test_mat1.dat");
    CSRMatrix B;
    B.loadFromFile("test_mat2.dat");
    CSRMatrix C;
    C.loadFromFile("test1_mul_res.dat");
    CSRMatrix D = A * B;
    if (!D.Compare(C)) {
      cout << "Test 1 failed" << endl;
    }
  }
  //// Test number 2
  void  Test_CSR_CSC_MatrixMultiplication()
  {
    CSRMatrix A;
    A.loadFromFile("test_mat1.dat");
    CSCMatrix B;
    B.loadFromFile("test_mat4.dat");
    CSRMatrix C;
    C.loadFromFile("test2_mul_res.dat");
    CSRMatrix D = A * B;
    if (!D.Compare(C)) {
      cout << "Test 2 failed" << endl;
    }
  }
  //// Test number 3
  void  Test_CSR_COO_MatrixMultiplication()
  {
    CSRMatrix A;
    A.loadFromFile("test_mat1.dat");
    COOMatrix B;
    B.loadFromFile("test_mat6.dat");
    CSRMatrix C;
    C.loadFromFile("test3_mul_res.dat");
    CSRMatrix D = A * B;
    if (!D.Compare(C)) {
      cout << "Test 3 failed" << endl;
    }
  }
  //// Test number 4
  void  Test_CSR_Dense_MatrixMultiplication()
  {
    CSRMatrix A;
    A.loadFromFile("test_mat1.dat");
    C
    DenseMaritx B;
    B.loadFromFile("test_mat8.dat");
    DenseMatrix C;
    C.loadFromFile("test4_mul_res.dat");
    DenseMatrix D = A * B;
    if (!D.Compare(C)) {
      cout << "Test 4 failed" << endl;
    }
  }
  //// Test number 5
  void  Test_CSR_Diag_MatrixMultiplication()
  
  {
    CSRMatrix A;
    A.loadFromFile("test_mat1.dat");
    DiagonalMatrix B;
    B.loadFromFile("test_mat10.dat");
    CSCMatrix C;
    C.loadFromFile("test5_mul_res.dat");
    CSCMatrix D = A * B;
    if (!D.Compare(C)) {
      cout << "Test 5 failed" << endl;
    }
  }
  //// Test number 6
  void  Test_CSC_CSC_MatrixMultiplication()
  {
    CSCMatrix A;
    A.loadFromFile("test_mat3.dat");
    CSCMatrix B;
    B.loadFromFile("test_mat4.dat");
    CSCMatrix C;
    C.loadFromFile("test6_mul_res.dat");
    CSCMatrix D = A * B;
    if (!D.Compare(C)) {
      cout << "Test 6 failed" << endl;
    }
  }
  
  //// Test number 7
  void  Test_CSC_CSR_MatrixMultiplication()
  {
    CSCMatrix A;
    A.loadFromFile("test_mat3.dat");
    CSRMatrix B;
    B.loadFromFile("test_mat2.dat");
    CSCMatrix C;
    C.loadFromFile("test7_mul_res.dat");
    CSCMatrix D = A * B;
    if (!D.Compare(C)) {
      cout << "Test 7 failed" << endl;
    }
  }
  //// Test number 8
  void  Test_CSC_COO_MatrixMultiplication()
  {
    CSCMatrix A;
    A.loadFromFile("test_mat3.dat");
    COOMatrix B;
    B.loadFromFile("test_mat6.dat");
    CSCMatrix C;
    C.loadFromFile("test8_mul_res.dat");
    CSCMatrix D = A * B;
    if (!D.Compare(C)) {
      cout << "Test 8 failed" << endl;
    }
  }
  //// Test number 9
  void Test_CSC_Dense_MatrixMultiplication()
  {
    CSCMatrix A;
    A.loadFromFile("test_mat3.dat");
    DenseMatrix B;
    B.loadFromFile("test_mat8.dat");
    DenseMatrix C;
    C.loadFromFile("test9_mul_res.dat");
    CSCMatrix D = A * B;
    if (!D.Compare(C)) {
      cout << "Test 9 failed" << endl;
    }
  }
  //// Test number 10
  void  Test_CSC_Diag_MatrixMultiplication()
  {
    CSCMatrix A;
    A.loadFromFile("test_mat3.dat");
    DiagonalMatrix B;
    B.loadFromFile("test_mat10.dat");
    CSCMatrix C;
    C.loadFromFile("test10_mul_res.dat");
    CSCMatrix D = A * B;
    if (!D.Compare(C)) {
      cout << "Test 10 failed" << endl;
    }
  }
  //// Test number 11
  void Test_COO_COO_MatrixMultiplication()
  {
    COOMatrix A;
    A.loadFromFile("test_mat5.dat");
    COOMatrix B;
    B.loadFromFile("test_mat6.dat");
    COOMatrix C;
    C.loadFromFile("test11_mul_res.dat");
    COOMatrix D = A * B;
    if (!D.Compare(C)) {
      cout << "Test 11 failed" << endl;
    }
  }

//// Test number 12
  void  Test_COO_CSR_MatrixMultiplication()
  {
    COOMatrix A;
    A.loadFromFile("test_mat5.dat");
    CSRMatrix B;
    B.loadFromFile("test_mat2.dat");
    COOMatrix C;
    C.loadFromFile("test12_mul_res.dat");
    COOMatrix D = A * B;
    if (!D.Compare(C)) {
      cout << "Test 12 failed" << endl;
    }
  }
  //// Test number 13
  void  Test_COO_CSC_MatrixMultiplication()
  {
    COOMatrix A;
    A.loadFromFile("test_mat5.dat");
    CSCMatrix B;
    B.loadFromFile("test_mat4.dat");
    COOMatrix C;
    C.loadFromFile("test13_mul_res.dat");
    COOMatrix D = A * B;
    if (!D.Compare(C)) {
      cout << "Test 13 failed" << endl;
    }
  }
  //// Test number 14
  void  Test_COO_Dense_MatrixMultiplication()
  {
    COOMatrix A;
    A.loadFromFile("test_mat5.dat");
    DenseMatrix B;
    B.loadFromFile("test_mat8.dat");
    DenseMatrix C;
    C.loadFromFile("test14_mul_res.dat");
    DenseMatrix D = A * B;
    if (!D.Compare(C)) {
      cout << "Test 14 failed" << endl;
    }
  }
  //// Test number 15
  void Test_COO_Diag_MatrixMultiplication()
  {
    COOMatrix A;
    A.loadFromFile("test_mat5.dat");
    DiagonalMatrix B;
    B.loadFromFile("test_mat10.dat");
    COOMatrix C;
    C.loadFromFile("test15_mul_res.dat");
    COOMatrix D = A * B;
    if (!D.Compare(C)) {
      cout << "Test 15 failed" << endl;
    }
  }
  //// Test number 16
  void  Test_Diag_Diag_MatrixMultiplication()
  {
    DiagonalMatrix A;
    A.loadFromFile("test_mat9.dat");
    DiagonalMatrix B;
    B.loadFromFile("test_mat10.dat");
    DiagonalMatrix C;
    C.loadFromFile("test16_mul_res.dat");
    DiagonalMatrix D = A * B;
    if (!D.Compare(C)) {
      cout << "Test 16 failed" << endl;
    }
  }
  //// Test number 17
  void Test_Diag_CSR_MatrixMultiplication()
  {
    DiagonalMatrix A;
    A.loadFromFile("test_mat9.dat");
    CSRMatrix B;
    B.loadFromFile("test_mat2.dat");
    CSRMatrix C;
    C.loadFromFile("test17_mul_res.dat");
    CSRMatrix D = A * B;
    if (!D.Compare(C)) {
      cout << "Test 17 failed" << endl;
    }
  }
  //// Test number 18
  void  Test_Diag_CSC_MatrixMultiplication()
  {
    DiagonalMatrix A;
    A.loadFromFile("test_mat9.dat");
    CSCMatrix B;
    B.loadFromFile("test_mat4.dat");
    CSCMatrix C;
    C.loadFromFile("test18_mul_res.dat");
    CSCMatrix D = A * B;
    if (!D.Compare(C)) {
      cout << "Test 18 failed" << endl;
    }
  }
  //// Test number 19
 void  Test_Diag_COO_MatrixMultiplication()
  {
    DiagonalMatrix A;
    A.loadFromFile("test_mat9.dat");
    COOMatrix B;
    B.loadFromFile("test_mat6.dat");
    COOMatrix C;
    C.loadFromFile("test19_mul_res.dat");
    COOMatrix D = A * B;
    if (!D.Compare(C)) {
      cout << "Test 19 failed" << endl;
    }
  }
  //// Test number 20
  void  Test_Diag_Dense_MatrixMultiplication()
  {
    DiagonalMatrix A;
    A.loadFromFile("test_mat9.dat");
    DenseMatrix B;
    B.loadFromFile("test_mat8.dat");
    DenseMatrix C;
    C.loadFromFile("test20_mul_res.dat");
    DenseMatrix D = A * B;
    if (!D.Compare(C)) {
      cout << "Test 1 failed" << endl;
    }
  }
  //// Test number 21
  void  Test_Dense_Dense_MatrixMultiplication()
  {
    DenseMatrix A;
    A.loadFromFile("test_mat7.dat");
    DenseMatrix B;
    B.loadFromFile("test_mat8.dat");
    DenseMatrix C;
    C.loadFromFile("test21_mul_res.dat");
    DenseMatrix D = A * B;
    if (!D.Compare(C)) {
      cout << "Test 21 failed" << endl;
    }
  }
  //// Test number 22
  void  Test_Dense_CSR_MatrixMultiplication()
  {
    DenseMatrix A;
    A.loadFromFile("test_mat7.dat");
    CSRMatrix B;
    B.loadFromFile("test_mat2.dat");
    DenseMatrix C;
    C.loadFromFile("test22_mul_res.dat");
    DenseMatrix D = A * B;
    if (!D.Compare(C)) {
      cout << "Test 22 failed" << endl;
    }
  }
  //// Test number 23
  void  Test_Dense_CSC_MatrixMultiplication()
  {
    DenseMatrix A;
    A.loadFromFile("test_mat7.dat");
    CSCMatrix B;
    B.loadFromFile("test_mat4.dat");
    DenseMatrix C;
    C.loadFromFile("test23_mul_res.dat");
    DenseMatrix D = A * B;
    if (!D.Compare(C)) {
      cout << "Test 23 failed" << endl;
    }
  }
  //// Test number 24
   void  Test_Dense_COO_MatrixMultiplication()
  {
    DenseMatrix A;
    A.loadFromFile("test_mat7.dat");
    COOMatrix B;
    B.loadFromFile("test_mat6.dat");
    DenseMatrix C;
    C.loadFromFile("test25_mul_res.dat");
    DenseMatrix D = A * B;
    if (!D.Compare(C)) {
      cout << "Test 25 failed" << endl;
    }
  }
  //// Test number 25
   void  Test_Dense_Diag_MatrixMultiplication()
  {
    DenseMatrix A;
    A.loadFromFile("test_mat7.dat");
    DiagonalMatrix B;
    B.loadFromFile("test1_mat10.dat");
    DenseMatrix C;
    C.loadFromFile("test25_mul_res.dat");
    DenseMatrix D = A * B;
    if (!D.Compare(C)) {
      cout << "Test 25 failed" << endl;
    }
  }

