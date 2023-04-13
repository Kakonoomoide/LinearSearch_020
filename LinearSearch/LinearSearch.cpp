#include <iostream>
using namespace std;

int arr[20], n, i;

void  input() {
    while (true) {                                              //looping
        cout << "masukan elemen/jumlah data array : \n";
        cin >> n;
        if ((n > 0) && (n <= 20))                                            // n <= 20
            break;                                              // keluar looping
        else {                                                  // n > 20
            cout << "array hanya bisa memiliki maksimal 20 elemen";
        }
    }

    cout << endl;
    cout << "=================================" << endl;
    cout << "     masukan elemen array        " << endl;
    cout << "=================================" << endl;

    for (int i = 0; i < n; i++) {                                // looping memasukan data ke array
        cout << "masukan data ke-" << (i + 1) << ": ";
        cin >> arr[i];
    }
}

void LinearSearch() {
    char  ch;
    int ctr ;

    do{
        int item;
        cout << "\n masukan data yang ingin di cari: ";
        cin >> item;
        ctr = 0;
            for (int i = 0; i < n; i++){
                ctr++;
                if (arr[i] == item) {
                    cout << "\n" << item << " di temukan di - " << (i + 1) << endl;
                    break;
                }
            }
            if (i == n)
                cout << "\n" << item << "data yang anda masukan tidak di temukan \n";
            cout << "\n comparisons di lakukan sebanyak " << ctr << endl;

            cout << "Ingin mencari data lagi (y/n) : ";
            cin >> ch;
    } while ((ch == 'y') || (ch == 'Y'));
}

int main(){
    input();
    LinearSearch();
}
