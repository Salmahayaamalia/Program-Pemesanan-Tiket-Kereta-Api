#include <iostream>
#include <conio.h>
#include <iomanip>
#include <string.h>
using namespace std;
void menu();void booking();void ruha();void kondisi();void pembayaran();void garis();void garis2();void loading();void title();void garis3();void garis4();void daftar();void title2();void pembuka();

char lihat, tekan, ingin, yakin, bayar, cetak, lagi, tekan2;
char nama[30], waktu[50];
int kode, jumlah, kelas_int, kodekereta_int, tpb, tpb2, harga1, kota, uang, kembalian;
string pilihan, kodekereta, kelas;

int main()
{
    system("color B");
    pembuka();
    menu();
    getch();
    return 0;
}

void menu()
{
    keluar:
    title();
    cout << "\xb3" << setw(32) << "1. Pemesanan" << setw(19) << "\xb3" << setw(1) << "\xb3";
    cout << setw(23) << "3. Catatan" << setw(27) << "\xb3" << endl ;
    cout << "\xb3" << setw(51) << "\xb3" << setw(1) <<"\xb3" << setw(50) << "\xb3" << endl;
    cout << "\xb3" << setw(51) << "\xb3" << setw(1) <<"\xb3" << setw(50) << "\xb3" << endl;
    cout << "\xb3" << setw(40) << "2. Daftar Harga/Rute" << setw(11) << "\xb3" << setw(1) << "\xb3";
    cout << setw(22) << "4. Keluar" << setw(28) << "\xb3" << endl;
    cout << "\xb3" << setw(51) << "\xb3" << setw(1) <<"\xb3" << setw(50) << "\xb3" << endl;
    cout << "\xb3" << setw(51) << "\xb3" << setw(1) <<"\xb3" << setw(50) << "\xb3" << endl;
    cout << "\xc0\xc4"; garis3();cout<<"\xc1\xc1";garis3(); cout << "\xd9" << endl;
    cout << "Masukan Pilihan Anda : ";
    cin >> pilihan;

    loading();
    cout << endl;
    system("cls");
    if(pilihan=="1"){
        booking();
    }
    else if(pilihan=="2"){
    system("cls");
    ruha();
    }
    else if(pilihan=="3"){
    cout<<"\xda";garis2();cout<<"\xbf"<<endl;
    cout<<"\xb3"<<setw(102)<<"\xb3"<<endl;
    cout<<"\xb3"<<setw(102)<<"\xb3"<<endl;
    cout<<"\xb3"<<setw(58)<<"KELOMPOK 2"<<setw(44)<<"\xb3"<<endl;
    cout<<"\xb3"<<setw(66)<<"=========================="<<setw(36)<<"\xb3"<<endl;
    cout<<"\xb3"<<setw(102)<<"\xb3"<<endl;
    cout<<"\xb3"<<setw(102)<<"\xb3"<<endl;
    cout<<"\xb3"<<setw(20)<<"Kelas      : 1F"<<setw(82)<<"\xb3"<<endl;
    cout<<"\xb3"<<setw(36)<<"Prodi      : Teknik Informatika"<<setw(66)<<"\xb3"<<endl;
    cout<<"\xb3"<<setw(50)<<"Ketua      : Salma Haya Amalia (201063170117)"<<setw(52)<<"\xb3"<<endl;
    cout<<"\xb3"<<setw(47)<<"Anggota    : - Sylfia Putri (201063170034)"<<setw(55)<<"\xb3"<<endl;
    cout<<"\xb3"<<setw(59)<<"             - Raihan Mochammad Thessar (201063170157)"<<setw(43)<<"\xb3"<<endl;
    cout<<"\xb3"<<setw(57)<<"             - Yuda Dian Febriansyah (2010631170159)"<<setw(45)<<"\xb3"<<endl;
    cout<<"\xb3"<<setw(49)<<"             - Wisnu Saputra (2010631170126)"<<setw(53)<<"\xb3"<<endl;
    cout<<"\xb3"<<setw(102)<<"\xb3"<<endl;
    cout<<"\xb3"<<setw(102)<<"\xb3"<<endl;
    cout<<"\xc0";garis2();cout<<"\xd9"<<endl;
    system("PAUSE");loading();system("cls");menu();
    }
    else if(pilihan=="4"){
        system("cls");
        pembuka();
    }else{
    cout << "Kode Yang Anda Masukan Salah...!"<<endl;
    }
}

void booking()
{
    atas:
    title2();
    cout << setw(60) << "MENU PEMESANAN" <<endl;
    cout << setw(65) <<"===========================" <<endl<<endl;
    daftar();
    cout << endl;
    cout << setw(5) << "Ingin Melihat Daftar Harga Terlebih Dahulu <y/t> ? : "; cin >> ingin;
    if(ingin=='Y'||ingin=='y'){
        loading();
        system("cls");
        ruha();
    }else{
    goto bawah;
    }
    bawah:
        cout << endl;
    cout << setw(5) << "Nama Pemesan            : ";cin.ignore();cin.getline(nama, 30);
    cout << setw(5) << "Waktu Keberangkatan     : ";cin.getline(waktu, 50);
    cout << setw(5) << "Kota Tujuan             : ";cin >> kota;
    cout << setw(5) << "Kode Kereta (AP/SM/KS)  : ";cin >> kodekereta;
    cout << setw(5) << "Kelas Kereta (1/2/3)    : ";cin >> kelas;
    cout << setw(5) << "Jumlah Tiket            : ";cin >> jumlah;
    cout << endl;
    cout << "Apakah Anda Yakin Dengan Pilihan Anda <y/t> ? : ";cin >> yakin;
    if(yakin=='Y'||yakin=='y'){
            loading();
            system("cls");
            title2();
            cout << setw(60) << "MENU VERIFIKASI" <<endl;
    cout << setw(65) <<"===========================" <<endl<<endl;
        cout << "Nama Pemesan           : " << nama << endl;
        cout << "Waktu Keberangatan     : " << waktu << endl;
        kondisi();
    }else{
        loading();
        system("cls");
    goto atas;
    }
    cout << endl;
    cout << "Ingin Melakukan Pembayaran Sekarang <y/t> ? : "; cin >> bayar;
    if(bayar=='Y'||bayar=='y'){
        loading();
        system("cls");
        title2();
            cout << setw(60) << "MENU PEMBAYARAN" <<endl;
    cout << setw(65) <<"===========================" <<endl<<endl;
    cout << setw(5) << "Nama Pemesan           : " << nama << endl;
    cout << setw(5) << "Waktu Keberangkatan    : " << waktu << endl;
        pembayaran();
    }else{
        loading();
    system("cls");
    goto atas;
    }
    cout << endl;
    cout << "Tekan <Y> Untuk Lanjutkan Atau Tekan <T> Untuk Kembali Ke Menu Utama : "; cin >> cetak;
    if(cetak=='Y'||cetak=='y'){
        loading();
        system("cls");
        title2();
            cout << setw(62) << "MENU AKHIR" <<endl;
    cout << setw(70) <<"===========================" <<endl<<endl;
    cout<<setw(15)<<"\xda";garis4();garis4();garis4();cout<<"\xbf"<<endl;
    cout<<setw(15)<<"\xb3"<<setw(73)<<"\xb3"<<endl;
    cout<<setw(15)<<"\xb3"<<setw(50)<<"Transaksi anda sudah berhasil"<<setw(23)<<"\xb3"<<endl;
    cout<<setw(15)<<"\xb3"<<setw(71)<<"Terima kasih sudah menggunakan layanan pemesanan tiket kereta api kami"<<setw(2)<<"\xb3"<<endl;
    cout<<setw(15)<<"\xb3"<<setw(73)<<"\xb3"<<endl;
    cout<<setw(15)<<"\xc0";garis4();garis4();garis4();cout<<"\xd9"<<endl;
    cout<<endl;
    cout<<"Tekan <Y> Untuk Pesan Lagi Atau Tekan <T> Untuk Kembali Ke Menu Awal : ";cin>>tekan2;
    if(tekan2=='Y'||tekan2=='y'){
        loading();
        system("cls");
        goto atas;
    }else{
    loading();
    system("cls");
    menu();
    }

    }else{
        loading();
    system("cls");
    menu();
    }
}

