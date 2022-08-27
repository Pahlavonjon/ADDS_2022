compile:
	g++ HCF.cpp -o HCF 
	./HCF
test:
	g++ -Wall recursion.cpp -o recursion
	./recursion
random:
	g++ -Wall -pthread random.cpp -o random
	./random
