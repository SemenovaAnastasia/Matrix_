include ../make.inc

.SUFFIXES :
.SUFFIXES : .o .F .F90 .f .x .cxx .c .cpp

LIBNAME=TabkinMatrix

LIB=../lib/lib$(LIBNAME).a


OBJ= COOMatrix.o CSRMatrix.o CSCMatrix.o DenseMatrix.o DiagonalMatrix.o	baseMtx.o


CFLAGS=-I../include $(COPTS)
CXXFLAGS=$(CFLAGS)
CPPFLAGS=$(CFLAGS)

     
all: $(LIB)


$(LIB): $(OBJ)
	$(AR) -rv $@ $?
	$(RANLIB) $@

$(SOLIB): $(OBJ)
	gcc $(CFLAGS) --shared -o $@  $(OBJ)  $(LFLAGS)

clean:
	$(RM) -rf *.o *.P
	$(RM) -rf $(LIB)
	$(RM) -rf $(SOLIB)

.c.o:
	$(CC) -I../../include $(CFLAGS) -c  $<


.cxx.o:
	$(CXX) -I../../include $(CXXFLAGS) -c  $<

.cpp.o:
	$(CXX) -I../../include $(CXXFLAGS) -c  $<

%.P:%.c
	@$(MAKEDEPEND)
	@sed 's/\($*\)\.o[ :]*/\1.o $@ : /g' < $*.d |grep -v "<.*>\|\: \/" > $@; \
             rm -f $*.d; [ -s $@ ] || rm -f $@

%.P:%.cxx
	@$(MAKEDEPEND)
	@sed 's/\($*\)\.o[ :]*/\1.o $@ : /g' < $*.d |grep -v "<.*>\|\: \/" > $@; \
             rm -f $*.d; [ -s $@ ] || rm -f $@

%.P:%.cpp
	$(MAKEDEPEND)
	sed 's/\($*\)\.o[ :]*/\1.o $@ : /g' < $*.d |grep -v "<.*>\|\: \/" > $@; \
             rm -f $*.d; [ -s $@ ] || rm -f $@

#	@grep -v "<.*>" < $*.d | sed 's/\($*\)\.o[ :]*/\1.o $@ : /g' > $@; \
#	    rm -f $*.d; [ -s $@ ] || rm -f $@

-include $(OBJ:.o=.P)
