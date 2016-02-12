# Wedit Makefile for project do_while1
SRCDIR=c:\lcc\projects\do_while1
CFLAGS=-I"c:\lcc\include"  -g2 
CC=$(LCCROOT)\bin\lcc.exe
LINKER=$(LCCROOT)\bin\lcclnk.exe
OBJS=\
	do_while1.obj

LIBS=
EXE=do_while1.exe

$(EXE):	$(OBJS) Makefile
	$(LINKER)  -subsystem console -o $(SRCDIR)\lcc\do_while1.exe $(OBJS) $(LIBS)

# Build do_while1.c
DO_WHILE1_C=\

do_while1.obj: $(DO_WHILE1_C) $(SRCDIR)\do_while1.c
	$(CC) -c $(CFLAGS) $(SRCDIR)\do_while1.c

link:
	$(LINKER)  -subsystem console -o $(SRCDIR)\lcc\do_while1.exe $(OBJS) $(LIBS)

clean:
	del $(OBJS) do_while1.exe
