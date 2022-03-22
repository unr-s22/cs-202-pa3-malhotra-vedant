pa3: main.cpp account.o money.o
	g++ main.cpp account.o money.o -o pa3
	
account.o: account.cpp account.h
	g++ -c account.cpp

money.o: money.cpp money.h
	g++ -c money.cpp

clean:
	rm *.o pa3
