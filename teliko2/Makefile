ifndef DEBUG
# Default: compile for debug
DEBUG=1
endif

CC = gcc

BASICFLAGS= -std=c99

DEBUGFLAGS=  -g 
OPTFLAGS= -g -finline -march=native -O3 -DNDEBUG

INCLUDE_PATH=-I. 

CFLAGS= -Wall -D_GNU_SOURCE $(BASICFLAGS)

ifeq ($(DEBUG),1)
CFLAGS+=  $(DEBUGFLAGS) $(PROFFLAGS) $(INCLUDE_PATH)
else
CFLAGS+=  $(OPTFLAGS) $(PROFFLAGS) $(INCLUDE_PATH)
endif

LIBS=-lfl
FLEX=flex
BISON=bison

#------------------------------------------
# app
#------------------------------------------

all: flexbison mycompiler sample

flexbison : cgen.h  cgen.c
	$(BISON) -d -v -r all myparser.y
	$(FLEX) mylexer.l 
	$(CC) $(CFLAGS) -o mycompiler lex.yy.c myparser.tab.c cgen.c $(LIBS)
	

mycompiler: cgen.c myparser.tab.h cgen.h
	$(CC) -o lex lex.yy.c $(LIBS) 

sample: 
	./mycompiler < correct2.tc > correct2.c


clean:
	-rm *.o myparser.tab.h
	-rm myparser.tab.c 
	-rm mycompiler
	-rm test.c
