# Wedit Makefile for project if
SRCDIR=c:\lcc\projects\if
CFLAGS=-I"c:\lcc\include"  -g2 
CC=$(LCCROOT)\bin\lcc.exe
LINKER=$(LCCROOT)\bin\lcclnk.exe
OBJS=\
	if.obj

LIBS=
EXE=if.exe

$(EXE):	$(OBJS) Makefile
	$(LINKER)  -subsystem console -o $(SRCDIR)\lcc\if.exe $(OBJS) $(LIBS)

# Build if.c
IF_C=\

if.obj: $(IF_C) $(SRCDIR)\if.c
	$(CC) -c $(CFLAGS) $(SRCDIR)\if.c

link:
	$(LINKER)  -subsystem console -o $(SRCDIR)\lcc\if.exe $(OBJS) $(LIBS)

clean:
	del $(OBJS) if.exe
