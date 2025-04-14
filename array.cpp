#include <iostream>
using namespace std;

// mendeklarasikan array tanpa ukuran, wajib di beri nilai awal
int nilai[]={1,2,3};

// mendeklarasikan array dengan ukuran dan di beri nilai awal
string nama[5]={"ben" , "agus" , "fara" , "ama" , "akila"};

//mendeklarasikan array dengan ukuran, dan tanpa nilai awal
float score[5];

int main(){
    cout << "nama pada index 4 adalah " << nama[4] << endl;
    // memberi nilai pada elemen array dengan index
    nama[4]="nazar";
    cout << "nama pada index 4 adalah " << nama[4] << endl;

    cout << "inputScore" << endl;
    cout << endl;

    // memberi nilai nilai array dengan looping for
}