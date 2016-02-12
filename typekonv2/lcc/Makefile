# Wedit Makefile for project typekonv2
SRCDIR=c:\lcc\projects\typekonv2
CFLAGS=-I"c:\lcc\include"  -g2 
CC=$(LCCROOT)\bin\lcc.exe
LINKER=$(LCCROOT)\bin\lcclnk.exe
OBJS=\
	typekonv2.obj

LIBS=
EXE=typekonv2.exe

$(EXE):	$(OBJS) Makefile
	$(LINKER)  -subsystem console -o $(SRCDIR)\lcc\typekonv2.exe $(OBJS) $(LIBS)

# Build typekonv2.c
TYPEKONV2_C=\

typekonv2.obj: $(TYPEKONV2_C) $(SRCDIR)\typekonv2.c
	$(CC) -c $(CFLAGS) $(SRCDIR)\typekonv2.c

link:
	$(LINKER)  -subsystem console -o $(SRCDIR)\lcc\typekonv2.exe $(OBJS) $(LIBS)

clean:
	del $(OBJS) typekonv2.exe
