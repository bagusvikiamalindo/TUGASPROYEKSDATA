#define MAX 100
using namespace std;

struct datapasien {
	string nik, nama, jeniskelamin;
}; 
struct datapasien pasien;
struct datapasien stack[MAX];

void init(void);
void push(struct datapasien pasien);
void baca(void);
void transaksi(void);
void datapemesan();
int full(void);
int empty(void);
void display(struct datapasien pasien);
struct datapasien entridata(void);
struct datapasien pop(void);
struct datapasien info;
int i, jum, top, jawab, tanggalpem, bulanpem, tahunpem, saldo;
string namapem, alamatpem, teleponpem, lanjut;

class Covid {
    public : 
    void tescovid();
    private :
    int piltes, pilihdata;;
};

struct datapasien pop(void) {
	if(empty() != true) {
		pasien = stack[top];
		top--;
		display(pasien);
		return pasien;
	} 
	else {
		cout << " Stack Kosong" << endl;	
	}
}

int full(void) {
	if(top == MAX-1) 
		return(true);
	else 
		return(false);
}

int empty(void) {
	if(top == -1) 
		return(true);
	else 
		return(false);
}

void init(void) {
	top = -1;
}

void push(struct datapasien pasien) {
	if(full() != true) {
		top++;
		stack[top] = pasien;
	} 
	else {
		cout << " Stack Sudah Penuh" << endl;
	} 
}

void baca(void) {
	cout << endl << " Isi Data Stack" << endl;
	if(top>-1) {
		for(i=0; i<=top; i++) {
			cout << endl << " Data Pasien Ke - " << i+1 << endl;
			cout << " NIK           : " << stack[i].nik << endl;
			cout << " Nama          : " << stack[i].nama << endl;
			cout << " Jenis Kelamin : " << stack[i].jeniskelamin << endl;
		}
	} 
	else {
		cout << endl << " Data Kosong" << endl;
	}
}

struct datapasien entridata(void) {
	struct datapasien pasien;
	cout << endl;
  	cin.ignore(1,'\n');
	cout << " Menginputkan Data Pasien" << endl;
  	cout << " NIK           : "; 
  	getline(cin, pasien.nik);
  	cout << " Nama          : "; 
  	getline(cin, pasien.nama);
  	cout << " Jenis Kelamin : "; 
  	getline(cin, pasien.jeniskelamin);
	return(pasien);
}

void display(struct datapasien pasien) {
	cout << " NIK           : " << pasien.nik << endl;
	cout << " Nama          : " << pasien.nama << endl;
	cout << " Jenis Kelamin : " << pasien.jeniskelamin << endl;
}

void datapemesan() {
  	cout << endl << "====================================================" << endl;
  	cout << "                  TES GENOSE RUMAH SAKIT" << endl;
	cout << "                   DATA PEMESANAN" << endl;
	cout << "====================================================" << endl;
	cin.ignore(1,'\n');
	cout << "Masukkan Nama Pemesan : ";
	getline(cin, namapem);
	cout << "Masukkan Alamat Pemesan : ";
	getline(cin, alamatpem);
	cout << "Masukkan Telepon Pemesan : ";
	cin >> teleponpem;
	cout << "Masukkan Tanggal Pemesanan (01-31) : ";
	cin >> tanggalpem;
	cout << "Masukkan Bulan Pemesanan (01-12) : ";
	cin >> bulanpem;
	cout << "Masukkan Tahun Pemesanan : ";
	cin >> tahunpem;
  	cout << endl;
}