void kondisi()
{
    if(kota==1){
    cout << "Kota Tujuan            : Bandung " << endl;
    if(kodekereta=="AP"||kodekereta=="ap"){
    kodekereta_int=1;
    cout << "Jenis Kereta           : Agung Podomoro " << endl;
    if(kelas=="1"){
    cout << "Kelas Kereta           : Eksekutif " << endl;
    harga1=200000;
    cout << "Harga Tiket            : Rp. " << harga1 << endl;
    tpb=harga1*jumlah;
    cout << "Total Pembayaran       : Rp. " << tpb << endl;

    }else if(kelas=="2"){
    cout << "Kelas Kereta           : Bisnis " << endl;
    harga1=100000;
    cout << "Harga Tiket            : Rp. " << harga1 << endl;
    tpb=harga1*jumlah;
    cout << "Total Pembayaran       : Rp. " << tpb << endl;
    }else if(kelas=="3"){
    cout << "Kelas Kereta           : Ekonomi " << endl;
    harga1=50000;
    cout << "Harga Tiket            : Rp. " << harga1 << endl;
    tpb=harga1*jumlah;
    cout << "Total Pembayaran       : Rp. " << tpb << endl;
    }else{
    cout << "Kode Yang Anda Masukan Salah...! " << endl;
    }
    }else if(kodekereta=="SM"||kodekereta=="sm"){
    kodekereta_int=2;
    cout << "Jenis Kereta           : SUMBER MAKMUR " << endl;
    if(kelas=="1"){
    cout << "Kelas Kereta           : Eksekutif " << endl;
    harga1=250000;
    cout << "Harga Tiket            : Rp. " << harga1 << endl;
    tpb=harga1*jumlah;
    cout << "Total Pembayaran       : Rp. " << tpb << endl;
    }else if(kelas=="2"){
    cout << "Kelas Kereta           : Bisnis " << endl;
    harga1=125000;
    cout << "Harga Tiket            : Rp. " << harga1 << endl;
    tpb=harga1*jumlah;
    cout << "Total Pembayaran       : Rp. " << tpb << endl;
    }else if(kelas=="3"){
    cout << "Kelas Kereta           : Ekonomi " << endl;
    harga1=60000;
    cout << "Harga Tiket            : Rp. " << harga1 << endl;
    tpb=harga1*jumlah;
    cout << "Total Pembayaran       : Rp. " << tpb << endl;
    }else{
    cout << "Kode Yang Anda Masukan Salah...! " << endl;
    }
    }else if(kodekereta=="KS"||kodekereta=="ks"){
    kodekereta_int=3;
    cout << "Jenis Kereta           : KENCANA SENTOSA " << endl;
    if(kelas=="1"){
    cout << "Kelas Kereta           : Eksekutif " << endl;
    harga1=275000;
    cout << "Harga Tiket            : Rp. " << harga1 << endl;
    tpb=harga1*jumlah;
    cout << "Total Pembayaran       : Rp. " << tpb << endl;
    }else if(kelas=="2"){
    cout << "Kelas Kereta           : Bisnis " << endl;
    harga1=150000;
    cout << "Harga Tiket            : Rp. " << harga1 << endl;
    tpb=harga1*jumlah;
    cout << "Total Pembayaran       : Rp. " << tpb << endl;
    }else if(kelas=="3"){
    cout << "Kelas Kereta           : Ekonomi " << endl;
    harga1=65000;
    cout << "Harga Tiket            : Rp. " << harga1 << endl;
    tpb=harga1*jumlah;
    cout << "Total Pembayaran       : Rp. " << tpb << endl;
    }else{
    cout << "Kode Yang Anda Masukan Salah...! " << endl;
    }
    }
    }else if(kota==2){
    cout << "Kota Tujuan            : Purwakarta " << endl;
    if(kodekereta=="AP"||kodekereta=="ap"){
    kodekereta_int=1;
    cout << "Jenis Kereta           : Agung Podomoro " << endl;
    if(kelas=="1"){
    cout << "Kelas Kereta           : Eksekutif " << endl;
    harga1=100000;
    cout << "Harga Tiket            : Rp. " << harga1 << endl;
    tpb=harga1*jumlah;
    cout << "Total Pembayaran       : Rp. " << tpb << endl;

    }else if(kelas=="2"){
    cout << "Kelas Kereta           : Bisnis " << endl;
    harga1=80000;
    cout << "Harga Tiket            : Rp. " << harga1 << endl;
    tpb=harga1*jumlah;
    cout << "Total Pembayaran       : Rp. " << tpb << endl;
    }else if(kelas=="3"){
    cout << "Kelas Kereta           : Ekonomi " << endl;
    harga1=30000;
    cout << "Harga Tiket            : Rp. " << harga1 << endl;
    tpb=harga1*jumlah;
    cout << "Total Pembayaran       : Rp. " << tpb << endl;
    }else{
    cout << "Kode Yang Anda Masukan Salah...! " << endl;
    }
    }else if(kodekereta=="SM"||kodekereta=="sm"){
    kodekereta_int=2;
    cout << "Jenis Kereta           : SUMBER MAKMUR " << endl;
    if(kelas=="1"){
    cout << "Kelas Kereta           : Eksekutif " << endl;
    harga1=125000;
    cout << "Harga Tiket            : Rp. " << harga1 << endl;
    tpb=harga1*jumlah;
    cout << "Total Pembayaran       : Rp. " << tpb << endl;
    }else if(kelas=="2"){
    cout << "Kelas Kereta           : Bisnis " << endl;
    harga1=85000;
    cout << "Harga Tiket            : Rp. " << harga1 << endl;
    tpb=harga1*jumlah;
    cout << "Total Pembayaran       : Rp. " << tpb << endl;
    }else if(kelas=="3"){
    cout << "Kelas Kereta           : Ekonomi " << endl;
    harga1=35000;
    cout << "Harga Tiket            : Rp. " << harga1 << endl;
    tpb=harga1*jumlah;
    cout << "Total Pembayaran       : Rp. " << tpb << endl;
    }else{
    cout << "Kode Yang Anda Masukan Salah...! " << endl;
    }
    }else if(kodekereta=="KS"||kodekereta=="ks"){
    kodekereta_int=3;
    cout << "Jenis Kereta           : KENCANA SENTOSA " << endl;
    if(kelas=="1"){
    cout << "Kelas Kereta           : Eksekutif " << endl;
    harga1=135000;
    cout << "Harga Tiket            : Rp. " << harga1 << endl;
    tpb=harga1*jumlah;
    cout << "Total Pembayaran       : Rp. " << tpb << endl;
    }else if(kelas=="2"){
    cout << "Kelas Kereta           : Bisnis " << endl;
    harga1=90000;
    cout << "Harga Tiket            : Rp. " << harga1 << endl;
    tpb=harga1*jumlah;
    cout << "Total Pembayaran       : Rp. " << tpb << endl;
    }else if(kelas=="3"){
    cout << "Kelas Kereta           : Ekonomi " << endl;
    harga1=40000;
    cout << "Harga Tiket            : Rp. " << harga1 << endl;
    tpb=harga1*jumlah;
    cout << "Total Pembayaran       : Rp. " << tpb << endl;
    }else{
    cout << "Kode Yang Anda Masukan Salah...! " << endl;
    }
    }
    }else if(kota==3){
    cout << "Kota Tujuan            : Surabaya " << endl;
    if(kodekereta=="AP"||kodekereta=="ap"){
    kodekereta_int=1;
    cout << "Jenis Kereta           : Agung Podomoro " << endl;
    if(kelas=="1"){
    cout << "Kelas Kereta           : Eksekutif " << endl;
    harga1=300000;
    cout << "Harga Tiket            : Rp. " << harga1 << endl;
    tpb=harga1*jumlah;
    cout << "Total Pembayaran       : Rp. " << tpb << endl;

    }else if(kelas=="2"){
    cout << "Kelas Kereta           : Bisnis " << endl;
    harga1=200000;
    cout << "Harga Tiket            : Rp. " << harga1 << endl;
    tpb=harga1*jumlah;
    cout << "Total Pembayaran       : Rp. " << tpb << endl;
    }else if(kelas=="3"){
    cout << "Kelas Kereta           : Ekonomi " << endl;
    harga1=120000;
    cout << "Harga Tiket            : Rp. " << harga1 << endl;
    tpb=harga1*jumlah;
    cout << "Total Pembayaran       : Rp. " << tpb << endl;
    }else{
    cout << "Kode Yang Anda Masukan Salah...! " << endl;
    }
    }else if(kodekereta=="SM"||kodekereta=="sm"){
    kodekereta_int=2;
    cout << "Jenis Kereta           : SUMBER MAKMUR " << endl;
    if(kelas=="1"){
    cout << "Kelas Kereta           : Eksekutif " << endl;
    harga1=350000;
    cout << "Harga Tiket            : Rp. " << harga1 << endl;
    tpb=harga1*jumlah;
    cout << "Total Pembayaran       : Rp. " << tpb << endl;
    }else if(kelas=="2"){
    cout << "Kelas Kereta           : Bisnis " << endl;
    harga1=225000;
    cout << "Harga Tiket            : Rp. " << harga1 << endl;
    tpb=harga1*jumlah;
    cout << "Total Pembayaran       : Rp. " << tpb << endl;
    }else if(kelas=="3"){
    cout << "Kelas Kereta           : Ekonomi " << endl;
    harga1=160000;
    cout << "Harga Tiket            : Rp. " << harga1 << endl;
    tpb=harga1*jumlah;
    cout << "Total Pembayaran       : Rp. " << tpb << endl;
    }else{
    cout << "Kode Yang Anda Masukan Salah...! " << endl;
    }
    }else if(kodekereta=="KS"||kodekereta=="ks"){
    kodekereta_int=3;
    cout << "Jenis Kereta           : KENCANA SENTOSA " << endl;
    if(kelas=="1"){
    cout << "Kelas Kereta           : Eksekutif " << endl;
    harga1=375000;
    cout << "Harga Tiket            : Rp. " << harga1 << endl;
    tpb=harga1*jumlah;
    cout << "Total Pembayaran       : Rp. " << tpb << endl;
    }else if(kelas=="2"){
    cout << "Kelas Kereta           : Bisnis " << endl;
    harga1=250000;
    cout << "Harga Tiket            : Rp. " << harga1 << endl;
    tpb=harga1*jumlah;
    cout << "Total Pembayaran       : Rp. " << tpb << endl;
    }else if(kelas=="3"){
    cout << "Kelas Kereta           : Ekonomi " << endl;
    harga1=165000;
    cout << "Harga Tiket            : Rp. " << harga1 << endl;
    tpb=harga1*jumlah;
    cout << "Total Pembayaran       : Rp. " << tpb << endl;
    }else{
    cout << "Kode Yang Anda Masukan Salah...! " << endl;
    }
    }
    }else if(kota==4){
    cout << "Kota Tujuan            : Yogyakarta " << endl;
    if(kodekereta=="AP"||kodekereta=="ap"){
    kodekereta_int=1;
    cout << "Jenis Kereta           : Agung Podomoro " << endl;
    if(kelas=="1"){
    cout << "Kelas Kereta           : Eksekutif " << endl;
    harga1=400000;
    cout << "Harga Tiket            : Rp. " << harga1 << endl;
    tpb=harga1*jumlah;
    cout << "Total Pembayaran       : Rp. " << tpb << endl;

    }else if(kelas=="2"){
    cout << "Kelas Kereta           : Bisnis " << endl;
    harga1=300000;
    cout << "Harga Tiket            : Rp. " << harga1 << endl;
    tpb=harga1*jumlah;
    cout << "Total Pembayaran       : Rp. " << tpb << endl;
    }else if(kelas=="3"){
    cout << "Kelas Kereta           : Ekonomi " << endl;
    harga1=200000;
    cout << "Harga Tiket            : Rp. " << harga1 << endl;
    tpb=harga1*jumlah;
    cout << "Total Pembayaran       : Rp. " << tpb << endl;
    }else{
    cout << "Kode Yang Anda Masukan Salah...! " << endl;
    }
    }else if(kodekereta=="SM"||kodekereta=="sm"){
    kodekereta_int=2;
    cout << "Jenis Kereta           : SUMBER MAKMUR " << endl;
    if(kelas=="1"){
    cout << "Kelas Kereta           : Eksekutif " << endl;
    harga1=450000;
    cout << "Harga Tiket            : Rp. " << harga1 << endl;
    tpb=harga1*jumlah;
    cout << "Total Pembayaran       : Rp. " << tpb << endl;
    }else if(kelas=="2"){
    cout << "Kelas Kereta           : Bisnis " << endl;
    harga1=325000;
    cout << "Harga Tiket            : Rp. " << harga1 << endl;
    tpb=harga1*jumlah;
    cout << "Total Pembayaran       : Rp. " << tpb << endl;
    }else if(kelas=="3"){
    cout << "Kelas Kereta           : Ekonomi " << endl;
    harga1=250000;
    cout << "Harga Tiket            : Rp. " << harga1 << endl;
    tpb=harga1*jumlah;
    cout << "Total Pembayaran       : Rp. " << tpb << endl;
    }else{
    cout << "Kode Yang Anda Masukan Salah...! " << endl;
    }
    }else if(kodekereta=="KS"||kodekereta=="ks"){
    kodekereta_int=3;
    cout << "Jenis Kereta           : KENCANA SENTOSA " << endl;
    if(kelas=="1"){
    cout << "Kelas Kereta           : Eksekutif " << endl;
    harga1=475000;
    cout << "Harga Tiket            : Rp. " << harga1 << endl;
    tpb=harga1*jumlah;
    cout << "Total Pembayaran       : Rp. " << tpb << endl;
    }else if(kelas=="2"){
    cout << "Kelas Kereta           : Bisnis " << endl;
    harga1=350000;
    cout << "Harga Tiket            : Rp. " << harga1 << endl;
    tpb=harga1*jumlah;
    cout << "Total Pembayaran       : Rp. " << tpb << endl;
    }else if(kelas=="3"){
    cout << "Kelas Kereta           : Ekonomi " << endl;
    harga1=265000;
    cout << "Harga Tiket            : Rp. " << harga1 << endl;
    tpb=harga1*jumlah;
    cout << "Total Pembayaran       : Rp. " << tpb << endl;
    }else{
    cout << "Kode Yang Anda Masukan Salah...! " << endl;
    }
    }
    }else if(kota==5){
    cout << "Kota Tujuan            : Malang " << endl;
    if(kodekereta=="AP"||kodekereta=="ap"){
    kodekereta_int=1;
    cout << "Jenis Kereta           : Agung Podomoro " << endl;
    if(kelas=="1"){
    cout << "Kelas Kereta           : Eksekutif " << endl;
    harga1=350000;
    cout << "Harga Tiket            : Rp. " << harga1 << endl;
    tpb=harga1*jumlah;
    cout << "Total Pembayaran       : Rp. " << tpb << endl;

    }else if(kelas=="2"){
    cout << "Kelas Kereta           : Bisnis " << endl;
    harga1=200000;
    cout << "Harga Tiket            : Rp. " << harga1 << endl;
    tpb=harga1*jumlah;
    cout << "Total Pembayaran       : Rp. " << tpb << endl;
    }else if(kelas=="3"){
    cout << "Kelas Kereta           : Ekonomi " << endl;
    harga1=150000;
    cout << "Harga Tiket            : Rp. " << harga1 << endl;
    tpb=harga1*jumlah;
    cout << "Total Pembayaran       : Rp. " << tpb << endl;
    }else{
    cout << "Kode Yang Anda Masukan Salah...! " << endl;
    }
    }else if(kodekereta=="SM"||kodekereta=="sm"){
    kodekereta_int=2;
    cout << "Jenis Kereta           : SUMBER MAKMUR " << endl;
    if(kelas=="1"){
    cout << "Kelas Kereta           : Eksekutif " << endl;
    harga1=355000;
    cout << "Harga Tiket            : Rp. " << harga1 << endl;
    tpb=harga1*jumlah;
    cout << "Total Pembayaran       : Rp. " << tpb << endl;
    }else if(kelas=="2"){
    cout << "Kelas Kereta           : Bisnis " << endl;
    harga1=225000;
    cout << "Harga Tiket            : Rp. " << harga1 << endl;
    tpb=harga1*jumlah;
    cout << "Total Pembayaran       : Rp. " << tpb << endl;
    }else if(kelas=="3"){
    cout << "Kelas Kereta           : Ekonomi " << endl;
    harga1=160000;
    cout << "Harga Tiket            : Rp. " << harga1 << endl;
    tpb=harga1*jumlah;
    cout << "Total Pembayaran       : Rp. " << tpb << endl;
    }else{
    cout << "Kode Yang Anda Masukan Salah...! " << endl;
    }
    }else if(kodekereta=="KS"||kodekereta=="ks"){
    kodekereta_int=3;
    cout << "Jenis Kereta           : KENCANA SENTOSA " << endl;
    if(kelas=="1"){
    cout << "Kelas Kereta           : Eksekutif " << endl;
    harga1=375000;
    cout << "Harga Tiket            : Rp. " << harga1 << endl;
    tpb=harga1*jumlah;
    cout << "Total Pembayaran       : Rp. " << tpb << endl;
    }else if(kelas=="2"){
    cout << "Kelas Kereta           : Bisnis " << endl;
    harga1=250000;
    cout << "Harga Tiket            : Rp. " << harga1 << endl;
    tpb=harga1*jumlah;
    cout << "Total Pembayaran       : Rp. " << tpb << endl;
    }else if(kelas=="3"){
    cout << "Kelas Kereta           : Ekonomi " << endl;
    harga1=175000;
    cout << "Harga Tiket            : Rp. " << harga1 << endl;
    tpb=harga1*jumlah;
    cout << "Total Pembayaran       : Rp. " << tpb << endl;
    }else{
    cout << "Kode Yang Anda Masukan Salah...! " << endl;
    }
    }
    }else if(kota=6){
    cout << "Kota Tujuan            : Semarang " << endl;
    if(kodekereta=="AP"||kodekereta=="ap"){
    kodekereta_int=1;
    cout << "Jenis Kereta           : Agung Podomoro " << endl;
    if(kelas=="1"){
    cout << "Kelas Kereta           : Eksekutif " << endl;
    harga1=500000;
    cout << "Harga Tiket            : Rp. " << harga1 << endl;
    tpb=harga1*jumlah;
    cout << "Total Pembayaran       : Rp. " << tpb << endl;

    }else if(kelas=="2"){
    cout << "Kelas Kereta           : Bisnis " << endl;
    harga1=400000;
    cout << "Harga Tiket            : Rp. " << harga1 << endl;
    tpb=harga1*jumlah;
    cout << "Total Pembayaran       : Rp. " << tpb << endl;
    }else if(kelas=="3"){
    cout << "Kelas Kereta           : Ekonomi " << endl;
    harga1=350000;
    cout << "Harga Tiket            : Rp. " << harga1 << endl;
    tpb=harga1*jumlah;
    cout << "Total Pembayaran       : Rp. " << tpb << endl;
    }else{
    cout << "Kode Yang Anda Masukan Salah...! " << endl;
    }
    }else if(kodekereta=="SM"||kodekereta=="sm"){
    kodekereta_int=2;
    cout << "Jenis Kereta           : SUMBER MAKMUR " << endl;
    if(kelas=="1"){
    cout << "Kelas Kereta           : Eksekutif " << endl;
    harga1=550000;
    cout << "Harga Tiket            : Rp. " << harga1 << endl;
    tpb=harga1*jumlah;
    cout << "Total Pembayaran       : Rp. " << tpb << endl;
    }else if(kelas=="2"){
    cout << "Kelas Kereta           : Bisnis " << endl;
    harga1=425000;
    cout << "Harga Tiket            : Rp. " << harga1 << endl;
    tpb=harga1*jumlah;
    cout << "Total Pembayaran       : Rp. " << tpb << endl;
    }else if(kelas=="3"){
    cout << "Kelas Kereta           : Ekonomi " << endl;
    harga1=360000;
    cout << "Harga Tiket            : Rp. " << harga1 << endl;
    tpb=harga1*jumlah;
    cout << "Total Pembayaran       : Rp. " << tpb << endl;
    }else{
    cout << "Kode Yang Anda Masukan Salah...! " << endl;
    }
    }else if(kodekereta=="KS"||kodekereta=="ks"){
    kodekereta_int=3;
    cout << "Jenis Kereta           : KENCANA SENTOSA " << endl;
    if(kelas=="1"){
    cout << "Kelas Kereta           : Eksekutif " << endl;
    harga1=575000;
    cout << "Harga Tiket            : Rp. " << harga1 << endl;
    tpb=harga1*jumlah;
    cout << "Total Pembayaran       : Rp. " << tpb << endl;
    }else if(kelas=="2"){
    cout << "Kelas Kereta           : Bisnis " << endl;
    harga1=450000;
    cout << "Harga Tiket            : Rp. " << harga1 << endl;
    tpb=harga1*jumlah;
    cout << "Total Pembayaran       : Rp. " << tpb << endl;
    }else if(kelas=="3"){
    cout << "Kelas Kereta           : Ekonomi " << endl;
    harga1=365000;
    cout << "Harga Tiket            : Rp. " << harga1 << endl;
    tpb=harga1*jumlah;
    cout << "Total Pembayaran       : Rp. " << tpb << endl;
    }else{
    cout << "Kode Yang Anda Masukan Salah...! " << endl;
    }
    }
    }else{
    cout << "KODE YANG ANDA MASUKAN SALAH...! " << endl;
    }
}


