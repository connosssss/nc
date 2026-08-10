#include <unordered_map>

using namespace std;

class LRUCache {
    struct Node {
        int key; 
        int val;
        Node* prev;
        Node* next;
        Node(int k, int v) : key(k), val(v), prev(nullptr), next(nullptr) {}
    };

    int cap; 
    Node* head;
    Node* back;
    
    unordered_map<int, Node*> kv;

public:
    LRUCache(int capacity) : cap(capacity) {
        head = new Node(-1, -1);
        back = new Node(-1, -1);
        
        head->next = back;
        back->prev = head;
    }
    
    int get(int key) {
        if (kv.contains(key)) {
            Node* targetNode = kv[key];
            
            targetNode->prev->next = targetNode->next;
            targetNode->next->prev = targetNode->prev;
            
            targetNode->prev = head;
            targetNode->next = head->next;
            head->next->prev = targetNode;
            head->next = targetNode;
            
            return targetNode->val;
        }
        return -1;
    }
    
    void put(int key, int value) {
        if (kv.contains(key)) {
            Node* existingNode = kv[key];
            existingNode->val = value;
            
            existingNode->prev->next = existingNode->next;
            existingNode->next->prev = existingNode->prev;
            
            existingNode->prev = head;
            existingNode->next = head->next;
            head->next->prev = existingNode;
            head->next = existingNode;
        } else {
            if (kv.size() == cap) {
                Node* lruNode = back->prev;
                
                kv.erase(lruNode->key);
                
                lruNode->prev->next = lruNode->next;
                lruNode->next->prev = lruNode->prev;
                
                delete lruNode;
            }
            
            Node* newNode = new Node(key, value);
            kv[key] = newNode;
            
            newNode->prev = head;
            newNode->next = head->next;
            head->next->prev = newNode;
            head->next = newNode;
        }
    }


};