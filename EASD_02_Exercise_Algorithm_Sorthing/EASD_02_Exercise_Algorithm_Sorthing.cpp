

//<<===Jawaban===>>
// 1. Memprogram tidak hanya sekedar menulis program yang asal jadi dan asla bisa runing. 
//    Memprogram itu perlu cara,teknik, dan metologiyang baik agar program yang di tulis program efektif
//    Langkah lankah penyelesaian persoalan yang dinamakan algoritma adalh hal ynag paling initn dalam pemograman dan inti dari algoritma adalah logika dan sistematika 
// 2.Struktur Data Linier: adalah struktur data yang memiliki urutan tertentu dalam penyimpanan dan aksesnya. Contohnya seperti array, linked list, queue, dan stack.
//   Struktur Data Non - Linier: adalah struktur data yang tidak memiliki urutan atau hubungan tertentu antar elemennya.Contohnya seperti tree, graph, dan hash table.
// 3.Ukuran Input: Semakin besar ukuran input data yang harus diolah, semakin lama waktu yang dibutuhkan untuk menyelesaikan algoritma.
//   Kompleksitas Algoritma : Algoritma dengan kompleksitas yang tinggi, seperti algoritma dengan nested loop, biasanya membutuhkan waktu yang lebih lama untuk dieksekusi dibandingkan algoritma dengan kompleksitas yang lebih rendah.
//   Jenis Bahasa Pemrograman : Beberapa bahasa pemrograman lebih efisien dalam menangani tugas - tugas tertentu, sehingga dapat mengurangi waktu eksekusi program.
// 4.algoritma QuickSort :  yang memecah data menjadi dua bagian dan mengurutkannya secara terpisah sebelum digabungkan kembali. Proses ini dilakukan dengan menggunakan pivot atau titik acuan untuk membagi data.
// 5.bubble sort, Selection Sort, Insertion Sort dan Merge Sort, Linear Search

#include <iostream>
using namespace std;

int arr[20];            // Array of integers to hold values
int n;

void merge() {
    while (true)
    {
        cout << "Masukkan panjang element array: ";
        cin >> n;

        if (n <= 20)
            break;
        else
            cout << "\nMaksimum panjang array adalah 20" << endl;
    }
    cout << "\n-------------------" << endl;
    cout << "\nEnter Array Element" << endl;
    cout << "\n-------------------" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << "<" << (i + 20 / 2) << ">";
        cin >> arr[i];
    }
}



