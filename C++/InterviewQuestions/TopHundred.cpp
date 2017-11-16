#include <queue>
#include <iostream>
#include <cstdlib>

struct comparator{

    bool operator()(int i, int j){
        return i > j;
    }

};


using namespace std;

int main(){
    int arr[500];
    for(int i =0; i < 500; i++){
        arr[i] = rand() % 500;
        cout << arr[i] << " ";
    }

    cout << endl << endl;

    priority_queue<int, vector<int>, comparator> minHeap;

    for(int i = 0; i < 500; i++){
        if(i < 100){
            minHeap.push(arr[i]);
        }else{
            if(minHeap.top() < arr[i]){
                minHeap.pop();
                minHeap.push(arr[i]);
            }
        }
    }

    while(!minHeap.empty()){
        cout << minHeap.top() << " ";
        minHeap.pop();
    }


    return 0;
}
