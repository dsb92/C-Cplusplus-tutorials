# Wedit Makefile for project Opgave_1_7_8
SRCDIR=c:\lcc\projects\opgave_1_7_8
CFLAGS=-I"c:\lcc\include"  -g2 
CC=$(LCCROOT)\bin\lcc.exe
LINKER=$(LCCROOT)\bin\lcclnk.exe
OBJS=\
	opgave_1_7_8.obj

LIBS=
EXE=opgave_1_7_8.exe

$(EXE):	$(OBJS) Makefile
	$(LINKER)  -subsystem console -o $(SRCDIR)\lcc\opgave_1_7_8.exe $(OBJS) $(LIBS)

# Build opgave_1_7_8.c
OPGAVE_1_7_8_C=\

opgave_1_7_8.obj: $(OPGAVE_1_7_8_C) $(SRCDIR)\opgave_1_7_8.c
	$(CC) -c $(CFLAGS) $(SRCDIR)\opgave_1_7_8.c

link:
	$(LINKER)  -subsystem console -o $(SRCDIR)\lcc\opgave_1_7_8.exe $(OBJS) $(LIBS)

clean:
	del $(OBJS) opgave_1_7_8.exe