void transaksi(void) {
	if(top>-1) {
    	cout << endl <<  "==============================================================" << endl;
	  	cout << "                       DETAIL PEMESANAN" << endl;
	  	cout << "==============================================================" << endl;
	  	cout << "--------------------------------------------------------------" << endl;
	  	cout << "|                        Data Pemesan                        |" << endl;
	  	cout << "--------------------------------------------------------------" << endl;
	  	cout << " Nama              = " << namapem << endl;
	  	cout << " Alamat            = " << alamatpem << endl;
	  	cout << " Telepon           = " << teleponpem << endl;
	  	cout << " Tanggal Pemesanan = " << tanggalpem << "-" << bulanpem;
    	cout << "-" << tahunpem << endl << endl;
    	cout << "--------------------------------------------------------------" << endl;
	  	cout << "|       NIK       |        Nama  Pasien      |   Jenis Kelamin   |" << endl;
	  	cout << "--------------------------------------------------------------" << endl;
    	for(i=0; i<=top; i++) {
			cout << "    " << stack[i].nik << "         ";
      		cout << stack[i].nama << "          " << stack[i].jeniskelamin << endl;
		}
    	cout << endl;
	  	cout << "--------------------------------------------------------------" << endl;
	  	cout << "|                      Detail Transaksi                      |" << endl;
	  	cout << "--------------------------------------------------------------" << endl;
	  	cout << " Jumlah Pasien                                 = " << top+1 << " Pasien" << endl;
	  	cout << " Harga                                         = " << 50000 << endl;
	  	cout << "--------------------------------------------------------------" << endl;
  		cout << " Total Bayar                                   = " << 50000*(top+1) << endl;
	  	cout << "==============================================================" << endl;
    	cout << endl << " Melanjutkan Pembayaran (y/n) : ";
	  	cin >> lanjut;
	  	if(lanjut=="y"||lanjut=="Y") {
		  	cout << " Masukkan Saldo Anda : ";
		  	cin >> saldo;
		  	if(saldo>=(50000*(top+1))) {
			  	cout << " Sisa Saldo Anda : " << saldo-(50000*(top+1)) << endl << endl;
				cout << "==============================================================" << endl;
	  		  	cout << "                STRUK TES GENOSE RUMAH SAKIT" << endl;
	  		  	cout << "==============================================================" << endl;
	  		  	cout << "--------------------------------------------------------------" << endl;
	  		  	cout << "|                        Data Pemesan                        |" << endl;
	  		  	cout << "--------------------------------------------------------------" << endl;
	  		  	cout << " Nama              = " << namapem << endl;
	  		  	cout << " Alamat            = " << alamatpem << endl;
	  		  	cout << " Telepon           = " << teleponpem << endl;
	  		  	cout << " Tanggal Pemesanan = " << tanggalpem << "-" << bulanpem;
          		cout << "-" << tahunpem << endl << endl;
    		  	cout << "--------------------------------------------------------------" << endl;
	  		  	cout << "|       NIK       |    Nama  Pasien     |    Jenis Kelamin   |" << endl;
	  		  	cout << "--------------------------------------------------------------" << endl;
          		for(i=0; i<=top; i++) {
			      	cout << "    " << stack[i].nik << "         ";
            	cout <<                    stack[i].nama << "          " << stack[i].jeniskelamin << endl;
		      	}
	  		  	cout << "==============================================================" << endl;
			  	
			  	ofstream file("tescovid.txt");
			  	if(!file.is_open()) {
				  	cout << " Tidak Bisa Membuka File." << endl;
			  	}
        		else {
          			file << endl;
				  	file << "==============================================================" << endl;
	  		  		file << "         STRUK TES GENOSE RUMAH SAKIT" << endl;
	  		  		file << "==============================================================" << endl;
	  		  		file << "--------------------------------------------------------------" << endl;
	  		  		file << "|                        Data Pemesan                        |" << endl;
	  		  		file << "--------------------------------------------------------------" << endl;
	  		  		file << " Nama              = " << namapem << endl;
	  		  		file << " Alamat            = " << alamatpem << endl;
	  		  		file << " Telepon           = " << teleponpem << endl;
	  		  		file << " Tanggal Pemesanan = " << tanggalpem << "-" << bulanpem;
          			file << "-" << tahunpem << endl << endl;
    		  		file << "--------------------------------------------------------------" << endl;
	  		  		file << "|       NIK       |    Nama  Pasien    |     Jenis Kelamin   |" << endl;
	  		  		file << "--------------------------------------------------------------" << endl;
          			for(i=0; i<=top; i++) {
			      		file << "    " << stack[i].nik << "         ";
            			file << stack[i].nama << "          " << stack[i].jeniskelamin << endl;
		      		}
    		  		file << endl;
	  		  		file << "--------------------------------------------------------------" << endl;
	  		  		file << "|                      Detail Transaksi                      |" << endl;
	  		  		file << "--------------------------------------------------------------" << endl;
	  		  		file << " Jumlah Pasien                                 = " << top+1 << " Pasien" << endl;
	  		  		file << " Harga                                         = " << 50000 << endl;
	  		  		file << "--------------------------------------------------------------" << endl;
  			  		file << " Total Bayar                                   = " << 50000*(top+1) << endl;
          			file << " Bayar                                         = " << saldo << endl;
          			file << " Kembali                                       = " << saldo-(50000*(top+1)) << endl;
	  		  		file << "==============================================================" << endl;
			  	}
			  	cout << endl;
			  	cout << "--------------------- TRANSAKSI  BERHASIL ---------------------" << endl;
			  	cout << "|                                                             |" << endl;
			  	cout << "|  Wajib membawa Kartu Keluarga / KTP pada saat tes Covid-19  |" << endl;
			  	cout << "|                                                             |" << endl;
			  	cout << "---------------------------------------------------------------" << endl;
			}
      		else {
				cout << endl << " Maaf, Saldo Anda Tidak Mencukupi. " << endl;
			}		
		}
    	else {
			cout << endl << "-------------------- PEMESANAN DIBATALKAN --------------------" << endl;
		}
	} 
	else {
		cout << endl << " Data Kosong" << endl;
	}
}

