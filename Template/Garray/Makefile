
all:all.out
all.out:garray.h garray_test.cpp
	g++ garray.h garray_test.cpp -lgtest_main -lgtest -lpthread -o all.out

%.o:%.cc
	g++ $< -c
clean:	
	rm -rf *.o *.out
run:all.out	
	./all.out
