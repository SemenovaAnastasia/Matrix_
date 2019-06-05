include ../make.inc

LIB=../lib/libTabkinMatrix.a

BIN=Generate_for_Test Test_+MTX_Addition Test_MtxMult Test_Mtx_NumbMult Test_V_MtxMult 
#testconf optpv aibin_reader aibin_checker task_conv  
#test_farmer 
#optpv  
#aibin_reader solver_conv task_conv tki_pp aibin_checker
# tablereader pvintck intconv
# flibcheck


BINDIR=../bin/
BINPROGS=$(patsubst %,$(BINDIR)%.x,$(BIN))

CFLAGS=-I../include $(COPTS)
CXXFLAGS=$(CFLAGS)
CPPFLAGS=$(CFLAGS)


.SUFFIXES :
.SUFFIXES : .o .F .F90 .f .x .cxx .c .cpp

all: $(BINPROGS)


clean:
	@$(RM) -rf *.o *.P
	@$(RM) -rf $(BINPROGS)



$(BINDIR)%.x:%.o $(LIB)
	$(CXX)    -o $@  $< $(LIB) $(LFLAGS)

.c.o: 
	$(CC) -I../include -I../src  $(CFLAGS) -c  $<

.cxx.o: 
	$(CXX) -I../include -I../src  $(CXXFLAGS) -c  $<

.cpp.o: 
	$(CXX) -I../include -I../src  $(CXXFLAGS) -c  $<



%.P:%.c
	@$(MAKEDEPEND)
	@sed 's/\($*\)\.o[ :]*/\1.o $@ : /g' < $*.d |grep -v "<.*>\|\: \/" > $@; \
             rm -f $*.d; [ -s $@ ] || rm -f $@

%.P:%.cxx
	@$(MAKEDEPEND)
	@sed 's/\($*\)\.o[ :]*/\1.o $@ : /g' < $*.d |grep -v "<.*>\|\: \/" > $@; \
             rm -f $*.d; [ -s $@ ] || rm -f $@

%.P:%.cpp
	@$(MAKEDEPEND)
	@sed 's/\($*\)\.o[ :]*/\1.o $@ : /g' < $*.d |grep -v "<.*>\|\: \/" > $@; \
             rm -f $*.d; [ -s $@ ] || rm -f $@

-include $(BIN:=.P)


