# Wedit Makefile for project struct4
SRCDIR=c:\lcc\projects\opgave_4_2_1\lcc\lcc\lcc
CFLAGS=-I"c:\lcc\include"  -g2 
CC=$(LCCROOT)\bin\lcc.exe
LINKER=$(LCCROOT)\bin\lcclnk.exe
OBJS=\
	struct4.obj

LIBS=
EXE=struct4.exe

$(EXE):	$(OBJS) Makefile
	$(LINKER)  -subsystem console -o $(SRCDIR)\lcc\struct4.exe $(OBJS) $(LIBS)

# Build struct4.c
STRUCT4_C=\

struct4.obj: $(STRUCT4_C) $(SRCDIR)\struct4.c
	$(CC) -c $(CFLAGS) $(SRCDIR)\struct4.c

link:
	$(LINKER)  -subsystem console -o $(SRCDIR)\lcc\struct4.exe $(OBJS) $(LIBS)

clean:
	del $(OBJS) struct4.exe
