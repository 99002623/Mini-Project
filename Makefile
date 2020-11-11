Gtest:
	g++ src/*.c* test/test.cpp -o test.out -lgtest -lgtest_main -lpthread
runGtest: Gtest
	./test.out
build:
	g++ src/*.c* -c
clean:
	rm -rf *.out *.o