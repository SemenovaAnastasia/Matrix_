 #include "Test_+MTX_Addition.h"



using namespace std;






 
  ///////////Addition

    

//// Test number 36
  void  CSR_add_CSR()
  {
    CSRMatrix A;
    A.loadFromFile("test_mat1.dat");
    CSRMatrix B;
    B.loadFromFile("test_mat2.dat");
    CSRMatrix C;
    C.loadFromFile("test36_mul_res.dat");
    CSRMatrix D = A + B;
    if (!D.Compare(C)) { 
    
    }
  };


  //// Test number 37
  void  CSR_add_CSC()
  {
    CSRMatrix A;
    A.loadFromFile("test_mat1.dat");
    CSCMatrix B;
    B.loadFromFile("test_mat4.dat");
    CSRMatrix C;
    C.loadFromFile("test37_mul_res.dat");
    CSRMatrix D = A + B;
    if (!D.Compare(C)) {
      cout << "Test 37 failed" << endl;
    }
  };

  //// Test number 38
  void  CSR_add_COO()
  {
    CSRMatrix A;
    A.loadFromFile("test_mat1.dat");
    COOMatrix B;
    B.loadFromFile("test_mat6.dat");
    CSRMatrix C;
    C.loadFromFile("test38_mul_res.dat");
    CSRMatrix D = A + B;
    if (!D.Compare(C)) {
      cout << "Test 38 failed" << endl;
    }
  };

  //// Test number 39
  void   CSR_add_Dense()
  {
    CRSMatrix A;
    A.loadFromFile("test_mat1.dat");
    C
    DenseMaritx B;
    B.loadFromFile("test_mat8.dat");
    DenseMatrix C;
    C.loadFromFile("test39_mul_res.dat");
    DenseMatrix D = A + B;
    if (!D.Compare(C)) {
      cout << "Test 39 failed" << endl;
    }
  };

  //// Test number 40
  void  CSR_add_Diag()
  {
    CSRMatrix A;
    A.loadFromFile("test_mat1.dat");
    DiagonalMatrix B;
    B.loadFromFile("test_mat10.dat");
    DiagonalMatrix C;
    C.loadFromFile("test40_mul_res.dat");
    CSRMatrix D = A + B;
    if (!D.Compare(C)) {
      cout << "Test 40 failed" << endl;
    }
  };

  //// Test number 41
  void  CSC_add_CSC()
  {
    CSCMatrix A;
    A.loadFromFile("test_mat3.dat");
    CSCMatrix B;
    B.loadFromFile("test_mat4.dat");
    CSCMatrix C;
    C.loadFromFile("test41_mul_res.dat");
    CSCMatrix D = A + B;
    if (!D.Compare(C)) {
      cout << "Test 41 failed" << endl;
    }
  };

////  CSC_add_CSR()
void  CSC_add_CSR()
  {
    CSCMatrix A;
    A.loadFromFile("test_mat3.dat");
    CSRMatrix B;
    B.loadFromFile("test_mat2.dat");
    CSCMatrix C;
    C.loadFromFile("test42_mul_res.dat");
    CSCMatrix D = A + B;
    if (!D.Compare(C)) {
      cout << "Test 42 failed" << endl;
    }
  };

  //// Test number 43
  void  CSC_add_COO()
  {
    CSCMatrix A;
    A.loadFromFile("test_mat3.dat");
    COOMatrix B;
    B.loadFromFile("test_mat6.dat");
    CSCMatrix C;
    C.loadFromFile("test43_mul_res.dat");
    CSCMatrix D = A + B;
    if (!D.Compare(C)) {
      cout << "Test 43 failed" << endl;
    }
  };

//// Test number 44
void    CSC_add_Dense()
  {
    CSCMatrix A;
    A.loadFromFile("test_mat3.dat");
    DenseMatrix B;
    B.loadFromFile("test_mat8.dat");
    DenseMatrix C;
    C.loadFromFile("test44_mul_res.dat");
    DenseMatrix D = A + B;
    if (!D.Compare(C)) {
      cout << "Test 44 failed" << endl;
    }
  };

//// Test number 45
void   CSC_add_Diag()
{
    CSCMatrix A;
    A.loadFromFile("test_mat3.dat");
    DiagonalMatrix B;
    B.loadFromFile("test_mat10.dat");
    CSCMatrix C;
    C.loadFromFile("test45_mul_res.dat");
    CSCMatrix D = A + B;
    if (!D.Compare(C)) {
      cout << "Test 45 failed" << endl;
    }
  };

//// Test number 46
void  COO_add_COO()
{
    COOMatrix A;
    A.loadFromFile("test_mat5.dat");
    COOMatrix B;
    B.loadFromFile("test_mat6.dat");
    COOMatrix C;
    C.loadFromFile("test46_mul_res.dat");
    COOMatrix D = A + B;
    if (!D.Compare(C)) {
      cout << "Test 46 failed" << endl;
    }
  };
