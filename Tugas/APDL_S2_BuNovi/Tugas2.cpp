//Soal Nomor 5

#include <iostream>
using namespace std;

int main() {

    int bk = 5;   

    for(int i=0; i<bk; i++) {
        for(int j=0; j<bk; j++) {

            if(i + j < bk-1)
                cout << "9 ";
            else if(i + j == bk-1)
                cout << "0 ";
            else
                cout << "1 ";

        }
        cout << endl;
    }

    return 0;
}
