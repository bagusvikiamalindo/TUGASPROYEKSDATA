void Apotek::input() {
	int pil;
	cout<<"----------------------------------"<<endl;
	cout<<" 1. Admin"<<endl;
	cout<<" 2. Pasien"<<endl;
  cout<<"----------------------------------"<<endl;
	cout<<"Masukan pilihan Anda sebagai -> ";
	cin>>pil;
  switch (pil){
    case 1 : 
        melbusatu();
    break;
  case 2 :
  	    melbudua();
    break;
  }
}

void Apotek::melbusatu(){
	int ch;
	cout<<"1.Masuk"<<endl;
	cout<<"2.Daftar"<<endl;
	cout<<"3.Lupa Kata sandi"<<endl;
	cout<<"Masukkan pilihan Anda:";
	cin>>ch;
	switch(ch)
	{
		case 1:
			loginsatu();
			break;
		case 2:
			regstrsatu();
			break;
		case 3:
			forgotsatu();
			break;
		default:
			cout<<"Maaf, pilihan yang dipilih salah."<<endl;
	}
	cout<<endl;   
}

void Apotek::melbudua(){
	int ch;
	cout<<"1.Masuk"<<endl;
	cout<<"2.Daftar"<<endl;
	cout<<"3.Lupa Kata sandi"<<endl;
	cout<<"Masukkan pilihan Anda:";
	cin>>ch;
	switch(ch)
	{
		case 1:
			logindua();
			break;
		case 2:
			regstrdua();
			break;
		case 3:
			forgotdua();
			break;
		default:
			cout<<"Maaf, pilihan yang dipilih salah."<<endl;
	}
}



void Apotek::rest(){
    Queue.awal = -1;
    Queue.akhir = -1;
    cout << "Data berhasil di reset" << endl << endl;
    menu();
}

bool isFull(){
    if(Queue.akhir == n - 1){
        return true;
    } else {
        return false;
    }
}

bool isEmpty(){
    if(Queue.akhir == -1){
        return true;
    }else {
        return false;
    }
}

void Apotek::inQueue(){
    if(!isFull()){
        string nama,poli;
        int nim;
        cout << "Masukkan Nama Pasien : ";
        cin >> nama;
        cout << "Masukkan No Antrian Pasien : ";
        cin >> nim;
        cout<< "MasuKkan Poli Antrian : ";
        cin>>poli;
        antri[Queue.akhir].nama = nama;
        antri[Queue.akhir].nim = nim;
        antri[Queue.akhir].poli = poli;
        ++Queue.akhir;
        cout << endl;
        menu();
    }else {
        cout << "Data penuh";
        menu();
    }
}

void Apotek::menu(){
    int pilih;
    cout << endl;
    cout << "============================"<<endl;
    cout << "      Tambah No Antrian"<<endl;
    cout << "============================"<<endl;
    cout << "1. Masukkan Data Antrian\n";
    cout << "2. Hapus satu Data Antrian\n";
    cout << "3. Reset data Antrian\n";
    cout << "4. Lihat Data Antrian \n";
    cout << "5. Keluar \n";
    cout << "----------------------------"<<endl;
    cout << "Masukkan pilihan anda: ";
    cin >> pilih;
    cout << endl;
    if(pilih == 1){
        inQueue();
    }else if(pilih == 2){
        deQueue();
    } else if(pilih == 3){
      rest();
    }else if(pilih == 4){
        tampil();
    }else if(pilih == 5){
         cout<<"+---------------------------------+"<<endl;
         cout<<"| ketik angka 1 untuk selanjutnya |"<<endl;
         cout<<"+---------------------------------+"<<endl;
    }else{
        cout<<"==============================================="<<endl;
   
    }
}

void Apotek::deQueue(){
    if(!isEmpty()){
        for(int i = Queue.awal; i < Queue.akhir; i++){
            antri[i].nama = antri[i+1].nama;
            antri[i].nim = antri[i+1].nim;
            antri[i].poli = antri[i+1].poli;
        }Queue.akhir--;
        cout << "Data berhasil dihapus" << endl;
        cout << endl;
        menu();
    }else{
        cout << "Antrian Kosong" << endl;
    }
}

void Apotek::tampil(){
    if(!isEmpty()){
        for(int i = 0; i < Queue.akhir; i++){
        cout << "Nama Antrian:  " << antri[i].nama << endl;
        cout << "No Antrian :  " << antri[i].nim << endl;
        cout << "Poli Antrian :  " << antri[i].poli << endl;
        cout << endl;
        }
    }else {
        cout << "Data Kosong";
        cout << endl << endl;
    }
    menu();
}

