#include <iostream>
using namespace std;

struct Mahasiswa {
  int value;

  Mahasiswa* next; // next Node address
};

// fungsi addNode
// @parameter val adalah nilai dari node baru
// @parameter head adalah pointer HEAD
// simbol (&) sebelum @parameter head menandakan parameter head merupakan reference dari pointer HEAD
void addNode(Mahasiswa*& head, int val) {
    Mahasiswa* new_node = new Mahasiswa;
    new_node->value = val;
    new_node->next = NULL;

    if(head == NULL) {
        head = new_node;
        return;
    }

    Mahasiswa* last = head;
    while(last->next != NULL) {
        last = last->next;
    }
    last->next = new_node;
}

void printLinkedList(Mahasiswa* head) {
    Mahasiswa* last = head;
    while(last != NULL) {
        cout << " " << last->value;
        last = last->next;
    }
    cout<<endl;
}

// fungsi deleteNode
// @parameter val adalah nilai dari node yang akan dihapus
// @parameter head adalah pointer HEAD
// simbol (&) sebelum @parameter head menandakan parameter head merupakan reference dari pointer HEAD
void deleteNode(Mahasiswa*& head, int val) {
    if(head->value == val) {
        head = head->next;
        return;
    }
    Mahasiswa* current = head;
    Mahasiswa* prev = NULL;
    while(current->value != val) {
        prev = current;
        current = current->next;
    }
    prev->next = current->next;
}

void updateNode(Mahasiswa*& head, int old_val, int new_val) {
    if(head == NULL) {
        cout << "LinkedList masih kosong.";
        return;
    }

    if(head->value == old_val) {
        head->value = new_val;
        return;
    }
    Mahasiswa* current = head;
    while(current->value != old_val) {
        current = current->next;
    }
    if(current->value != old_val) {
        cout << "Nilai yang dicari tidak ditemukan." << endl;
        return;
    }
    current->value = new_val;
    cout << "data telah diupdate." << endl;
}

int main() {
    Mahasiswa* FIRST_NODE = NULL;

    updateNode(FIRST_NODE, 4, 10);

    addNode(FIRST_NODE, 1);
    addNode(FIRST_NODE, 2);
    addNode(FIRST_NODE, 3);
    addNode(FIRST_NODE, 4);
    addNode(FIRST_NODE, 5);
    
    printLinkedList(FIRST_NODE);

    deleteNode(FIRST_NODE, 3);

    printLinkedList(FIRST_NODE);

    updateNode(FIRST_NODE, 4, 8);

    printLinkedList(FIRST_NODE);
    
    updateNode(FIRST_NODE, 4, 10);
}