class Node {
    int val;
    Node* next;
    Node(int v) : val(v), next(NULL) {}
};

void sumLists(Node* l1, Node* l2) {
    if (l1 == NULL) {
        return l2;
    }
    if (l2 == NULL) {
        return l1;
    }

    Node* sum = new Node(0);
    Node* p = sum;
    int carry = 0;
    Node* cur1 = l1;
    Node* cur2 = l2;
    while (cur1 != NULL || cur2 != NULL || carry != 0) {
        int num1 = 0;
        int num2 = 0;
        if (cur1 != NULL) {
            num1 = cur1->val;
            cur1 = cur1->next;
        }
        if (cur2 != NULL) {
            num2 = cur2->val;
            cur2 = cur2->next;
        }

        int num = num1 + num2 + carry;
        carry = num / 10;
        num = num % 10;

        p->next = new Node(num);
        p = p->next;
    }

    return sum->next;
}

//follow up
void sumListsReverse(Node* l1, Node* l2) {
    if (l1 == NULL) {
        return l2;
    }
    if (l2 == NULL) {
        return l1;
    }

    l1 = reverse(l1);
    l2 = reverse(l2);

    Node* sum = sumLists(l1, l2);
    sum = reverse(sum);

    return sum;
}

Node* reverse(Node* head) {
    if (head == NULL || head->next == NULL) {
        return head;
    }

    Node* p = head;
    Node* q = p->next;
    p->next = NULL;

    while (q != NULL) {
        Node* r = q->next;
        q->next = p;
        p = q;
        q = r;
    }

    return p;
}

