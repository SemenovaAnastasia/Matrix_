#ifndef DIAGONALMATRIX_H__
#define DIAGONALMATRIX_H__ 1
#include "TKMatrixTypes.h"

template <typename TI, typename TD>
class DiagonalMatrix : private baseMtx<TI, TD> {
typedef baseMtx<TI, TD> _ThisBase;
typedef DiagonalMatrix<TI, TD> _This;

private:
using baseMtx<TI, TD>::rows;
using baseMtx<TI, TD>::cols;
using baseMtx<TI, TD>::A;



 public:
  DiagonalMatrix(TI rows_, TI cols_) : _ThisBase(rows_, cols_) { rows = rows_; cols = cols_;};

  
  void fillDiagonal(const DiagonalMatrix<TI, TD> &B);
  void ConvertFromDiag(const DiagonalMatrix<TI, TD> &B) const { Resize(B.getM(), B.GetN()); };
   
 //_This operator=(const COOMatrix <TI, TD> &B);
 //_This operator=(const CSRMatrix <TI, TD> &B);
 //_This operator= (const DenseMatrix<TI, TD> &B);

 
 // virtual This_operator=(const DiagonalMatrix<TI, TD>  &B);
  //virtual This_operator=(const DenseMatrix<TI, TD>  &B);

  //This_ operator=(const CRSMatrix<TI, TD>  &B) { ConvertFromDiag(B); }
  //void Diag_to_CRS(CRSMatrix<TI, TD>  &B) const { B.Resize(rows, cols); }

  //This_ operator=(const CSCMatrix<TI, TD>  &B) { ConvertFromDiag(B); }
 // void Diag_to_CSC(CSCMatrix<TI, TD>  &B) const { B.Resize(rows, cols); }


  //This_ operator=(const COOMatrix<TI, TD>  &B) { ConvertFromDiag(B); }
  //void Diag_to_COO(COOMatrix<TI, TD> &B) const { B.Resize(rows, cols); };
  
  
};
#endif
  
 

