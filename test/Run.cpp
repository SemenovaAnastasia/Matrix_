#include <Test_+MTX_Addition.h>
#include <Test_Mtx_NumbMult.h>
#include <Test_MtxMult.h>
#include <Test_V_MtxMult.h>


using namespase std;









int main(){


//1.MATRICES ADDITION


    // Addition to CRS MTX
  
    void bool CSR_add_CSR();
    return 0;
  
    void bool CSRCSR_add_CSC();
    return 0;CSR
  
    void bool CSR_add_COO();
    return 0;
  
    void bool CSR_add_Diag();
    return 0;
  
    void bool CSR_add_Dense();
    return 0;
  
    // Addition to CSC MTX
  
    void bool CSC_add_CSC();
    return 0;
  
    void bool CSC_add_CRS();
    return 0;
  
    void bool CSC_add_COO();
    return 0;
  
    void bool CSC_add_Diag();
    return 0;
  
    void bool CSC_add_Dense();
    return 0;
  
    // Addition to  COO MTX
  
    void bool COO_add_COO();
    return 0;
  
    void bool COO_add_CSC();
    return 0;
  
    void bool COO_add_CSR();
    return 0;
  
    void bool COO_add_Diag();
    return 0;
  
    void bool COO_add_Dense();
    return 0;
  
    //Addition to Diagonal MTX
  
    void bool Diag_add_CSR();
    return 0;
  
    void bool Diag_add_CSC();
    return 0;
  
    void bool Diag_add_COO();
    return 0;
  
    void bool Diag_add_Diag();
    return 0;
  
    void bool Diag_add_Dense();
    return 0;
  
    //Addition to Dense MTX
  
    void bool Dense_add_CSR();
    return 0;
  
    void bool Dense_add_CSC();
    return 0;
  
    void bool Dense_add_COO();
    return 0;
  
    void bool Dense_add_Diag();
    return 0;
  
    void bool Dense_add_Dense();
    return 0;
  


//2. MATRICES BY NUMBER MULTIPLICATION

    void bool Test_CSR_Numb_Multiplication();
    return 0;
    
    void bool Test_CSC_Numb_Multiplication();
    return 0;
    
    void bool Test_COO_Numb_Multiplication();
    return 0;
    
    void bool Test_Diag_Numb_Multiplication();
    return 0;
    
    void bool Test_Dense_Numb_Multiplication();
    return 0;
    

//3. MATRIX BY MATRIX MULTIPLICATION

    // CRS MULTIPLICATION
    
    void bool Test_CRS_CRS_MatrixMultiplication();
    return 0;
  
    void bool Test_CRS_CSC_MatrixMultiplication();
    return 0;
  
    void bool Test_CRS_COO_MatrixMultiplication();
    return 0;
  
    void bool Test_CRS_Dense_MatrixMultiplication();
    return 0;
  
    void bool Test_CRS_Diag_MatrixMultiplication();
    return 0;
    
    // CSC MULTIPLICATION
  
    void bool Test_CSC_CSC_MatrixMultiplication();
    return 0;
  
    void bool Test_CSC_CRS_MatrixMultiplication();
    return 0;
    
    void bool Test_CSC_COO_MatrixMultiplication();
    return 0;
  
    void bool Test_CSC_Dense_MatrixMultiplication();
    return 0;
  
    void bool Test_CSC_Diag_MatrixMultiplication();
    return 0;
    
    
    // COO MULTIPLICATION
    
    void bool Test_COO_COO_MatrixMultiplication();
    return 0;
  
    void bool Test_COO_CRS_MatrixMultiplication();
    return 0;
  
    void bool Test_COO_CSC_MatrixMultiplication();
    return 0;
  
    void bool Test_COO_Dense_MatrixMultiplication();
    return 0;
  
    void bool Test_COO_Diag_MatrixMultiplication();
    return 0;
  
    
    //DIAGONAL MULTIPLICATION
    
    void bool Test_Diag_Diag_MatrixMultiplication();
    return 0;
  
    void bool Test_Diag_CRS_MatrixMultiplication();
    return 0;
  
    void bool Test_Diag_CSC_MatrixMultiplication();
    return 0;
  
    void bool Test_Diag_COO_MatrixMultiplication();
    return 0;
  
    void bool Test_Diag_Dense_MatrixMultiplication();
    return 0;
    
    
    //// DENSE MULTIPLICATION
  
    void bool Test_Dense_Dense_MatrixMultiplication();
    return 0;
  
    void bool Test_Dense_CRS_MatrixMultiplication();
    return 0;
  
    void bool Test_Dense_CSC_MatrixMultiplication();
    return 0;
  
    void bool Test_Dense_COO_MatrixMultiplication();
    return 0;
  
    void bool Test_Dense_Diag_MatrixMultiplication();
    return 0;
    
    



//4.MATRIX BY VECTOR MULTIPLICATION 


    //CSR & VECTOR
    
    void bool Test_CSR_VectorMultiplication();
    return 0;
    
    //CSC & VECTOR
  
    void bool Test_CSC_VectorMultiplication();
    return 0;
    
    //COO & VECTOR
  
    void bool Test_COO_VectorMultiplication();
    return 0;
    
    //DENSE & VECTOR
    
    void bool Test_Dense_VectorMultiplication();
    return 0;
    
    //DIAGONAL & VECTOR 
    
    void bool Test_Diag_VectorMultiplication();
    return 0;



}