void ruha()
{
    lihat:
        title2();
            cout << setw(62) << "MENU RUTE/PERJALANAN" <<endl;
    cout << setw(65) <<"===========================" <<endl<<endl;
    cout<< setw(10) <<"\xda";garis4();cout<<"\xc4\xc4";garis4();cout<<"\xbf"<<endl;
    cout<< setw(10) <<"\xb3" << setw(51) << "\xb3"<<endl;
    cout<< setw(10) <<"\xb3" << setw(35) << "DAFTAR RUTE/PERJALANAN" << setw(16) << "\xb3"<<endl;
    cout<< setw(10) <<"\xb3" << setw(51) << "\xb3"<<endl;
    cout<< setw(10) <<"\xc3";garis4();cout<<"\xc2\xc2";garis4();cout<<"\xb4"<<endl;
    cout<< setw(10) <<"\xb3" << setw(25) << "\xb3" << setw(1) << "\xb3" << setw(25) << "\xb3"<<endl;
    cout<< setw(10) <<"\xb3" << setw(12) << "1. BANDUNG" << setw(13) << "\xb3" << setw(1) <<"\xb3" << setw(15) << "4. YOGYAKARTA" << setw(10) << "\xb3" << endl;
    cout<< setw(10) <<"\xb3" << setw(25) << "\xb3" << setw(1) << "\xb3" << setw(25) << "\xb3"<<endl;
    cout<< setw(10) <<"\xb3" << setw(15) << "2. PURWAKARTA" << setw(10) << "\xb3" << setw(1) <<"\xb3" << setw(11) << "5. MALANG" << setw(14) << "\xb3" << endl;
    cout<< setw(10) <<"\xb3" << setw(25) << "\xb3" << setw(1) << "\xb3" << setw(25) << "\xb3"<<endl;
    cout<< setw(10) <<"\xb3" << setw(13) << "3. SURABAYA" << setw(12) << "\xb3" << setw(1) <<"\xb3" << setw(13) << "6. SEMARANG" << setw(12) << "\xb3" << endl;
    cout<< setw(10) <<"\xb3" << setw(25) << "\xb3" << setw(1) << "\xb3" << setw(25) << "\xb3"<<endl;
    cout<< setw(10) <<"\xc0";garis4();cout<<"\xc1\xc1";garis4();cout<<"\xd9"<<endl<<endl;
    cout << "Masukan Kode Perjalanan : ";
    cin >> kode;
    loading();
    system("cls");
    switch(kode){
    case 1 :
        title2();
            cout << setw(60) << "MENU RUTE/HARGA" <<endl;
    cout << setw(65) <<"===========================" <<endl<<endl;
    cout<<"\xda";garis2();cout<<"\xbf"<<endl;
    cout<<"\xb3" << "   Kota Tujuan : "<<"Bandung"<<setw(78)<<"\xb3"<<endl;
    cout<<"\xb3" << "===================================="<<setw(66)<<"\xb3"<<endl;
    cout<<"\xb3" <<setw(102)<<"\xb3"<< endl;
    cout<<"\xb3" << "   DAFTAR HARGA DAN JENIS KERETA"<<setw(70)<<"\xb3"<<endl;
    cout<<"\xb3" << "===================================="<<setw(66)<<"\xb3"<<endl;
    cout<<"\xb3" <<setw(102)<<"\xb3"<< endl;
    cout<<"\xb3" << setw(30) << "Kereta Agung Podomoro : ";
    cout << setw(30) << "Kereta Sumber Makmur : ";
    cout << setw(35) << "Kereta Kencana Sentosa : "<<setw(7)<<"\xb3"<<endl;
    cout<<"\xb3" <<setw(102)<<"\xb3"<< endl;
    cout<<"\xb3" << setw(22) << "Eksekutif : Rp. "<<"200.000";
    cout << setw(24) << "Eksekutif : Rp. "<<"250.000";
    cout << setw(26) << "Eksekutif : Rp. "<<"275.000"<<setw(9)<<"\xb3"<<endl;
    cout<<"\xb3" << setw(22) << "Bisnis    : Rp. "<<"100.000";
    cout << setw(24) << "Bisnis    : Rp. "<<"125.000";
    cout << setw(26) << "Bisnis    : Rp. "<<"150.000"<<setw(9)<<"\xb3"<<endl;
    cout<<"\xb3" << setw(22) << "Ekonomi   : Rp. "<<"50.000";
    cout << setw(25) << "Ekonomi   : Rp. "<<"60.000";
    cout << setw(27) << "Ekonomi   : Rp. "<<"65.000"<<setw(10)<<"\xb3"<<endl;
    cout<<"\xb3" <<setw(102)<<"\xb3"<< endl;
    cout<<"\xc0";garis2();cout<<"\xd9"<<endl;
    break;

    case 2:
    title2();
                cout << setw(60) << "MENU RUTE/HARGA" <<endl;
    cout << setw(65) <<"===========================" <<endl<<endl;
    cout<<"\xda";garis2();cout<<"\xbf"<<endl;
    cout<<"\xb3" << "   Kota Tujuan : "<<"Purwakarta"<<setw(75)<<"\xb3"<<endl;
    cout<<"\xb3" << "===================================="<<setw(66)<<"\xb3"<<endl;
    cout<<"\xb3" <<setw(102)<<"\xb3"<< endl;
    cout<<"\xb3" << "   DAFTAR HARGA DAN JENIS KERETA"<<setw(70)<<"\xb3"<<endl;
    cout<<"\xb3" << "===================================="<<setw(66)<<"\xb3"<<endl;
    cout<<"\xb3" <<setw(102)<<"\xb3"<< endl;
    cout<<"\xb3" << setw(30) << "Kereta Agung Podomoro : ";
    cout << setw(30) << "Kereta Sumber Makmur : ";
    cout << setw(35) << "Kereta Kencana Sentosa : "<<setw(7)<<"\xb3"<<endl;
    cout<<"\xb3" <<setw(102)<<"\xb3"<< endl;
    cout<<"\xb3" << setw(22) << "Eksekutif : Rp. "<<"100.000";
    cout << setw(24) << "Eksekutif : Rp. "<<"125.000";
    cout << setw(26) << "Eksekutif : Rp. "<<"135.000"<<setw(9)<<"\xb3"<<endl;
    cout<<"\xb3" << setw(22) << "Bisnis    : Rp. "<<"80.000";
    cout << setw(25) << "Bisnis    : Rp. "<<"85.000";
    cout << setw(27) << "Bisnis    : Rp. "<<"90.000"<<setw(10)<<"\xb3"<<endl;
    cout<<"\xb3" << setw(22) << "Ekonomi   : Rp. "<<"30.000";
    cout << setw(25) << "Ekonomi   : Rp. "<<"35.000";
    cout << setw(27) << "Ekonomi   : Rp. "<<"40.000"<<setw(10)<<"\xb3"<<endl;
    cout<<"\xb3" <<setw(102)<<"\xb3"<< endl;
    cout<<"\xc0";garis2();cout<<"\xd9"<<endl;
    break;


    case 3:
    title2();
                cout << setw(60) << "MENU RUTE/HARGA" <<endl;
    cout << setw(65) <<"===========================" <<endl<<endl;
    cout<<"\xda";garis2();cout<<"\xbf"<<endl;
    cout<<"\xb3" << "   Kota Tujuan : "<<"Surabaya"<<setw(77)<<"\xb3"<<endl;
    cout<<"\xb3" << "===================================="<<setw(66)<<"\xb3"<<endl;
    cout<<"\xb3" <<setw(102)<<"\xb3"<< endl;
    cout<<"\xb3" << "   DAFTAR HARGA DAN JENIS KERETA"<<setw(70)<<"\xb3"<<endl;
    cout<<"\xb3" << "===================================="<<setw(66)<<"\xb3"<<endl;
    cout<<"\xb3" <<setw(102)<<"\xb3"<< endl;
    cout<<"\xb3" << setw(30) << "Kereta Agung Podomoro : ";
    cout << setw(30) << "Kereta Sumber Makmur : ";
    cout << setw(35) << "Kereta Kencana Sentosa : "<<setw(7)<<"\xb3"<<endl;
    cout<<"\xb3" <<setw(102)<<"\xb3"<< endl;
    cout<<"\xb3" << setw(22) << "Eksekutif : Rp. "<<"300.000";
    cout << setw(24) << "Eksekutif : Rp. "<<"350.000";
    cout << setw(26) << "Eksekutif : Rp. "<<"375.000"<<setw(9)<<"\xb3"<<endl;
    cout<<"\xb3" << setw(22) << "Bisnis    : Rp. "<<"200.000";
    cout << setw(24) << "Bisnis    : Rp. "<<"225.000";
    cout << setw(26) << "Bisnis    : Rp. "<<"250.000"<<setw(9)<<"\xb3"<<endl;
    cout<<"\xb3" << setw(22) << "Ekonomi   : Rp. "<<"120.000";
    cout << setw(24) << "Ekonomi   : Rp. "<<"160.000";
    cout << setw(26) << "Ekonomi   : Rp. "<<"165.000"<<setw(9)<<"\xb3"<<endl;
    cout<<"\xb3" <<setw(102)<<"\xb3"<< endl;
    cout<<"\xc0";garis2();cout<<"\xd9"<<endl;
    break;


    case 4:
    title2();
                cout << setw(60) << "MENU RUTE/HARGA" <<endl;
    cout << setw(65) <<"===========================" <<endl<<endl;
    cout<<"\xda";garis2();cout<<"\xbf"<<endl;
    cout<<"\xb3" << "   Kota Tujuan : "<<"Yogyakarta"<<setw(75)<<"\xb3"<<endl;
    cout<<"\xb3" << "===================================="<<setw(66)<<"\xb3"<<endl;
    cout<<"\xb3" <<setw(102)<<"\xb3"<< endl;
    cout<<"\xb3" << "   DAFTAR HARGA DAN JENIS KERETA"<<setw(70)<<"\xb3"<<endl;
    cout<<"\xb3" << "===================================="<<setw(66)<<"\xb3"<<endl;
    cout<<"\xb3" <<setw(102)<<"\xb3"<< endl;
    cout<<"\xb3" << setw(30) << "Kereta Agung Podomoro : ";
    cout << setw(30) << "Kereta Sumber Makmur : ";
    cout << setw(35) << "Kereta Kencana Sentosa : "<<setw(7)<<"\xb3"<<endl;
    cout<<"\xb3" <<setw(102)<<"\xb3"<< endl;
    cout<<"\xb3" << setw(22) << "Eksekutif : Rp. "<<"400.000";
    cout << setw(24) << "Eksekutif : Rp. "<<"450.000";
    cout << setw(26) << "Eksekutif : Rp. "<<"475.000"<<setw(9)<<"\xb3"<<endl;
    cout<<"\xb3" << setw(22) << "Bisnis    : Rp. "<<"300.000";
    cout << setw(24) << "Bisnis    : Rp. "<<"325.000";
    cout << setw(26) << "Bisnis    : Rp. "<<"350.000"<<setw(9)<<"\xb3"<<endl;
    cout<<"\xb3" << setw(22) << "Ekonomi   : Rp. "<<"200.000";
    cout << setw(24) << "Ekonomi   : Rp. "<<"250.000";
    cout << setw(26) << "Ekonomi   : Rp. "<<"265.000"<<setw(9)<<"\xb3"<<endl;
    cout<<"\xb3" <<setw(102)<<"\xb3"<< endl;
    cout<<"\xc0";garis2();cout<<"\xd9"<<endl;
    break;


    case 5:
              title2();
                          cout << setw(60) << "MENU RUTE/HARGA" <<endl;
    cout << setw(65) <<"===========================" <<endl<<endl;
    cout<<"\xda";garis2();cout<<"\xbf"<<endl;
    cout<<"\xb3" << "   Kota Tujuan : "<<"Malang"<<setw(79)<<"\xb3"<<endl;
    cout<<"\xb3" << "===================================="<<setw(66)<<"\xb3"<<endl;
    cout<<"\xb3" <<setw(102)<<"\xb3"<< endl;
    cout<<"\xb3" << "   DAFTAR HARGA DAN JENIS KERETA"<<setw(70)<<"\xb3"<<endl;
    cout<<"\xb3" << "===================================="<<setw(66)<<"\xb3"<<endl;
    cout<<"\xb3" <<setw(102)<<"\xb3"<< endl;
    cout<<"\xb3" << setw(30) << "Kereta Agung Podomoro : ";
    cout << setw(30) << "Kereta Sumber Makmur : ";
    cout << setw(35) << "Kereta Kencana Sentosa : "<<setw(7)<<"\xb3"<<endl;
    cout<<"\xb3" <<setw(102)<<"\xb3"<< endl;
    cout<<"\xb3" << setw(22) << "Eksekutif : Rp. "<<"350.000";
    cout << setw(24) << "Eksekutif : Rp. "<<"355.000";
    cout << setw(26) << "Eksekutif : Rp. "<<"375.000"<<setw(9)<<"\xb3"<<endl;
    cout<<"\xb3" << setw(22) << "Bisnis    : Rp. "<<"200.000";
    cout << setw(24) << "Bisnis    : Rp. "<<"225.000";
    cout << setw(26) << "Bisnis    : Rp. "<<"250.000"<<setw(9)<<"\xb3"<<endl;
    cout<<"\xb3" << setw(22) << "Ekonomi   : Rp. "<<"150.000";
    cout << setw(24) << "Ekonomi   : Rp. "<<"160.000";
    cout << setw(26) << "Ekonomi   : Rp. "<<"175.000"<<setw(9)<<"\xb3"<<endl;
    cout<<"\xb3" <<setw(102)<<"\xb3"<< endl;
    cout<<"\xc0";garis2();cout<<"\xd9"<<endl;
    break;

    case 6:
                title2();
                cout << setw(60) << "MENU RUTE/HARGA" <<endl;
    cout << setw(65) <<"===========================" <<endl<<endl;
    cout<<"\xda";garis2();cout<<"\xbf"<<endl;
    cout<<"\xb3" << "   Kota Tujuan : "<<"Semarang"<<setw(77)<<"\xb3"<<endl;
    cout<<"\xb3" << "===================================="<<setw(66)<<"\xb3"<<endl;
    cout<<"\xb3" <<setw(102)<<"\xb3"<< endl;
    cout<<"\xb3" << "   DAFTAR HARGA DAN JENIS KERETA"<<setw(70)<<"\xb3"<<endl;
    cout<<"\xb3" << "===================================="<<setw(66)<<"\xb3"<<endl;
    cout<<"\xb3" <<setw(102)<<"\xb3"<< endl;
    cout<<"\xb3" << setw(30) << "Kereta Agung Podomoro : ";
    cout << setw(30) << "Kereta Sumber Makmur : ";
    cout << setw(35) << "Kereta Kencana Sentosa : "<<setw(7)<<"\xb3"<<endl;
    cout<<"\xb3" <<setw(102)<<"\xb3"<< endl;
    cout<<"\xb3" << setw(22) << "Eksekutif : Rp. "<<"500.000";
    cout << setw(24) << "Eksekutif : Rp. "<<"550.000";
    cout << setw(26) << "Eksekutif : Rp. "<<"575.000"<<setw(9)<<"\xb3"<<endl;
    cout<<"\xb3" << setw(22) << "Bisnis    : Rp. "<<"400.000";
    cout << setw(24) << "Bisnis    : Rp. "<<"425.000";
    cout << setw(26) << "Bisnis    : Rp. "<<"450.000"<<setw(9)<<"\xb3"<<endl;
    cout<<"\xb3" << setw(22) << "Ekonomi   : Rp. "<<"350.000";
    cout << setw(24) << "Ekonomi   : Rp. "<<"360.000";
    cout << setw(26) << "Ekonomi   : Rp. "<<"365.000"<<setw(9)<<"\xb3"<<endl;
    cout<<"\xb3" <<setw(102)<<"\xb3"<< endl;
    cout<<"\xc0";garis2();cout<<"\xd9"<<endl;
    break;

}
    cout << endl;
    cout << "Ingin Melihat Daftar Harga Lainnya Lagi <y/t> ? : "; cin >> lihat;
    if(lihat=='Y'||lihat=='y'){
            loading();
        system("cls");
        goto lihat;
    }else{
        loading();
    system("cls");
    menu();
    }
}

