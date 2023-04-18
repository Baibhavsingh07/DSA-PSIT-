class MyCircularQueue {
public:
    int v[1001];
    int f;
    int i=-1,j=-1;
    MyCircularQueue(int k) {
        f=k;
    }
    
    bool enQueue(int value) {
        if(i==-1 & j==-1){
            j++;
            i++;
            v[0]=value;
        }
        else if(j-i==f-1 || i-j==1) return false;
        else{
            if(j+1>=f) j=0;
            else j++;
            v[j]=value;
        }
        return true;
    }
    
    bool deQueue() {
        if(i==-1) return false;
        else if(i==j){
            i=-1;
            j=-1;
            return true;
        }
        else{
            if(i+1>=f) i=0;
            else i++;
            return true;
        }
    }
    
    int Front() {
        if(i==-1) return -1;
        return v[i];
    }
    
    int Rear() {
         if(j==-1) return -1;
        return v[j];
    }
    
    bool isEmpty() {
        return i==-1;
    }
    
    bool isFull() {
        return (j-i==f-1 || i-j==1);
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
