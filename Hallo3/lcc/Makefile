# Wedit Makefile for project Hallo_3
SRCDIR=c:\lcc\projects\hallo3
CFLAGS=-I"c:\lcc\include"  -g2 
CC=$(LCCROOT)\bin\lcc.exe
LINKER=$(LCCROOT)\bin\lcclnk.exe
OBJS=\
	hallo3.obj

LIBS=
EXE=hallo_3.exe

$(EXE):	$(OBJS) Makefile
	$(LINKER)  -subsystem console -o $(SRCDIR)\lcc\hallo_3.exe $(OBJS) $(LIBS)

# Build hallo3.c
HALLO3_C=\

hallo3.obj: $(HALLO3_C) $(SRCDIR)\hallo3.c
	$(CC) -c $(CFLAGS) $(SRCDIR)\hallo3.c

link:
	$(LINKER)  -subsystem console -o $(SRCDIR)\lcc\hallo_3.exe $(OBJS) $(LIBS)

clean:
	del $(OBJS) hallo_3.exe
