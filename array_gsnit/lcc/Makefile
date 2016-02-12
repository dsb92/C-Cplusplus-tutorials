# Wedit Makefile for project array_gsnit
SRCDIR=c:\lcc\projects\array_gsnit
CFLAGS=-I"c:\lcc\include"  -g2 
CC=$(LCCROOT)\bin\lcc.exe
LINKER=$(LCCROOT)\bin\lcclnk.exe
OBJS=\
	array_gsnit.obj

LIBS=
EXE=array_gsnit.exe

$(EXE):	$(OBJS) Makefile
	$(LINKER)  -subsystem console -o $(SRCDIR)\lcc\array_gsnit.exe $(OBJS) $(LIBS)

# Build array_gsnit.c
ARRAY_GSNIT_C=\

array_gsnit.obj: $(ARRAY_GSNIT_C) $(SRCDIR)\array_gsnit.c
	$(CC) -c $(CFLAGS) $(SRCDIR)\array_gsnit.c

link:
	$(LINKER)  -subsystem console -o $(SRCDIR)\lcc\array_gsnit.exe $(OBJS) $(LIBS)

clean:
	del $(OBJS) array_gsnit.exe
