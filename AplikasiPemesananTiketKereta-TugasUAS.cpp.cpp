#include <iostream>
using namespace std;

struct kota_b {
    string jam_kota_AB;
};

struct kota_c {
    string jam_kota_AC ;
};

struct kota_d {
    string jam_kota_BC;
};

const int biaya_admin = 2500;

string KA [3] = {"KA 1", "KA 2", "KA 3"};
string peron [3] = {"peron 1", "peron 2", "peron 3"};
string kelas_kereta [2] = {"Eksekutif", "Ekonomi"};
int tarif_kota_b [2] = {80000,60000};
int tarif_kota_c [2] = {70000,45000};
int tarif_kota_d [2] = {50000,30000};

string tgl, nama, no_hp, nik_paspor, jurusan_kereta, peron_pilih;
string jam_keberangkatan, kelas_KA, jam_berangkat;
char jurusan, pilih_stasiun, pilih_kelas, tambah, cetak;
int dewasa, bayi, tarif, jmlh_penumpang, jmlh_bayar;

//FUNGSI MENU UTAMA
void menu_utama (){
    for (int a=1;a<=6;a++){
        cout << "\t";
    }
    cout << "=====SELAMAT DATANG=====\n";
    for (int a=1;a<=4;a++){
        cout << "\t";
    }
    cout << "Silahkan isi beberapa data untuk pemesanan tiket kereta api\n";
    cout << endl;
    cout << "JURUSAN\n";
    cout << "=====================================\n";
    cout << "[1] KOTA A - KOTA B\n";
    cout << "[2] KOTA A - KOTA C\n";
    cout << "[3] KOTA B - KOTA C\n";
    cout << "=====================================\n";
    cout << "Tanggal Pemberangkatan : ";
    cin >> tgl;
    cout << "Pilih Jurusan KA       : ";
    cin >> jurusan;
    system("cls");
}

//KOTA AB
void jurusan_kota_AB(){
    kota_b dt1,dt2,dt3;
        dt1.jam_kota_AB = "06.30";
        dt2.jam_kota_AB = "07.38";
        dt3.jam_kota_AB = "08.10";

    for (int a=1;a<=6;a++){
        cout << "\t";
    }
    cout << "=====JADWAL PEMBERANGKATAN=====\n";
    for (int a=1;a<=6;a++){
        cout << "\t";
    }
    cout << " ===JURUSAN KOTA A - KOTA B===\n";
    cout << endl;
    cout << "=============================================\n";
    cout << "NAMA KERETA" << "\t" << "JAM BERANGKAT" << "\t" << "PERON" << endl;
    cout << "=============================================\n";
    cout << "[1] " << KA [0] <<" \t" << dt1.jam_kota_AB << "\t\t" << peron [0] <<  endl;
    cout << "[2] " << KA [1] <<" \t" << dt2.jam_kota_AB << "\t\t" << peron [1] << endl;
    cout << "[3] " << KA [2] <<" \t" << dt3.jam_kota_AB << "\t\t" << peron [2] << endl;
    cout << "=============================================\n";
    cout << "Pilih Kereta      : ";
    cin >> pilih_stasiun;
    system("cls");
}

void kelas_KA_kota_AB(){
kota_b dt0,dt1,dt2;
    dt0.jam_kota_AB = "06.30";
    dt1.jam_kota_AB = "07.38";
    dt2.jam_kota_AB = "08.10";

    for (int a=1;a<=5;a++){
        cout << "\t";
    }
    cout << "=====PILIH KELAS KERETA=====\n";
    cout << endl;
    if (pilih_stasiun=='1'){
        jam_berangkat = dt0.jam_kota_AB;
    }
    else if (pilih_stasiun=='2'){
        jam_berangkat = dt1.jam_kota_AB;
    }
    else if (pilih_stasiun=='3'){
        jam_berangkat = dt2.jam_kota_AB;

    }
    for (int a=0;a<=1;a++){
        cout << a+1 << "   Kelas Kereta Api   : " << kelas_kereta [a] << endl;
               cout << "    Peron              : " << peron [0] << endl;
               cout << "    Jam Keberangkatan  : " << jam_berangkat << endl;
               cout << "    Tarif              : " << tarif_kota_b [a] << endl;
        if (a==0){
               cout << "    Fasilitas          : WC, Wifi, Makan\n";
        }
        else if (a==1){
               cout << "    Fasilitas          : WC\n";
        }
        cout << endl;
    }
    cout << "----------------------------------------\n";
    cout << "Pilih Kelas Kereta     : ";
    cin >> pilih_kelas;
    system ("cls");
}

