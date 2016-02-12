# Wedit Makefile for project Opgave_3_4_1
SRCDIR=c:\lcc\projects\opgave_3_4_1
CFLAGS=-I"c:\lcc\include"  -g2 
CC=$(LCCROOT)\bin\lcc.exe
LINKER=$(LCCROOT)\bin\lcclnk.exe
OBJS=\
	opgave_3_4_1.obj

LIBS=
EXE=opgave_3_4_1.exe

$(EXE):	$(OBJS) Makefile
	$(LINKER)  -subsystem console -o $(SRCDIR)\lcc\opgave_3_4_1.exe $(OBJS) $(LIBS)

# Build opgave_3_4_1.c
OPGAVE_3_4_1_C=\

opgave_3_4_1.obj: $(OPGAVE_3_4_1_C) $(SRCDIR)\opgave_3_4_1.c
	$(CC) -c $(CFLAGS) $(SRCDIR)\opgave_3_4_1.c

link:
	$(LINKER)  -subsystem console -o $(SRCDIR)\lcc\opgave_3_4_1.exe $(OBJS) $(LIBS)

clean:
	del $(OBJS) opgave_3_4_1.exe
