make clean:
	 rm -f constant_time_naive cts_choose

no: cts_choose.c
	 clang -m32 -march=i386 cts_choose.c -o cts_choose

o0: cts_choose.c
	 clang -O0 -m32 -march=i386 cts_choose.c -o cts_choose

o1: cts_choose.c
	 clang -O1 -m32 -march=i386 cts_choose.c -o cts_choose

o2: cts_choose.c
	 clang -O2 -m32 -march=i386 cts_choose.c -o cts_choose

o3: cts_choose.c
	 clang -O3 -m32 -march=i386 cts_choose.c -o cts_choose
