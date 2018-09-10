void deleteMiddleNode(Node* node) {
    if (node == NULL) {
        return;
    }
    if (node->next = NULL) {
        delete node;
        node = NULL;
        return;
    }

    Node* tmp = node->next;
    node->val = node->next->val;
    node->next = node->next->next;
    delete tmp;
}

