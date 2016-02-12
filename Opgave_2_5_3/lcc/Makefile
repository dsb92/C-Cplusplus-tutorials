# Wedit Makefile for project Opgave_2_5_3
SRCDIR=c:\lcc\projects\opgave_2_5_3
CFLAGS=-I"c:\lcc\include"  -g2 
CC=$(LCCROOT)\bin\lcc.exe
LINKER=$(LCCROOT)\bin\lcclnk.exe
OBJS=\
	opgave_2_5_4.obj \
	opgave_2_5_3.obj

LIBS=
EXE=opgave_2_5_3.exe

$(EXE):	$(OBJS) Makefile
	$(LINKER)  -subsystem console -o $(SRCDIR)\lcc\opgave_2_5_3.exe $(OBJS) $(LIBS)

# Build opgave_2_5_4.c
OPGAVE_2_5_4_C=\

opgave_2_5_4.obj: $(OPGAVE_2_5_4_C) c:\lcc\projects\opgave_2_5_4\opgave_2_5_4.c
	$(CC) -c $(CFLAGS) c:\lcc\projects\opgave_2_5_4\opgave_2_5_4.c

# Build opgave_2_5_3.c
OPGAVE_2_5_3_C=\

opgave_2_5_3.obj: $(OPGAVE_2_5_3_C) $(SRCDIR)\opgave_2_5_3.c
	$(CC) -c $(CFLAGS) $(SRCDIR)\opgave_2_5_3.c

link:
	$(LINKER)  -subsystem console -o $(SRCDIR)\lcc\opgave_2_5_3.exe $(OBJS) $(LIBS)

clean:
	del $(OBJS) opgave_2_5_3.exe
