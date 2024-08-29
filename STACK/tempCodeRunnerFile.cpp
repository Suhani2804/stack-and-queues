class Node {
public:
    int val;  // Value stored in the node
    Node* next;  // Pointer to the next node in the list
    // Constructor to create a new node with a value
    Node(int x) : val(x), next(nullptr) {}
};
