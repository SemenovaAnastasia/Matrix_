#ifndef CSCMATRIX_H__
#define CSCMATRIX_H__ 1
#include "TKMatrixTypes.h"

template <typename TI, typename TD>
class CSCMatrix : private baseSparseMatrix<TI, TD> {
  typedef baseSparseMatrix<TI, TD> _ThisBase;
  typedef CSCMatrix<TI, TD> _This;

 private:
  using baseSparseMatrix<TI, TD>::rows;
  using baseSparseMatrix<TI, TD>::cols;
  using baseSparseMatrix<TI, TD>::A;
  using baseSparseMatrix<TI, TD>::nnz;

  std::vector<TI> Jr;  // vector  stores indexes of the row coordinate
  std::vector<TI> Ic;  // vector stores the column coordinate

 public:
  CSCMatrix(TI rows_, TI cols_, TI nnz_) : _ThisBase(rows_, cols_) { nnz = nnz_; }

  virtual _This operator=(const _This &B);

  void fillCSC(const CSCMatrix<TI, TD> &B);

  void ConvertFromCSC(const CSCMatrix<TI, TD> &B) const {
    Resize(B.getM(), B.GetN());
  };

  _This operator=(const CSRMatrix<TI, TD> &B) { ConvertFromCSC(B); };
  void CSC_to_CSR(CSRMatrix<TI, TD> &B) const { B.Resize(rows, cols); };

  _This operator=(const COOMatrix<TI, TD> &B) { ConvertFromCSC(B); };
  void CSC_to_COO(COOMatrix<TI, TD>&B) const { B.Resize(rows, cols); };

  _This operator=(const DenseMatrix<TI, TD> &B) { ConvertFromCSC(B); };
  void CSC_to_Dense(DenseMatrix<TI, TD> &B) const { B.Resize(rows, cols); };

  _This operator=(const DiagonalMatrix<TI, TD> &B) { ConvertFromCSC(B); };
  void CSC_to_Diag(DiagonalMatrix<TI, TD> &B) const { B.Resize(rows, cols); };

  friend std::ostream &operator<<(std::ostream &stream, const _This &v);
};
#endif

/*virtual This_ operator=(const This_ &B)
{
    Resize(B.GetM(), A.GetN(), B.getNNZ());
    A = B.A;
    Ir = B.IR;
    Jc = B.Jc;
}

void fillCSC(const CSCMatrix <TI, TD> &B)
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
}


 void ConvertFromCSC(const CSCMatrix <TI, TD> &B) const { Resize(B.getM(),
B.GetN()); }

This_ operator=(const CRSMatrix<TI, TD>&B) { ConvertFromCSC(B); }
void CSC_to_CRS(CRSMatrix<TI, TD> &B) const { B.Resize(rows, cols); }
operator CRSMatrix<TI, TD>() {
    CSCMatrix<TI, TD>B;
    CSC_to_CRS(B);
    return (retv);
  }

This_ operator=(const COOMatrix<TI, TD> &B) { ConvertFromCSC(B); }
void CSC_to_COO(COOMatrix<TI, TD> &B) const { B.Resize(rows, cols); }
operator COOMatrix<TI, TD>() {
    CSCMatrix<TI, TD> B;
    CSC_to_COO(B);
    return (retv);
  }


This_ operator=(const DenseMatrix<TI, TD> &B) { ConvertFromCSC(B); }
void CSC_to_Dense(DenseMatrix<TI, TD> &B) const { B.Resize(rows, cols); }
operator DenseMatrix<TI, TD>() {
    CSCMatrix <TI, TD> B;
    CSC_to_Dense(B);
    return (retv);
  }


This_ operator=(const DiagMatrix<TI, TD> &B) { ConvertFromCSC(B); }
void CSC_to_Diag(DiagMatrix<TI, TD> &B) const { B.Resize(rows, cols); }
operator DiagMatrix<TI, TD>() {
    CSCMatrix <TI, TD> B;
    CSC_to_Diag(B);
    return (retv);
  }


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
  }
};
*/