void pembayaran()
{
    bayar:
    kondisi();
    cout << endl;
    garis();cout<<endl;
    if(jumlah>=3&&jumlah<=5){
    cout << setw(5) << "Diskon                 : Anda Mendapatkan Diskon Sebesar 25% " << endl;
    tpb2=0.25*tpb;
    tpb=tpb-tpb2;
    cout << setw(5) << "Total Pembayaran       : Rp. " << tpb << endl;
    }else if(jumlah>=6&&jumlah<=8){
    cout << setw(5) << "Diskon                 : Anda Mendapatkan Diskon Sebesar 50% " << endl;
    tpb2=0.5*tpb;
    tpb=tpb-tpb2;
    cout << setw(5) << "Total Pembayaran       : Rp. " << tpb << endl;
    }else{
    cout << setw(5) << "Diskon                : Anda Tidak Mendapatkan Diskon " << endl;
    cout << setw(5) << "Total Pembayaran      : Rp. " << tpb << endl;
    }
    cout << endl;
    cout << "     Silahkan Untuk Melakukan Pembayaran " << endl;
    cout << "============================================== " << endl;
    cout << "Masukan Nominal Uang Anda          : Rp. " ; cin >> uang;
    if(uang<tpb){
        kembalian=uang-tpb;
        cout << endl;
    cout << "Maaf Uang Anda Tidak Mencukupi Untuk Melakukan Pembayaran... " << endl;
    cout<<endl;
    cout<<"Ingin Mencoba Lagi <y/t> ? : ";cin >> lagi;
    if(lagi=='Y'||lagi=='y'){
            loading();
        system("cls");
        title2();
                    cout << setw(60) << "MENU PEMBAYARAN" <<endl;
    cout << setw(65) <<"===========================" <<endl<<endl;
    cout << setw(5) << "Nama Pemesan           : " << nama << endl;
    cout << setw(5) << "Waktu Keberangkatan    : " << waktu << endl;
        goto bayar;
    }else{
        loading();
    system("cls");
    menu();
    }
    }else{
    kembalian=uang-tpb;
    cout << "Uang Kembalian                     : Rp. " << kembalian << endl;
    }
}

