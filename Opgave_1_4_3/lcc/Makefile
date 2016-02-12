# Wedit Makefile for project Opgave_1_4_3
SRCDIR=c:\lcc\projects\opgave_1_4_3
CFLAGS=-I"c:\lcc\include"  -g2 
CC=$(LCCROOT)\bin\lcc.exe
LINKER=$(LCCROOT)\bin\lcclnk.exe
OBJS=\
	opgave_1_4_3.obj

LIBS=
EXE=opgave_1_4_3.exe

$(EXE):	$(OBJS) Makefile
	$(LINKER)  -subsystem console -o $(SRCDIR)\lcc\opgave_1_4_3.exe $(OBJS) $(LIBS)

# Build opgave_1_4_3.c
OPGAVE_1_4_3_C=\

opgave_1_4_3.obj: $(OPGAVE_1_4_3_C) $(SRCDIR)\opgave_1_4_3.c
	$(CC) -c $(CFLAGS) $(SRCDIR)\opgave_1_4_3.c

link:
	$(LINKER)  -subsystem console -o $(SRCDIR)\lcc\opgave_1_4_3.exe $(OBJS) $(LIBS)

clean:
	del $(OBJS) opgave_1_4_3.exe
