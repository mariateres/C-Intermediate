all:all.out
all.out:currency.o test_currency.o
	g++ $^ -o $@ -lgtest -lgtest_main -lpthread
%.o:%.cc
	g++ $< -c
clean:	
	rm -rf *.o *.out
run:all.out	
	./all.out
