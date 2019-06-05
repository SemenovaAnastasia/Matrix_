#ifndef NOT_IMPLEMENTED_H__
#define NOT_IMPLEMENTED_H__ 1

#include <iostream>
class NotImplementedError{
 public:
  inline NotImplementedError(const std::string &func)
      {
        std::cerr << "Not implemented! \"" << func <<"\"" <<std::endl;
      
      }

  virtual std::string getClass() const { return "NotImplementedError"; }
};

#endif
