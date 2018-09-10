#include <unordered_set>

struct Node {
    int val = 0;
    Node* next = NULL;
};

void removeDups(Node* head) {
    if (head == NULL || head->next == NULL) {
        return;
    }

    unordered_set<int> vals;
    Node* pre = head;
    Node* cur = head->next;
    vals.insert(pre->val);
    while (cur != NULL) {
        if (vals.insert(cur->val)) {
            pre = cur;
            cur = cur->next;
        } else {
            pre->next = cur->next;
            delete cur;
            cur = pre->next;
        }
    }
}

void removeDups(Node* head) {
    if (head == NULL || head->next == NULL) {
        return;
    }

    Node* pre = head;
    while (pre != NULL) {
        Node* cur = pre;
        while (cur->next != NULL) {
            if (cur->next->val != pre->val) {
                cur = cur->next;
            } else {
                Node* tmp = cur->next;
                cur->next = cur->next->next;
                delete tmp;
            }
        }

        pre = pre->next;
    }
}

