#include<stdio.h>

void main()
{
	printf("Hello world!");
}

/*
Microsoft Windows [Version 10.0.19044.2006]
(c) Microsoft Corporation. All rights reserved.

C:\Users\technOrbit>set path=C:\MinGW\bin

C:\Users\technOrbit>F:

F:\>cd vsC

F:\VsC>cd basic

F:\VsC\Basic>cd gcc

F:\VsC\Basic\gcc>gcc gcc.c

F:\VsC\Basic\gcc>a
Hello world!
F:\VsC\Basic\gcc>gcc -save-temps gcc.c

F:\VsC\Basic\gcc>dir
 Volume in drive F is New Volume
 Volume Serial Number is 300A-3A50

 Directory of F:\VsC\Basic\gcc

29-09-2022  15:30    <DIR>          .
29-09-2022  15:30    <DIR>          ..
29-09-2022  15:30            45,617 a.exe
29-09-2022  15:29                64 gcc.c
29-09-2022  15:30            22,578 gcc.i
29-09-2022  15:30               810 gcc.o
29-09-2022  15:30               568 gcc.s
               5 File(s)         69,637 bytes
               2 Dir(s)  237,165,355,008 bytes free


F:\VsC\Basic\gcc>objdump -s gcc.o

gcc.o:     file format pe-i386

Contents of section .text:
 0000 5589e583 e4f083ec 10e80000 0000c704  U...............
 0010 24000000 00e80000 000090c9 c3909090  $...............
Contents of section .rdata:
 0000 48656c6c 6f20776f 726c6421 00000000  Hello world!....
Contents of section .rdata$zzz:
 0000 4743433a 20284d69 6e47572e 6f726720  GCC: (MinGW.org
 0010 47434320 4275696c 642d3229 20392e32  GCC Build-2) 9.2
 0020 2e300000                             .0..
Contents of section .eh_frame:
 0000 14000000 00000000 017a5200 017c0801  .........zR..|..
 0010 1b0c0404 88010000 1c000000 1c000000  ................
 0020 04000000 1d000000 00410e08 8502420d  .........A....B.
 0030 0559c50c 04040000                    .Y......

F:\VsC\Basic\gcc>

*/