# Wedit Makefile for project support1
SRCDIR=c:\lcc\projects\opgave_4_2_1\lcc
CFLAGS=-I"c:\lcc\include"  -g2 
CC=$(LCCROOT)\bin\lcc.exe
LINKER=$(LCCROOT)\bin\lcclnk.exe
OBJS=\

LIBS=
EXE=support1.exe

$(EXE):	$(OBJS) Makefile
	$(LINKER)  -subsystem console -o $(SRCDIR)\lcc\support1.exe $(OBJS) $(LIBS)

link:
	$(LINKER)  -subsystem console -o $(SRCDIR)\lcc\support1.exe $(OBJS) $(LIBS)

clean:
	del $(OBJS) support1.exe
