struct Node {
    int val = 0;
    Node* next = NULL;
};

Node* returnKthtoLast(Node* head, int k) {
    if (head == NULL) {
        return NULL;
    }

    Node* f = head;
    for (int i = 0; i < k; i++) {
        if (f != NULL) {
            f = f->next;
        } else {
            return NULL;
        }
    }

    Node* s = head;
    while (f ! = NULL) {
        s = s->next;
        f = f->next;
    }

    return s;
}

