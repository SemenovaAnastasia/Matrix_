#include <iostream>
#include <fstream>
#include "TKMatrixTypes.h"
#include <MatrixUtils.h>

using namespace std;

///////////Matrix-Vector Multiplication 


  //// Test number 26
  void bool Test_CSR_VectorMultiplication()
  {
    CSRMatrix A;
    A.loadFromFile("test_mat1.dat");
    Vector b;
    b.loadFromFile("test_vect.dat");
    Vector c;
    c.loadFromFile("test26_mul_res.dat");
    Vector V = A * b;
    if (!V.Compare(c)) {
      cout << "Test 26 failed" << endl;
    }
  }
  //// Test number 27
  void bool Test_CSC_VectorMultiplication()
  {
    CSCMatrix A;
    A.loadFromFile("test_mat3.dat");
    Vector b;
    b.loadFromFile("test_vect.dat");
    Vector c;
    c.loadFromFile("test27_mul_res.dat");
    Vector V = A * b;
    if (!V.Compare(c)) {
      cout << "Test 27 failed" << endl;
    }
  }
  //// Test number 28
  void bool Test_COO_VectorMultiplication()
  {
    COOMatrix A;
    A.loadFromFile("test_mat3.dat");
    Vector b;
    b.loadFromFile("test_vect.dat");
    Vector c;
    c.loadFromFile("test28_mul_res.dat");
    Vector V = A * b;
    if (!V.Compare(c)) {
      cout << "Test 28 failed" << endl;
    }
  }
  //// Test number 29
  void bool Test_Dense_VectorMultiplication()
  {
    DenseMatrix A;
    A.loadFromFile("test_mat7.dat");
    Vector b;
    b.loadFromFile("test_vect.dat");
    Vector c;
    c.loadFromFile("test29_mul_res.dat");
    Vector V = A * b;
    if (!V.Compare(c)) {
      cout << "Test 29 failed" << endl;
    }
  }
  //// Test number 30
  void bool Test_Diag_VectorMultiplication()
  {
    DiagonalMatrix A;
    A.loadFromFile("test_mat1.dat");
    Vector b;
    b.loadFromFile("test_vect.dat");
    Vector c;
    c.loadFromFile("test30_mul_res.dat");
    Vector c = A * b;
    if (!V.Compare(c)) {
      cout << "Test 30 failed" << endl;
    }
  }
