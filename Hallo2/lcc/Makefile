# Wedit Makefile for project Hallo2
SRCDIR=c:\lcc\projects\hallo2
CFLAGS=-I"C:\lcc\include"  -g2 
CC=$(LCCROOT)\bin\lcc.exe
LINKER=$(LCCROOT)\bin\lcclnk.exe
OBJS=\
	hallo2.obj

LIBS=
EXE=hallo2.exe

$(EXE):	$(OBJS) Makefile
	$(LINKER)  -subsystem console -o $(SRCDIR)\lcc\hallo2.exe $(OBJS) $(LIBS)

# Build hallo2.c
HALLO2_C=\
	c:\lcc\include\_syslist.h\

hallo2.obj: $(HALLO2_C) $(SRCDIR)\hallo2.c
	$(CC) -c $(CFLAGS) $(SRCDIR)\hallo2.c

link:
	$(LINKER)  -subsystem console -o $(SRCDIR)\lcc\hallo2.exe $(OBJS) $(LIBS)

clean:
	del $(OBJS) hallo2.exe
