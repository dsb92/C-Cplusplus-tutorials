# Wedit Makefile for project pointer1
SRCDIR=c:\lcc\projects\pointer1
CFLAGS=-I"c:\lcc\include"  -g2 
CC=$(LCCROOT)\bin\lcc.exe
LINKER=$(LCCROOT)\bin\lcclnk.exe
OBJS=\
	pointer1.obj

LIBS=
EXE=.exe

$(EXE):	$(OBJS) Makefile
	$(LINKER)  -subsystem windows -o $(SRCDIR)\lcc\.exe $(OBJS) $(LIBS)

# Build pointer1.c
POINTER1_C=\

pointer1.obj: $(POINTER1_C) $(SRCDIR)\pointer1.c
	$(CC) -c $(CFLAGS) $(SRCDIR)\pointer1.c

link:
	$(LINKER)  -subsystem windows -o $(SRCDIR)\lcc\.exe $(OBJS) $(LIBS)

clean:
	del $(OBJS) .exe
