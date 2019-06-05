#ifndef BASESPARSE_MATRIX___
#define BASESPARSE_MATRIX___ 1
#include "baseMtx.h"

template <typename TI, typename TD>
class baseSparseMatrix : private baseMtx<TI, TD> {
  typedef baseMtx<TI, TD> _ThisBase;
  typedef baseSparseMatrix<TI, TD> _This;
  using baseMtx<TI, TD>::m;
  using baseMtx<TI, TD>::n;

  const int nnz;
  // for CRS format
  std::vector<TI> Jr;  // vector  stores the row coordinate
  std::vector<TI> Ic;  // vector stores the start position of each column
                       // for CSC format
  std::vector<TI> Jc;  // vector stores the column coordinate
  std::vector<TI> Ir;  // vector  stores the start position of each row
                       // for COO format
                       // vector<TI> Jr;  // vector  stores the row coordinate
                       // vector<TI> Jc;  // vector stores the column coordinate

 public:
  baseSparseMatrix(TI m_, TI n_, TI nnz_) : _ThisBase(m_, n_) {
    nnz = nnz_;
    Resize(m_, n_, nnz_);
  }

  virtual void Resize(TI m_, TI n_, TI nnz_) {
    m = m_;
    n = n_;
    nnz = nnz_;
  }

  // virtual void Resize(TI m_, TI n_, TI nnz_{ this-> Resize(m,n);nnz=nnz_;
};
#endif
