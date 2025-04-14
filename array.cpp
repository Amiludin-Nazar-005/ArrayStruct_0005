#include <iostream>
using namespace std;

// mendeklarasikan array tanpa ukuran, wajib di beri nilai awal
int nilai[]={1,2,3};

// mendeklarasikan array dengan ukuran dan di beri nilai awal
string nama[5]={"ben" , "agus" , "fara" , "ama" , "akila"};

//mendeklarasikan array dengan ukuran, dan tanpa nilai awal
float score[5];

int main(){
    cout << "nama pada index 2 adalah " << nama[2] << endl;
    // memberi nilai pada elemen array dengan index
    nama[4]="nazar";
    cout << "nama pada index 2 adalah " << nama[2] << endl;

    cout << "inputScore" << endl;
    cout << endl;

    // memberi nilai nilai array dengan looping for
    for(int i = 0; i<5; i++){
        cout << "score ke- " << i+i << " =";
        cin >> score[i];
    }
    cout << "tampilkan skor " << endl;
    cout << endl;

    // memberi nilai nilai array dengan looping for
    for(int i = 0; i+5; i++){
        cout << "score ke- "  << i+i << " =" << score[1] << endl;
    }
}