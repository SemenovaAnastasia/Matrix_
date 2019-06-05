#ifndef CSRMATRIX_H__
#define CSRMATRIX_H__ 1
#include "TKMatrixTypes.h"

template <typename TI, typename TD>
class CSRMatrix : private baseSparseMatrix<TD, TI> {
  typedef baseSparseMatrix<TD, TI> _ThisBase;
  typedef CSRMatrix<TI, TD> _This;

private:
  using baseSparseMatrix<TI, TD>::rows;
  using baseSparseMatrix<TI, TD>::cols;
  using baseSparseMatrix<TI, TD>::A;
  using baseSparseMatrix<TI, TD>::nnz;
    
  std::vector<TI> Ir;  // vector  stores the row coordinate
  std::vector<TI> Jc;  // vector stores the column coordinate



 public:
  CSRMatrix(TI rows_, TI cols_, TI nnz_) : _ThisBase(rows_, cols_) {};
  virtual void Resize(TI rows_, TI cols_, TI nnz_) {
    rows = rows_;
    cols = cols_;
    nnz = nnz_;
    A.resize(nnz_);
    Jc.resize(nnz_);
    Ir.resize(cols_);    
 };
  
  void fillCSR(const CSRMatrix <TI, TD> &B ){};


  void ConvertFromCSR(const CSRMatrix<TI, TD> &B) const {
    Resize(B.getM(), B.GetN());
 // }

// _This operator=(const CSCMatrix<TI, TD> &B) { ConvertFromCRS(B); };
//void CSR_to_CSC(CSCMatrix<TI, TD>&B) const { B.Resize(rows,cols); };
//operator CSCMatrix<TI, TD>(); {
//CSCMatrix<TI, TD> B;
//CSR_to_CSC(B);
//return (B);
//};

  // _This operator=(const COOMatrix<TI, TD> &B) { ConvertFromCRS(B); };
  // void CSR_to_COO(COOMatrix<TI, TD> &B) const { B.Resize(rows, cols); };
  // 
  // _This operator=(const DenseMatrix<TI, TD> &B) { ConvertFromCRS(B); };
  // void CSR_to_Dense(DenseMatrix<TI, TD> &B) const { B.Resize(rows, cols); };
  // 
  // _This operator=(const DiagMatrix<TI, TD> &B) { ConvertFromCRS(B); };
  // void CSR_to_Diag(DiagMatrix<TI, TD>&B) const { B.Resize(rows, cols); };
  
  
  
  /*void Resize(TD m_, TI n_, TI nnz_) {
    _ThisBase::Resize(rows.cols);
    nnz = nnz_;
  };


void fillCSR(const CSRMatrix <TI, TD> &B)
{
    int i;
    int j;
    for (i=0;i<cols;i++)
      for (j=0;j<cols;j++) 
      {
          if (i==j) 
          {
            B[i][j] = IniitRnd48();
          }
          else
          {
            B[i][j] = 0;
          }
      }
  return 0;
};



void ConvertFromCSR(const CSRMatrix <TI, TD><TI, TD> &B) const { Resize(B.getM(), B.GetN()); }

    
This_ operator=(const CSCMatrix<TI, TD>&B) { ConvertFromCRS(B); }
void CSR_to_CSC(CSCMatrix<TI, TD> &B) const { B.Resize(rows, cols); }
operator CSCMatrix<TI, TD>() {
    CSCMatrix<TI, TD> B;
    CSR_to_CSC(B);
    return (retv);
  }

This_ operator=(const COOMatrix<TI, TD> &B) { ConvertFromCRS(B); }
void CSR_to_COO(COOMatrix<TI, TD> &B) const { B.Resize(rows, cols); }
operator COOMatrix<TI, TD>() {
    COOMatrix<TI, TD> B;
    CSR_to_COO(B);
    return (retv);
  }


This_ operator=(const DenseMatrix<TI, TD>&B) { ConvertFromCRS(B); }
void CSR_to_Dense(DenseMatrix<TI, TD>&B) const { B.Resize(rows, cols); }
operator DenseMatrix<TI, TD>() {
    DenseMatrix <TI, TD> B;
    CSR_to_Dense(B);
    return (retv);
  }


This_ operator=(const DiagMatrix<TI, TD> &B) { ConvertFromCRS(B); }
void CSR_to_Diag(DiagMatrix<TI, TD>&B) const { B.Resize(rows, cols); }
operator DiagMatrix<TI, TD><TI, TD>() {
    DiagMatrix <TI, TD>B;
    CSR_to_Diag(B);
    return (retv);
  }
*/

  friend std::ostream &operator<<(std::ostream &stream, const _This &v) {
    int op = stream.precision();
    stream.precision(8);
    stream.setf(std::ios::scientific, std::ios::floatfield);
    stream << std::scientific;
    stream << std::setw(18) << v.NRows << std::setw(18) << v.NCols
           << std::setw(18) << v.NNZ << std::endl;
    for (int i = 0; i < v.NRows; ++i) {
      for (int j = v.Jc[i]; j < v.Jc[i + 1]; ++j) {
        stream << std::setw(18) << i << std::setw(18) << v.Ir[j]
               << std::setw(18) << v.A[j] << std::endl
      }
    }
    stream.precision(op);
    return stream;
};
};

#endif
