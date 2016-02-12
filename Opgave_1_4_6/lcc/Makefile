# Wedit Makefile for project Opgave_1_4_6
SRCDIR=c:\lcc\projects\opgave_1_4_6
CFLAGS=-I"c:\lcc\include"  -g2 
CC=$(LCCROOT)\bin\lcc.exe
LINKER=$(LCCROOT)\bin\lcclnk.exe
OBJS=\
	opgave_1_4_6.obj

LIBS=
EXE=opgave_1_4_6.exe

$(EXE):	$(OBJS) Makefile
	$(LINKER)  -subsystem console -o $(SRCDIR)\lcc\opgave_1_4_6.exe $(OBJS) $(LIBS)

# Build opgave_1_4_6.c
OPGAVE_1_4_6_C=\

opgave_1_4_6.obj: $(OPGAVE_1_4_6_C) $(SRCDIR)\opgave_1_4_6.c
	$(CC) -c $(CFLAGS) $(SRCDIR)\opgave_1_4_6.c

link:
	$(LINKER)  -subsystem console -o $(SRCDIR)\lcc\opgave_1_4_6.exe $(OBJS) $(LIBS)

clean:
	del $(OBJS) opgave_1_4_6.exe
