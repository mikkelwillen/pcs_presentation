make clean:
	rm -f secure_erase

make fbm: function-based-main.c
    musl-clang function-based-main.c -o function-based-main

make obj:
    ./function-based-main
    objdump -d function-based-main