void garis()
{
    for(int i=0; i<50; i++){
        cout << "=";
    }
}

void garis2()
{
    for(int i=0; i<=100; i++){
        cout << "\xc4";
    }
}

void loading()
{
    system("color B");
    cout << "\n\n\n\t\t\t\t\t\tPlease Wait While Loading...\n\n";
    char a=177, b=219;
    cout <<"\t\t\t\t";
    for(int i=0;i<=60;i++)
        cout << a;
    cout << "\r";
    cout << "\t\t\t\t";
    for(int i=0;i<=60;i++){
        cout << b;
        for(int j=0;j<=1e7;j++);

    }
}

void title()
{
    cout<<"\xda";garis2();cout<<"\xbf"<<endl;
    cout<<"\xb3"<<setfill(' ')<<setw(102)<<"\xb3"<<endl;
    cout<<"\xb3"<<setfill(' ')<<setw(62)<<"PT. KERETA API INDONESIA "<<setfill(' ')<<setw(40)<<"\xb3"<<endl;
    cout<<"\xb3"<<setfill(' ')<<setw(65)<<"STASIUN GAMBIR - JAKARTA PUSAT "<<setfill(' ')<<setw(37)<<"\xb3"<<endl;
    cout<<"\xb3"<<setfill(' ')<<setw(66)<<"MELAYANI ANTAR KOTA ANTAR PROVINSI "<<setfill(' ')<<setw(36)<<"\xb3"<<endl;
    cout<<"\xb3"<<setfill(' ')<<setw(72)<<"\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4"<<setfill(' ')<<setw(30)<<"\xb3"<<endl;
    cout<<"\xb3"<<setfill(' ')<<setw(102)<<"\xb3"<<endl;
    cout<<"\xc3\xc4"; garis3();cout << "\xc2\xc2"; garis3();cout<<"\xb4"<<endl;
}

