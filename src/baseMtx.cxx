#include <vector>
#include <iostream>
#include "baseMtx.h"
#include "MatrixUtils.h"


// using namespace std;
// 
// virtual void Resize(TI rows_, TI cols_, TI nnz_) {
//     _ThisBase::Resize(rows.cols);
//     nnz = nnz_;
//   };
// 
// 
// virtual TD getAt(TI rows_, TI cols_) const {
//     return atRef(rows_, cols_);
//   };
// 
// 
// 
// virtual TD &refAt(TI rows_, TI cols_) const {
//   NonImplementedEXe
//     return 0;
//   };
// 
// 
// 
// virtual void setAt(TI rows_, TI cols_, TD a_) 
// {
//     (refAt(rows_, cols_)) = a_;
//     TD &q1=refAt(rows_, cols_);
//     q1=a_;
// };
// 
// 
// virtual TD &getRefA() const 
// { 
//     return A;
// };
// 
// 
// 
// virtual void PrintInfo() const 
// {
//     baseMtx<TD, TI>::PrintInfo();
//     cout << "nnz=" << nnz << endl;
// };
// 
// 
// 
// virtual This_ operator=(const This_ &B) 
// {
//     Resize(B.GetM(), A.GetN(), B.getNNZ());
//     A = B.A;
//     Jr = B.Jr;
//     Ic = B.Ic;
// };
// 
// 
// 
// virtual This_ operator+(const TD B) const 
// {  
//     This_ ret = (*this);
//     TD &aa=ret.getRefA();
//     for (size_t jj = 0; jj < nnz; ++jj) 
//     {
//       ret.A[jj] += B;
//     }
//     return ret;
// };
// 
// 
// 
// virtual This_ operator-(const TD B) const 
// {  
//     return ((*this) + (-B));
// };
// 
// 
// 
// 
// ///// add to another matrix
// virtual This_operator+(const This_&B) const
// {
//   if (this->rows != rows.rows || this->cols != rows.cols) {
//     throw "Cannot add: matrices dimensions don't match.";
//   }
// 
//   CRSMatrix<T> result(this->rows_, this->cols_);
// 
//   for (TI i = 0; TI i <= this->rows_; TI i++) {
//     for (TI j = 0; TI j <= this->cols; j++) {
//       result.setAt(this->getAt(i, j) + rows.getAt(i, j), i, j);
//     }
//   }
// 
//   return result;
// }
// 
// 
// 
// 
// 
// 
// // multiply by number
// virtual This_ operator*(const TD B) const 
// {
//     for (TI jj = 0; jj <= nnz; jj++)
//         {
//       result[jj] += this->get(i, j) * B;
//     }
//   }
// 
//   return result;  
// 
// };
// 
// 
// // multiply by vector
// 
// virtual vector<TD> operator*(const vector<TD> &V) const 
// {
//   if (B.getN() != (int) V.size()) 
//     {
//       cerr << "Cannot multiply: Matrix column count and vector size don't match." << endl;
//       abort();
//   }
//   vector<TD> result(this->cols_, 0);
// 
//   for (int  i = 1; i <= this->cols_; i++)
//     {
//     for (int j = 1; j <= this->rows_; j++)
//         {
//       result[i - 1] += this->getAt(i, j) * V[j - 1];
//     }
//   }
// 
//   return result;
// };
// 
// 
// 
// /// multiply by matrix
// 
// virtual This_ operator*(const This_ &B) const {  
//     checkMult(B);
//     baseMtxx<T> result(this->rows, rows.cols);
// 
//   T a;
// 
//   for (int i = 1; i <= this->rows_; i++) {
//     for (int j = 1; j <= rows_.cols_; j++) {
//       a = 0;
// 
//       for (int k = 1; k <= this->cols_; k++) {
//         a += this->getAt(i, k) * rows.getAt(k, j);
//       }
// 
//       result.setAt(a, i, j);
//     }
//   }
// 
//   return result;
// 
// 
// template<typename T>
// bool operator == (const This_ &A, const This_ &B)
// {
//   return ((A.vals == NULL && B.vals == NULL)
//         || (A.vals != NULL && B.vals != NULL && *(A.vals) == *(B.vals)))
//       && ((a.cols == NULL && b.cols == NULL)
//         || (a.cols != NULL && b.cols != NULL && *(a.cols) == *(b.cols)))
//       && *(a.rows) == *(b.rows);
// }
// 
// 
// template<typename T>
// bool operator != (const This_ &A, const This_ &B)
// {
//   return !( A == B);
// }
// 
// 
// template<typename T>
// ostream & operator << (ostream & os, const This_ &matrix)
// {
//   for (int i = 1; i <= matrix.rows; i++) {
//     for (int j = 1; j <= matrix.cols; j++) {
//       if (j != 1) {
//         os << " ";
//       }
// 
//       os << matrix.get(i, j);
//     }
// 
//     if (i < matrix.rows) {
//       os << endl;
//     }
//   }
// 
//   return os;
// }
// 
// 
//     