void Covid::tescovid(){
  	cout << "====================================================" << endl;
  	cout << "          MENU TES COVID RUMAH SAKITTT   " << endl;
  	cout << "----------------------------------------------------" << endl;
	cout << " 1. Tes Genose                           Rp. 50.000" << endl;
	cout << " 2. Tes PCR                              Rp. 90.000" << endl;
 	cout << " 3. Tes Antigen                          Rp. 70.000" << endl;
  cout<< " 4. Menu Utama "<<endl;
  	cout << "====================================================" << endl;
  	cout << " Masukkan Pilihan Menu : ";
  	cin >> piltes;
  	if (piltes == 1) {
    	datapemesan();
    	init();
	  	do {
		  	cout << "====================================================" << endl;
		  	cout << "                  DATA PASIEN" << endl;
		  	cout << "----------------------------------------------------" << endl;
		  	cout << " 1. Tambah Data" << endl;
		  	cout << " 2. Hapus Data Akhir" << endl;
		  	cout << " 3. Lihat Data" << endl;
		  	cout << " 4. Hapus Semua Data" << endl;
      	cout << " 5. Selesai" << endl;
		  	cout << "====================================================" << endl;
		  	cout << " Masukkan Pilihan Anda : ";
		  	cin >> pilihdata;
		  	switch(pilihdata){
			  	case 1 : 
				  	pasien = entridata();
				  	push(pasien);
				  	break;
			  	case 2 : 
				  	cout << endl << " Data Yang Dihapus" << endl << endl;
				  	pasien = pop();
				  	break;
			  	case 3 : 
				  	baca();
				  	break;
			  	case 4 : 
				  	init();
				  	cout << endl << " Data Telah Dikosongkan" << endl;
				  	break;
			  	case 5 :
          			transaksi();
	        		cout << endl;
	        		break;
		  	}
		  	cout << endl;
	  	} while(pilihdata != 5);
  	}
  	else if (piltes == 2) {
  		cout << endl;
    	cout << "====================================================" << endl;
    	cout << "                      TES PCR" << endl;
    	cout << "====================================================" << endl;
      
  	}
  	else if (piltes == 3) {
  		cout << endl;
    	cout << "====================================================" << endl;
    	cout << "                    TES ANTIGEN" << endl;
    	cout << "====================================================" << endl;
      
  	}
      else if (piltes ==4){
        cout<<"========================================================="<<endl;
      }
  	else {
    	cout << " Menu Tidak Tersedia" << endl;
  	}
}
