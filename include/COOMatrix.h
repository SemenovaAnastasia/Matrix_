#ifndef COOMATRIX_H__
#define COOMATRIX_H__ 1
#include "TKMatrixTypes.h"


template <typename TI, typename TD> class COOMatrix : private baseSparseMatrix<TI, TD>{
typedef baseSparseMatrix<TI, TD> _ThisBase;
typedef COOMatrix<TI, TD> _This;

private:
  using baseSparseMatrix<TI, TD>::rows;
  using baseSparseMatrix<TI, TD>::cols;
  using baseSparseMatrix<TI, TD>::A;
  using baseSparseMatrix<TI, TD>::nnz;
    
  std::vector<TI> Ir;  // vector  stores the row coordinate
  std::vector<TI> Ic;  // vector stores the column coordinate

 public:
  COOMatrix(TI rows_, TI cols_, TI nnz_) : _ThisBase(rows_, cols_) {};
  virtual void Resize(TI rows_, TI cols_, TI nnz_) {
    rows = rows_;
    cols = cols_;
    nnz = nnz_;
    A.resize(nnz_);
    Ic.resize(cols_);
    Ir.resize(rows_);
  
  };
  


void fillCOO(TI rows_, TI cols_){};

  void ConvertFromCOO(const COOMatrix<TI, TD> &B) {
    Resize(B.getM(), B.GetN());
  };
  


 // _This operator=(const CSRMatrix<TI, TD> &B) { ConvertFromCOO(B); };
 // void COO_to_CSR(CSRMatrix<TI, TD><TI, TD> &B) const { B.Resize(rows, cols); };

  //_This operator=(const COOMatrix<TI, TD> &B) { ConvertFromCOO(B); };
//  void  COO_to_CSC(CSCMatrix<TI, TD> &B) const { B.Resize(rows, cols); };

  // _This operator=(const DenseMatrix<TI, TD> &B) { ConvertFromCSC(B); };
  // void COO_to_Dense(DenseMatrix<TI, TD><TI, TD> &B) const { B.Resize(rows, cols); };

 friend std::ostream &operator<<(std::ostream &stream, const _This &v);

    


// 
// 
// 
// void ConvertFromCOO(const COOMatrix <TI, TD> &B) const { Resize(B.getM(), B.GetN()); }
// 
// This_ operator=(const CRSMatrix<TI, TD>&B) { ConvertFromCOO(B); }
// void COO_to_CRS(CRSMatrix<TI, TD>&B) const { B.Resize(rows, cols); }
// operator CSCMatrix<TI, TD>() {
//     COOMatrix<TI, TD> B;
//     COO_to_CRS(B);
//     return (retv);
//   }
// 
// This_ operator=(const COOMatrix<TI, TD> &B) { ConvertFromCOO(B); }
// void COO_to_CSC(CSCMatrix<TI, TD> &B) const { B.Resize(rows, cols); }
// operator CSCMatrix<TI, TD>() {
//     COOMatrix<TI, TD> B;
//     COO_to_CSC(B);
//     return (retv);
//   }
// 
// 
// This_ operator=(const DenseMatrix<TI, TD> &B) { ConvertFromCSC(B); }
// void COO_to_Dense(DenseMatrix<TI, TD> &B) const { B.Resize(rows, cols); }
// operator DenseMatrix<TI, TD>() {
//     COO <TI, TD> B;
//     COO_to_Dense(B);
//     return (retv);
//   }
// 


//void COO_to_CSR(COOMatrix& A, CSRMatrix* B){
 //   B->rows = A.rows_;
  //  B->nnz = A.nnz_;
   // csr->a = new CSRMatrix [B->nnz_];
   // csr->ia = new MKL_INT[B->rows_+1];
   // csr->ja = new MKL_INT[B->nnz_];
   // MKL_INT nnz = coo.nnz;
   // MKL_INT info;
   // mkl_dcsrcoo(job , &coo.m,
   //             csr->a , csr->ja , csr->ia , &nnz ,
   //             coo.val, coo.rowind , coo.colind , &info );
//};

};


#endif

