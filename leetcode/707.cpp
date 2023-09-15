   struct LinkNode
    {
        int val;
        LinkNode* next;
        LinkNode(int val):val(val),next(nullptr){}
    };
    
    class MyLinkedList {
public:
    LinkNode* dummy;
    int size;
    MyLinkedList() {
        dummy = new LinkNode(0);
        size = 0;
    }
    
    int get(int index) {
        if(index>size-1||index<0)
        {
            return -1;
        }
        else
        {
            LinkNode* p=dummy->next;
            while(index--)
            {
                p=p->next;
            }
            return p->val;
        }
    }
    
    void addAtHead(int val) {
        LinkNode* newhead = new LinkNode(val);
        newhead->next = dummy->next;
        dummy->next = newhead;
        size++;
    }
    
    void addAtTail(int val) {
        LinkNode* p = dummy;
        while(p->next!=nullptr)
        {
            p=p->next;
        }
        LinkNode* newtail = new LinkNode(val);
        p->next = newtail;
        size++;
    }
    
    void addAtIndex(int index, int val) {
        if(index==size)
        addAtTail(val);
        else if(index>size)
        return;
        else
        {
            LinkNode* p = dummy;
            while(index--)
            {
                p=p->next;
            }
            LinkNode* addnode = new LinkNode(val);
            addnode->next = p->next;
            p->next = addnode;
            size++;
        }

    }
    
    void deleteAtIndex(int index) {
        if(index>size-1||index<0)
        return;
        else
        {
            LinkNode* p = dummy;
            while(index--)
            {
                p=p->next;
            }
            LinkNode* q = p->next;
            p->next = q->next;
            delete q;
            size--;
        }
        
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */
