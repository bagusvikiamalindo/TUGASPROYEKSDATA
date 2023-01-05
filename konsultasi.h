void Apotek::konsultasi(){
  int pilihsp;
  int j;
  for (int k = 0; k < 1; k++){
  cout<<"========================================="<<endl;
  cout<<"             KONSULTASI DOKTER"<<endl;
  cout<<"========================================="<<endl;
  cout<<endl;
  cout<<"Hai "<<usr<<"Kamu konsultasi untuk siapa"<<endl;
  cout<<"================================================="<<endl;
  cout<<"               DAFTAR KONSULTASI"<<endl;
  cout<<"================================================="<<endl;
  cout<<" Masukkan Nama Anda : ";
  cin.ignore();
  getline(cin, pasien[k].nama);
  cout<<" Masukkan Umur  Anda : ";
  cin >> pasien[k].umur;
  cout<<" Masukkan No Handphone : ";
  cin >> pasien[k].no_telepon;
  cout<<" Masukkan Jenis kelamin Anda : ";
  cin.ignore();
  getline(cin, pasien[k].jk);
  cout<<endl;
  cout<<"============== Cari dokter Umum atau Spesialis ============"<<endl;
  cout<<" 1. Kulit  "<<endl;
  cout<<" 2. Psikolog  "<<endl;
  cout<<" 3. Jiwa  "<<endl;
  cout<<" 4. Kandungan  "<<endl;
  cout<<" 5. Anak  "<<endl;
  cout<<" 6. Penyakit Dalam  "<<endl;
  cout<<" 7. Gigi  "<<endl;
  cout<<" 8. Umum "<<endl;
  cout<<" 9. THT  "<<endl;
  cout<<" 10. Paru  "<<endl;
  cout<<" 11. Gizi  "<<endl;
  cout<<" 12. jantung  "<<endl;
  cout<<" 13. Mata  "<<endl;
  cout<<" 14. Ortopedi  "<<endl;
  cout<<" 15. Urologi  "<<endl;
  cout<<" 16. saraf  "<<endl;
  cout<<" 17. Unkologi  "<<endl;
  cout<<" 18. Bedah  "<<endl;
  cout<<" 19. Bedah Plastik  "<<endl;
  cout<<" 20. Bedah Anak  "<<endl;
  cout<<" 21. Gastroentralogi  "<<endl;
  cout<<" 22. Endokrin  "<<endl;
  cout<<" 23. Rehabilitasi Medis  "<<endl;
  cout<<" 24. Akupuntur  "<<endl;
  cout<<endl;
  cout<<"Masukan Pilihan anda "<<endl;
  cin>>pilihsp;

  if(pilihsp == 1){
		cout<<endl<<"===================== Dokter Spesialis Kulit ================="<<endl;
    cout<<endl;
		cout<<" 1.) dr.Mira Ikawati Sp.KK,FINSDV            Rp 150.000"<<endl;
    cout<<" 2.) dr.Ni Wayan sulianti siskadewi Sp.KK    Rp 25.000"<<endl;
    cout<<" 3.) dr.Monalisa Manik, M.Ked, Sp.DV         Rp 25.000"<<endl;
    cout<<" 4.) dr.Sitti Musafirah Sp.KK                Rp 250.000"<<endl;
    cout<<" 5.) dr.Dian Takarina Sp.KK                  Rp 150.000"<<endl;
    cout<<" 6.) dr.Teti Loho Sp.KK                      Rp 310.000"<<endl;
    cout<<" 7.) dr.Adelia Wulandari Sp.KK               Rp 150.000"<<endl;
    cout<<" 8.) dr.Agni anatasia Sp.KK                  Rp 150.000"<<endl;
    cout<<" 9.) dr.Febriana Sp.KK                       Rp 150.000"<<endl;
    cout<<" 10.) dr.Keni Istasaputri Sp.KK              Rp 150.000"<<endl;
		cout<<"======================================================================="<< endl;
		cout<<"Masukkan pilihan jam dan dokter (1-20) : ";
		cin>>pilihdokter;
		switch (pilihdokter){
			case 1 :
        hargadokter = 150000;
        cout<<"Profil Dokter "<<endl;
				cout<<"+---------+ "<<endl;
        cout<<"|         | "<<endl;
        cout<<"|  Foto   | "<< " dr.Mira Ikawati Sp.KK,FINSDV "<<endl;
        cout<<"|  Profil | "<< " Dokter kulit "<<endl;
        cout<<"|         | "<< hargadokter<<endl;
        cout<<"+---------+ "<<endl;
        cout<<endl;
        cout<<" Tentang Dokter "<<endl;
        cout<<"-----------------"<<endl;
        cout<<" NO. STR  : 31.2.1.602.3.16.006721"<<endl;
        cout<<" Alumni   : Universitas Indonesia "<<endl;
        cout<<" Praktiik : Klinik Utama M3 Bogor"<<endl;
        hargadokter = 150000;
        temp_jeniskonsul = jenis_konsultasi[0];
        temp_NoChat = nomor[0];
        cout<<"Dokter tersedia di Tanggal  : "<<jadwal_dokter[0]<<" Setiap Bulannya "<<endl;
        for (int j = 0; j < 1; j++){
        cout<<"---Pilih Jam Konsultasi---"<<endl;
        cout<<" 13:00-13:30 "<<endl;
        cout<<" 13:30-14:00 "<<endl;
        cout<<" 14:00-14:30 "<<endl;
        cout<<" 14:30-15:00 "<<endl;
        cout<<"Pilih jam Konsultasi : ";
        cin.ignore();
        getline(cin, pasien[j].jam);
          }
				break;
          
      case 2 :
        hargadokter = 25000;
        cout<<"Profil Dokter "<<endl;
				cout<<"+---------+ "<<endl;
        cout<<"|         | "<<endl;
        cout<<"|  Foto   | "<< " dr.Ni Wayan sulianti siskadewi Sp.KK "<<endl;
        cout<<"|  Profil | "<< " Dokter kulit "<<endl;
        cout<<"|         | "<< hargadokter<<endl;
        cout<<"+---------+ "<<endl;
        cout<<endl;
        cout<<" Tentang Dokter "<<endl;
        cout<<"-----------------"<<endl;
        cout<<" NO. STR  : 51.2.1.602.4.18.887690"<<endl;
        cout<<" Alumni   : Universitas Udayana "<<endl;
        cout<<" Praktiik : Klinik Pelita Kurma"<<endl;
        hargadokter = 25000;
        temp_jeniskonsul = jenis_konsultasi[0];
        temp_NoChat = nomor[0];
        cout<<"Dokter tersedia di Tanggal  : "<<jadwal_dokter[0]<<" Setiap Bulannya "<<endl;
        for (int j = 0; j < 1; j++){
        cout<<"---Pilih Jam Konsultasi---"<<endl;
        cout<<" 13:00-13:30 "<<endl;
        cout<<" 13:30-14:00 "<<endl;
        cout<<" 14:00-14:30 "<<endl;
        cout<<" 14:30-15:00 "<<endl;
        cout<<"Pilih jam Konsultasi : ";
        cin.ignore();
        getline(cin, pasien[j].jam);
          }
				break;
          
      case 3 :
        hargadokter = 25000;
        cout<<"Profil Dokter "<<endl;
				cout<<"+---------+ "<<endl;
        cout<<"|         | "<<endl;
        cout<<"|  Foto   | "<< " dr.Monalisa Manik, M.Ked, Sp.DV "<<endl;
        cout<<"|  Profil | "<< " Dokter kulit "<<endl;
        cout<<"|         | "<< hargadokter<<endl;
        cout<<"+---------+ "<<endl;
        cout<<endl;
        cout<<" Tentang Dokter "<<endl;
        cout<<"-----------------"<<endl;
        cout<<" NO. STR  : 41.2.1.602.5.16.88750986"<<endl;
        cout<<" Alumni   : Universitas Indonesia "<<endl;
        cout<<" Praktik  : Klinik Budidaya sinar"<<endl;
        hargadokter = 25000;
        temp_jeniskonsul = jenis_konsultasi[0];
        temp_NoChat = nomor[0];
        cout<<"Dokter tersedia di Tanggal  : "<<jadwal_dokter[0]<<" Setiap Bulannya "<<endl;
        for (int j = 0; j < 1; j++){
        cout<<"---Pilih Jam Konsultasi---"<<endl;
        cout<<" 13:00-13:30 "<<endl;
        cout<<" 13:30-14:00 "<<endl;
        cout<<" 14:00-14:30 "<<endl;
        cout<<" 14:30-15:00 "<<endl;
        cout<<"Pilih jam Konsultasi : ";
        cin.ignore();
        getline(cin, pasien[j].jam);
          }
				break;
          
      case 4 :
        hargadokter = 250000;
        cout<<"Profil Dokter "<<endl;
				cout<<"+---------+ "<<endl;
        cout<<"|         | "<<endl;
        cout<<"|  Foto   | "<< " dr.Sitti Musafirah Sp.KK     "<<endl;
        cout<<"|  Profil | "<< " Dokter kulit "<<endl;
        cout<<"|         | "<< hargadokter<<endl;
        cout<<"+---------+ "<<endl;
        cout<<endl;
        cout<<" Tentang Dokter "<<endl;
        cout<<"-----------------"<<endl;
        cout<<" NO. STR  : 91.8.1.602.2.18.0076745"<<endl;
        cout<<" Alumni   : Universitas Ahmad Dahlan "<<endl;
        cout<<" Praktik  : Klinik Rahma Bandung"<<endl;
        hargadokter = 250000;
        temp_jeniskonsul = jenis_konsultasi[0];
        temp_NoChat = nomor[0];
        cout<<"Dokter tersedia di Tanggal  : "<<jadwal_dokter[0]<<" Setiap Bulannya "<<endl;
        for (int j = 0; j < 1; j++){
        cout<<"---Pilih Jam Konsultasi---"<<endl;
        cout<<" 13:00-13:30 "<<endl;
        cout<<" 13:30-14:00 "<<endl;
        cout<<" 14:00-14:30 "<<endl;
        cout<<" 14:30-15:00 "<<endl;
        cout<<"Pilih jam Konsultasi : ";
        cin.ignore();
        getline(cin, pasien[j].jam);
          }
				break;
          

        case 5 :
        hargadokter = 150000;
        cout<<"Profil Dokter "<<endl;
				cout<<"+---------+ "<<endl;
        cout<<"|         | "<<endl;
        cout<<"|  Foto   | "<< " dr.Dian Takarina Sp.KK  "<<endl;
        cout<<"|  Profil | "<< " Dokter kulit "<<endl;
        cout<<"|         | "<< hargadokter<<endl;
        cout<<"+---------+ "<<endl;
        cout<<endl;
        cout<<" Tentang Dokter "<<endl;
        cout<<"-----------------"<<endl;
        cout<<" NO. STR  : 31.2.1.602.3.19.776590"<<endl;
        cout<<" Alumni   : Universitas Gadjah Mada "<<endl;
        cout<<" Praktiik : Klinink Utama Bandung"<<endl;
        hargadokter = 150000;
        temp_jeniskonsul = jenis_konsultasi[0];
        temp_NoChat = nomor[0];
        cout<<"Dokter tersedia di Tanggal  : "<<jadwal_dokter[0]<<" Setiap Bulannya "<<endl;
        for (int j = 0; j < 1; j++){
        cout<<"---Pilih Jam Konsultasi---"<<endl;
        cout<<" 13:00-13:30 "<<endl;
        cout<<" 13:30-14:00 "<<endl;
        cout<<" 14:00-14:30 "<<endl;
        cout<<" 14:30-15:00 "<<endl;
        cout<<"Pilih jam Konsultasi : ";
        cin.ignore();
        getline(cin, pasien[j].jam);
          }
				break;
          
      case 6 :
        hargadokter = 310000;
        cout<<"Profil Dokter "<<endl;
				cout<<"+---------+ "<<endl;
        cout<<"|         | "<<endl;
        cout<<"|  Foto   | "<< " dr.Teti Loho Sp.KK              "<<endl;
        cout<<"|  Profil | "<< " Dokter kulit "<<endl;
        cout<<"|         | "<< hargadokter<<endl;
        cout<<"+---------+ "<<endl;
        cout<<endl;
        cout<<" Tentang Dokter "<<endl;
        cout<<"-----------------"<<endl;
        cout<<" NO. STR  : 21.2.1.602.3.14.7659086"<<endl;
        cout<<" Alumni   : Universitas Atma jaya "<<endl;
        cout<<" Praktiik : Klinink Utama Jogja"<<endl;
        hargadokter = 150000;
        temp_jeniskonsul = jenis_konsultasi[0];
        temp_NoChat = nomor[0];
        cout<<"Dokter tersedia di Tanggal  : "<<jadwal_dokter[0]<<" Setiap Bulannya "<<endl;
        for (int j = 0; j < 1; j++){
        cout<<"---Pilih Jam Konsultasi---"<<endl;
        cout<<" 13:00-13:30 "<<endl;
        cout<<" 13:30-14:00 "<<endl;
        cout<<" 14:00-14:30 "<<endl;
        cout<<" 14:30-15:00 "<<endl;
        cout<<"Pilih jam Konsultasi : ";
        cin.ignore();
        getline(cin, pasien[j].jam);
          }
				break;
          
      case 7 :
        hargadokter = 150000;
        cout<<"Profil Dokter "<<endl;
				cout<<"+---------+ "<<endl;
        cout<<"|         | "<<endl;
        cout<<"|  Foto   | "<< " dr.Adelia Wulandari Sp.KK    "<<endl;
        cout<<"|  Profil | "<< " Dokter kulit "<<endl;
        cout<<"|         | "<< hargadokter<<endl;
        cout<<"+---------+ "<<endl;
        cout<<endl;
        cout<<" Tentang Dokter "<<endl;
        cout<<"-----------------"<<endl;
        cout<<" NO. STR  : 31.2.1.602.3.16.0006789"<<endl;
        cout<<" Alumni   : Universitas Brawijaya "<<endl;
        cout<<" Praktiik : Klinink Sinar sehat Malang"<<endl;
        hargadokter = 150000;
        temp_jeniskonsul = jenis_konsultasi[0];
        temp_NoChat = nomor[0];
        cout<<"Dokter tersedia di Tanggal  : "<<jadwal_dokter[0]<<" Setiap Bulannya "<<endl;
        for (int j = 0; j < 1; j++){
        cout<<"---Pilih Jam Konsultasi---"<<endl;
        cout<<" 13:00-13:30 "<<endl;
        cout<<" 13:30-14:00 "<<endl;
        cout<<" 14:00-14:30 "<<endl;
        cout<<" 14:30-15:00 "<<endl;
        cout<<"Pilih jam Konsultasi : ";
        cin.ignore();
        getline(cin, pasien[j].jam);
          }
				break;
          
      case 8 :
        hargadokter = 150000;
        cout<<"Profil Dokter "<<endl;
				cout<<"+---------+ "<<endl;
        cout<<"|         | "<<endl;
        cout<<"|  Foto   | "<< " dr.Agni anatasia Sp.KK    "<<endl;
        cout<<"|  Profil | "<< " Dokter kulit "<<endl;
        cout<<"|         | "<< hargadokter<<endl;
        cout<<"+---------+ "<<endl;
        cout<<endl;
        cout<<" Tentang Dokter "<<endl;
        cout<<"-----------------"<<endl;
        cout<<" NO. STR  : 31.2.1.602.3.16.00997654"<<endl;
        cout<<" Alumni   : Universitas Indonesia "<<endl;
        cout<<" Praktiik : Klinink Utama Rahma Malang"<<endl;
        hargadokter = 150000;
        temp_jeniskonsul = jenis_konsultasi[0];
        temp_NoChat = nomor[0];
        cout<<"Dokter tersedia di Tanggal  : "<<jadwal_dokter[0]<<" Setiap Bulannya "<<endl;
        for (int j = 0; j < 1; j++){
        cout<<"---Pilih Jam Konsultasi---"<<endl;
        cout<<" 13:00-13:30 "<<endl;
        cout<<" 13:30-14:00 "<<endl;
        cout<<" 14:00-14:30 "<<endl;
        cout<<" 14:30-15:00 "<<endl;
        cout<<"Pilih jam Konsultasi : ";
        cin.ignore();
        getline(cin, pasien[j].jam);
          }
				break;
          
      case 9 :
        hargadokter = 150000;
        cout<<"Profil Dokter "<<endl;
				cout<<"+---------+ "<<endl;
        cout<<"|         | "<<endl;
        cout<<"|  Foto   | "<< " dr.Febriana Sp.KK "<<endl;
        cout<<"|  Profil | "<< " Dokter kulit "<<endl;
        cout<<"|         | "<< hargadokter<<endl;
        cout<<"+---------+ "<<endl;
        cout<<endl;
        cout<<" Tentang Dokter "<<endl;
        cout<<"-----------------"<<endl;
        cout<<" NO. STR  : 21.3.1.602.3.16.9909887"<<endl;
        cout<<" Alumni   : Universitas Indonesia "<<endl;
        cout<<" Praktiik : Klinink Utama Madura"<<endl;
        hargadokter = 150000;
        temp_jeniskonsul = jenis_konsultasi[0];
        temp_NoChat = nomor[0];
        cout<<"Dokter tersedia di Tanggal  : "<<jadwal_dokter[0]<<" Setiap Bulannya "<<endl;
        for (int j = 0; j < 1; j++){
        cout<<"---Pilih Jam Konsultasi---"<<endl;
        cout<<" 13:00-13:30 "<<endl;
        cout<<" 13:30-14:00 "<<endl;
        cout<<" 14:00-14:30 "<<endl;
        cout<<" 14:30-15:00 "<<endl;
        cout<<"Pilih jam Konsultasi : ";
        cin.ignore();
        getline(cin, pasien[j].jam);
          }
				break;
          
      case 10 :
        hargadokter = 150000;
        cout<<"Profil Dokter "<<endl;
				cout<<"+---------+ "<<endl;
        cout<<"|         | "<<endl;
        cout<<"|  Foto   | "<< " dr.Keni Istasaputri Sp.KK "<<endl;
        cout<<"|  Profil | "<< " Dokter kulit "<<endl;
        cout<<"|         | "<< hargadokter<<endl;
        cout<<"+---------+ "<<endl;
        cout<<endl;
        cout<<" Tentang Dokter "<<endl;
        cout<<"-----------------"<<endl;
        cout<<" NO. STR  : 31.2.1.602.3.16.006721"<<endl;
        cout<<" Alumni   : Universitas Indonesia "<<endl;
        cout<<" Praktiik : Klinink Utama M3 Bogor"<<endl;
        hargadokter = 150000;
        temp_jeniskonsul = jenis_konsultasi[0];
        temp_NoChat = nomor[0];
        cout<<"Dokter tersedia di Tanggal  : "<<jadwal_dokter[0]<<" Setiap Bulannya "<<endl;
        for (int j = 0; j < 1; j++){
        cout<<"---Pilih Jam Konsultasi---"<<endl;
        cout<<" 13:00-13:30 "<<endl;
        cout<<" 13:30-14:00 "<<endl;
        cout<<" 14:00-14:30 "<<endl;
        cout<<" 14:30-15:00 "<<endl;
        cout<<"Pilih jam Konsultasi : ";
        cin.ignore();
        getline(cin, pasien[j].jam);
          }
				break;
      
      }
      
    }
    else if (pilihsp == 2){
		cout<<endl<<"===================== Dokter Spesialis Psikolog ================="<<endl;
    cout<<endl;
		cout<<" 1.) Aenea Marella, S.Psi., M.Psi., Psikolog            Rp 375.000"<<endl;
    cout<<" 2.) Ana Muflihatun, S.Psi, M.Psi,                      Rp 600.000"<<endl;
    cout<<" 3.) dra. Anita Mayanti,                                Rp 650.000"<<endl;
    cout<<" 4.) Cecilia Sagita, S.Psi., M.Psi., Psikolog           Rp 375.000"<<endl;
    cout<<" 5.) Farah Oktamurdiantri, M.Psi.                       Rp 600.000"<<endl;
    cout<<" 6.) Farisha Silviana Yasmine, S.Psi., M.Psi.,          Rp 310.000"<<endl;
    cout<<" 7.) Febriani Sabatini Sirojudin Abbas, S.Psi           Rp 150.000"<<endl;
    cout<<" 8.) Iffah Fitri Nur Khasanah, S.Psi., M.Psi.           Rp 650.000"<<endl;
    cout<<" 9.) Irsa Mirzana, S.Psi., M.Psi.                       Rp 650.000"<<endl;
    cout<<" 10.) Kurnia Juniaty Paulina Lumbanbatu, S.Psi., M.Psi. Rp 600.000"<<endl;
		cout<<"======================================================================="<< endl;
		cout<<"Masukkan pilihan jam dan dokter (1-20) : ";
		cin>>pilihdokter;
		switch (pilihdokter){
			case 1 :
        hargadokter = 375000;
        cout<<"Profil Dokter "<<endl;
				cout<<"+---------+ "<<endl;
        cout<<"|         | "<<endl;
        cout<<"|  Foto   | "<< " Aenea Marella, S.Psi., M.Psi., Psikolog "<<endl;
        cout<<"|  Profil | "<< " Dokter "<<jenis_konsultasi[1]<<endl;
        cout<<"|         | "<< hargadokter<<endl;
        cout<<"+---------+ "<<endl;
        cout<<endl;
        cout<<" Tentang Dokter "<<endl;
        cout<<"-----------------"<<endl;
        cout<<" NO. STR  : 31.2.1.602.3.16.006721"<<endl;
        cout<<" Alumni   : Universitas Indonesia "<<endl;
        cout<<" Praktiik : Klinink Utama M3 Bogor"<<endl;
        hargadokter = 375000;
        temp_jeniskonsul = jenis_konsultasi[1];
        temp_NoChat = nomor[1];
        cout<<"Dokter tersedia di Tanggal  : "<<jadwal_dokter[1]<<" Setiap Bulannya "<<endl;
        for (int j = 0; j < 1; j++){
        cout<<"---Pilih Jam Konsultasi---"<<endl;
        cout<<" 13:00-13:30 "<<endl;
        cout<<" 13:30-14:00 "<<endl;
        cout<<" 14:00-14:30 "<<endl;
        cout<<" 14:30-15:00 "<<endl;
        cout<<"Pilih jam Konsultasi : ";
        cin.ignore();
        getline(cin, pasien[j].jam);
          }
				break;
          
      case 2 :
        hargadokter = 600000;
        cout<<"Profil Dokter "<<endl;
				cout<<"+---------+ "<<endl;
        cout<<"|         | "<<endl;
        cout<<"|  Foto   | "<< " Ana Muflihatun, S.Psi, M.Psi,  "<<endl;
        cout<<"|  Profil | "<< " Dokter  "<<jenis_konsultasi[1]<<endl;
        cout<<"|         | "<< hargadokter<<endl;
        cout<<"+---------+ "<<endl;
        cout<<endl;
        cout<<" Tentang Dokter "<<endl;
        cout<<"-----------------"<<endl;
        cout<<" NO. STR  : 21.2.1.602.4.11.9976463"<<endl;
        cout<<" Alumni   : Universitas Gadjah Mada "<<endl;
        cout<<" Praktiik : Klinink Sudarsuna"<<endl;
        hargadokter = 600000;
        temp_jeniskonsul = jenis_konsultasi[1];
        temp_NoChat = nomor[1];
        cout<<"Dokter tersedia di Tanggal  : "<<jadwal_dokter[1]<<" Setiap Bulannya "<<endl;
        for (int j = 0; j < 1; j++){
        cout<<"---Pilih Jam Konsultasi---"<<endl;
        cout<<" 13:00-13:30 "<<endl;
        cout<<" 13:30-14:00 "<<endl;
        cout<<" 14:00-14:30 "<<endl;
        cout<<" 14:30-15:00 "<<endl;
        cout<<"Pilih jam Konsultasi : ";
        cin.ignore();
        getline(cin, pasien[j].jam);
          }
				break;
          
      case 3 :
        hargadokter = 650000;
        cout<<"Profil Dokter "<<endl;
				cout<<"+---------+ "<<endl;
        cout<<"|         | "<<endl;
        cout<<"|  Foto   | "<< " dra. Anita Mayanti, "<<endl;
        cout<<"|  Profil | "<< " Dokter "<<jenis_konsultasi[1]<<endl;
        cout<<"|         | "<< hargadokter<<endl;
        cout<<"+---------+ "<<endl;
        cout<<endl;
        cout<<" Tentang Dokter "<<endl;
        cout<<"-----------------"<<endl;
        cout<<" NO. STR  : 41.2.1.602.5.14.87349837"<<endl;
        cout<<" Alumni   : Universitas Indonesia "<<endl;
        cout<<" Praktiik : Klinik Huna Bunda"<<endl;
        hargadokter = 650000;
        temp_jeniskonsul = jenis_konsultasi[1];
        temp_NoChat = nomor[1];
        cout<<"Dokter tersedia di Tanggal  : "<<jadwal_dokter[1]<<" Setiap Bulannya "<<endl;
        for (int j = 0; j < 1; j++){
        cout<<"---Pilih Jam Konsultasi---"<<endl;
        cout<<" 13:00-13:30 "<<endl;
        cout<<" 13:30-14:00 "<<endl;
        cout<<" 14:00-14:30 "<<endl;
        cout<<" 14:30-15:00 "<<endl;
        cout<<"Pilih jam Konsultasi : ";
        cin.ignore();
        getline(cin, pasien[j].jam);
          }
				break;
          
      case 4 :
        hargadokter = 375000;
        cout<<"Profil Dokter "<<endl;
				cout<<"+---------+ "<<endl;
        cout<<"|         | "<<endl;
        cout<<"|  Foto   | "<< " Cecilia Sagita, S.Psi., M.Psi.    "<<endl;
        cout<<"|  Profil | "<< " Dokter  "<<jenis_konsultasi[1]<<endl;
        cout<<"|         | "<< hargadokter<<endl;
        cout<<"+---------+ "<<endl;
        cout<<endl;
        cout<<" Tentang Dokter "<<endl;
        cout<<"-----------------"<<endl;
        cout<<" NO. STR  : 91.8.1.602.2.18.0032732"<<endl;
        cout<<" Alumni   : Universitas Bekasi "<<endl;
        cout<<" Praktiik : Klinink Rumi Pangkalpinang"<<endl;
        hargadokter = 375000;
        temp_jeniskonsul = jenis_konsultasi[1];
        temp_NoChat = nomor[1];
        cout<<"Dokter tersedia di Tanggal  : "<<jadwal_dokter[1]<<" Setiap Bulannya "<<endl;
        for (int j = 0; j < 1; j++){
        cout<<"---Pilih Jam Konsultasi---"<<endl;
        cout<<" 13:00-13:30 "<<endl;
        cout<<" 13:30-14:00 "<<endl;
        cout<<" 14:00-14:30 "<<endl;
        cout<<" 14:30-15:00 "<<endl;
        cout<<"Pilih jam Konsultasi : ";
        cin.ignore();
        getline(cin, pasien[j].jam);
          }
				break;

        case 5 :
        hargadokter = 600000;
        cout<<"Profil Dokter "<<endl;
				cout<<"+---------+ "<<endl;
        cout<<"|         | "<<endl;
        cout<<"|  Foto   | "<< " Farah Oktamurdiantri, M.Psi  "<<endl;
        cout<<"|  Profil | "<< " Dokter  "<<jenis_konsultasi[1]<<endl;
        cout<<"|         | "<< hargadokter<<endl;
        cout<<"+---------+ "<<endl;
        cout<<endl;
        cout<<" Tentang Dokter "<<endl;
        cout<<"-----------------"<<endl;
        cout<<" NO. STR  : 11.2.1.602.3.19.262362878"<<endl;
        cout<<" Alumni   : Universitas Pelita Harapan "<<endl;
        cout<<" Praktiik : Klinink Utama Bandung"<<endl;
        hargadokter = 600000;
        temp_jeniskonsul = jenis_konsultasi[1];
        temp_NoChat = nomor[1];
        cout<<"Dokter tersedia di Tanggal  : "<<jadwal_dokter[4]<<" Setiap Bulannya "<<endl;
        for (int j = 0; j < 1; j++){
        cout<<"---Pilih Jam Konsultasi---"<<endl;
        cout<<" 13:00-13:30 "<<endl;
        cout<<" 13:30-14:00 "<<endl;
        cout<<" 14:00-14:30 "<<endl;
        cout<<" 14:30-15:00 "<<endl;
        cout<<"Pilih jam Konsultasi : ";
        cin.ignore();
        getline(cin, pasien[j].jam);
          }
				break;
      
      case 6 :
        hargadokter = 310000;
        cout<<"Profil Dokter "<<endl;
				cout<<"+---------+ "<<endl;
        cout<<"|         | "<<endl;
        cout<<"|  Foto   | "<< " Farisha Silviana Yasmine, S.Psi., M.Psi.,             "<<endl;
        cout<<"|  Profil | "<< " Dokter  "<<jenis_konsultasi[1]<<endl;
        cout<<"|         | "<< hargadokter<<endl;
        cout<<"+---------+ "<<endl;
        cout<<endl;
        cout<<" Tentang Dokter "<<endl;
        cout<<"-----------------"<<endl;
        cout<<" NO. STR  : 21.2.1.602.3.14.72327838"<<endl;
        cout<<" Alumni   : Universitas Lampung "<<endl;
        cout<<" Praktiik : Klinink Utama Jogja"<<endl;
        hargadokter = 310000;
        temp_jeniskonsul = jenis_konsultasi[1];
        temp_NoChat = nomor[1];
        cout<<"Dokter tersedia di Tanggal  : "<<jadwal_dokter[1]<<" Setiap Bulannya "<<endl;
        for (int j = 0; j < 1; j++){
        cout<<"---Pilih Jam Konsultasi---"<<endl;
        cout<<" 13:00-13:30 "<<endl;
        cout<<" 13:30-14:00 "<<endl;
        cout<<" 14:00-14:30 "<<endl;
        cout<<" 14:30-15:00 "<<endl;
        cout<<"Pilih jam Konsultasi : ";
        cin.ignore();
        getline(cin, pasien[j].jam);
          }
				break;
      
      case 7 :
        hargadokter = 150000;
        cout<<"Profil Dokter "<<endl;
				cout<<"+---------+ "<<endl;
        cout<<"|         | "<<endl;
        cout<<"|  Foto   | "<< " Febriani Sabatini Sirojudin Abbas, S.Psi    "<<endl;
        cout<<"|  Profil | "<< " Dokter  "<<jenis_konsultasi[1]<<endl;
        cout<<"|         | "<< hargadokter<<endl;
        cout<<"+---------+ "<<endl;
        cout<<endl;
        cout<<" Tentang Dokter "<<endl;
        cout<<"-----------------"<<endl;
        cout<<" NO. STR  : 31.2.1.602.3.16.0006789"<<endl;
        cout<<" Alumni   : Universitas Brawijaya "<<endl;
        cout<<" Praktiik : Klinink Sinar sehat Malang"<<endl;
        hargadokter = 150000;
        temp_jeniskonsul = jenis_konsultasi[1];
        temp_NoChat = nomor[1];
        cout<<"Dokter tersedia di Tanggal  : "<<jadwal_dokter[1]<<" Setiap Bulannya "<<endl;
        for (int j = 0; j < 1; j++){
        cout<<"---Pilih Jam Konsultasi---"<<endl;
        cout<<" 13:00-13:30 "<<endl;
        cout<<" 13:30-14:00 "<<endl;
        cout<<" 14:00-14:30 "<<endl;
        cout<<" 14:30-15:00 "<<endl;
        cout<<"Pilih jam Konsultasi : ";
        cin.ignore();
        getline(cin, pasien[j].jam);
          }
				break;
      case 8 :
        hargadokter = 650000;
        cout<<"Profil Dokter "<<endl;
				cout<<"+---------+ "<<endl;
        cout<<"|         | "<<endl;
        cout<<"|  Foto   | "<< " Iffah Fitri Nur Khasanah, S.Psi., M.Psi.     "<<endl;
        cout<<"|  Profil | "<< " Dokter  "<<jenis_konsultasi[1]<<endl;
        cout<<"|         | "<< hargadokter<<endl;
        cout<<"+---------+ "<<endl;
        cout<<endl;
        cout<<" Tentang Dokter "<<endl;
        cout<<"-----------------"<<endl;
        cout<<" NO. STR  : 31.2.1.602.3.16.9308348"<<endl;
        cout<<" Alumni   : Universitas Indonesia "<<endl;
        cout<<" Praktiik : Klinink Utama Rahma Malang"<<endl;
        hargadokter = 650000;
        temp_jeniskonsul = jenis_konsultasi[1];
        temp_NoChat = nomor[1];
        cout<<"Dokter tersedia di Tanggal  : "<<jadwal_dokter[1]<<" Setiap Bulannya "<<endl;
        for (int j = 0; j < 1; j++){
        cout<<"---Pilih Jam Konsultasi---"<<endl;
        cout<<" 13:00-13:30 "<<endl;
        cout<<" 13:30-14:00 "<<endl;
        cout<<" 14:00-14:30 "<<endl;
        cout<<" 14:30-15:00 "<<endl;
        cout<<"Pilih jam Konsultasi : ";
        cin.ignore();
        getline(cin, pasien[j].jam);
          }
				break;
  
      case 9 :
        hargadokter = 650000;
        cout<<"Profil Dokter "<<endl;
				cout<<"+---------+ "<<endl;
        cout<<"|         | "<<endl;
        cout<<"|  Foto   | "<< " Irsa Mirzana, S.Psi., M.Psi.        "<<endl;
        cout<<"|  Profil | "<< " Dokter  "<<jenis_konsultasi[1]<<endl;
        cout<<"|         | "<< hargadokter<<endl;
        cout<<"+---------+ "<<endl;
        cout<<endl;
        cout<<" Tentang Dokter "<<endl;
        cout<<"-----------------"<<endl;
        cout<<" NO. STR  : 21.3.1.602.3.16.9909887"<<endl;
        cout<<" Alumni   : Universitas Indonesia "<<endl;
        cout<<" Praktiik : Klinink Utama Madura"<<endl;
        hargadokter = 650000;
        temp_jeniskonsul = jenis_konsultasi[1];
        temp_NoChat = nomor[1];
        cout<<"Dokter tersedia di Tanggal  : "<<jadwal_dokter[1]<<" Setiap Bulannya "<<endl;
        for (int j = 0; j < 1; j++){
        cout<<"---Pilih Jam Konsultasi---"<<endl;
        cout<<" 13:00-13:30 "<<endl;
        cout<<" 13:30-14:00 "<<endl;
        cout<<" 14:00-14:30 "<<endl;
        cout<<" 14:30-15:00 "<<endl;
        cout<<"Pilih jam Konsultasi : ";
        cin.ignore();
        getline(cin, pasien[j].jam);
          }
				break;
          
      case 10 :
        hargadokter = 600000;
        cout<<"Profil Dokter "<<endl;
				cout<<"+---------+ "<<endl;
        cout<<"|         | "<<endl;
        cout<<"|  Foto   | "<< " dr.Keni Istasaputri Sp.KK "<<endl;
        cout<<"|  Profil | "<< " Dokter  "<<jenis_konsultasi[1]<<endl;
        cout<<"|         | "<< hargadokter<<endl;
        cout<<"+---------+ "<<endl;
        cout<<endl;
        cout<<" Tentang Dokter "<<endl;
        cout<<"-----------------"<<endl;
        cout<<" NO. STR  : 31.2.1.602.3.16.006721"<<endl;
        cout<<" Alumni   : Universitas Indonesia "<<endl;
        cout<<" Praktiik : Klinink Utama M3 Bogor"<<endl;
        hargadokter = 600000;
        temp_jeniskonsul = jenis_konsultasi[1];
        temp_NoChat = nomor[1];
        cout<<"Dokter tersedia di Tanggal  : "<<jadwal_dokter[1]<<" Setiap Bulannya "<<endl;
        for (int j = 0; j < 1; j++){
        cout<<"---Pilih Jam Konsultasi---"<<endl;
        cout<<" 13:00-13:30 "<<endl;
        cout<<" 13:30-14:00 "<<endl;
        cout<<" 14:00-14:30 "<<endl;
        cout<<" 14:30-15:00 "<<endl;
        cout<<"Pilih jam Konsultasi : ";
        cin.ignore();
        getline(cin, pasien[j].jam);
          }
  				break;
      }
    }
 }
   for (int k= 0; k < 1; k++) {
    cout << endl <<  "==============================================================="<< endl;
    cout << "          STRUK PEMBAYARAN KONSULTASI " << endl;
    cout << "==============================================================="<< endl;
    cout << "     Jln. Sorosutan No.6B, Umbulharjo, Kota Yogyakarta" << endl;
    cout << " Nama          : " << pasien[k].nama << endl;
    cout << " Umur         : " << pasien[k].umur << endl;
    cout << " No.Hp         : " << pasien[k].no_telepon << endl;
    cout << " Jenis kelamin          : " << pasien[k].jk << endl;
  }
  cout << "-----------------------------------------------------"<< endl;
  cout << " Jenis Konsultasi  - " << temp_jeniskonsul << endl;
  cout << " Harga                                       = " << hargadokter << endl;
  cout << " Jam Konsultasi                                      = " << pasien[j].jam << endl;
  cout << "-----------------------------------------------------"<< endl;
  cout << " Harga Total                                 = " << hargadokter << endl;
  cout << " Bayar                                       = ";
  cin >> bayar;
  kembali=bayar-(hargadokter) ;
  cout << " Kembali                                     = " << kembali << endl;
  cout << "==============================================================="<< endl; 
  cout << endl << "         Terima kasih "<<endl<<endl;

  cout<<" Silahkan Konsultasi sesuai Pesanan"<<endl;
  cout<<"+-----------------------------------------+"<<endl;
  cout<<"| No Chat : " << temp_NoChat<<"           |"<< endl;
  cout<<"+-----------------------------------------+"<<endl;


  cout<<"+---------------------------------+"<<endl;
  cout<<"| ketik angka 1 untuk selanjutnya |"<<endl;
  cout<<"+---------------------------------+"<<endl;
  }