void penumpang_jurusan_kota_AB (){
    char lanjut;
    for (int a=1;a<=5;a++){
        cout << "\t";
    }
    cout << "=====PENUMPANG=====\n";
    cout << "\n";
    cout << "Penumpang Dewasa           : ";
    cin >> dewasa;
    cout << "Jika tidak ada penumpang bayi silahkan isi dengan angka [0]\n";
    cout << "Penumpang bayi -3thn       : ";
    cin >> bayi;
    jmlh_penumpang = dewasa + bayi;
    cout << "Jumlah Penumpang           : " << jmlh_penumpang << endl;
    cout << "Biaya Admin                : " << biaya_admin << endl;

    if (pilih_kelas=='1'){
        jmlh_bayar = (dewasa*tarif_kota_b [0])+biaya_admin;
    }
    else if (pilih_kelas=='2'){
        jmlh_bayar = (dewasa*tarif_kota_b [1])+biaya_admin;
    }

    cout << "Jumlah yang harus dibayar  : " << jmlh_bayar << endl;
    cout << endl;
    cout << "Silahkan ketik [1] untuk melanjutkan transaksi\n";
    cin >> lanjut;
    system("cls");
}

void identitas (){
    for (int a=1;a<=5;a++){
        cout << "\t";
    }
    cout << "=====IDENTITAS PENUMPANG=====\n";
    cout << endl;
    cout << "Untuk WNI (Warga Negara Indonesia) silahkan isi data pribadi sesuai dengan KTP atau KK \n";
    cout << "For foreign nationals, please fill in the personal data according to the passport\n";
    cout << "======================================================================================\n";
    cout << "\n";
    cout << "Nama/name                  : ";
    cin >> nama;
    cout << "Nomor identitas/id number  : ";
    cin >> nik_paspor;
    cout << "Nomor Telepon/phone number : ";
    cin >> no_hp;
    cout << endl;
    cout << "======================================================================================\n";
    cout << "[0] Cetak Tiket\n";
    cout << "[0] Print Ticket\n";
    cout << endl;
    cout << "pilih                      : ";
    cin >> tambah;
    system ("cls");
}

void tiket_kota_AB(){
kota_b dt0,dt1,dt2;
    dt0.jam_kota_AB = "06.30";
    dt1.jam_kota_AB = "07.38";
    dt2.jam_kota_AB = "08.10";
    string stasiun_kereta,jam_keberangkatan;
    for (int a=1;a<=5;a++){
        cout << "\t";
    }
    cout << "=====TIKET KERETA API=====\n";
    cout << "\n";
    cout << "===============================================\n";
    cout << "tanggal berangkat/departure date   : " << tgl << endl;
    cout << "===============================================\n";
    cout << "\tNama/name                                : " << nama << endl;
    cout << "\tNomor identitas/id number                : " << nik_paspor << endl;
    cout << "\tNomor telepon/phone number               : " << no_hp << endl;
    if (jurusan=='1'){
        jurusan_kereta = "Kota A - Kota B";
    }
    else if (jurusan=='2'){
        jurusan_kereta = "Kota A - kota C";
    }
    else if (jurusan=='3'){
        jurusan_kereta = "Kota B - kota C";
    }
    cout << "\tJurusan kereta/train direction           : " << jurusan_kereta << endl;
    if (pilih_stasiun=='1'){
        stasiun_kereta = KA [0];
        jam_keberangkatan = dt0.jam_kota_AB;
    }
    else if (pilih_kelas=='2'){
        stasiun_kereta = KA[1];
        jam_keberangkatan = dt1.jam_kota_AB;
    }
    else if (pilih_kelas=='3'){
        stasiun_kereta = KA [2];
        jam_keberangkatan = dt2.jam_kota_AB;
    }
    cout << "\tNama kereta/train name                   : " << stasiun_kereta << endl;
    if (pilih_stasiun=='1'){
        peron_pilih = peron[0];
    }
    else if (pilih_stasiun=='2'){
        peron_pilih = peron[1];
    }
    else if (pilih_stasiun=='3'){
        peron_pilih = peron[2];
    }
    cout << "\tPeron                                    : " << peron_pilih << endl;
    cout << "\tJam Keberangkatan/hours of derparture    : " << jam_keberangkatan << endl;
    cout << "\tJumlah Penumpang/total passenger         : " << jmlh_penumpang << endl;
    cout << "\tTotal Pembayaran/total payment           : " << jmlh_bayar << endl;
    cout << endl;
    cout << "Ketik [1] untuk mencetak tiket selanjutnya atau selesai\n";
    cin >> cetak;
    system ("cls");
}

