# Wedit Makefile for project Opgave_4_3_1
SRCDIR=c:\lcc\projects\opgave_4_3_1
CFLAGS=-I"c:\lcc\include"  -g2 
CC=$(LCCROOT)\bin\lcc.exe
LINKER=$(LCCROOT)\bin\lcclnk.exe
OBJS=\
	struct4.obj

LIBS=
EXE=opgave_4_3_1.exe

$(EXE):	$(OBJS) Makefile
	$(LINKER)  -subsystem console -o $(SRCDIR)\lcc\opgave_4_3_1.exe $(OBJS) $(LIBS)

# Build struct4.c
STRUCT4_C=\
	$(SRCDIR)\support1.h\

struct4.obj: $(STRUCT4_C) $(SRCDIR)\struct4.c
	$(CC) -c $(CFLAGS) $(SRCDIR)\struct4.c

link:
	$(LINKER)  -subsystem console -o $(SRCDIR)\lcc\opgave_4_3_1.exe $(OBJS) $(LIBS)

clean:
	del $(OBJS) opgave_4_3_1.exe
