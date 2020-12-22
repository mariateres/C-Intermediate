all:all.out
all.out:creditAccount.h test_creditAccount.cpp
	g++ creditAccount.h test_creditAccount.cpp -lgtest_main -lgtest -lpthread -o all.out
%.o:%.cc
	g++ $< -c
clean:	
	rm -rf *.o *.out
run:all.out	
	./all.out
	
