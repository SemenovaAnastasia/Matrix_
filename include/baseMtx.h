#ifndef BASE_MTX_H___
#define BASE_MTX_H___ 1

#include <vector>
#include "NotImplementedError.h"

template <typename TI, typename TD>
class baseMtx {
  typedef baseMtx<TI, TD> _This;

 private:
  std::vector<TD> A;
  TI rows;
  TI cols;

 public:
  baseMtx();
  ~baseMtx();
  int getN() const { return rows; };
  int getM() const { return cols; };
  baseMtx(TI rows_, TI cols_) { Resize(rows_, cols_); };
  virtual void Resize(TI rows_, TI cols_) {
   rows = rows_;
    cols = cols_;
  }

  virtual TD getAt(TI rows_, TI cols_) const { return refAt(rows_, cols_); };

  virtual TD &refAt(TI rows_, TI cols_) const {
    throw NotImplementedError("baseMtx::refAt");
  };

  virtual void setAt(TI rows_, TI cols_, TD a_) {
    throw NotImplementedError("baseMtx::setAt");
  };

  virtual std::vector<TD> &getRefA() const { return A; };

  virtual void PrintInfo() const {
    std::cout << "Size: " << rows << "x" << cols << std::endl;
  }
  virtual _This operator=(const _This &B);
  
  
  
  virtual _This operator+(const TD B) const;  // Add number
  virtual _This operator-(const TD B) const {
    return ((*this) + (-B));
  };                                              // Substract number
  virtual _This operator+(const _This &B) const;  // add to another matrix
  virtual _This operator*(const TD B) const;      //// multiply by number
  virtual std::vector<TD> operator*(
      const std::vector<TD> &V) const;            // multiply by
                                                  // vector
  virtual _This operator*(const _This &B) const;  // multiply by matrix

  friend bool operator==(const _This &A, const _This &B);

  friend bool operator!=(const _This &A, const _This &B);

  friend std::ostream &operator<<(std::ostream &s, const _This &matrix);
};

#endif