void garis3()
{
    for(int i=0;i<49;i++){
        cout << "\xc4";
    }
}

void daftar()
{
    cout<<"\xda";garis3();cout<<"\xc2\xc2";garis3();cout<<"\xbf"<<endl;
    cout<<"\xb3" << setw(50) << "\xb3" << setw(1) << "\xb3" <<setw(30) << "JENIS KERETA" << setw(20) << "\xb3"<<endl;
    cout<<"\xb3" << setw(50) << "\xb3" << setw(1) << "\xc3";garis4();cout<<"\xc2";garis4();cout<<"\xb4"<<endl;
    cout<<"\xb3" << setw(35) << "DAFTAR RUTE PERJALANAN" << setw(15) << "\xb3" << setw(1) << "\xb3" <<setw(25) << "\xb3" << setw(25) << "\xb3"<<endl;
    cout<<"\xb3" << setw(50) << "\xb3" << setw(1) << "\xb3" <<setw(18) << "JENIS KERETA" << setw(7) << "\xb3"<< setw(18) << "KELAS KERETA" << setw(7) << "\xb3" << endl;
    cout<<"\xc3";garis4();cout<<"\xc2";garis4();cout<<"\xb4\xc3";garis4();cout<<"\xc5";garis4();cout<<"\xb4"<<endl;
    cout<<"\xb3" << setw(25) << "\xb3" << setw(25) << "\xb3" << setw(1) <<"\xb3" << setw(25) <<"\xb3" << setw(25) << "\xb3"<<endl;
    cout<<"\xb3"<<setw(12)<<"1. BANDUNG"<<setw(13)<<"\xb3"<<setw(15)<<"4. YOGYAKARTA"<<setw(10)<<"\xb3"<<setw(1)<<"\xb3"<<setw(21)<<"AGUNG PODOMORO (AP)"<<setw(4)<<"\xb3"<<setw(19)<<"EKSEKUTIF (1)"<<setw(6)<<"\xb3"<<endl;
    cout<<"\xb3" << setw(25) << "\xb3" << setw(25) << "\xb3" << setw(1) <<"\xb3" << setw(25) <<"\xb3" << setw(25) << "\xb3"<<endl;
    cout<<"\xb3"<<setw(15)<<"2. PURWAKARTA"<<setw(10)<<"\xb3"<<setw(11)<<"5. MALANG"<<setw(14)<<"\xb3"<<setw(1)<<"\xb3"<<setw(20)<<"SUMBER MAKMUR (SM)"<<setw(5)<<"\xb3"<<setw(16)<<"BISNIS (2)"<<setw(9)<<"\xb3"<<endl;
    cout<<"\xb3" << setw(25) << "\xb3" << setw(25) << "\xb3" << setw(1) <<"\xb3" << setw(25) <<"\xb3" << setw(25) << "\xb3"<<endl;
    cout<<"\xb3"<<setw(13)<<"3. SURABAYA"<<setw(12)<<"\xb3"<<setw(13)<<"6. SEMARANG"<<setw(12)<<"\xb3"<<setw(1)<<"\xb3"<<setw(22)<<"KENCANA SENTOSA (KS)"<<setw(3)<<"\xb3"<<setw(17)<<"EKONOMI (3)"<<setw(8)<<"\xb3"<<endl;
    cout<<"\xb3" << setw(25) << "\xb3" << setw(25) << "\xb3" << setw(1) <<"\xb3" << setw(25) <<"\xb3" << setw(25) << "\xb3"<<endl;
    cout<<"\xc0";garis4();cout<<"\xc1";garis4();cout<<"\xc1\xc1";garis4();cout<<"\xc1";garis4();cout<<"\xd9"<<endl;
}

