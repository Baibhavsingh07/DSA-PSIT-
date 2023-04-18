class MyQueue {
public:
int front=-1;
        int rear=-1;
        int a[500];
        
        MyQueue() {
        }
    
    void push(int x) {
        if(front==0 and rear==500)
        return ;
        if(front==-1){
            front=0;
            rear=0;
        }
        else{
            rear++;
        }
        this->a[rear]=x;
        
    }
    
    int pop() {
        if((rear+1)%500==front)
        return -1;
    if(front==rear){
        
        front==-1;
        rear==-1;


    }
    int x=this->a[front];
    front++;
        return x;
        
    }
    
    int peek() {
        if(empty())
        return -1;

        return this->a[front];
        
    }
    
    bool empty() {
        if(front==-1 or (rear+1)%500==front)
        return 1;

        return 0;
        
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */