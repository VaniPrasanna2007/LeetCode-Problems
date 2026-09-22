class MyCircularDeque{
public:
    vector<int>dq;
    int capacity,front,rear,size;
    MyCircularDeque(int k){
        capacity=k;
        front=0;
        rear=0;
        size=0;
        dq.resize(k);
    }
    bool insertFront(int value){
        if(isFull())
        {
            return false;
        }
        front=(front-1+capacity)%capacity;
        dq[front]=value;
        size++;
        if(size==1){
        rear=(front+1)%capacity;
        }
        return true;
    }

    bool insertLast(int value){
        if(isFull())
        {
            return false;
        }
        dq[rear]=value;
        rear=(rear+1)%capacity;
        size++;
        return true;
    }

    bool deleteFront(){
        if(isEmpty()){
            return false;
        }
        front=(front+1)%capacity;
        size--;
        return true;
    }

    bool deleteLast(){
        if(isEmpty()){
            return false;
        }
        rear=(rear-1+capacity)%capacity;
        size--;
        return true;
    }

    int getFront(){
        if(isEmpty()){
            return -1;
        }
        return dq[front];
    }

    int getRear(){
        if(isEmpty()) {
            return -1;
        }
        return dq[(rear-1+capacity)%capacity];
    }

    bool isEmpty(){
        return size==0;
    }

    bool isFull(){
        return size==capacity;
    }
};