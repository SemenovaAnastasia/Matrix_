#ifndef DENSEMATRIX_H__
#define DENSEMATRIX_H__ 1
#include "TKMatrixTypes.h"


template <typename TI, typename TD>
class DenseMatrix : private baseMtx<TD, TI> {
  typedef baseMtx<TI, TD> _ThisBase;
  typedef DenseMatrix<TI, TD> _This;

 private:
  using baseMtx<TI, TD>::rows;
  using baseMtx<TI, TD>::cols;
  using baseMtx<TI, TD>::A;

 public:
  DenseMatrix(TI rows_, TI cols_) : _ThisBase(rows_, cols_){};
  
  virtual void Resize(TI rows_, TI cols_) {
    rows = rows_;
    cols =cols_;
    A.resize(rows_*cols_);
  }
  
  void fillDense() {
    int i;
    int j;
    for (i = 0; i < cols; i++)
      for (j = 0; j < rows; j++) {
        A[i + j * cols] = (drand48()-.5)*2.0;
      }
  };

  _This operator=(const COOMatrix <TI, TD>  &B);
  _This operator=(const CSRMatrix <TI, TD>  &B);
  _This operator=(const CSCMatrix <TI, TD> &B);
  _This operator=(const DiagonalMatrix<TI, TD> &B);
};
#endif
