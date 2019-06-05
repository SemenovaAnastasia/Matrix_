#ifndef MATRIXUTILS_H__
#define MATRIXUTILS_H__ 1
#include <vector>
#include <iostream>
#include <cstdlib>
#include <sys/time.h>
#include <unistd.h>

void InitRand48() {
  struct timeval tmv;
  short unsigned int dval[3];
  long int sval;

  gettimeofday(&tmv, (struct timezone *)0);
  sval = (time(NULL) * 1e6 + tmv.tv_usec + getpid());
  srand48(sval);
  dval[0] = lrand48();
  dval[1] = lrand48();
  dval[2] = lrand48();
  seed48(dval);
  gettimeofday(&tmv, (struct timezone *)0);
  dval[0] = lrand48() + tmv.tv_usec;
  dval[1] = lrand48();
  dval[2] = lrand48();
  seed48(dval);
};

template <typename TD, typename TI>
std::vector<std::vector<TD> > generateVector(TI rows) {
  std::vector<std::vector<TD> > V(rows);
  for (int i = 0; i < rows; i++) {
    V[i] = (drand48() - 0.5) * 2.0;
  }
  return V;
}
#endif
