build:
	g++ src/*.c* -c
Gtest:
	g++ src/*.c* test/test.cpp -o test.out -lgtest -lgtest_main -lpthread
runGtest: Gtest
	./test.out
cppCheck:
	cppcheck src/*.c*
valgrind: Gtest
	valgrind ./test.out
clean:
	rm -rf *.out *.o
