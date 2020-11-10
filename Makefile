Gtest:|
	g++ src/*.c* test/test.cpp -o test.out -lgtest -lgtest_main -lpthread
	./test.out
clean:
	rm -rf *.out