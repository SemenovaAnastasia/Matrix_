#include<iostream>
#include<fstream>
#include "DiagonalMatrix.h"




/*using namespace std;

void fillDiag(const DiagonalMatrix <TI, TD> &B)
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



void ConvertFromDiag(const DiagonalMatrix<TI, TD> &B) const { Resize(B.getM(), B.GetN()); }

This_ operator=(const CRSMatrix<TI, TD> &B) { ConvertFromDiag(B); }
void Dia_to_CRS(CRSMatrix<TI, TD> &B) const { B.Resize(rows, cols); }
operator CRSMatrix<<TI, TD>() {
    CRSMatrix<TI, TD> B;
    Diag_to_ToCRS(B);
    return (retv);
  }

This_ operator=(const CSCMatrix<TI, TD> &B) { ConvertFromDiag(B); }
void Diag_to_CSC(CSCMatrix<TI, TD> &B) const { B.Resize(rows, cols); }
operator CSCMatrix<TI, TD>() {
    CSCMatrix<TI, TD>B;
    Diag_to_CSC(B);
    return (retv);
  }


This_ operator=(const COOMatrix<TI, TD> &B) { ConvertFromDiag(B); }
void Diag_to_COO(COOMatrix<TI, TD> &B) const { B.Resize(rows, cols); }
operator COOMatrix<TI, TD>() {
    COOMatrix<TI, TD> B;
    Diag_to_COO(B);
    return (retv);
  }

*/