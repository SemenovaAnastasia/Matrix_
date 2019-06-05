#include <iostream>
#include <fstream>
#include "TKMatrixTypes.h"
#include <MatrixUtils.h>
using namespace std;


  // Addition to CRS MTX
  
  void  CSR_add_CSR();

  
  void  CSR_add_CSC();

  
  void  CSR_add_COO();

  
  void  CSR_add_Diag();

  
  void  CSR_add_Dense();

  
  // Addition to CSC MTX
  
  void  CSC_add_CSC();

  
  void  CSC_add_CSR();

  
  void  CSC_add_COO();

  
  void  CSC_add_Diag();

  
  void  CSC_add_Dense();
 
  
  // Addition to  COO MTX
  
   void  COO_add_COO();

  
  void  COO_add_CSC();

  
  void  COO_add_CSR();

  
  void  COO_add_Diag();
 
  
  void  COO_add_Dense();

  
  //Addition to Diagonal MTX
  
   void  Diag_add_CSR();

  
  void  Diag_add_CSC();

  
  void  Diag_add_COO();

  
  void  Diag_add_Diag();

  
  void  Diag_add_Dense();

  
  //Addition to Dense MTX
  
  void  Dense_add_CSR();

  
  void  Dense_add_CSC();
  
  
  void  Dense_add_COO();

  
  void  Dense_add_Diag();

  
  void  Dense_add_Dense();

