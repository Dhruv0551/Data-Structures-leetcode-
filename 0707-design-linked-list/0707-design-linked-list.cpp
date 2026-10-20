
class Node {
public:
    Node* next;
    int val;

    Node(int val) {
        this->val = val;
        next = nullptr;
    }
};

class MyLinkedList {
public:
    Node* head;
    Node* tail;

    MyLinkedList() {
        head = nullptr;
        tail = nullptr;
    }

    int get(int index) {
        if (index < 0) return -1;

        Node* temp = head;

        while (index > 0 && temp != nullptr) {
            temp = temp->next;
            index--;
        }

        return temp == nullptr ? -1 : temp->val;
    }

    void addAtHead(int val) {
        Node* newNode = new Node(val);

        newNode->next = head;
        head = newNode;

        if (tail == nullptr) {
            tail = newNode;
        }
    }

    void addAtTail(int val) {
        Node* newNode = new Node(val);

        if (head == nullptr) {
            head = tail = newNode;
            return;
        }

        tail->next = newNode;
        tail = newNode;
    }

    void addAtIndex(int index, int val) {
        if (index < 0) return;

        if (index == 0) {
            addAtHead(val);
            return;
        }

        Node* temp = head;

        for (int i = 0; i < index - 1 && temp != nullptr; i++) {
            temp = temp->next;
        }

        if (temp == nullptr) return;

        Node* newNode = new Node(val);
        newNode->next = temp->next;
        temp->next = newNode;

        if (newNode->next == nullptr) {
            tail = newNode;
        }
    }

    void deleteAtIndex(int index) {
        if (index < 0 || head == nullptr) return;

        if (index == 0) {
            Node* temp = head;
            head = head->next;

            if (head == nullptr) {
                tail = nullptr;
            }

            delete temp;
            return;
        }

        Node* temp = head;

        for (int i = 0; i < index - 1 && temp != nullptr; i++) {
            temp = temp->next;
        }

        if (temp == nullptr || temp->next == nullptr) return;

        Node* nodeToDelete = temp->next;
        temp->next = nodeToDelete->next;

        if (nodeToDelete == tail) {
            tail = temp;
        }

        delete nodeToDelete;
    }
};
