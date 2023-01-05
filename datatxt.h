void Kamar::datatxt(){
  cout<<"-";
/*data_txt.open("invoiceresto.txt");
  for (int i = 0; i < 1; i++) {
    data_txt<<endl;
	data_txt<<"                 INVOICE RESTO DI RS"<<endl;
	data_txt<<"----------------------------------------------------------------------"<<endl;
	data_txt<<"No	Nama Menu    	  	Harga		Jumlah        Sub Total "<<endl;
	data_txt<<"----------------------------------------------------------------------"<<endl;
	for (int a=0;a<i;a++){
		  data_txt<<a+1<<"	"<<menu[a]<<"	"<<harg[a]<<"		"<<jumlahan[a]<<"		"<<sub_total[a]<<endl;
	data_txt<<"----------------------------------------------------------------------"<<endl;
	data_txt<<"Total Bayar = Rp."<<total_bayar<<endl;
  }
}*/
 data_txt.open("daftar.txt");
 for (int i = 0; i < 1; i++) { 
<<endl<<"======================================================="<< endl;
  data_txt<<"|                     DAFTAR STAFF                    |" << endl;
  data_txt<<"======================================================="<< endl;
  data_txt << " 1. Direktur " << endl;
  data_txt << " 2. Manager " << endl;
  data_txt << " 3. Kepala Seksi " << endl;
  data_txt << " 4. Kepala Instalasi " << endl;
  data_txt << " 5. Kepala KSM " << endl;
  data_txt << " 6. Dokter" << endl;
  data_txt << " 7. Perawat " << endl;
  data_txt << " 8. Administrasi " << endl;
  data_txt << " 9. Cleaning Service " << endl;
  data_txt <<"======================================================="<< endl;
  data_txt << " Masukkan Pilihan (1-6) : ";
  cin >> pl;
  	if(pl == 1){
    data_txt<<"=================================================================="<< endl;
		data_txt<<"|                            DIREKTUR                            |"<<endl;
    data_txt<<"=================================================================="<< endl;
	data_txt<<" 1. Direktur : drg. Endah Purwaningtias "<<endl;
  data_txt<<" 2. Wakil Direktur Keuangan dan Umum :  dr. Nailah, M.Si, MPH "<<endl;
    data_txt<<" 3. Wakil Direktur Pelayanan Medis : dr. Anang Kuncoro Adi, M.Kes"<< endl;
    data_txt<<" 4. Wakil Direktur Penunjang Medis : Dr. Imam Subadi, dr."<<endl;
   data_txt<<" 5. Wakil Direktur Pendidikan dan Pelatihan : Prof. Dr. Muhammad"<< endl;
		data_txt<<"=================================================================="<< endl;
		}
    if(pl == 2){
    data_txt<<"==================================================================="<< endl;
		data_txt<<"|                             MANAGER                              |"<<endl;
    data_txt<<"===================================================================="<< endl;
		data_txt<<" 1. Manajer Pelayanan Medis:	Muhammad Ardian Cahya Laksana, dr."<<endl;
    data_txt<<" 2. Manajer Keperawatan:	Prof. Dr. Kusnanto, S.Kp., M.Kes. "<<endl;
    data_txt<<" 3. Manajer Penunjang Medis : Cahyo Wibisono, dr., Sp.PD."<< endl;
		data_txt<<" 4. Manajer Farmasi :	Dr. Yulistiani, Dra., M.Si., Apt."<< endl;
    data_txt<<" 5. Manajer Keuangan	: Dr. Sri Ningsih, S.E., M.Si., Ak."<<endl;
    data_txt<<" 6. Manajer Hukum dan Organisasi Tata Laksana : Dr. Kurniawan"<<endl;
    data_txt<<" 7. Manajer Sumber Daya Manusia :	Pradana Zaky Romadhon, dr."<<endl;
    data_txt<<" 8. Manajer Pendidikan	: Dr. Afif Nurul Hidayati, dr., Sp.KK(K) "<<endl;
    data_txt<<" 9. Manajer Penelitian	: Wiwin Is Effendi, dr., Sp.P., Ph.D. "<<endl;
    data_txt<<" 10. Manajer Pelatihan	: Dr. Soedarsono, dr., Sp.P(K). "<<endl;
    data_txt<<" 11. Manajer Inovasi dan Pengembangan : Tedy Apriawan, dr."<<endl;
    data_txt<<"======================================================================"<< endl;
		}
  if(pl == 3){
    data_txt<<"======================================================================"<< endl;
		data_txt<<"|                           KEPALA SEKSI                             |"<<endl;
    data_txt<<"======================================================================"<< endl;
		data_txt<<"1. Kepala Seksi Pelayanan Medis : Yudhi Adrianto, dr., Sp.S., FINR. "<<endl;
    data_txt<<"2. Kepala Seksi Monitoring dan Evaluasi Pelayanan Medis : Faesal, dr."<<endl;
    data_txt<<"3. Kepala Seksi Pelayanan Keperawatan : Sartika Wulandari, S.Kep., Ns., M.Kep."<< endl;
		data_txt<<"4. Kepala Seksi Penunjang Medis : Nur Sulastri, dr., Sp.KFR."<< endl;
    data_txt<<"5. Kepala Seksi Monitoring dan Evaluasi Penunjang Medis : Muhammad Syamsul Hidayat, S.Kep. "<<endl;
    data_txt<<"6. Kepala Seksi Pengelolaan Farmasi : Nur Fauzi Hamidi, S.Farm., Apt. "<<endl;
    data_txt<<"7. Kepala Seksi Farmasi Klinik : Nugroho Hari Santoso, S.farm., M.Farm.Klin., Apt. "<<endl;
    data_txt<<"8. Kepala Seksi Pendapatan : Devina Kristanti Nova, A.Md. "<<endl;
    data_txt<<"9. Kepala Seksi Perbendaharaan	: Pravita Dwi Anggraeni, S.A. "<<endl;
    data_txt<<"10. Kepala Seksi Akuntansi :	Savita Putri Rizky Auliya, A.Md. "<<endl;
    data_txt<<"11. Kepala Seksi Layanan Asuransi : Prima Ramadhany, dr., M.Kes. "<<endl;
    data_txt<<"12. Kepala Seksi Aset dan Umum :	Aditya Nugrahadi, S.T., M.M. "<<endl;
    data_txt<<"13. Kepala Seksi Perencanaan dan Pengembangan SDM :Adityarani Putranti, drg., M.Kes. "<<endl;
    data_txt<<"14. Kepala Seksi Administrasi dan Sisem Informasi SDM : I Sanny Prakosa Wardhana, S.Psi  "<<endl;
    data_txt<<"15. Kepala Seksi Pendidikan : Erika Marfiani, dr., Sp.PD. "<<endl;
    data_txt<<"16. Kepala Seksi Pelatihan Eksternal : Mohamad Nurdin Zuhri, dr., Sp.M. "<<endl;
    data_txt<<"17. Kepala Seksi Pengembangan : Yuni Hisbiyah, dr., Sp.A., M.MRS. "<<endl;
    data_txt<<"18. Kepala Seksi Hilirisasi Riset : Dr. Indri Lakhsmi Putri, dr., Sp.BP-RE(KKF). "<<endl;
     data_txt<<"======================================================================"<< endl;
		}
  if(pl == 4){
    data_txt<<"======================================================================"<< endl;
data_txt<<"|                          KEPALA INSTALASI                          |"<<endl;
    data_txt<<"======================================================================"<< endl;
		data_txt<<"1. Kepala Instalasi Gawat Darurat : Prihatma Kriswidyatomo, dr., Sp.An. "<<endl;
    data_txt<<"2. Kepala Instalasi Rawat Inap	: Satriyo Dwi Suryantoro, dr., Sp.PD. "<<endl;
    data_txt<<"3. Kepala Instalasi Rawat Jalan :	Hendro Susilo, dr., Sp.JP."<< endl;
		data_txt<<"4. Kepala Instalasi Vaskuler Terpadu :	M. Yusuf, dr., Sp.JP., Ph.D., FIHA., FESC."<< endl;
    data_txt<<"5. Kepala Instalasi Kedokteran Fisik dan Rehabilitasi : Yudith Dian Prawitri, dr., Sp.KFR. "<<endl;
    data_txt<<"6. Kepala Instalasi Maternal – Perinatal	: Khanisyah Erza Gumilar, dr., Sp.OG. "<<endl;
    data_txt<<"7. Kepala Instalasi Onkologi Terpadu :	Prof. Dr. Ami Ashariati Prayogo, dr., Sp.PD-KHOM. "<<endl;
    data_txt<<"8. Kepala Instalasi Rawat Intensif	: Lucky Adriyanto, dr., Sp.An.KAP. "<<endl;
    data_txt<<"9. Kepala Instalasi Bedah Sentral : Asdi Wihandono, dr., Sp.B(K)Onk. "<<endl;
    data_txt<<"10. Kepala Instalasi Hemodialisa	: Prof. Dr. M. Thaha, "<<endl;
    data_txt<<"11. Kepala Instalasi Anestesi	: Herdiani Sulistyo Putri, dr., Sp.An., FIPM. "<<endl;
    data_txt<<"12. Kepala Instalasi Radiologi	: Erika Soebakti, dr., Sp.Rad. "<<endl;
    data_txt<<"13. Kepala Instalasi Farmasi	: Khusnul Fitri Hamidah, S.Farm., Apt. "<<endl;
    data_txt<<"14. Kepala Instalasi Laboratorium Sentral : M. Rabiul Fuadi, dr., Sp.PK. "<<endl;
    data_txt<<"15. Kepala Instalasi Rekam Medis :	Rosita Prananingtias, A.Md.PK. "<<endl;
    data_txt<<"16. Kepala Instalasi Teknologi Informasi	: Hendro Suprayogi, S.Kom. "<<endl;
    data_txt<<"17. Kepala Instalasi Pemeliharaan Sarana dan Sanitasi : Bagas Angger Prakoso, A.Md. "<<endl;
    data_txt<<"18. Kepala Instalasi Gizi : Niko Rahardi, A.Md.Gz. "<<endl;
    data_txt<<"19. Kepala Instalasi CSSD Laundry : Toetik Aryani, Dra., M.Si., Apt. "<<endl;
    data_txt<<"20. Kepala Instalasi MCU dan Vaksinasi Internasional : Mutiara Rizky Haryati, dr., Sp.PD. "<<endl;
    data_txt<<"21. Kepala Instalasi Laboratorium Riset : Yessy Puspitasari, dr., Sp.PK. "<<endl;
    data_txt<<"22. Kepala Instalasi Promosi Kesehatan dan Humas :	Brihastami Sawitri, dr., Sp.KJ. "<<endl;
    data_txt<<"23. Kepala Instalasi Pemasaran dan Kerjasama	: Niken Sasadhara Sasmita, dr. "<<endl;
    data_txt<<"24. Kepala Instalasi Pengobatan Tradisional : Ario Imandiri, dr., Sp.Ak. "<<endl;
data_txt<<"================================================================="<< endl;
		}
  if(pl == 5){
    data_txt<<"======================================================================"<< endl;
    data_txt<<"|                              KEPALA KSM                            |"<<endl;
    data_txt<<"======================================================================"<< endl;
		data_txt<<"1. Kepala KSM Bedah Umum	: Ricky Wibowo, dr., Sp.B. "<<endl;
    data_txt<<"2. Kepala KSM Ilmu Penyakit Dalam : Dr. Muhammad Noor Diansyah, dr., Sp.PD. FINASIM. "<<endl;
    data_txt<<"3. Kepala KSM Kesehatan Anak	: Robby Nur Hariansyah, dr., Sp.A."<< endl;
		data_txt<<"4. Kepala KSM Anastesiologi dan Reanimasi : Yoppy Prim Avidar, dr., Sp.An."<< endl;
    data_txt<<"5. Kepala KSM Kardiologi dan Kedokteran Vaskuler : Prof. Dr. Budi Susetyo-Pikir"<<endl;
    data_txt<<"6. Kepala KSM Forensik dan Medikolegal : Nily Sulistyorini, dr., Sp.FM. "<<endl;
    data_txt<<"7. Kepala KSM Obstetri dan Genikologi : Pungky Mulawardhana, dr., Sp.OG(K).Onk. "<<endl;
    data_txt<<"8. Kepala KSM Kedokteran Jiwa : Andini Dyah Sitawati, dr., Sp.KJ. "<<endl;
    data_txt<<"9. Kepala KSM Kesehatan Kulit : Medhi Denisa Alinda, dr., Sp.KK. "<<endl;
    data_txt<<"10. Kepala KSM Kesehatan Mata : Maitri Anindita Alinda, dr., Sp.M."<<endl;
    data_txt<<"11. Kepala KSM Orthopedi : Yunus, dr., Sp.OT(K). "<<endl;
    data_txt<<"12. Kepala KSM Bedah Syaraf : Prof. Dr. Abdul Hafid Bajamal, dr., Sp.BS(K). "<<endl;
    data_txt<<"13. Kepala KSM Bedah Plastik : Rachmaniar Pramanasari, dr., Sp.BP-RE. "<<endl;
    data_txt<<"14. Kepala KSM Bedah Urologi :	Lukman Hakim, dr., MARS., Sp.U(K)., Ph.D. "<<endl;
    data_txt<<"15. Kepala Instalasi Rekam Medis	: Rosita Prananingtias, A.Md.PK. "<<endl;
    data_txt<<"16. Kepala KSM Bedah Anak : Barmadisatrio, dr., Sp.B(K)BA."<<endl;
    data_txt<<"======================================================================"<< endl;
		}
   if(pl == 6){
    data_txt<<"======================================================================"<< endl;
    data_txt<<"|                             DOKTER                                 |"<<endl;
    data_txt<<"======================================================================"<< endl;
		data_txt<<"1. Bedah Umum	: Ricky Wibowo, dr., Sp.B. "<<endl;
    data_txt<<"2. Ilmu Penyakit Dalam : Dr. Muhammad Noor Diansyah, dr., Sp.PD. FINASIM. "<<endl;
    data_txt<<"3. Kesehatan Anak	: Robby Nur Hariansyah, dr., Sp.A."<< endl;
		data_txt<<"4. Anastesiologi dan Reanimasi : Yoppy Prim Avidar, dr., Sp.An."<< endl;
    data_txt<<"5. Kardiologi dan Kedokteran Vaskuler : Prof. Dr. Budi Susetyo-Pikir"<<endl;
    data_txt<<"6. Forensik dan Medikolegal : Nily Sulistyorini, dr., Sp.FM. "<<endl;
    data_txt<<"7. Obstetri dan Genikologi : Pungky Mulawardhana, dr., Sp.OG(K).Onk. "<<endl;
    data_txt<<"8. Kedokteran Jiwa : Andini Dyah Sitawati, dr., Sp.KJ. "<<endl;
    data_txt<<"9. Kesehatan Kulit : Medhi Denisa Alinda, dr., Sp.KK. "<<endl;
    data_txt<<"10. Kesehatan Mata : Maitri Anindita Alinda, dr., Sp.M."<<endl;
    data_txt<<"11. Orthopedi : Yunus, dr., Sp.OT(K). "<<endl;
    data_txt<<"12. Bedah Syaraf : Prof. Dr. Abdul Hafid Bajamal, dr., Sp.BS(K). "<<endl;
    data_txt<<"13. Bedah Plastik : Rachmaniar Pramanasari, dr., Sp.BP-RE. "<<endl;
    data_txt<<"14. Urologi :	Lukman Hakim, dr., MARS., Sp.U(K)., Ph.D. "<<endl;
    data_txt<<"15. Rekam Medis	: Rosita Prananingtias, A.Md.PK. "<<endl;
    data_txt<<"16. Bedah Anak : Barmadisatrio, dr., Sp.B(K)BA."<<endl;
    data_txt<<"======================================================================="<< endl;
		}
  if(pl == 7){
    data_txt<<"======================================================================"<< endl;
    data_txt<<"|                             PERAWAT                                 |"<<endl;
    data_txt<<"======================================================================"<< endl;
		data_txt<<"1. Perawat Bedah Umum	: Ricky Wibowo, dr., Sp.B. "<<endl;
    data_txt<<"2. Perawat Ilmu Penyakit Dalam : Dr. Muhammad Noor Diansyah, dr."<<endl;
    data_txt<<"3. Perawat Kesehatan Anak	: Robby Nur Hariansyah, dr., Sp.A."<< endl;
		data_txt<<"4. Perawat Anastesiologi dan Reanimasi : Yoppy Prim Avidar, dr."<< endl;
    data_txt<<"5. Perawat Kardiologi dan Kedokteran Vaskuler : Prof. Dr.Budi Susetyo"<<endl;
    data_txt<<"6. Perawat Forensik dan Medikolegal : Nily Sulistyorini, dr., Sp.FM. "<<endl;
    data_txt<<"7. Perawat Obstetri dan Genikologi : Pungky Mulawardhana, dr."<<endl;
    data_txt<<"8. Perawat Kedokteran Jiwa : Andini Dyah Sitawati, dr., Sp.KJ. "<<endl;
    data_txt<<"9. Perawat Kesehatan Kulit : Medhi Denisa Alinda, dr., Sp.KK. "<<endl;
    data_txt<<"10. Perawat Kesehatan Mata : Maitri Anindita Alinda, dr., Sp.M."<<endl;
    data_txt<<"11. Perawat Orthopedi : Yunus, dr., Sp.OT(K). "<<endl;
    data_txt<<"12. Perawat Bedah Syaraf : Prof. Dr. Abdul Hafid Bajamal, dr."<<endl;
    data_txt<<"13. Perawat Bedah Plastik : Rachmaniar Pramanasari, dr., Sp.BP-RE. "<<endl;
    data_txt<<"14. Perawat Bedah Urologi :	Lukman Hakim, dr., MARS., Sp.U(K)."<<endl;
    data_txt<<"15. Perawat Rekam Medis	: Rosita Prananingtias, A.Md.PK. "<<endl;
    data_txt<<"16. Perawat Bedah Anak : Barmadisatrio, dr., Sp.B(K)BA."<<endl;
    data_txt<<"======================================================================"<< endl;
		}
  if(pl == 8){
    data_txt<<"======================================================================"<< endl;
   data_txt<<"|                             ADMINISTRASI                           |"<<endl;
    data_txt<<"======================================================================"<< endl;
		data_txt<<"1. 06.00 - 12.00	: Ricky Saputro, Julia Sari, Bagus Wibowo "<<endl;
    data_txt<<"2. 12.00 - 18.00 : Noor Diansyah, Danang Putro, Hakim Agung"<<endl;
    data_txt<<"3. 18.00 - 00.00	: Irfan Yono, Sutono, Sumini"<< endl;
		data_txt<<"4. 00.00 - 06.00 : Radiasyah, Budi Hartono, Setianto"<< endl;
    data_txt<<"======================================================================"<< endl;
		}
  if(pl == 9){
    data_txt<<"======================================================================"<< endl;
    data_txt<<"|                            CLEANING SERVICE                        |"<<endl;
    data_txt<<"======================================================================"<< endl;
		data_txt<<"1. 06.00 - 12.00	: Saputro, Sari, Wibowo "<<endl;
    data_txt<<"2. 12.00 - 18.00 : Noor , Putro, Hakim"<<endl;
    data_txt<<"3. 18.00 - 00.00	: Yono, Sutini, Sunarti"<< endl;
		data_txt<<"4. 00.00 - 06.00 : Radi, Hartono, Setiantoro"<< endl;
    data_txt<<"======================================================================"<< endl;
		}
	}
  
  tulis_dat.open("datakamar.txt");
  tulis_dat<<"==================================="<<endl;
  tulis_dat<<"|                                  |"<<endl;
  tulis_dat<<"|          PILIHAN KAMAR           |"<<endl;
  tulis_dat<<"|                                  |"<<endl;
  tulis_dat<<"==================================="<<endl;
  tulis_dat<<"1. Junior Suite Room -> 4 juta "<<endl;
  tulis_dat<<"2. Suite Room -> 3,5 juta "<<endl;
  tulis_dat<<"3. VVIP Room -> 5 juta "<<endl;
  tulis_dat<<"4. VIP Room -> 3 juta "<<endl;
  tulis_dat<<"5. Class 1 -> 2 juta "<<endl;
  tulis_dat<<"6. Class 2 -> 1,5 juta "<<endl;
  tulis_dat<<"7. Class 3 -> 1 juta "<<endl;
  tulis_dat<<"===================================="<<endl;
  
  if(pilih==1){
    tulis_dat<<"================================="<<endl;
    tulis_dat<<"|                               |"<<endl;
    tulis_dat<<"|       Junior Suite Room       |"<<endl;
    tulis_dat<<"|                               |"<<endl;
    tulis_dat<<"================================="<<endl;
    tulis_dat<<"========Daftar Fasilitas========="<<endl;
    tulis_dat<<"Ruangan Pasien : "<<endl;
    tulis_dat<<"1 unit tempat tidur elektrik"<<endl;
    tulis_dat<<"1 buah meja samping tempat tidur"<<endl;
    tulis_dat<<"1 buah kursi tamu"<<endl;
    tulis_dat<<"1 set lemari pakaian"<<endl;
    tulis_dat<<"1 unit TV LCD"<<endl;
    tulis_dat<<"1 unit sofa bed"<<endl;
    tulis_dat<<"1 ruangan toilet"<<endl;
    tulis_dat<<"1 pesawat telepon"<<endl;
    tulis_dat<<"1 set meja makan keluarga"<<endl;
    tulis_dat<<"1 unit lemari es kecil"<<endl;
    tulis_dat<<"1 unit water dispenser"<<endl;
    tulis_dat<<"1 unit penghangat makanan"<<endl;
    tulis_dat<<"1 set sofa dan meja"<<endl;
    tulis_dat<<"1 unit wastafel"<<endl;
    tulis_dat<<"1 buah pesawat telepon"<<endl;
    tulis_dat<<"1 unit kitchen set"<<endl;
  }
    
  else if(pilih==2){
    tulis_dat<<"================================="<<endl;
    tulis_dat<<"|                               |"<<endl;
    tulis_dat<<"|           Suite Room          |"<<endl;
    tulis_dat<<"|                               |"<<endl;
    tulis_dat<<"================================="<<endl;
    tulis_dat<<"===========Daftar Fasilitas======"<<endl;
    tulis_dat<<"Ruangan Pasien : "<<endl;
    tulis_dat<<"1 unit tempat tidur elektrik"<<endl;
    tulis_dat<<"1 buah meja samping tempat tidur"<<endl;
    tulis_dat<<"2 buah kursi tamu"<<endl;
    tulis_dat<<"1 set lemari pakaian"<<endl;
    tulis_dat<<"1 unit TV LCD"<<endl;
    tulis_dat<<"1 unit sofa bed"<<endl;
    tulis_dat<<"1 ruangan toilet"<<endl;
    tulis_dat<<"1 pesawat telepon"<<endl<<endl;
    tulis_dat<<"Ruangan Keluarga : "<<endl;
    tulis_dat<<"1 set meja makan keluarga"<<endl;
    tulis_dat<<"1 unit TV LCD"<<endl;
    tulis_dat<<"1 unit lemari es"<<endl;
    tulis_dat<<"1 unit water dispenser"<<endl;
    tulis_dat<<"1 unit electric kettle"<<endl;
    tulis_dat<<"1 unit microwave"<<endl;
    tulis_dat<<"1 set sofa dan meja"<<endl;
    tulis_dat<<"1 ruangan toilet"<<endl;
    tulis_dat<<"1 unit wastafel"<<endl;
    tulis_dat<<"1 buah pesawat telepon"<<endl;
    tulis_dat<<"1 unit kitchen set"<<endl;
  }
    
  else if(pilih==3){
    tulis_dat<<"================================="<<endl;
    tulis_dat<<"|                               |"<<endl;
    tulis_dat<<"|          VVIP Room            |"<<endl;
    tulis_dat<<"|                               |"<<endl;
    tulis_dat<<"================================="<<endl;
    tulis_dat<<"========Daftar Fasilitas========="<<endl;
    tulis_dat<<"Ruangan Pasien : "<<endl;
    tulis_dat<<"1 unit tempat tidur elektrik"<<endl;
    tulis_dat<<"1 buah meja samping tempat tidur"<<endl;
    tulis_dat<<"1 set lemari pakaian"<<endl;
    tulis_dat<<"1 unit TV LCD"<<endl;
    tulis_dat<<"1 unit sofa bed"<<endl;
    tulis_dat<<"1 set meja makan keluarga"<<endl;
    tulis_dat<<"1 unit lemari es kecil"<<endl;
    tulis_dat<<"1 unit water dispenser"<<endl;
    tulis_dat<<"1 unit penghangat makanan"<<endl;
    tulis_dat<<"1 unit wastafel"<<endl;
    tulis_dat<<"1 buah pesawat telepon"<<endl;
    tulis_dat<<"1 unit kitchen set"<<endl;
  }
    
  else if(pilih==4){
    tulis_dat<<"================================="<<endl;
    tulis_dat<<"|                               |"<<endl;
    tulis_dat<<"|           VIP Room            |"<<endl;
    tulis_dat<<"|                               |"<<endl;
    tulis_dat<<"================================="<<endl;
    tulis_dat<<"========Daftar Fasilitas========="<<endl;
    tulis_dat<<"Ruangan Pasien : "<<endl;
    tulis_dat<<"1 unit tempat tidur elektrik"<<endl;
    tulis_dat<<"1 buah meja samping tempat tidur"<<endl;
    tulis_dat<<"1 buah kursi tamu"<<endl;
    tulis_dat<<"1 set lemari pakaian"<<endl;
    tulis_dat<<"1 unit TV LCD"<<endl;
    tulis_dat<<"1 unit sofa bed"<<endl;
    tulis_dat<<"1 unit lemari es kecil"<<endl;
    tulis_dat<<"1 buah meja sudut"<<endl;
    tulis_dat<<"1 ruangan toilet"<<endl;
    tulis_dat<<"1 unit wastafel"<<endl;
  }
    
  else if(pilih==5){
    tulis_dat<<"================================="<<endl;
    tulis_dat<<"|                               |"<<endl;
    tulis_dat<<"|           Class 1             |"<<endl;
    tulis_dat<<"|                               |"<<endl;
    tulis_dat<<"================================="<<endl;
    tulis_dat<<"===========Daftar Fasilitas======"<<endl;
    tulis_dat<<"---------------------------------"<<endl;
    tulis_dat<<"Fasilitas Bersama : "<<endl;
    tulis_dat<<"---------------------------------"<<endl;
    tulis_dat<<"1 ruangan toilet"<<endl;
    tulis_dat<<"1 unit wastafel"<<endl;
    tulis_dat<<"1 unit TV LCD"<<endl;
    tulis_dat<<"---------------------------------"<<endl;
    tulis_dat<<"Masing-masing Ruangan Pasien : "<<endl;
    tulis_dat<<"---------------------------------"<<endl;
    tulis_dat<<"1 unit tempat tidur elektrik"<<endl;
    tulis_dat<<"1 buah meja samping tempat tidur"<<endl;
    tulis_dat<<"1 buah kursi tamu"<<endl;
    tulis_dat<<"1 set lemari pakaian"<<endl;
    tulis_dat<<"1 pesawat telepon"<<endl;
  }

  else if(pilih==6){
    tulis_dat<<"================================="<<endl;
    tulis_dat<<"|                               |"<<endl;
    tulis_dat<<"|           Class 2             |"<<endl;
    tulis_dat<<"|                               |"<<endl;
    tulis_dat<<"================================="<<endl;
    tulis_dat<<"===========Daftar Fasilitas======"<<endl;
    tulis_dat<<"---------------------------------"<<endl;
    tulis_dat<<"Fasilitas Bersama : "<<endl;
    tulis_dat<<"---------------------------------"<<endl;
    tulis_dat<<"1 ruangan toilet"<<endl;
    tulis_dat<<"1 unit wastafel"<<endl;
    tulis_dat<<"2 unit TV LCD"<<endl;
    tulis_dat<<"---------------------------------"<<endl;
    tulis_dat<<"Masing-Masing Ruang Pasien : "<<endl;
    tulis_dat<<"---------------------------------"<<endl;
    tulis_dat<<"1 unit tempat tidur elektrik"<<endl;
    tulis_dat<<"1 buah meja samping tempat tidur"<<endl;
    tulis_dat<<"1 buah kursi tamu"<<endl;
    tulis_dat<<"1 set lemari pakaian"<<endl;
    tulis_dat<<"1 pesawat telepon"<<endl;
  }
    
  else if(pilih==7){
    tulis_dat<<"================================="<<endl;
    tulis_dat<<"|                               |"<<endl;
    tulis_dat<<"|           Class 3             |"<<endl;
    tulis_dat<<"|                               |"<<endl;
    tulis_dat<<"================================="<<endl;
    tulis_dat<<"===========Daftar Fasilitas======"<<endl;
    tulis_dat<<"---------------------------------"<<endl;
    tulis_dat<<"Fasilitas Bersama : "<<endl;
    tulis_dat<<"---------------------------------"<<endl;
    tulis_dat<<"1 ruangan toilet"<<endl;
    tulis_dat<<"1 unit wastafel"<<endl;
    tulis_dat<<"---------------------------------"<<endl;
    tulis_dat<<"Masing-Masing Ruang Pasien : "<<endl;
    tulis_dat<<"---------------------------------"<<endl;
    tulis_dat<<"1 unit tempat tidur elektrik"<<endl;
    tulis_dat<<"1 buah meja samping tempat tidur"<<endl;
    tulis_dat<<"1 buah kursi tamu"<<endl;
  }
}
}
    