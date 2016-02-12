# Wedit Makefile for project Opgave_1_7_1
SRCDIR=c:\lcc\projects\opgave_1_7_1
CFLAGS=-I"c:\lcc\include"  -g2 
CC=$(LCCROOT)\bin\lcc.exe
LINKER=$(LCCROOT)\bin\lcclnk.exe
OBJS=\
	opgave_1_7_1.obj

LIBS=
EXE=opgave_1_7_1.exe

$(EXE):	$(OBJS) Makefile
	$(LINKER)  -subsystem console -o $(SRCDIR)\lcc\opgave_1_7_1.exe $(OBJS) $(LIBS)

# Build opgave_1_7_1.c
OPGAVE_1_7_1_C=\

opgave_1_7_1.obj: $(OPGAVE_1_7_1_C) $(SRCDIR)\opgave_1_7_1.c
	$(CC) -c $(CFLAGS) $(SRCDIR)\opgave_1_7_1.c

link:
	$(LINKER)  -subsystem console -o $(SRCDIR)\lcc\opgave_1_7_1.exe $(OBJS) $(LIBS)

clean:
	del $(OBJS) opgave_1_7_1.exe
