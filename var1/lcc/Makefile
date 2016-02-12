# Wedit Makefile for project var1
SRCDIR=c:\lcc\projects\var1
CFLAGS=-I"c:\lcc\include"  -g2 
CC=$(LCCROOT)\bin\lcc.exe
LINKER=$(LCCROOT)\bin\lcclnk.exe
OBJS=\
	var1.obj

LIBS=
EXE=var1.exe

$(EXE):	$(OBJS) Makefile
	$(LINKER)  -subsystem console -o $(SRCDIR)\lcc\var1.exe $(OBJS) $(LIBS)

# Build var1.c
VAR1_C=\

var1.obj: $(VAR1_C) $(SRCDIR)\var1.c
	$(CC) -c $(CFLAGS) $(SRCDIR)\var1.c

link:
	$(LINKER)  -subsystem console -o $(SRCDIR)\lcc\var1.exe $(OBJS) $(LIBS)

clean:
	del $(OBJS) var1.exe