//KOTA AC
void jurusan_kota_AC(){
    kota_c data1,data2,data3;
        data1.jam_kota_AC = "06.10";
        data2.jam_kota_AC = "06.40";
        data3.jam_kota_AC = "07.30";
    for (int a=1;a<=6;a++){
        cout << "\t";
    }
    cout << "=====JADWAL PEMBERANGKATAN=====\n";
    for (int a=1;a<=6;a++){
        cout << "\t";
    }
    cout << " ===JURUSAN KOTA A - KOTA C===\n";
    cout << endl;
    cout << "=============================================\n";
    cout << "NAMA KERETA" << "\t" << "JAM BERANGKAT" << "\t" << "PERON" << endl;
    cout << "=============================================\n";
    cout << "[1] " << KA [0] <<" \t" << data1.jam_kota_AC << "\t\t" << peron [0] << endl;
    cout << "[2] " << KA [1] <<" \t" << data2.jam_kota_AC << "\t\t" << peron [1] << endl;
    cout << "[3] " << KA [2] <<" \t" << data3.jam_kota_AC << "\t\t" << peron [2] << endl;
    cout << "=============================================\n";
    cout << "Pilih Kereta      : ";
    cin >> pilih_stasiun;
    system("cls");
}

void kelas_KA_kota_AC(){
    kota_c data1,data2,data3;
        data1.jam_kota_AC = "06.10";
        data2.jam_kota_AC = "06.40";
        data3.jam_kota_AC = "07.30";

    for (int a=1;a<=5;a++){
        cout << "\t";
    }
    cout << "=====PILIH KELAS KERETA=====\n";
    cout << endl;
    if (pilih_stasiun=='1'){
        jam_berangkat = data1.jam_kota_AC;
    }
    else if (pilih_stasiun=='2'){
        jam_berangkat = data2.jam_kota_AC;
    }
    else if (pilih_stasiun=='3'){
        jam_berangkat = data3.jam_kota_AC;

    }
    for (int a=0;a<=1;a++){
               cout << a+1 << "   Kelas Kereta Api   : " << kelas_kereta [a] << endl;
               cout << "    Peron              : " << peron [1] << endl;
               cout << "    Jam Keberangkatan  : " << jam_berangkat << endl;
               cout << "    Tarif              : " << tarif_kota_c [a] << endl;
        if (a==0){
               cout << "    Fasilitas          : WC, Wifi\n";
        }
        else if (a==1){
               cout << "    Fasilitas          : WC\n";
        }
        cout << endl;
    }
    cout << "----------------------------------------\n";
    cout << "Pilih Kelas Kereta     : ";
    cin >> pilih_kelas;
    system ("cls");
}

