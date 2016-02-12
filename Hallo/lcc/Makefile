# Wedit Makefile for project Hallo
SRCDIR=c:\lcc\projects\hallo
CFLAGS=-I"C:\lcc\include"  -g2 
CC=$(LCCROOT)\bin\lcc.exe
LINKER=$(LCCROOT)\bin\lcclnk.exe
OBJS=\
	hallo.obj

LIBS=
EXE=hallo.exe

$(EXE):	$(OBJS) Makefile
	$(LINKER)  -subsystem console -o $(SRCDIR)\lcc\hallo.exe $(OBJS) $(LIBS)

# Build hallo.c
HALLO_C=\
	c:\lcc\include\_syslist.h\

hallo.obj: $(HALLO_C) $(SRCDIR)\hallo.c
	$(CC) -c $(CFLAGS) $(SRCDIR)\hallo.c

link:
	$(LINKER)  -subsystem console -o $(SRCDIR)\lcc\hallo.exe $(OBJS) $(LIBS)

clean:
	del $(OBJS) hallo.exe
