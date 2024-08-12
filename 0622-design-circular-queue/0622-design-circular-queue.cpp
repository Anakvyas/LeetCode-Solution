class MyCircularQueue {
public:
    int * arr;
    int capacity;
    int curr_size ;
    int f;
    int r ;
    MyCircularQueue(int k) {
        arr = new int [k];
        capacity = k ;
        curr_size = 0 ;
        f = 0;
        r = -1;
    }
    
    bool enQueue(int value) {
        if(isFull()){
            return false;
        }
        cout<<r<<"\n";
        r = (r+1) % capacity;
        arr[r] = value;
        curr_size ++;
        return true;
    }
    
    bool deQueue() {
          if(isEmpty()){
            return false;
        }
        curr_size--;
        f = (f+1) % capacity;
        return true;
    }
    
    int Front() {
            if(isEmpty()){
            return -1;
        }
        return arr[f];
    }
    
    int Rear() {
         if(isEmpty()){
            return -1;
        }
        
        return arr[r];
    }
    
    bool isEmpty() {
        return curr_size == 0;
    }
    
    bool isFull() {
          return (curr_size == capacity);
    }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */