#include <vector>
#include <iostream>
#include "MatrixUtils.h"


using namespace std;

// virtual void fillRand() {
//     throw NotImplementedError("baseMtx::InitRnd48");
//   }  // generate matrix
// 
//   virtual TD getAt(int rows_, int cols_) const {
//     throw NotImplementedError("baseMtx::InitRnd48");
//   }
// 
//   virtual TD &refAt(TI rows_, TI cols_) const {
//     throw NotImplementedError("baseMtx::InitRnd48");
//   }
// 
//   virtual void setAt(TI rows_, TI cols_, TD a_) {
//     throw NotImplementedError("baseMtx::multiply2");
//   }
// 
//   virtual This_ operator*(const TD B) const {  // multiply by number
//     throw NotImplementedError("baseMtx::multiply2");
//   };
// 
//   virtual vector<TD> operator*(
//       const vector<TD> &V) const {  // multiply by vector
//     throw NotImplementedError("baseMtx::multiply2");
//   };
// 
//   virtual This_ operator*(const This_ &B) const {  /// multiply by matrix
//     throw NotImplementedError("baseMtx::multiply2");
//   };
// 
//   virtual void writeToFile(const string &name) {
//     throw NotImplementedError("baseMtx::multiply2");
//   }
// 
//   virtual void writeToCooFile(const string &name) {
//     throw NotImplementedError("baseMtx::multiply2");
//   }
// 
//   void checkMult(const This_ &B) const {
//     if (B.getN() != rows) {
//       cerr << "Matrixes can not be multiplied" << endl;
//       abort();
//     }
//   }
// };