void garis4()
{
    for(int i=0;i<24;i++){
        cout << "\xc4";
    }
}

void title2()
{
    garis();garis();cout<<endl;
    cout<<setfill(' ')<<setw(65)<<"PT. KERETA API INDONESIA "<<endl;
    cout<<setfill(' ')<<setw(68)<<"STASIUN GAMBIR - JAKARTA PUSAT "<<endl;
    cout<<setfill(' ')<<setw(69)<<"MELAYANI ANTAR KOTA ANTAR PROVINSI "<<endl;
    garis();garis();cout<<endl<<endl;
}

 void pembuka()
{
    cout<<"\xda";garis2();cout<<"\xbf"<<endl;
    cout<<"\xb3"<<setfill(' ')<<setw(102)<<"\xb3"<<endl;
    cout<<"\xb3"<<setfill(' ')<<setw(62)<<"PT. KERETA API INDONESIA "<<setfill(' ')<<setw(40)<<"\xb3"<<endl;
    cout<<"\xb3"<<setfill(' ')<<setw(65)<<"STASIUN GAMBIR - JAKARTA PUSAT "<<setfill(' ')<<setw(37)<<"\xb3"<<endl;
    cout<<"\xb3"<<setfill(' ')<<setw(66)<<"MELAYANI ANTAR KOTA ANTAR PROVINSI "<<setfill(' ')<<setw(36)<<"\xb3"<<endl;
    cout<<"\xb3"<<setfill(' ')<<setw(72)<<"\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4"<<setfill(' ')<<setw(30)<<"\xb3"<<endl;
    cout<<"\xb3"<<setfill(' ')<<setw(102)<<"\xb3"<<endl;
    cout<<"\xc3";garis2();cout<<"\xb4"<<endl;
    cout<<"\xb3"<<setw(102)<<"\xb3"<<endl;
    cout<<"\xb3"<<setw(102)<<"\xb3"<<endl;
    cout<<"\xb3"<<setw(102)<<"\xb3"<<endl;
    cout<<"\xb3"<<setw(82)<<"Selamat Datang Di Layanan Pemesanan Tiket Kereta Api Stasiun Gambir"<<setw(20)<<"\xb3"<<endl;
    cout<<"\xb3"<<setw(96)<<"Hubungi Kami Jika Terdapat Kendala Saat Pemesanan Tiket Dengan Menghubungi Nomor Yang Tertera"<<setw(6)<<"\xb3"<<endl;
    cout<<"\xb3"<<setw(102)<<"\xb3"<<endl;
    cout<<"\xb3"<<setw(102)<<"\xb3"<<endl;
    cout<<"\xb3"<<setw(102)<<"\xb3"<<endl;
    cout<<"\xc0";garis2();cout<<"\xd9"<<endl;
    cout<<"Tekan <Y> Untuk Melanjutkan Atau Tekan <T> Untuk Keluar : ";cin>>tekan;
    if(tekan=='Y'||tekan=='y'){
        loading();
        system("cls");
        menu();
    }else{
    exit(0);
    }
}





