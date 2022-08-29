#ifndef EfficientTruckloads_H
#define EfficientTruckloads_H
#include <vector>
class EfficientTruckloads {
    private:
        static std::vector<std::vector<int>> Values;
    public:
        EfficientTruckloads();
        int numTrucks(int numCrates, int loadSize);
};
#endif