# Wedit Makefile for project input1
SRCDIR=c:\lcc\projects\input1
CFLAGS=-I"c:\lcc\include"  -g2 
CC=$(LCCROOT)\bin\lcc.exe
LINKER=$(LCCROOT)\bin\lcclnk.exe
OBJS=\
	input1.obj

LIBS=
EXE=input1.exe

$(EXE):	$(OBJS) Makefile
	$(LINKER)  -subsystem console -o $(SRCDIR)\lcc\input1.exe $(OBJS) $(LIBS)

# Build input1.c
INPUT1_C=\

input1.obj: $(INPUT1_C) $(SRCDIR)\input1.c
	$(CC) -c $(CFLAGS) $(SRCDIR)\input1.c

link:
	$(LINKER)  -subsystem console -o $(SRCDIR)\lcc\input1.exe $(OBJS) $(LIBS)

clean:
	del $(OBJS) input1.exe