//-------------------------------------------------------------------------------------------------------------------------------

void Apotek::regstrsatu(){
	int t=0;
	string usr,pas,u,p;
	system("cls");
	cout<<"Masukkan nama Anda:";
	cin>>usr;
	ofstream write("admin.txt",ios::app); 
	ifstream read("admin.txt");
	while(read>>u>>p)
	{
		if(u==usr)
		{
			t=1;
			break;
		}
	}
	if(t==1)
	{
		cout<<"Nama pengguna sudah digunakan."<<endl;
	}
	else
	{
		cout<<"Masukan Nik Anda:";
		cin>>pas;
		write<<usr<<" "<<pas<<endl;
		cout<<"Pendaftaran berhasil."<<endl;
	}
  melbusatu();
	write.close();
}

void Apotek::loginsatu(){
	cout<<"Masukan NIK: ";
	cin>>pas;
	cout<<"Masukan Nama: ";
	cin>>usr;
	ifstream read("admin.txt");
	while(read>>u>>p) 
	{
		if(u==usr && p==pas)
		{
			t=1;
			break;
		}
	}
	read.close();
	if(t==1)
	{
		cout<<"Login Berhasil"<<endl;
    cout<<endl;
    cout<<"Selamat Datang Admin "<<usr<<endl<<endl;
    cout<<"======================================================="<< endl;
    cout<<"|                                                     |"<< endl;
    cout<<"|             APLIKASI RUMAH SAKIT TAVIZI             |"<<endl; 
    cout<<"|                                                     |"<< endl;
    cout<<"======================================================="<< endl;
    cout<<endl;
    cout<<"======================================================="<< endl;
    cout<<"                     MENU ADMIN"<<endl;  
    cout<<"======================================================="<< endl;
    cout<<" 1. Tambah Stok obat"<<endl;
    cout<<" 2. Tambah Stok alat"<<endl;
    cout<<" 3. Data Pasien"<<endl;
    cout<<" 4. Tambah Data Antrian Pasien"<<endl;
    cout<<" 5. Data Pengkajian"<<endl;
    cout<<" 6. Keluar"<<endl;
  cout<<"======================================================="<< endl;
		cout<<" Masukkan Pilihan Menu : ";
		cin>>bisa;  
		switch (bisa){ 
  		case 1 : 
        masuk(); 
    		break; 
    	case 2 : 
        alat();
    		break;
      case 3 : 
        ktp();
    		break;
      case 4 :
        menu();
        break;
      case 5 :
         pengkajian();
        break;
      case 6:
         cout<<"+---------------------------------+"<<endl;
         cout<<"| ketik angka 1 untuk selanjutnya |"<<endl;
         cout<<"+---------------------------------+"<<endl;
        cout<<"---------------------------------------------------"<<endl;
        break;
 	  }     
	}
	else
	{
		cout<<"Login Gagal."<<endl;
    melbusatu();
	}
  cout<<"-------------------------------"<<endl;
}

void Apotek::forgotsatu(){
	int ch;
	system("cls");
	cout<<"1.Cari akun Anda dengan nama pengguna"<<endl;
	cout<<"2.Cari akun Anda dengan kata sandi"<<endl;
	cout<<"3.Menu utama"<<endl;
	cout<<"Masukkan pilihan Anda:";
	cin>>ch;
	switch(ch)
	{
		case 1:
			{
				int t=0;
				string su,u,p;
				cout<<"Masukkan nama pengguna yang Anda ingat:";
				cin>>su;
				ifstream read("admin.txt");
				while(read>>u>>p)
				{
					if(su==u)
					{
						t=1;
						break;
					}
				}
				read.close();
				if(t==1)
				{
					cout<<"Selamat! akun ditemukan\nKata sandi adalah: "<<p<<endl;
          cout<<"-----------------------------------------------------"<<endl;
          melbusatu();
				}
				else
				{
					cout<<"Maaf, akun tidak ditemukan"<<endl;
				}
				break;
			}
		case 2:
			{
				int t=0;
				string sp,u,p;
				cout<<"Masukkan kata sandi yang Anda ingat:";
				cin>>sp;
				ifstream read("admin.txt");
				while(read>>u>>p)
				{
					if(sp==p)
					{
						t=1;
						break;
					}
				}
				read.close();
				if(t==1)
				{
					cout<<"Selamat! akun ditemukan\nNama pengguna adalah: "<<u<<endl;
				}
				else
				{
					cout<<"Selamat! akun ditemukan\nNama pengguna adalah"<<endl;
          cout<<"-------------------------------------------------------"<<endl;
          melbusatu();
				}
				break;
			}
	    case 3:
		    {
		    	cout<<endl;
			}
		default:
			{
				cout<<"Pilihan salah dipilih. tekan tombol untuk mencoba lagi!"<<endl;
				forgotsatu();
			}
			
	}
}

