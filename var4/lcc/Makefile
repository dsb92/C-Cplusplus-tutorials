# Wedit Makefile for project var4
SRCDIR=c:\lcc\projects\var4
CFLAGS=-I"c:\lcc\include"  -g2 
CC=$(LCCROOT)\bin\lcc.exe
LINKER=$(LCCROOT)\bin\lcclnk.exe
OBJS=\
	var4.obj

LIBS=
EXE=var4.exe

$(EXE):	$(OBJS) Makefile
	$(LINKER)  -subsystem console -o $(SRCDIR)\lcc\var4.exe $(OBJS) $(LIBS)

# Build var4.c
VAR4_C=\

var4.obj: $(VAR4_C) $(SRCDIR)\var4.c
	$(CC) -c $(CFLAGS) $(SRCDIR)\var4.c

link:
	$(LINKER)  -subsystem console -o $(SRCDIR)\lcc\var4.exe $(OBJS) $(LIBS)

clean:
	del $(OBJS) var4.exe
