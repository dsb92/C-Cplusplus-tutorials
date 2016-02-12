# Wedit Makefile for project Opgave_2_9_5
SRCDIR=c:\lcc\projects\opgave_2_9_5
CFLAGS=-I"c:\lcc\include"  -g2 
CC=$(LCCROOT)\bin\lcc.exe
LINKER=$(LCCROOT)\bin\lcclnk.exe
OBJS=\
	opgave_2_9_5.obj

LIBS=
EXE=opgave_2_9_5.exe

$(EXE):	$(OBJS) Makefile
	$(LINKER)  -subsystem console -o $(SRCDIR)\lcc\opgave_2_9_5.exe $(OBJS) $(LIBS)

# Build opgave_2_9_5.c
OPGAVE_2_9_5_C=\

opgave_2_9_5.obj: $(OPGAVE_2_9_5_C) $(SRCDIR)\opgave_2_9_5.c
	$(CC) -c $(CFLAGS) $(SRCDIR)\opgave_2_9_5.c

link:
	$(LINKER)  -subsystem console -o $(SRCDIR)\lcc\opgave_2_9_5.exe $(OBJS) $(LIBS)

clean:
	del $(OBJS) opgave_2_9_5.exe
