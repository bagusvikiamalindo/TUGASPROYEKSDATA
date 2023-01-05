void Apotek::masuk() {
databarang db; 
  int aaaa;
  do{ 
    cout<<endl;
 	  cout<<"======================================================="<< endl;
    cout<<"                     MENU INPUT OBAT"<<endl;  
    cout<<"======================================================="<< endl;
    createDataSingle(" 4. Selesai");
    tambahAwalSingle(" 3. Tampil Data");
    tambahAwalSingle(" 2. Hapus Obat");
    tambahAwalSingle(" 1. Tambah Obat");
    tambahAwalSingle(" 1. Tambah Obat");
    deleteAwalSingle();
    printDataSingle();
    /*cout<<" 1. Tambah Obat" << endl;
    cout<<" 2. Hapus Obat" << endl;
    cout<<" 3. Tampil Data" << endl;
    cout<<" 4. Selesai" << endl;*/
    cout<<"======================================================="<< endl;
    cout << " Masukkan pilihan menu : " ; 
    cin >> aaaa; 
    cout << endl;
    switch (aaaa){
      case 1:	
				tambahDepanDouble();
				break;
			case 2:	
				hapusDepanDouble();
				break;
      case 3:
				printDataDouble();
				break;
      case 4:
        return 0;
        break;
      }    	
	} while (aaaa != 8);
}
  
    /*cout << endl;

    for (int i =1; i<= a; i++) { 
        cout <<" Masukkan Data Obat Ke - "<<i<<endl;
        cout <<"  Kode Obat : "; 
        cin >> db.kode[i];      
        cout <<"  Nama Obat : "; 
        cin >> db.nama[i];         
        cout <<"  Jumlah Stok Obat : "; 
        cin >> db.stok[i];     
        cout << endl;
    }

    cout<<"======================================================="<< endl;
    cout<<"                      DAFTAR OBAT"<<endl;  
    cout<<"======================================================="<< endl << endl;
    for (int i =1; i<= a; i++) { 
        cout << i << " Kode Obat        : " << db.kode[i] << endl;   
        cout << "  Nama Obat        : " << db.nama[i] << endl;      
        cout << "  Jumlah Stok Obat : " << db.stok[i] << endl;   
        cout << endl;
    }
    cout<<"======================================================="<< endl;
}*/

