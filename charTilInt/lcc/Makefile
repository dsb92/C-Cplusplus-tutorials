# Wedit Makefile for project charTilInt
SRCDIR=c:\lcc\projects\chartilint
CFLAGS=-I"c:\lcc\include"  -g2 
CC=$(LCCROOT)\bin\lcc.exe
LINKER=$(LCCROOT)\bin\lcclnk.exe
OBJS=\
	chartilint.obj

LIBS=
EXE=chartilint.exe

$(EXE):	$(OBJS) Makefile
	$(LINKER)  -subsystem console -o $(SRCDIR)\lcc\chartilint.exe $(OBJS) $(LIBS)

# Build chartilint.c
CHARTILINT_C=\

chartilint.obj: $(CHARTILINT_C) $(SRCDIR)\chartilint.c
	$(CC) -c $(CFLAGS) $(SRCDIR)\chartilint.c

link:
	$(LINKER)  -subsystem console -o $(SRCDIR)\lcc\chartilint.exe $(OBJS) $(LIBS)

clean:
	del $(OBJS) chartilint.exe
