#
# Small makefile for testing with non-Microsoft compilers
#

## Linux (uncomment if using linux)
XXFLAGS += -std=c++98 -Wall
LDFLAGS += -lrt

## CygWin (uncomment if using cygwin)
# CXXFLAGS += -Wall
# LDFLAGS +=

#  CC = g++
CC = clang++ -O3

all: testSnap
#  all: static

static: libsnap.a

testSnap: testSnap.cpp Snap.o
	$(CC) $(LDFLAGS) -o testSnap testSnap.cpp Snap.o -I../GLib

Snap.o:
	$(CC) -c $(CXXFLAGS) Snap.cpp -I../GLib

libsnap.a: ../glib/gnuplot.o ../glib/linalg.o gbase.o util.o graph.o timenet.o subgraph.o anf.o cncom.o alg.o gsvd.o gstat.o centr.o cmty.o ggen.o ff.o gviz.o ghash.o statplot.o gio.o
	ar rcs $@ $^

clean:
	rm -f *.o testSnap testSnap.exe *.plt *.tab *.png libsnap.a