void penumpang_jurusan_kota_AC (){
    char lanjut;
    for (int a=1;a<=5;a++){
        cout << "\t";
    }
    cout << "=====PENUMPANG=====\n";
    cout << "\n";
    cout << "Penumpang Dewasa/mature            : ";
    cin >> dewasa;
    cout << "Jika tidak ada penumpang bayi silahkan isi dengan angka [0]\n";
    cout << "Penumpang bayi -3thn/under -3years : ";
    cin >> bayi;
    jmlh_penumpang = dewasa + bayi;
    cout << "Jumlah Penumpang/total passenger   : " << jmlh_penumpang << endl;
    cout << "Biaya Admin/admin fees             : " << biaya_admin << endl;
    if (pilih_kelas=='1'){
        jmlh_bayar = (dewasa*tarif_kota_c[0])+biaya_admin;
    }
    else if (pilih_kelas=='2'){
        jmlh_bayar = (dewasa*tarif_kota_c[1])+biaya_admin;
    }
    else if (pilih_kelas=='3'){
        jmlh_bayar = (dewasa*tarif_kota_c[2])+biaya_admin;
    }
    cout << "Jumlah yang harus dibayar/total   : " << jmlh_bayar << endl;
    cout << endl;
    cout << "Silahkan ketik [1] untuk melanjutkan transaksi\n";
    cin >> lanjut;
    system("cls");
}

void tiket_kota_AC(){
    kota_c data1,data2,data3;
        data1.jam_kota_AC = "06.10";
        data2.jam_kota_AC = "06.40";
        data3.jam_kota_AC = "07.30";
    string stasiun_kereta,jam_keberangkatan;
    for (int a=1;a<=5;a++){
        cout << "\t";
    }
    cout << "=====TIKET KERETA API=====\n";
    cout << "\n";
    cout << "===============================================\n";
    cout << "tanggal berangkat/departure date   : " << tgl << endl;
    cout << "===============================================\n";
    cout << "\tNama/name                                : " << nama << endl;
    cout << "\tNomor identitas/id number                : " << nik_paspor << endl;
    cout << "\tNomor telepon/phone number               : " << no_hp << endl;
    if (jurusan=='1'){
        jurusan_kereta = "Kota A - Kota B";
    }
    else if (jurusan=='2'){
        jurusan_kereta = "Kota A - kota C";
    }
    else if (jurusan=='3'){
        jurusan_kereta = "Kota B - kota C";
    }
    cout << "\tJurusan kereta/train direction           : " << jurusan_kereta << endl;
    if (pilih_stasiun=='1'){
        stasiun_kereta = KA [0];
        jam_keberangkatan = data1.jam_kota_AC;
    }
    else if (pilih_kelas=='2'){
        stasiun_kereta = KA[1];
        jam_keberangkatan = data2.jam_kota_AC;
    }
    else if (pilih_kelas=='3'){
        stasiun_kereta = KA [2];
        jam_keberangkatan = data3.jam_kota_AC;
    }
    cout << "\tNama kereta/train name                   : " << stasiun_kereta << endl;
    if (pilih_stasiun=='1'){
        peron_pilih = peron[0];
    }
    else if (pilih_stasiun=='2'){
        peron_pilih = peron[1];
    }
    else if (pilih_stasiun=='3'){
        peron_pilih = peron[2];
    }
    cout << "\tPeron                                    : " << peron_pilih << endl;
    cout << "\tJam Keberangkatan/hours of derparture    : " << jam_keberangkatan << endl;
    cout << "\tJumlah Penumpang/total passenger         : " << jmlh_penumpang << endl;
    cout << "\tTotal Pembayaran/total payment           : " << jmlh_bayar << endl;
    cout << endl;
    cout << "Ketik [1] untuk mencetak tiket selanjutnya atau selesai\n";
    cin >> cetak;
    system ("cls");
}

