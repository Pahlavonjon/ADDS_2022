compile:
	g++ main.cpp Truckloads.cpp Reverse.cpp EfficientTruckloads.cpp -o trucks
	./trucks
q3:
	g++ test.cpp Truckloads.cpp EfficientTruckloads.cpp -o q3
	./q3