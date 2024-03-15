class Solution
{
    public:
    //Function to delete a node without any reference to head pointer.
    void deleteNode(Node *del_node)
    {
       if (del_node == nullptr || del_node->next == nullptr) {
        return;
    }
    Node* nextNode = del_node->next;
    del_node->data = nextNode->data;
    del_node->next = nextNode->next;
    delete nextNode;
    }

};
