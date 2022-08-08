# city:
# 	g++ City.cpp -o city
# 	./city
# test1:
# 	g++ City.cpp -o city
# 	./city < data.txt
# vector:
# 	g++ vector.cpp -o vector
# 	./vector
compile:
	g++ -pthread main.cpp Person.cpp Computer.cpp -o rockpaperscissors
	./rockpaperscissors
# 	# TEST MAKEFILE

# mycode: main.cpp sum.o 
#         g++ -o mycode main.cpp sum.o 

# sum.o: sum.cpp 
#         g++ -c sum.cpp

# test:
#         ./mycode < code1.txt













