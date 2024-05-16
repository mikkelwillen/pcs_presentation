##
# Project Title
#
# @file
# @version 0.1
make clean:
	 rm -f constant_time_naive

make jump: constant_time_naive.c
     clang -m32 -march=i386 constant_time_naive.c -o constant_time_naive

# end
