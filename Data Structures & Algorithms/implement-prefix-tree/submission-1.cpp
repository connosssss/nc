class PrefixTree {


    struct Node {
        char c {};
        bool endOfWord {};
        unordered_map<char, Node*> remaining {};
    };

    Node* head;


public:
    PrefixTree() {
        head = new Node;

    }
    
    void insert(string word) {

        Node* node = head;

        int i {};
        for(; i<word.size(); ++i){
            char cur = word[i];
            if(!node->remaining.contains(word[i])){
                Node* temp = new Node {cur, false};
                node->remaining[word[i]] = temp;
                node = temp;
                if(i == word.size()-1){
                 node->endOfWord = true;
                 break;}
            }
            else{
                node = node->remaining[cur];
                if(i == word.size()-1){ node->endOfWord = true;
                break;
                }
            }
        }


        
    }
    
    bool search(string word) {
        Node* node = head;

        for(int i {}; i<word.size(); ++i){
            char cur = word[i];
            if(!node->remaining.contains(cur)) return false;


            node = node->remaining[cur];
            
        }
        if(node->endOfWord) return true;
        return false;
        
    }
    
    bool startsWith(string prefix) {
        Node* node = head;

        for(int i {}; i<prefix.size(); ++i){
            char cur = prefix[i];
            if(!node->remaining.contains(cur)) return false;

            node = node->remaining[cur];
            
        }
        
        return true;

    }
};
