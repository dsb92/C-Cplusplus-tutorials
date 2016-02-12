# Wedit Makefile for project Opgave_1_1_2
SRCDIR=c:\lcc\projects\opgave_1_1_2
CFLAGS=-I"c:\lcc\include"  -g2 
CC=$(LCCROOT)\bin\lcc.exe
LINKER=$(LCCROOT)\bin\lcclnk.exe
OBJS=\
	opgave_1_1_2.obj

LIBS=
EXE=opgave_1_1_2.exe

$(EXE):	$(OBJS) Makefile
	$(LINKER)  -subsystem console -o $(SRCDIR)\lcc\opgave_1_1_2.exe $(OBJS) $(LIBS)

# Build opgave_1_1_2.c
OPGAVE_1_1_2_C=\

opgave_1_1_2.obj: $(OPGAVE_1_1_2_C) c:\lcc\projects\opgave_1_1_1\opgave_1_1_2.c
	$(CC) -c $(CFLAGS) c:\lcc\projects\opgave_1_1_1\opgave_1_1_2.c

link:
	$(LINKER)  -subsystem console -o $(SRCDIR)\lcc\opgave_1_1_2.exe $(OBJS) $(LIBS)

clean:
	del $(OBJS) opgave_1_1_2.exe
