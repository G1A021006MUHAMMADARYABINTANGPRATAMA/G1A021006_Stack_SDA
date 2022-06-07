//Muhammad Arya Bintang Pratama
//G1A021006
//Stack

#include <iostream>
#define MAX 26
using namespace std;

struct Stack {
    int top; 
	int data[MAX];
} S;

void init() {
    S.top = -1;
}
 
bool isEmpty() {
    return S.top == -1;
}
 
bool isFull() {
    return S.top == MAX -1;
}
 
void push() {
    if (isFull()) {
        cout << "\nStack Telah Penuh" << endl;
    } else {
        S.top++;
        cout << "\nMasukkan data yang diinginkan: ";
        cin >> S.data[S.top];
        cout << "\n Data : '" << S.data[S.top] <<endl; 
		cout << "Data  telah Ditambahkan"<< endl;
    }
}
 
void pop() {
    if (isEmpty()) {
        cout << "\nStack kosong!! " << endl;
    } else {
        cout << "\n Data :"<<S.data[S.top] <<endl;
        cout << "Data Dihapus" << endl;
        S.top--;
    }
}
 
void printStack() {
    if (isEmpty()) {
        cout<< "\nStack Kosong\n";
    } else {
        cout << "Data pada Stack : ";
        for (int i = S.top; i >= 0; i--)
            cout << S.data[i] <<  ( ",");
    }
}

int main() {
	int choose;
	do
	{
        cout << "\nNama : Muhammad Arya Bintang Pratama\n NPM : G1A021006\n" <<endl;
		cout << "--------------STACK-------------\n"
			<< "---------------------------------\n\n Pilih Menu dibawah : \n"
			<< " 1. Tambahkan Data  \n"
			<< " 2. Hapus Data \n"
			<< " 3. Tampilkan Data \n"
			<< " 4. EXIT \n\n"
			<< "----------------------------------\n"
			<< "Masukkan pilihan : "; cin >> choose;
		switch (choose)
		{
		case 1:
			push();
			break;
		case 2:
			pop();
			break;
		case 3:
			printStack();
			break;
		default:
			cout << "Pilihan tidak ada";
			break;
		}
	} while (choose !=3);
	return 0;
}