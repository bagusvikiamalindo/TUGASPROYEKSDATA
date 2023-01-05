void Apotek::filetxt(){
tulis_data.open("Invoice.txt");
  for (int i = 0; i < 1; i++) {
    tulis_data << endl <<  "======================================================="<< endl;
    tulis_data << " STRUK PEMBAYARAN RUMAH SAKIT     " << endl;
    tulis_data << "======================================================="<< endl;
    tulis_data << "Jln. Sorosutan No.6B, Umbulharjo, Kota Yogyakarta" << endl;
    tulis_data << " Tanggal Periksa   : " << pasien[i].tanggal << "-" << pasien[i].bulan << "-" << pasien[i].tahun << endl;
    tulis_data << " Nama          : " << pasien[i].nama << endl;
    tulis_data << " Alamat        : " << pasien[i].alamat << endl;
    tulis_data << " No.Hp         : " << pasien[i].no_telepon << endl;
    tulis_data << " Umur          : " << pasien[i].umur << endl;
    tulis_data << " Jenis Kelamin : " << pasien[i].jk << endl;
  }
  tulis_data << "-------------------------------------------------------"<< endl;
  tulis_data << " Jenis Sakit - " << temp_daftar << endl;
  tulis_data << " Harga                                       = " << harga << endl;
  tulis_data << " Jumlah                                      = " << jumlah << endl;
  tulis_data << " Rawat Inap                                  = " << hari << " hari" << endl;
  tulis_data << "-------------------------------------------------------"<< endl;
  tulis_data << " Harga Total                                 = " << harga_total << endl;
  tulis_data << " Bayar                                       = " << bayar << endl;
  tulis_data << " Kembali                                     = " << kembali << endl;
  tulis_data << "======================================================="<< endl; 
  tulis_data << endl << "   Terima kasih Semoga Lekas Sembuh";
  tulis_data.close(); 

  tulis_data.open("Dataktp.txt");
  for (int i = 0; i < 1; i++){
    tulis_data <<endl;
  tulis_data << "===========================================================" << endl;
	tulis_data << "                   PROVINSI YOGYAKARTA" << endl;
	tulis_data << "                     KABUPATEN XXXXXX" << endl;
  tulis_data << "===========================================================" << endl;
	tulis_data << " NIK               : " << data.nik << endl;
	tulis_data << " Nama              : " << data.nama << endl;
	tulis_data << " Tempat/Tgl Lahir  : " << data.tempat << ", " << data.tanggal << "-" << data.bulan << "-" << data.tahun << endl;
	tulis_data << " Jenis Kelamin     : " << data.jeniskelamin << "         Gol. Darah: " << data.darah << endl;
	tulis_data << " Alamat            : " << data.alamat << endl;
	tulis_data << "     RT/RW         : " << data.rt << "/" << data.rw << endl;
	tulis_data << "     Kel/Desa      : " << data.desa << endl;
	tulis_data << "     Kecamatan     : " << data.kecamatan;     
	tulis_data << endl;   
	if(pilihanagama==1){
		tulis_data << " AGAMA             : " << agama[0]; 
	}
    if(pilihanagama==2){
		tulis_data << " AGAMA             : " << agama[1]; 
	}
    if(pilihanagama==3){
		tulis_data << " AGAMA             : " << agama[2]; 
	}
    if(pilihanagama==4){
		tulis_data << " AGAMA             : " << agama[3]; 
	}
    if(pilihanagama==5){
		tulis_data << " AGAMA             : " << agama[4]; 
	}
	cout << endl;
	if(pilihanstatus==1){
		tulis_data << " STATUS            : " << status[0]; 
	} if(pilihanstatus==2){
		tulis_data << " STATUS            : " << status[1]; 
	}
	cout << endl;
	if(pilihanpekerjaan==1){
		tulis_data << " PEKERJAAN         : " << pekerjaan[0];
	}
    if(pilihanpekerjaan==2){
		tulis_data << " PEKERJAAN         : " << pekerjaan[1];
	}
    if(pilihanpekerjaan==3){
		tulis_data << " PEKERJAAN         : " << pekerjaan[2];
	}
    if(pilihanpekerjaan==4){
		tulis_data << " PEKERJAAN         : " << pekerjaan[3];
	}
    if(pilihanpekerjaan==5){
		tulis_data << " PEKERJAAN         : " << pekerjaan[4];
	}
	cout << endl;   
	if(pilihankewarganegaraan==1){
		tulis_data << " KEWARGANEGARAAN   : " << kewarganegaraan[0];	
	}
    if(pilihankewarganegaraan==2){
		tulis_data << " KEWARGANEGARAAN   : " << kewarganegaraan[1];	
	}
	cout << endl;
	tulis_data << " Berlaku Hingga    : SEUMUR HIDUP" << endl;
	tulis_data << "===========================================================" << endl;  
  }

 file.open("Datapengkajian.txt");
  for (int i = 0; i < 1; i++) {
    file<<endl<<"======================================================="<< endl;
  file<<"                      DATA PASIEN"<<endl;  
    file<<"======================================================="<< endl;
    file << " Masukkan Tanggal Periksa : " << pasien[i].tanggal << endl;
    file << " Masukkan Bulan Periksa   : " << pasien[i].bulan << endl;
    file << " Masukkan Tahun Periksa   : " << pasien[i].tahun << endl;
    file << " Masukkan Nama Pasien     : " << pasien[i].nama << endl;
    file << " Masukkan Alamat Pasien   : " << pasien[i].alamat << endl;
    file << " Masukkan No.Hp Pasien    : " << pasien[i].no_telepon << endl;
    file << " Masukkan Umur Pasien     : " << pasien[i].umur << endl;
    file << " Masukkan Jenis kelamin   : " << pasien[i].jk << endl;
    file <<"======================================================="<< endl;
  
  file << endl << "=======================================================" << endl;
  file << "                      DATA PENGKAJIAN     " << endl;
  file << "=======================================================" << endl;
  file << " 1. Tekanan darah MmHg : " << pasien[i].tekdar << endl;
  file << " 2. Berat Badan        : " << pasien[i].bb << endl;
  file << " 3. Tinggi Badan       : " << pasien[i].tinggi << endl;
  file << " 4. Nadi               : " << pasien[i].nadi << endl;
  file << " 5. Suhu Badan        : " << pasien[i].suhu << endl;
  file << "=======================================================" << endl;
  
  file<<endl;
}
  

  MyFile.open("polidokter.txt");
  	if(pl == 1){
		MyFile<<endl<<"===================== POLI ANAK ======================="<<endl;
		MyFile<<"======================================================="<< endl;
		switch (jd){
			case 1 :
				MyFile<<"1.) 07.00 - 14.00 / Dr. A "<<endl;
				break;
			case 2 :
				MyFile<<" 2.) 14.00 - 21.00 / Dr. B "<<endl;
				break;
			case 3 :
				MyFile<<" 3.) 21.00 - 07.00 / Dr. C "<<endl;
				break;
		}  
	}
    else if (pl == 2){
		MyFile<<endl<<"======================= POLI JIWA ====================="<<endl;
		switch (jd){
			case 1 :
				MyFile<<"1.) 07.00 - 14.00 / Dr. Hg"<<endl;
				break;
			case 2 :
				MyFile<<" 2.) 14.00 - 21.00 / Dr. Bk "<<endl;
				break;
			case 3 :
				MyFile<<" 3.) 21.00 - 07.00 / Dr. Ft "<<endl;
				break;
		}   
	}
    else if(pl == 3){
		MyFile<<endl<<"======================= POLI THT ====================== "<<endl;
		MyFile<<"======================================================="<< endl;
		switch (jd){
			case 1 :
				MyFile<<"1.) 07.00 - 14.00 / Dr. Tr"<<endl;
				break;
			case 2 :
				MyFile<<" 2.) 14.00 - 21.00 / Dr. Ds "<<endl;
				break;
			case 3 :
				MyFile<<" 3.) 21.00 - 07.00 / Dr. Kl "<<endl;
				break;
			}  
	} 
    else if (pl == 4) {
		MyFile<<endl<<"====================== POLI MATA ======================"<<endl;
		switch (jd){
			case 1 :
				MyFile<<"1.) 07.00 - 14.00 / Dr. Jh"<<endl;
				break;
			case 2 :
				MyFile<<" 2.) 14.00 - 21.00 / Dr. Bg"<<endl;
				break;
			case 3 :
				MyFile<<" 3.) 21.00 - 07.00 / Dr. Yi "<<endl;
				break;
			}
	} 
    else if (pl == 5){
		MyFile<<endl<<"===================== POLI SARAF ======================"<<endl;
		MyFile<<"======================================================="<< endl;
		switch (jd){
			case 1 :
				MyFile<<"1.) 07.00 - 14.00 / Dr. Ds"<<endl;
				break;
			case 2 :
				MyFile<<" 2.) 14.00 - 21.00 / Dr. Wx"<<endl;
				break;
			case 3 :
				MyFile<<" 3.) 21.00 - 07.00 / Dr. Nb"<<endl;
				break;
			}
	}
    else {
		MyFile<<endl<<"==================== POLI JANTUNG ===================== "<<endl;
		MyFile<<"======================================================="<< endl;
		switch (jd){
			case 1 :
				MyFile<<"1.) 07.00 - 14.00 / Dr. Zh"<<endl;
				break;
			case 2 :
				MyFile<<"2.) 14.00 - 21.00 / Dr. Ji "<<endl;
				break;
			case 3 :
				MyFile<<"3.) 21.00 - 07.00 / Dr. Fd "<<endl;
				break;
			}
}


/*MyData.open("alat.txt"); 
  dataalat db;
  int k;
 	  MyData<<endl;
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
    }

    MyData<<"======================================================="<< endl;
    MyData<<"                      DAFTAR ALAT"<<endl;  
    MyData<<"======================================================="<< endl << endl;
    for (int i=1; i<=k; i++) { 
        MyData << i << " Kode Alat        : " << db.kode[i] << endl;   
        MyData << "  Nama Alat        : " << db.nama[i] << endl;      
        MyData << "  Jumlah Stok Alat : " << db.stok[i] << endl;   
        MyData << endl;
    }
    MyData<<"======================================================="<< endl;*/
 strukobat.open("tokoobat.txt");
  for (int o = 0; o < 1; o++) {
    strukobat << endl <<  "==============================================================="<< endl;
    strukobat << "          STRUK PEMBAYARAN TOKO OBAT " << endl;
    strukobat << "==============================================================="<< endl;
    strukobat << "     Jln. Sorosutan No.6B, Umbulharjo, Kota Yogyakarta" << endl;
    strukobat << " Nama          : " << pasien[o].nama << endl;
    strukobat << " Alamat        : " << pasien[o].alamat << endl;
    strukobat << " No.Hp         : " << pasien[o].no_telepon << endl;
    strukobat << " Umur          : " << pasien[o].umur << endl;
  }
  strukobat << "-----------------------------------------------------"<< endl;
  strukobat << " Nama Obat - " << temp_daftarobat << endl;
  strukobat << " Harga                                       = " << hargaobat << endl;
  strukobat << " Jumlah                                      = " << jumlahobat << endl;
  strukobat << "-----------------------------------------------------"<< endl;
  strukobat << " Harga Total                                 = " << hargaobat_total+hargaper << endl;
  strukobat << " Bayar                                       = "<<endl;
  cin >> bayar;
  kembali=bayar-(hargaobat_total+hargaper) ;
  strukobat << " Kembali                                     = " << kembali << endl;
  strukobat << "==============================================================="<< endl; 
  strukobat << endl << "         Terima kasih Semoga Lekas Sembuh"<<endl<<endl;
}



