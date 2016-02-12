# Wedit Makefile for project Opgave_1_4_2
SRCDIR=c:\lcc\projects\opgave_1_4_2
CFLAGS=-I"c:\lcc\include"  -g2 
CC=$(LCCROOT)\bin\lcc.exe
LINKER=$(LCCROOT)\bin\lcclnk.exe
OBJS=\
	opgave__1_4_2.obj

LIBS=
EXE=opgave_1_4_2.exe

$(EXE):	$(OBJS) Makefile
	$(LINKER)  -subsystem console -o $(SRCDIR)\lcc\opgave_1_4_2.exe $(OBJS) $(LIBS)

# Build opgave__1_4_2.c
OPGAVE__1_4_2_C=\

opgave__1_4_2.obj: $(OPGAVE__1_4_2_C) $(SRCDIR)\opgave__1_4_2.c
	$(CC) -c $(CFLAGS) $(SRCDIR)\opgave__1_4_2.c

link:
	$(LINKER)  -subsystem console -o $(SRCDIR)\lcc\opgave_1_4_2.exe $(OBJS) $(LIBS)

clean:
	del $(OBJS) opgave_1_4_2.exe
