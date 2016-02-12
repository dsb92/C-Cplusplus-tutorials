# Wedit Makefile for project Hallo4
SRCDIR=c:\lcc\projects\hallo4
CFLAGS=-I"c:\lcc\include"  -g2 
CC=$(LCCROOT)\bin\lcc.exe
LINKER=$(LCCROOT)\bin\lcclnk.exe
OBJS=\
	hallo4.obj

LIBS=
EXE=hallo4.exe

$(EXE):	$(OBJS) Makefile
	$(LINKER)  -subsystem console -o $(SRCDIR)\lcc\hallo4.exe $(OBJS) $(LIBS)

# Build hallo4.c
HALLO4_C=\

hallo4.obj: $(HALLO4_C) $(SRCDIR)\hallo4.c
	$(CC) -c $(CFLAGS) $(SRCDIR)\hallo4.c

link:
	$(LINKER)  -subsystem console -o $(SRCDIR)\lcc\hallo4.exe $(OBJS) $(LIBS)

clean:
	del $(OBJS) hallo4.exe
