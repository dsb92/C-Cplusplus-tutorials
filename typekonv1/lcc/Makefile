# Wedit Makefile for project typekonv1
SRCDIR=c:\lcc\projects\typekonv1
CFLAGS=-I"c:\lcc\include"  -g2 
CC=$(LCCROOT)\bin\lcc.exe
LINKER=$(LCCROOT)\bin\lcclnk.exe
OBJS=\
	typekonv1.obj

LIBS=
EXE=typekonv1.exe

$(EXE):	$(OBJS) Makefile
	$(LINKER)  -subsystem console -o $(SRCDIR)\lcc\typekonv1.exe $(OBJS) $(LIBS)

# Build typekonv1.c
TYPEKONV1_C=\

typekonv1.obj: $(TYPEKONV1_C) $(SRCDIR)\typekonv1.c
	$(CC) -c $(CFLAGS) $(SRCDIR)\typekonv1.c

link:
	$(LINKER)  -subsystem console -o $(SRCDIR)\lcc\typekonv1.exe $(OBJS) $(LIBS)

clean:
	del $(OBJS) typekonv1.exe