//KOTA BC
void jurusan_kota_BC(){
    kota_d no1,no2,no3;
        no1.jam_kota_BC = "06.20";
        no2.jam_kota_BC = "06.40";
        no3.jam_kota_BC = "07.10";

    for (int a=1;a<=6;a++){
        cout << "\t";
    }
    cout << "=====JADWAL PEMBERANGKATAN=====\n";
    for (int a=1;a<=6;a++){
        cout << "\t";
    }
    cout << " ===JURUSAN KOTA B - KOTA C===\n";
    cout << endl;
    cout << "=============================================\n";
    cout << "NAMA KERETA" << "\t" << "JAM BERANGKAT" << "\t" << "PERON" << endl;
    cout << "=============================================\n";
    cout << "[1] " << KA [0] <<" \t" << no1.jam_kota_BC << "\t\t" << peron [0] <<  endl;
    cout << "[2] " << KA [1] <<" \t" << no2.jam_kota_BC << "\t\t" << peron [1] << endl;
    cout << "[3] " << KA [2] <<" \t" << no3.jam_kota_BC << "\t\t" << peron [2] << endl;
    cout << "=============================================\n";
    cout << "Pilih Kereta      : ";
    cin >> pilih_stasiun;
    system("cls");
}

void kelas_KA_kota_BC(){
    kota_d no1,no2,no3;
        no1.jam_kota_BC = "06.20";
        no2.jam_kota_BC = "06.40";
        no3.jam_kota_BC = "07.10";

    for (int a=1;a<=5;a++){
        cout << "\t";
    }
    cout << "=====PILIH KELAS KERETA=====\n";
    cout << endl;
    if (pilih_stasiun=='1'){
        jam_berangkat = no1.jam_kota_BC;
    }
    else if (pilih_stasiun=='2'){
        jam_berangkat = no2.jam_kota_BC;
    }
    else if (pilih_stasiun=='3'){
        jam_berangkat = no3.jam_kota_BC;

    }
    for (int a=0;a<=1;a++){
        cout << a+1 << "   Kelas Kereta Api   : " << kelas_kereta [a] << endl;
               cout << "    Peron              : " << peron [0] << endl;
               cout << "    Jam Keberangkatan  : " << jam_berangkat << endl;
               cout << "    Tarif              : " << tarif_kota_d [a] << endl;
        if (a==0){
               cout << "    Fasilitas          : WC, Wifi, Makan\n";
        }
        else if (a==1){
               cout << "    Fasilitas          : WC\n";
        }
        cout << endl;
    }
    cout << "----------------------------------------\n";
    cout << "Pilih Kelas Kereta     : ";
    cin >> pilih_kelas;
    system ("cls");
}

void penumpang_jurusan_kota_BC (){
    char lanjut;
    for (int a=1;a<=5;a++){
        cout << "\t";
    }
    cout << "=====PENUMPANG=====\n";
    cout << "\n";
    cout << "Penumpang Dewasa           : ";
    cin >> dewasa;
    cout << "Jika tidak ada penumpang bayi silahkan isi dengan angka [0]\n";
    cout << "Penumpang bayi -3thn       : ";
    cin >> bayi;
    jmlh_penumpang = dewasa + bayi;
    cout << "Jumlah Penumpang           : " << jmlh_penumpang << endl;
    cout << "Biaya Admin                : " << biaya_admin << endl;

    if (pilih_kelas=='1'){
        jmlh_bayar = (dewasa*tarif_kota_d [0])+biaya_admin;
    }
    else if (pilih_kelas=='2'){
        jmlh_bayar = (dewasa*tarif_kota_d [1])+biaya_admin;
    }

    cout << "Jumlah yang harus dibayar  : " << jmlh_bayar << endl;
    cout << endl;
    cout << "Silahkan ketik [1] untuk melanjutkan transaksi\n";
    cin >> lanjut;
    system("cls");
}

