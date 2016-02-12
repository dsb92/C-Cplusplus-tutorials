# Wedit Makefile for project Opgave_1_7_4
SRCDIR=c:\lcc\projects\opgave_1_7_4
CFLAGS=-I"c:\lcc\include"  -g2 
CC=$(LCCROOT)\bin\lcc.exe
LINKER=$(LCCROOT)\bin\lcclnk.exe
OBJS=\
	opgave_1_7_4.obj

LIBS=
EXE=opgave_1_7_4.exe

$(EXE):	$(OBJS) Makefile
	$(LINKER)  -subsystem console -o $(SRCDIR)\lcc\opgave_1_7_4.exe $(OBJS) $(LIBS)

# Build opgave_1_7_4.c
OPGAVE_1_7_4_C=\

opgave_1_7_4.obj: $(OPGAVE_1_7_4_C) $(SRCDIR)\opgave_1_7_4.c
	$(CC) -c $(CFLAGS) $(SRCDIR)\opgave_1_7_4.c

link:
	$(LINKER)  -subsystem console -o $(SRCDIR)\lcc\opgave_1_7_4.exe $(OBJS) $(LIBS)

clean:
	del $(OBJS) opgave_1_7_4.exe
