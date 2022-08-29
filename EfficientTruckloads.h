#ifndef EfficientTruckloads_H
#define EfficientTruckloads_H
class EfficientTruckloads {
    private:
        static int Values;
    public:
        EfficientTruckloads();
        int numTrucks(int numCrates, int loadSize);
};
#endif