void tiket_kota_BC(){
    kota_d no1,no2,no3;
        no1.jam_kota_BC = "06.20";
        no2.jam_kota_BC = "06.40";
        no3.jam_kota_BC = "07.10";
    string stasiun_kereta,jam_keberangkatan;
    for (int a=1;a<=5;a++){
        cout << "\t";
    }
    cout << "=====TIKET KERETA API=====\n";
    cout << "\n";
    cout << "===============================================\n";
    cout << "tanggal berangkat/departure date   : " << tgl << endl;
    cout << "===============================================\n";
    cout << "\tNama/name                                : " << nama << endl;
    cout << "\tNomor identitas/id number                : " << nik_paspor << endl;
    cout << "\tNomor telepon/phone number               : " << no_hp << endl;
    if (jurusan=='1'){
        jurusan_kereta = "Kota A - Kota B";
    }
    else if (jurusan=='2'){
        jurusan_kereta = "Kota A - kota C";
    }
    else if (jurusan=='3'){
        jurusan_kereta = "Kota B - kota C";
    }
    cout << "\tJurusan kereta/train direction           : " << jurusan_kereta << endl;
    if (pilih_stasiun=='1'){
        stasiun_kereta = KA [0];
        jam_keberangkatan = no1.jam_kota_BC;
    }
    else if (pilih_kelas=='2'){
        stasiun_kereta = KA[1];
        jam_keberangkatan = no2.jam_kota_BC;
    }
    else if (pilih_kelas=='3'){
        stasiun_kereta = KA [2];
        jam_keberangkatan = no3.jam_kota_BC;
    }
    cout << "\tNama kereta/train name                   : " << stasiun_kereta << endl;
    if (pilih_stasiun=='1'){
        peron_pilih = peron[0];
    }
    else if (pilih_stasiun=='2'){
        peron_pilih = peron[1];
    }
    else if (pilih_stasiun=='3'){
        peron_pilih = peron[2];
    }
    cout << "\tPeron                                    : " << peron_pilih << endl;
    cout << "\tJam Keberangkatan/hours of derparture    : " << jam_keberangkatan << endl;
    cout << "\tJumlah Penumpang/total passenger         : " << jmlh_penumpang << endl;
    cout << "\tTotal Pembayaran/total payment           : " << jmlh_bayar << endl;
    cout << endl;
    cout << "Ketik [1] untuk mencetak tiket selanjutnya atau selesai\n";
    cin >> cetak;
    system ("cls");
}

void penutup (){
    cout << "Syarat & Ketentuan\n";
    cout << "===================\n";
    cout << "[1] Bukti pemesanan ini harus ditukarkan dengan Boardig Pass mulai 7x24 jam sebelum keberangkatan KA pada\n";
    cout << "    mesin check-in couter di stasiun keberangkatan\n";
    cout << "[2] Untuk boarding, pastikan anda membawa tanda pengenal resmi seperti KTP (Kartu Tanda Pengenal), SIM\n";
    cout << "    (Surat Izin Mengemudi) ataupun Paspor jika lebih dari umur 17 tahun. Namun apabila penumpang\n";
    cout << "    masih dibawah umur 17 tahun disarankan untuk membawa Kartu Pelajar atau KK (Kartu Keluarga)\n";
    cout << "[3] Mohon tiba di stasiun setidaknya 60 menit sebelum keberangkatan\n";
    cout << endl;
    cout << "\t\t\t\t======================================================\n";
    cout << "\t\t\t\t\tSELAMAT MENIKMATI PERJALANAN ANDA\n";
    cout << "\t\t\t\t======================================================\n";
}


int main (){
    menu_utama();
//KOTA AB
    if (jurusan=='1'){
        jurusan_kota_AB();
        if (pilih_stasiun=='1'||'2'||'3'){
            kelas_KA_kota_AB ();
            penumpang_jurusan_kota_AB ();
            for (int a=1;a<=jmlh_penumpang;a++){
                identitas ();
                if (tambah=='0'){
                    tiket_kota_AB();
                }
            }
        }
    }
//KOTA AC
    else if (jurusan=='2'){
        jurusan_kota_AC ();
        if (pilih_stasiun=='1'||'2'||'3'){
            kelas_KA_kota_AC ();
            penumpang_jurusan_kota_AC ();
            for (int a=1;a<=jmlh_penumpang;a++){
                identitas ();
                if (tambah=='0'){
                    tiket_kota_AC();
                }
            }
        }
    }
//KOTA BC
    else if (jurusan=='3'){
        jurusan_kota_BC ();
        if (pilih_stasiun=='1'||'2'||'3'){
            kelas_KA_kota_BC ();
            penumpang_jurusan_kota_BC ();
            for (int a=1;a<=jmlh_penumpang;a++){
                identitas ();
                if (tambah=='0'){
                    tiket_kota_BC();
                }
            }
        }
    }
    penutup ();
    return 0;
}