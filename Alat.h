void Apotek::alat() {
		dataalat db; 

    int k;  
 	  cout<<endl;
 	  cout<<"======================================================="<< endl;
    cout<<"                      INPUT ALAT"<<endl;  
    cout<<"======================================================="<< endl;
    cout << " Jumlah Alat : " ; 
    cin >> k; 
    cout << endl;

    for (int i =1; i<=k; i++) { 
        cout <<" Masukkan Data Alat Ke - "<<i<<endl;
        cout <<"  Kode alat : "; 
        cin >> db.kode[i];      
        cout <<"  Nama alat : "; 
        cin >> db.nama[i];         
        cout <<"  Jumlah Stok alat : "; 
        cin >> db.stok[i];     
        cout << endl;
    }

    cout<<"======================================================="<< endl;
    cout<<"                      DAFTAR ALAT"<<endl;  
    cout<<"======================================================="<< endl << endl;
    for (int i=1; i<=k; i++) { 
        cout << i << " Kode Alat        : " << db.kode[i] << endl;   
        cout << "  Nama Alat        : " << db.nama[i] << endl;      
        cout << "  Jumlah Stok Alat : " << db.stok[i] << endl;   
        cout << endl;
    }
    cout<<"======================================================="<< endl;

  MyData.open("alat.txt"); 
  //dataalat db;
  //int k;
 	  /*MyData<<endl;
 	  MyData<<"======================================================="<< endl;
    MyData<<"                      INPUT ALAT"<<endl;  
    MyData<<"======================================================="<< endl;
    MyData << endl;

    for (int i =1; i<=k; i++) { 
        MyData <<" Masukkan Data Alat Ke - "<< i <<endl;
        MyData <<"  Kode alat : " << db.kode[i] << endl;      
        MyData <<"  Nama alat : " << db.nama[i] << endl;      
        MyData <<"  Jumlah Stok alat : " << db.stok[i] << endl;   
        MyData << endl;
    }*/

    MyData<<"======================================================="<< endl;
    MyData<<"                      DAFTAR ALAT"<<endl;  
    MyData<<"======================================================="<< endl << endl;
    for (int i=1; i<=k; i++) { 
        MyData << i << " Kode Alat        : " << db.kode[i] << endl;   
        MyData << "  Nama Alat        : " << db.nama[i] << endl;      
        MyData << "  Jumlah Stok Alat : " << db.stok[i] << endl;   
        MyData << endl;
    }
    MyData<<"======================================================="<< endl;
}