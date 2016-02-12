# Wedit Makefile for project Opgave_4_1_1
SRCDIR=c:\lcc\projects\opgave_4_1_1
CFLAGS=-I"c:\lcc\include"  -g2 
CC=$(LCCROOT)\bin\lcc.exe
LINKER=$(LCCROOT)\bin\lcclnk.exe
OBJS=\
	opgave_4_1_1.obj

LIBS=
EXE=opgave_4_1_1.exe

$(EXE):	$(OBJS) Makefile
	$(LINKER)  -subsystem console -o $(SRCDIR)\lcc\opgave_4_1_1.exe $(OBJS) $(LIBS)

# Build opgave_4_1_1.c
OPGAVE_4_1_1_C=\

opgave_4_1_1.obj: $(OPGAVE_4_1_1_C) $(SRCDIR)\opgave_4_1_1.c
	$(CC) -c $(CFLAGS) $(SRCDIR)\opgave_4_1_1.c

link:
	$(LINKER)  -subsystem console -o $(SRCDIR)\lcc\opgave_4_1_1.exe $(OBJS) $(LIBS)

clean:
	del $(OBJS) opgave_4_1_1.exe
