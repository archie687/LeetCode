class MedianFinder {
    priority_queue<int>maxHeap;
    priority_queue<int>minHeap;
    int n;
public:
    MedianFinder() {
        n = 0;
    }
    
    void addNum(int num) {
        if(n%2 == 0){
            if(n == 0){
                insertMaxHeap(num);
            } 
            else{
                int top_val = getMinHeapTop();
                if(top_val <= num){
                    insertMaxHeap(top_val);
                    minHeap.pop();
                    insertMinHeap(num);
                } 
                else{
                    insertMaxHeap(num);
                }
            }
        } 

        else{
            int top_val = getMaxHeapTop();
            if(top_val < num){
                insertMinHeap(num);
            } 
            else{
                maxHeap.pop();
                insertMinHeap(top_val);
                insertMaxHeap(num);
            }
        }
        n++;
    }
    
    double findMedian() {
        if(n%2 == 1) return maxHeap.top();
        return (double)(getMaxHeapTop() + getMinHeapTop())/2;
    } 

    private:

    void insertMinHeap(int val){
        minHeap.push(-val);
    }
    void insertMaxHeap(int val){
        maxHeap.push(val);
    }
    int getMaxHeapTop(){
        return maxHeap.top();
    }
    int getMinHeapTop(){
        return -minHeap.top();
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */