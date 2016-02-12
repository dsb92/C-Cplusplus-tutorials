# Wedit Makefile for project forever1
SRCDIR=c:\lcc\projects\forever1
CFLAGS=-I"c:\lcc\include"  -g2 
CC=$(LCCROOT)\bin\lcc.exe
LINKER=$(LCCROOT)\bin\lcclnk.exe
OBJS=\
	forever1.obj

LIBS=
EXE=forever1.exe

$(EXE):	$(OBJS) Makefile
	$(LINKER)  -subsystem console -o $(SRCDIR)\lcc\forever1.exe $(OBJS) $(LIBS)

# Build forever1.c
FOREVER1_C=\

forever1.obj: $(FOREVER1_C) $(SRCDIR)\forever1.c
	$(CC) -c $(CFLAGS) $(SRCDIR)\forever1.c

link:
	$(LINKER)  -subsystem console -o $(SRCDIR)\lcc\forever1.exe $(OBJS) $(LIBS)

clean:
	del $(OBJS) forever1.exe
