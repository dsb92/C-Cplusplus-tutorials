# Wedit Makefile for project Opgave_1_7_7
SRCDIR=c:\lcc\projects\opgave_1_7_7
CFLAGS=-I"c:\lcc\include"  -g2 
CC=$(LCCROOT)\bin\lcc.exe
LINKER=$(LCCROOT)\bin\lcclnk.exe
OBJS=\
	opgave_1_7_7.obj

LIBS=
EXE=opgave_1_7_7.exe

$(EXE):	$(OBJS) Makefile
	$(LINKER)  -subsystem console -o $(SRCDIR)\lcc\opgave_1_7_7.exe $(OBJS) $(LIBS)

# Build opgave_1_7_7.c
OPGAVE_1_7_7_C=\

opgave_1_7_7.obj: $(OPGAVE_1_7_7_C) $(SRCDIR)\opgave_1_7_7.c
	$(CC) -c $(CFLAGS) $(SRCDIR)\opgave_1_7_7.c

link:
	$(LINKER)  -subsystem console -o $(SRCDIR)\lcc\opgave_1_7_7.exe $(OBJS) $(LIBS)

clean:
	del $(OBJS) opgave_1_7_7.exe
