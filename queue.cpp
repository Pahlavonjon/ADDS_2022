#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
void show_queue(queue<string> Flughafen_queue_){
    queue<string> Flughafen_queue_copy = Flughafen_queue_;
    while (!Flughafen_queue_copy.empty()){
        cout << '\t' << Flughafen_queue_copy.front();
        Flughafen_queue_copy.pop();
    }
}
int main(void){
    queue<string> Flughafen_queue;
    Flughafen_queue.push("Gary");
    Flughafen_queue.push("Kevin");
    Flughafen_queue.push("Tom");
    Flughafen_queue.push("Henry");
    show_queue(Flughafen_queue);
    cout << "\n\n";

}