//------------------------------Pasien-------------------------

void Apotek::regstrdua(){
	system("cls");
	cout<<"Masukkan Nama Anda:";
	cin>>usr;
	ofstream write("pasien.txt",ios::app);
	ifstream read("pasie.txt");
	while(read>>u>>p)
	{
		if(u==usr)
		{
			t=1;
			break;
		}
	}
	if(t==1)
	{
		cout<<"Nama pengguna sudah digunakan."<<endl;
	}
	else
	{
		cout<<"Masukan NIK anda:";
		cin>>pas;
		write<<usr<<" "<<pas<<endl;
		cout<<"Pendaftaran berhasil."<<endl;
    cout<<"---------------------------------"<<endl;
    melbudua();
	}
	write.close();
}

void Apotek::logindua(){
	int t=0;
  int pas, p;
	string usr,u;
  cout<<"Masukan NIK: ";
	cin>>pas;
	cout<<"Masukan Nama : ";
	cin>>usr;
	ifstream read("pasien.txt"); 
	while(read>>u>>p) 
		if(u==usr && p==pas)
		{
			t=1;
			break;
	}
	if(t==1){
		cout<<"Login Berhasil"<<endl;
    cout<<endl;
    cout<<"Selamat Datang Pasien "<<usr<<endl<<endl;
    cout<<"======================================================="<< endl;
    cout<<"|                                                     |"<< endl;
    cout<<"|              APLIKASI RUMAH SAKIT TAVIZI            |"<< endl; 
    cout<<"|                                                     |"<< endl;
    cout<<"======================================================="<< endl;
    cout<<endl;
    cout<<"======================================================="<< endl;
    cout<<"                   MENU PASIEN"<<endl;  
    cout<<"======================================================="<< endl;
		cout<<" 1. Periksa"<<endl;
    cout<<" 2. Toko obat"<<endl;
    cout<<" 3. Konsultasi Dokter"<<endl;
    //cout<<" 4. Vaksin"<<endl;
    cout<<" 4. Keluar"<<endl;
    cout<<"======================================================="<< endl;
		cout<<" Masukkan Pilihan Menu : ";
		cin>>bisa;  
		switch (bisa){
			case 1 : 
        proses();  
    		break;  
      case 2 :
        tokbat();
      break;
      case 3 :
        konsultasi();
      break;
      case 4 :
      cout<<"-----------------------------------------------------"<<endl;
      break;
 	  }   
  }
	else{
		cout<<"Login gagal."<<endl;
    melbudua();
}
  }

void Apotek::forgotdua(){
	int ch;
	system("cls");
	cout<<"1.Cari akun Anda dengan nama pengguna"<<endl;
	cout<<"2.Cari akun Anda dengan kata sandi"<<endl;
	cout<<"3.Menu utama"<<endl;
	cout<<"Masukkan pilihan Anda:";
	cin>>ch;
	switch(ch)
	{
		case 1:
			{
				int t=0;
				string su,u,p;
				cout<<"Masukkan nama pengguna yang Anda ingat:";
				cin>>su;
				ifstream read("pasien.txt");
				while(read>>u>>p)
				{
					if(su==u)
					{
						t=1;
						break;
					}
				}
				read.close();
				if(t==1)
				{
					cout<<"Selamat! akun ditemukan\nKata sandi adalah: "<<p<<endl;
          cout<<"-------------------------------------------------------"<<endl;
          melbudua();
				}
				else
				{
					cout<<"Maaf, akun tidak ditemukan"<<endl;
				}
				break;
			}
		case 2:
			{
				int t=0;
				string sp,u,p;
				cout<<"Masukkan kata sandi yang Anda ingat:";
				cin>>sp;
				ifstream read("username.txt");
				while(read>>u>>p)
				{
					if(sp==p)
					{
						t=1;
						break;
					}
				}
				read.close();
				if(t==1)
				{
					cout<<"Selamat! akun ditemukan\nNama pengguna adalah: "<<u<<endl;
          cout<<"-----------------------------------------------------------"<<endl;
          melbudua();
				}
				else
				{
					cout<<"Selamat! akun ditemukan\nNama pengguna adalah"<<endl;
				}
				break;
			}
	    case 3:
		    {
		    	cout<<endl;
			}
		default:
			{
				cout<<"Pilihan salah dipilih. tekan tombol untuk mencoba lagi!"<<endl;
				forgotdua();
			}
			
	}
}