//// Test number 47
void  COO_add_CSR()
  {
    COOMatrix A;
    A.loadFromFile("test_mat5.dat");
    CSRMatrix B;
    B.loadFromFile("test_mat2.dat");
    COOMatrix C;
    C.loadFromFile("test47_mul_res.dat");
    COOMatrix D = A + B;
    if (!D.Compare(C)) {
      cout << "Test 47 failed" << endl;
    }
  };

  //// Test number 48
  void  COO_add_CSC()
  {
    COOMatrix A;
    A.loadFromFile("test_mat5.dat");
    CSCMatrix B;
    B.loadFromFile("test_mat4.dat");
    COOMatrix C;
    C.loadFromFile("test48_mul_res.dat");
    COOMatrix D = A + B;
    if (!D.Compare(C)) {
      cout << "Test 48 failed" << endl;
    }
  };

  //// Test number 49
  void  COO_add_Dense()
  {
    COOMatrix A;
    A.loadFromFile("test_mat5.dat");
    DenseMatrix B;
    B.loadFromFile("test_mat8.dat");
    DenseMatrix C;
    C.loadFromFile("test49_mul_res.dat");
    DenseMatrix D = A + B;
    if (!D.Compare(C)) {
      cout << "Test 49 failed" << endl;
    }
  };

  //// Test number 50
  void COO_add_Diag()
  {
    COOMatrix A;
    A.loadFromFile("test_mat5.dat");
    DiagonalMatrix B;
    B.loadFromFile("test_mat10.dat");
    COOMatrix C;
    C.loadFromFile("test51_mul_res.dat");
    COOMatrix D = A + B;
    if (!D.Compare(C)) {
      cout << "Test 51 failed" << endl;
    }
  };

  //// Test number 51
  void  Diag_add_Diag()
  {
    DiagonalMatrix A;
    A.loadFromFile("test_mat9.dat");
    DiagonalMatrix B;
    B.loadFromFile("test_mat10.dat");
    DiagonalMatrix C;
    C.loadFromFile("test52_mul_res.dat");
    DiagonalMatrix D = A + B;
    if (!D.Compare(C)) {
      cout << "Test 51 failed" << endl;
    }
  };

  //// Test number 52
  void  Diag_add_CSR()
  {
    DiagonalMatrix A;
    A.loadFromFile("test_mat9.dat");
    CRSMatrix B;
    B.loadFromFile("test_mat2.dat");
    CSRMatrix C;
    C.loadFromFile("test52_mul_res.dat");
    CRSMatrix D = A + B;
    if (!D.Compare(C)) {
      cout << "Test 52 failed" << endl;
    }
  };

  //// Test number 53
  void  Diag_add_CSC()
  {
    DiagonalMatrix A;
    A.loadFromFile("test_mat9.dat");
    CSCMatrix B;
    B.loadFromFile("test_mat4.dat");
    CSCMatrix C;
    C.loadFromFile("test53_mul_res.dat");
    CSCMatrix D = A + B;
    if (!D.Compare(C)) {
      cout << "Test 53 failed" << endl;
    }
  };

  //// Test number 54
  void  Diag_add_COO()
{
    DiagonalMatrix A;
    A.loadFromFile("test_mat9.dat");
    COOMatrix B;
    B.loadFromFile("test_mat6.dat");
    COOMatrix C;
    C.loadFromFile("test54_mul_res.dat");
    COOMatrix D = A + B;
    if (!D.Compare(C)) {
      cout << "Test 54 failed" << endl;
    }
  };

  //// Test number 55
  void  Diag_add_Dense()
  {
    DiagonalMatrix A;
    A.loadFromFile("test_mat9.dat");
    DenseMatrix B;
    B.loadFromFile("test_mat8.dat");
    DenseMatrix C;
    C.loadFromFile("test55_mul_res.dat");
    DenseMatrix D = A + B;
    if (!D.Compare(C)) {
      cout << "Test 55 failed" << endl;
    }
  };

  //// Test number 56
void  Dense_add_Dense()
  {
    DenseMatrix A;
    A.loadFromFile("test_mat7.dat");
    DenseMatrix B;
    B.loadFromFile("test_mat8.dat");
    DenseMatrix C;
    C.loadFromFile("test56_mul_res.dat");
    DenseMatrix D = A + B;
    if (!D.Compare(C)) {
      cout << "Test 56 failed" << endl;
    }
  };

  //// Test number 57
void  Dense_add_CSR()
  {
    DenseMatrix A;
    A.loadFromFile("test_mat7.dat");
    CSRMatrix B;
    B.loadFromFile("test_mat2.dat");
    DenseMatrix C;
    C.loadFromFile("test57_mul_res.dat");
    DenseMatrix D = A + B;
    if (!D.Compare(C)) {
      cout << "Test 57 failed" << endl;
    }
  };

  //// Test number 58
void  Dense_add_CSC()
  {
    DenseMatrix A;
    A.loadFromFile("test_mat7.dat");
    CSCMatrix B;
    B.loadFromFile("test_mat4.dat");
    DenseMatrix C;
    C.loadFromFile("test58_mul_res.dat");
    DenseMatrix D = A + B;
    if (!D.Compare(C)) {
      cout << "Test 58 failed" << endl;
    }
  };

  //// Test number 59
void  Dense_add_COO()
  {
    DenseMatrix A;
    A.loadFromFile("test_mat7.dat");
    COOMatrix B;
    B.loadFromFile("test_mat6.dat");
    DenseMatrix C;
    C.loadFromFile("test59_mul_res.dat");
    DenseMatrix D = A + B;
    if (!D.Compare(C)) {
      cout << "Test 59 failed" << endl;
    }
  };

  //// Test number 60
  void  Dense_add_Diag()
{
    DenseMatrix A;
    A.loadFromFile("test_mat7.dat");
    DiagonalMatrix B;
    B.loadFromFile("test1_mat10.dat");
    DenseMatrix C;
    C.loadFromFile("test60_mul_res.dat");
    DenseMatrix D = A + B;
    if (!D.Compare(C)) {
      cout << "Test 60 failed" << endl;
    }
  };

