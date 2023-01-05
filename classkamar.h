//#include <iostream>
using namespace std;

class Kamar {
 public:
  void fas();
  void trans();
  void makanan();
  void menuu();
  void staff();
  void ambulance();
  void appoint();
  void sport();
  void datatxt();
  void herbal();

private:
  int pilih, harga, jumlah, fasilitas, l, kembali, bayar, hargaa, total;
  int hargaper, temp_kamar, temp_daftar, harga_total, kmr, pl, amb, obt;
  int jml, hsl, alt, olg, jd;
  string name, tanggal;
  int pilihan[100],jumlahan[100],sub_total[100],harg[100];
	string menu[100];
	int total_bayar;
	int i=0;
	bool selesai=false;
  ofstream data_txt;
  ofstream txtresto;
  ofstream tulis_dat;
};

struct data {
  string karyawan, id, namakaryawan, namastaf;
  string jabatankaryawan, jabatanstaf, alamatkaryawan, alamatstaf;
  string jeniskamar, nokamar, blnin;
  string nik, jk, namapengunjung, alamat, jeniskam, customer;
  int hp, tglin, thnin, tglout, lamamenginap, harga, ttlbyr, bayar, kembali;
};

void Kamar::menuu(){
  cout<<"===================================="<<endl;
  cout<<"|                                  |"<<endl;
  cout<<"|          MENU ADDITION           |"<<endl;
  cout<<"|                                  |"<<endl;
  cout<<"===================================="<<endl;
  cout<<"------------------------------------"<<endl;
  cout<<" 1. Pilih Kamar "<<endl;
  cout<<" 2. Menu Makanan "<<endl;
  cout<<" 3. Informasi staff "<<endl;
  cout<<" 4. Ambulance "<<endl;
  cout<<" 5. Appointment "<<endl;
  cout<<" 6. Obat Herbal "<<endl;
  cout<<" 7. Keluar "<<endl;
  cout<<"------------------------------------"<<endl;
  cout<<"Masukkan pilihan (1-7) : ";
  cin>>kmr;
		switch (kmr){ 
  		case 1 : 
        fas(); 
    		break; 
    	case 2 : 
        makanan();
    		break;
      case 3 : 
        staff();
    		break;
      case 4 :
        ambulance();
        break;
      case 5 : 
        appoint();
        break;
      case 6 : 
        herbal();
        break;
      case 7 :
        cout<<"Tes covid "<<endl;
        cout<<"=====================================";
        cout<<endl<<endl;
        break;
 	  }     
}

void Kamar::fas(){
  cout<<"==================================="<<endl;
  cout<<"|                                  |"<<endl;
  cout<<"|          PILIHAN KAMAR           |"<<endl;
  cout<<"|                                  |"<<endl;
  cout<<"==================================="<<endl;
  cout<<"1. Junior Suite Room -> 4 juta "<<endl;
  cout<<"2. Suite Room -> 3,5 juta "<<endl;
  cout<<"3. VVIP Room -> 5 juta "<<endl;
  cout<<"4. VIP Room -> 3 juta "<<endl;
  cout<<"5. Class 1 -> 2 juta "<<endl;
  cout<<"6. Class 2 -> 1,5 juta "<<endl;
  cout<<"7. Class 3 -> 1 juta "<<endl;
  cout<<"===================================="<<endl;
  cout<<"Masukkan pilihan kamar (1-7) : "<<endl;
  cin>>pilih;
  
  if(pilih==1){
    cout<<"================================="<<endl;
    cout<<"|                               |"<<endl;
    cout<<"|       Junior Suite Room       |"<<endl;
    cout<<"|                               |"<<endl;
    cout<<"================================="<<endl;
    cout<<"========Daftar Fasilitas========="<<endl;
    cout<<"Ruangan Pasien : "<<endl;
    cout<<"1 unit tempat tidur elektrik"<<endl;
    cout<<"1 buah meja samping tempat tidur"<<endl;
    cout<<"1 buah kursi tamu"<<endl;
    cout<<"1 set lemari pakaian"<<endl;
    cout<<"1 unit TV LCD"<<endl;
    cout<<"1 unit sofa bed"<<endl;
    cout<<"1 ruangan toilet"<<endl;
    cout<<"1 pesawat telepon"<<endl;
    cout<<"1 set meja makan keluarga"<<endl;
    cout<<"1 unit lemari es kecil"<<endl;
    cout<<"1 unit water dispenser"<<endl;
    cout<<"1 unit penghangat makanan"<<endl;
    cout<<"1 set sofa dan meja"<<endl;
    cout<<"1 unit wastafel"<<endl;
    cout<<"1 buah pesawat telepon"<<endl;
    cout<<"1 unit kitchen set"<<endl;
  }
    
  else if(pilih==2){
    cout<<"================================="<<endl;
    cout<<"|                               |"<<endl;
    cout<<"|           Suite Room          |"<<endl;
    cout<<"|                               |"<<endl;
    cout<<"================================="<<endl;
    cout<<"===========Daftar Fasilitas======"<<endl;
    cout<<"Ruangan Pasien : "<<endl;
    cout<<"1 unit tempat tidur elektrik"<<endl;
    cout<<"1 buah meja samping tempat tidur"<<endl;
    cout<<"2 buah kursi tamu"<<endl;
    cout<<"1 set lemari pakaian"<<endl;
    cout<<"1 unit TV LCD"<<endl;
    cout<<"1 unit sofa bed"<<endl;
    cout<<"1 ruangan toilet"<<endl;
    cout<<"1 pesawat telepon"<<endl<<endl;
    cout<<"Ruangan Keluarga : "<<endl;
    cout<<"1 set meja makan keluarga"<<endl;
    cout<<"1 unit TV LCD"<<endl;
    cout<<"1 unit lemari es"<<endl;
    cout<<"1 unit water dispenser"<<endl;
    cout<<"1 unit electric kettle"<<endl;
    cout<<"1 unit microwave"<<endl;
    cout<<"1 set sofa dan meja"<<endl;
    cout<<"1 ruangan toilet"<<endl;
    cout<<"1 unit wastafel"<<endl;
    cout<<"1 buah pesawat telepon"<<endl;
    cout<<"1 unit kitchen set"<<endl;
  }
    
  else if(pilih==3){
    cout<<"================================="<<endl;
    cout<<"|                               |"<<endl;
    cout<<"|          VVIP Room            |"<<endl;
    cout<<"|                               |"<<endl;
    cout<<"================================="<<endl;
    cout<<"========Daftar Fasilitas========="<<endl;
    cout<<"Ruangan Pasien : "<<endl;
    cout<<"1 unit tempat tidur elektrik"<<endl;
    cout<<"1 buah meja samping tempat tidur"<<endl;
    cout<<"1 set lemari pakaian"<<endl;
    cout<<"1 unit TV LCD"<<endl;
    cout<<"1 unit sofa bed"<<endl;
    cout<<"1 set meja makan keluarga"<<endl;
    cout<<"1 unit lemari es kecil"<<endl;
    cout<<"1 unit water dispenser"<<endl;
    cout<<"1 unit penghangat makanan"<<endl;
    cout<<"1 unit wastafel"<<endl;
    cout<<"1 buah pesawat telepon"<<endl;
    cout<<"1 unit kitchen set"<<endl;
  }
    
  else if(pilih==4){
    cout<<"================================="<<endl;
    cout<<"|                               |"<<endl;
    cout<<"|           VIP Room            |"<<endl;
    cout<<"|                               |"<<endl;
    cout<<"================================="<<endl;
    cout<<"========Daftar Fasilitas========="<<endl;
    cout<<"Ruangan Pasien : "<<endl;
    cout<<"1 unit tempat tidur elektrik"<<endl;
    cout<<"1 buah meja samping tempat tidur"<<endl;
    cout<<"1 buah kursi tamu"<<endl;
    cout<<"1 set lemari pakaian"<<endl;
    cout<<"1 unit TV LCD"<<endl;
    cout<<"1 unit sofa bed"<<endl;
    cout<<"1 unit lemari es kecil"<<endl;
    cout<<"1 buah meja sudut"<<endl;
    cout<<"1 ruangan toilet"<<endl;
    cout<<"1 unit wastafel"<<endl;
  }
    
  else if(pilih==5){
    cout<<"================================="<<endl;
    cout<<"|                               |"<<endl;
    cout<<"|           Class 1             |"<<endl;
    cout<<"|                               |"<<endl;
    cout<<"================================="<<endl;
    cout<<"===========Daftar Fasilitas======"<<endl;
    cout<<"---------------------------------"<<endl;
    cout<<"Fasilitas Bersama : "<<endl;
    cout<<"---------------------------------"<<endl;
    cout<<"1 ruangan toilet"<<endl;
    cout<<"1 unit wastafel"<<endl;
    cout<<"1 unit TV LCD"<<endl;
    cout<<"---------------------------------"<<endl;
    cout<<"Masing-masing Ruangan Pasien : "<<endl;
    cout<<"---------------------------------"<<endl;
    cout<<"1 unit tempat tidur elektrik"<<endl;
    cout<<"1 buah meja samping tempat tidur"<<endl;
    cout<<"1 buah kursi tamu"<<endl;
    cout<<"1 set lemari pakaian"<<endl;
    cout<<"1 pesawat telepon"<<endl;
  }

  else if(pilih==6){
    cout<<"================================="<<endl;
    cout<<"|                               |"<<endl;
    cout<<"|           Class 2             |"<<endl;
    cout<<"|                               |"<<endl;
    cout<<"================================="<<endl;
    cout<<"===========Daftar Fasilitas======"<<endl;
    cout<<"---------------------------------"<<endl;
    cout<<"Fasilitas Bersama : "<<endl;
    cout<<"---------------------------------"<<endl;
    cout<<"1 ruangan toilet"<<endl;
    cout<<"1 unit wastafel"<<endl;
    cout<<"2 unit TV LCD"<<endl;
    cout<<"---------------------------------"<<endl;
    cout<<"Masing-Masing Ruang Pasien : "<<endl;
    cout<<"---------------------------------"<<endl;
    cout<<"1 unit tempat tidur elektrik"<<endl;
    cout<<"1 buah meja samping tempat tidur"<<endl;
    cout<<"1 buah kursi tamu"<<endl;
    cout<<"1 set lemari pakaian"<<endl;
    cout<<"1 pesawat telepon"<<endl;
  }
    
  else if(pilih==7){
    cout<<"================================="<<endl;
    cout<<"|                               |"<<endl;
    cout<<"|           Class 3             |"<<endl;
    cout<<"|                               |"<<endl;
    cout<<"================================="<<endl;
    cout<<"===========Daftar Fasilitas======"<<endl;
    cout<<"---------------------------------"<<endl;
    cout<<"Fasilitas Bersama : "<<endl;
    cout<<"---------------------------------"<<endl;
    cout<<"1 ruangan toilet"<<endl;
    cout<<"1 unit wastafel"<<endl;
    cout<<"---------------------------------"<<endl;
    cout<<"Masing-Masing Ruang Pasien : "<<endl;
    cout<<"---------------------------------"<<endl;
    cout<<"1 unit tempat tidur elektrik"<<endl;
    cout<<"1 buah meja samping tempat tidur"<<endl;
    cout<<"1 buah kursi tamu"<<endl;
  }
  trans();
}

void Kamar::trans(){
  cout<<"Masukkan nama pasien : "<<endl;
  cin>>name;
  for (int i = 0; i < 1; i++) {
    cout<<"Pasien ke-"<<i<<endl;
    cout << endl <<  "==============================================================="<< endl;
    cout << "            STRUK PEMBAYARAN RUMAH SAKIT TAVIZI " << endl;
    cout << "==============================================================="<< endl;
    cout << "     Jln. Sorosutan No.6B, Umbulharjo, Kota Yogyakarta" << endl;
  //   cout << " Tanggal Periksa   : " << pasien[i].tanggal << "-" << pasien[i].bulan << "-" << pasien[i].tahun << endl;
  //   cout << " Nama          : " << pasien[i].nama << endl;
  //   cout << " Alamat        : " << pasien[i].alamat << endl;
  //   cout << " No.Hp         : " << pasien[i].no_telepon << endl;
  //   cout << " Umur          : " << pasien[i].umur << endl;
  //   cout << " Jenis Kelamin : " << pasien[i].jk << endl;
  // }
   
    cout << "-----------------------------------------------------"<< endl;
    cout << " Jenis Kamar     : " << temp_daftar << endl;
    cout << " Harga           : " << hargaa << endl;
    cout << " Jumlah          : " << jumlah << endl;
    cout << "-----------------------------------------------------"<< endl;
    cout << " Harga Total                                 = " << harga_total+hargaper << endl;
    cout << " Bayar                                       = ";
    cin >> bayar;
    kembali=bayar-(harga_total+hargaper);
    cout << " Kembali                                     = " << kembali << endl;
    cout << "==============================================================="<< endl; 
    cout << endl << "         Terima kasih Semoga Lekas Sembuh"<<endl<<endl;
  }
}

void Kamar::makanan() {
  int i =0;
  
  cout<<"======================================="<<endl;
  cout<<"|          DAFTAR MENU MAKANAN        |"<<endl;
  cout<<"======================================="<<endl;
  cout<<"-------------KOPI ROBUSTA--------------"<<endl;
  cout<<"1. Kopi Hitam				Rp. 7000"<<endl;
  cout<<"2. Kopi Susu				  Rp. 5000"<<endl;
  cout<<"3. Kopi Jahe 			  Rp. 5000"<<endl;
  cout<<"4. Kopi Susu jahe 		Rp. 7000"<<endl;
  cout<<"5. Es Kopi Hitam     Rp. 9000"<<endl;
  cout<<"6. Kopi Klothok      Rp. 15000"<<endl;
  cout<<"---------------------------------------"<<endl;
  cout<<"---------------MILK SERIES-------------"<<endl;
  cout<<"10. Milk Klepon      Rp. 15000"<<endl;
  cout<<"20. Milk Dawet       Rp. 14000"<<endl;
  cout<<"30. Milk Tape ketan  Rp. 10000"<<endl;
  cout<<"40. Milk Tea         Rp. 10000"<<endl;
  cout<<"---------------------------------------"<<endl;
  cout<<"---------------COKELAT-----------------"<<endl;
  cout<<"21. Cokelat original   Rp. 14000"<<endl;
  cout<<"22. Cokelat Caranel    Rp. 15000"<<endl;
  cout<<"23. Cokelat susu       Rp. 10000"<<endl;
  cout<<"24. Cokelat almond     Rp. 15000"<<endl;
  cout<<"---------------------------------------"<<endl;
  cout<<"-----------ICE COFEE SERIES------------"<<endl;
  cout<<"11. Ice cofee            Rp. 10000"<<endl;
  cout<<"12. Ice cofee aren       Rp. 13000"<<endl;
  cout<<"13. Ice cofee hazelnut   Rp. 14000"<<endl;
  cout<<"14. Ice cofee almond     Rp. 14000"<<endl;
  cout<<"15. Ice cofee caramel    Rp. 14000"<<endl;
  cout<<"---------------------------------------"<<endl;
  cout<<"---------------NON KOPI----------------"<<endl;
  cout<<"61. Red velvet         Rp. 15000"<<endl;
  cout<<"62. Taro               Rp. 15000"<<endl;
  cout<<"63. Green tea          Rp. 15000"<<endl;
  cout<<"---------------------------------------"<<endl;
  cout<<"-------------BLEND SERIES--------------"<<endl;
  cout<<"31. Oreo Bland       Rp. 13000"<<endl;
  cout<<"32. Vanila Bland     Rp. 13000"<<endl;
  cout<<"33. Copuucino Bland  Rp. 15000"<<endl;
  cout<<"34. Strawberry Bland Rp. 14000"<<endl;
  cout<<"---------------------------------------"<<endl;
  cout<<"-------------SQUASH SERIES-------------"<<endl;
  cout<<"41. Lemon squash       Rp. 12000"<<endl;
  cout<<"42. Strawberry squash  Rp. 12000"<<endl;
  cout<<"43. Vanilla squash     Rp. 12000"<<endl;
  cout<<"44. Jeruk squash       Rp. 12000"<<endl;
  cout<<"---------------------------------------"<<endl;
  cout<<"-----------------JUS-------------------"<<endl;
  cout<<"51. Jus mangga     Rp. 10000"<<endl;
  cout<<"52. Jus jeruk      Rp. 13000"<<endl;
  cout<<"53. Jus melon      Rp. 15000"<<endl;
  cout<<"54. Jus alpukat    Rp. 15000"<<endl;
  cout<<"55. Jus strawberry Rp. 15000"<<endl;
  cout<<"56. Jus apel       Rp. 17000"<<endl;
  cout<<"57. Jus sirsak     Rp. 17000"<<endl;
  cout<<"58. Jus jambu      Rp. 10000"<<endl;
  cout<<"59. Ju Buah Naga   Rp. 12000"<<endl;
  cout<<"60. Jus Semangka   Rp. 12000"<<endl;
  cout<<"--------------TEA SERIES---------------"<<endl;
  cout<<"---------------------------------------"<<endl;
  cout<<"81. Original Tea  Rp. 4000"<<endl;
  cout<<"82. Tea Hijau     Rp. 8000"<<endl;
  cout<<"83. Lemon Tea     Rp. 10000"<<endl;
  cout<<"84. Lycne Tea     Rp. 12000"<<endl;
  cout<<"85. Thai Tea      Rp. 12000"<<endl;
  cout<<"---------------------------------------"<<endl;
  cout<<"----------------WEDANGAN---------------"<<endl;
  cout<<"71. Jahe Susu     Rp. 10000"<<endl;
  cout<<"72. Jahe serai    Rp. 10000"<<endl;
  cout<<"73. Lemon Jahe    Rp. 12000"<<endl;
  cout<<"74. Teh jahe      Rp. 7000"<<endl;
  cout<<"---------------------------------------"<<endl;
  cout<<"---------------MAIN DISH---------------"<<endl;
  cout<<"221. Nasi rendang         Rp. 15000"<<endl;
  cout<<"222. Nasi Ayam Pop        Rp. 16000"<<endl;
  cout<<"223. Nasi Ayam bakar      Rp. 16000"<<endl;
  cout<<"224. Nasi Ayam Kalio      Rp. 17000"<<endl;
  cout<<"225. Nasi Ayam telur      Rp. 14000"<<endl;
  cout<<"226. Nasi Sayur Nangka    Rp. 12000"<<endl;
  cout<<"227. Nasi Gulai Ikan      Rp. 16000"<<endl;
  cout<<"228. Nasi Sayur perkedel  Rp. 12000"<<endl;
  cout<<"229. Nasi Goreng          Rp. 12000"<<endl;
  cout<<"230. Nasi Goreng ayam suwir Rp. 15000"<<endl;
  cout<<"231. Nasi Goreng telur    Rp. 12000"<<endl;
  cout<<"232. Nasi Spesial         Rp. 12000"<<endl;
  cout<<"233. Nasi Ayam goreng     Rp. 12000"<<endl;
  cout<<"234. Nasi Goreng Jawa     Rp. 13000"<<endl;
  cout<<"235. Nasi Goreng sapi     Rp. 12000"<<endl;
  cout<<"236. Magelangan           Rp. 14000"<<endl;
  cout<<"-----------------------------------------------"<<endl;
  cout<<"------------------SNACK MENU-------------------"<<endl;
  cout<<"111. Sanwidch jamur              Rp. 12000"<<endl;
  cout<<"112. Sanwidch panner tika        Rp. 14000"<<endl;
  cout<<"113. Panner Bawang putih cabai   Rp. 20000"<<endl;
  cout<<"114. Kebab ayam                  Rp. 10000"<<endl;
  cout<<"115. Kentang                     Rp. 10000"<<endl;
  cout<<"116. Pisang keju                 Rp. 12000"<<endl;
  cout<<"117. Pisang coklat               Rp. 12000"<<endl;
  cout<<"118. Gorengan                    Rp. 8000"<<endl;
  cout<<"119. Kebab beef                  Rp. 14000"<<endl;
  cout<<"120. Pisang Original             Rp. 12000"<<endl;
  cout<<"121. Pisang coklat keju          Rp. 15000"<<endl;
  cout<<""<<endl;
  cout<<""<<endl;
  cout<<"------------------------------------------------"<<endl;
  
  cout<<"---------------------------------------------------"<<endl;
    
	cout<<"Tekan 0 jika selesai melakukan pemesanan"<<endl<<endl;
    
    while(selesai==false){
    	
    	cout<<"Pilih Kode Menu : ";
    	cin>>pilihan[i];
    	
    	if (pilihan[i]<=300){
    		
    		if (pilihan[i]==0){
    			selesai=true;
			  }
        else {
				switch (pilihan[i]){
		    	case 1 : 
            menu[i]="Kopi Hitam      "; 
            harg[i]=7000; 
            break;
		    	case 2 : 
            menu[i]="Kopi Susu     "; 
            harg[i]=15000; 
            break;
		    	case 3 : 
            menu[i]="Kopi jahe  "; 
            harg[i]=5000; 
            break;
		    	case 4 : 
            menu[i]="Kopi Susu jahe"; 
            harg[i]=7000; 
            break;
          case 5 : 
            menu[i]="Kopi Susu jahe"; 
            harg[i]=7000; 
            break;
          case 6 : 
            menu[i]="Es Kopi Hitam"; 
            harg[i]=9000; 
            break;
          case 7 : 
            menu[i]="Kopi Klothok"; 
            harg[i]=15000; 
            break;
          case 10 : 
            menu[i]="Milk Klepon"; 
            harg[i]=15000; 
            break;
          case 20 : 
            menu[i]="Milk Dawet"; 
            harg[i]=14000; 
            break;
          case 30 : 
            menu[i]="Milk Tape ketan"; 
            harg[i]=10000; 
            break;
          case 40 : 
            menu[i]="Milk Tea"; 
            harg[i]=10000; 
            break;
          case 21 : 
            menu[i]="Cokelat original"; 
            harg[i]=15000; 
            break;
          case 22 : 
            menu[i]="Cokelat Caramel"; 
            harg[i]=15000; 
            break;
          case 23 : 
            menu[i]="Cokelat susu"; 
            harg[i]=10000; 
            break;
          case 24 : 
            menu[i]="Cokelat almond"; 
            harg[i]=10000; 
            break;
          case 11 : 
            menu[i]="Ice cofee"; 
            harg[i]=10000; 
            break;
          case 12 : 
            menu[i]="Ice cofee aren "; 
            harg[i]=13000; 
            break;
          case 13 : 
            menu[i]=""; 
            harg[i]=14000; 
            break;
          case 14 : 
            menu[i]="Ice cofee hazelnut"; 
            harg[i]=14000; 
            break;
          case 15 : 
            menu[i]="Ice cofee caramel"; 
            harg[i]=14000; 
            break;
          case  61 : 
            menu[i]="Red velvet"; 
            harg[i]=14000; 
            break;
          case  62 : 
            menu[i]="Taro "; 
            harg[i]=14000; 
            break;
          case  63 : 
            menu[i]="Green tea"; 
            harg[i]=15000; 
            break;
          case  31 : 
            menu[i]="Oreo Bland "; 
            harg[i]=13000; 
            break;
          case  32 : 
            menu[i]="Vanila Bland"; 
            harg[i]=13000; 
            break;
          case  33 : 
            menu[i]="Copuucino Bland"; 
            harg[i]=15000; 
            break;
          case  34 : 
            menu[i]="Strawberry Bland"; 
            harg[i]=14000; 
            break;
          case  41 : 
            menu[i]="Lemon squash"; 
            harg[i]=12000; 
            break;
          case  42 : 
            menu[i]="Strawberry squash"; 
            harg[i]=12000; 
            break;
          case  43 : 
            menu[i]="Vanilla squash "; 
            harg[i]=12000; 
            break;
          case  44 : 
            menu[i]="Jeruk squash "; 
            harg[i]=12000; 
            break;
          case  51 : 
            menu[i]="Jus mangga "; 
            harg[i]=10000; 
            break;
          case  52 : 
            menu[i]="Jus jeruk  "; 
            harg[i]=13000; 
            break;
          case  53 : 
            menu[i]="Jus melon "; 
            harg[i]=15000; 
            break;
          case  54 : 
            menu[i]="Jus alpukat "; 
            harg[i]=15000; 
            break;
          case  55 : 
            menu[i]="Jus strawberry "; 
            harg[i]=15000; 
            break;
          case  56 : 
            menu[i]="Jus apel "; 
            harg[i]=15000; 
            break;
          case  57 : 
            menu[i]="Jus sirsak "; 
            harg[i]=15000; 
            break;
          case  58 : 
            menu[i]="Jus jambu "; 
            harg[i]=17000; 
            break;
          case  59 : 
            menu[i]="Jus Buah Naga "; 
            harg[i]=17000; 
            break;
          case  60 : 
            menu[i]="Jus Semangka "; 
            harg[i]=12000; 
            break;
          case  81 : 
            menu[i]="Original Tea "; 
            harg[i]=4000; 
            break;
          case  82 : 
            menu[i]="Tea Hijau  "; 
            harg[i]=8000; 
            break;
          case  83 : 
            menu[i]="Lemon Tea"; 
            harg[i]=10000; 
            break;
          case  84 : 
            menu[i]="Lycne Tea "; 
            harg[i]=12000; 
            break;
          case  85 : 
            menu[i]="Thai Tea "; 
            harg[i]=12000;
            break;
          case  71 : 
            menu[i]="Jahe susu "; 
            harg[i]=10000;
            break;
          case  72 : 
            menu[i]="Jahe serai "; 
            harg[i]=10000;
            break;
          case  73 : 
            menu[i]="lemon jahe "; 
            harg[i]=12000;
            break;
          case  74 : 
            menu[i]="Teh jahe "; 
            harg[i]=7000;
            break;
          case  221 : 
            menu[i]="Nasi rendang "; 
            harg[i]=15000; 
          break;
          case  222 : 
            menu[i]="Nasi Ayam Pop "; 
            harg[i]=16000;
            break;
          case  223 : 
            menu[i]=" Nasi Ayam bakar";
            harg[i]=16000;
            break;
          case  224 : 
            menu[i]="Nasi Ayam Kalio ";
            harg[i]=17000;
            break;
          case  225 : 
            menu[i]="Nasi Ayam telur       "; 
            harg[i]=14000; 
            break;
          case  226 : 
            menu[i]=" Nasi Sayur Nangka"; 
            harg[i]=12000;
            break;
          case  227 : 
            menu[i]=" Nasi Gulai Ikan"; 
            harg[i]=16000;
            break;
          case  228 : 
            menu[i]=" Nasi Sayur perkedel "; 
            harg[i]=12000;
            break;
          case  229 : 
            menu[i]="Nasi Goreng "; 
            harg[i]=12000;
            break;
          case  230 : 
            menu[i]=" Nasi Goreng ayam suwir"; 
            harg[i]=15000;
            break;
          case  231 : 
            menu[i]=" Nasi Goreng telur"; 
            harg[i]=12000;
            break;
          case  232 : 
            menu[i]="Nasi Goreng Spesial "; 
            harg[i]=12000;
            break;
          case  233 : 
            menu[i]=" Nasi Ayam goreng"; 
            harg[i]=12000;
            break;
          case  234 : 
            menu[i]="Nasi Goreng Jawa "; 
            harg[i]=13000;
            break;
          case  235 : 
            menu[i]="Nasi Goreng sapi "; 
            harg[i]=12000;
            break;
          case  236 : 
            menu[i]=" Magelangan "; 
            harg[i]=14000;
            break;
          case  111 : 
            menu[i]=" Sanwidch jamur "; 
            harg[i]=14000;
            break;
          case  112 : 
            menu[i]="  Sanwidch panner tika "; 
            harg[i]=14000;
            break;
          case  113 : 
            menu[i]=" Panner Bawang putih cabai "; 
            harg[i]=20000;
            break;
          case  114 : 
            menu[i]=" Kebab ayam  "; 
            harg[i]=10000;
            break;
          case  115 : 
            menu[i]=" Kentang "; 
            harg[i]=10000;
            break;
          case  116 : 
            menu[i]=" Pisang keju "; 
            harg[i]=12000; 
            break;
          case  117 : 
            menu[i]=" Pisang coklat"; 
            harg[i]=12000;
            break;
          case  118 : 
            menu[i]=" Gorengan  "; 
            harg[i]=8000;
            break;
          case  119 : 
            menu[i]=" Kebab beef"; 
            harg[i]=14000; 
            break;
          case  120 : 
            menu[i]=" Pisang Original "; 
            harg[i]=12000;
            break;
          case  121 : 
            menu[i]=" Pisang coklat keju "; 
            harg[i]=15000;
            break;
		    		default : menu[i]="";
              harg[i]=0;
				}
				
				cout<<"Jumlah Porsi "<<menu[i]<<" : ";
		    	cin>>jumlahan[i];
		    	cout<<endl;
		    	
		    	sub_total[i]=jumlahan[i]*harg[i];
		    	
		    	total_bayar+=sub_total[i];
	    		i++;
			}
		} 
      else {
			cout<<"Menu yang dipilih tidak sesuai"<<endl;
			cout<<endl;
		}
	}
	
	cout<<endl;
  cout<<"----------------------------------------------------------------------"<<endl;
	cout<<"                INVOICE RESTO DI RUMAH SAKIT TAVIZI"<<endl;
	cout<<"----------------------------------------------------------------------"<<endl;
	cout<<"No	Nama Menu    	  	Harga		Jumlah        Sub Total "<<endl;
	cout<<"----------------------------------------------------------------------"<<endl;
	for (int a=0;a<i;a++){
		  cout<<a+1<<"	"<<menu[a]<<"	"<<harg[a]<<"		"<<jumlahan[a]<<"		"<<sub_total[a]<<endl;
	cout<<"----------------------------------------------------------------------"<<endl;
  }
  cout<<"Total Bayar = Rp."<<total_bayar<<endl;
  
  txtresto.open("invoiceresto.txt");
  txtresto<<"----------------------------------------------------------------------"<<endl;
  txtresto<<"                 INVOICE RESTO DI RS"<<endl;
	txtresto<<"----------------------------------------------------------------------"<<endl;
	txtresto<<"No	Nama Menu    	  	Harga		Jumlah        Sub Total "<<endl;
	txtresto<<"----------------------------------------------------------------------"<<endl;
	for (int a=0;a<i;a++){
		  txtresto<<" "<<a+1<<"	"<<menu[a]<<"	"<<harg[a]<<"		"<<jumlahan[a]<<"	            	"<<sub_total[a]<<endl;
	txtresto<<"----------------------------------------------------------------------"<<endl;
    }
  txtresto<<"Total Bayar = Rp."<<total_bayar<<endl;

}

void Kamar::staff(){
cout<<endl<<"======================================================="<< endl;
  cout<<"|                     DAFTAR STAFF                    |" << endl;
  cout<<"======================================================="<< endl;
  cout << " 1. Direktur " << endl;
  cout << " 2. Manager " << endl;
  cout << " 3. Kepala Seksi " << endl;
  cout << " 4. Kepala Instalasi " << endl;
  cout << " 5. Kepala KSM " << endl;
  cout << " 6. Dokter" << endl;
  cout << " 7. Perawat " << endl;
  cout << " 8. Administrasi " << endl;
  cout << " 9. Cleaning Service " << endl;
  cout<<"======================================================="<< endl;
  cout << " Masukkan Pilihan (1-6) : ";
  cin >> pl;
  	if(pl == 1){
    cout<<"=================================================================="<< endl;
		cout<<"|                            DIREKTUR                            |"<<endl;
    cout<<"=================================================================="<< endl;
		cout<<" 1. Direktur : drg. Endah Purwaningtias "<<endl;
    cout<<" 2. Wakil Direktur Keuangan dan Umum :  dr. Nailah, M.Si, MPH "<<endl;
    cout<<" 3. Wakil Direktur Pelayanan Medis : dr. Anang Kuncoro Adi, M.Kes"<< endl;
    cout<<" 4. Wakil Direktur Penunjang Medis : Dr. Imam Subadi, dr."<<endl;
    cout<<" 5. Wakil Direktur Pendidikan dan Pelatihan : Prof. Dr. Muhammad"<< endl;
		cout<<"=================================================================="<< endl;
		}
    if(pl == 2){
    cout<<"==================================================================="<< endl;
		cout<<"|                             MANAGER                              |"<<endl;
    cout<<"===================================================================="<< endl;
		cout<<" 1. Manajer Pelayanan Medis:	Muhammad Ardian Cahya Laksana, dr."<<endl;
    cout<<" 2. Manajer Keperawatan:	Prof. Dr. Kusnanto, S.Kp., M.Kes. "<<endl;
    cout<<" 3. Manajer Penunjang Medis : Cahyo Wibisono, dr., Sp.PD."<< endl;
		cout<<" 4. Manajer Farmasi :	Dr. Yulistiani, Dra., M.Si., Apt."<< endl;
    cout<<" 5. Manajer Keuangan	: Dr. Sri Ningsih, S.E., M.Si., Ak."<<endl;
    cout<<" 6. Manajer Hukum dan Organisasi Tata Laksana : Dr. Kurniawan"<<endl;
    cout<<" 7. Manajer Sumber Daya Manusia :	Pradana Zaky Romadhon, dr."<<endl;
    cout<<" 8. Manajer Pendidikan	: Dr. Afif Nurul Hidayati, dr., Sp.KK(K) "<<endl;
    cout<<" 9. Manajer Penelitian	: Wiwin Is Effendi, dr., Sp.P., Ph.D. "<<endl;
    cout<<" 10. Manajer Pelatihan	: Dr. Soedarsono, dr., Sp.P(K). "<<endl;
    cout<<" 11. Manajer Inovasi dan Pengembangan : Tedy Apriawan, dr."<<endl;
    cout<<"======================================================================"<< endl;
		}
  if(pl == 3){
    cout<<"======================================================================"<< endl;
		cout<<"|                           KEPALA SEKSI                             |"<<endl;
    cout<<"======================================================================"<< endl;
		cout<<"1. Kepala Seksi Pelayanan Medis : Yudhi Adrianto, dr., Sp.S., FINR. "<<endl;
    cout<<"2. Kepala Seksi Monitoring dan Evaluasi Pelayanan Medis : Faesal, dr."<<endl;
    cout<<"3. Kepala Seksi Pelayanan Keperawatan : Sartika Wulandari, S.Kep., Ns., M.Kep."<< endl;
		cout<<"4. Kepala Seksi Penunjang Medis : Nur Sulastri, dr., Sp.KFR."<< endl;
    cout<<"5. Kepala Seksi Monitoring dan Evaluasi Penunjang Medis : Muhammad Syamsul Hidayat, S.Kep. "<<endl;
    cout<<"6. Kepala Seksi Pengelolaan Farmasi : Nur Fauzi Hamidi, S.Farm., Apt. "<<endl;
    cout<<"7. Kepala Seksi Farmasi Klinik : Nugroho Hari Santoso, S.farm., M.Farm.Klin., Apt. "<<endl;
    cout<<"8. Kepala Seksi Pendapatan : Devina Kristanti Nova, A.Md. "<<endl;
    cout<<"9. Kepala Seksi Perbendaharaan	: Pravita Dwi Anggraeni, S.A. "<<endl;
    cout<<"10. Kepala Seksi Akuntansi :	Savita Putri Rizky Auliya, A.Md. "<<endl;
    cout<<"11. Kepala Seksi Layanan Asuransi : Prima Ramadhany, dr., M.Kes. "<<endl;
    cout<<"12. Kepala Seksi Aset dan Umum :	Aditya Nugrahadi, S.T., M.M. "<<endl;
    cout<<"13. Kepala Seksi Perencanaan dan Pengembangan SDM :Adityarani Putranti, drg., M.Kes. "<<endl;
    cout<<"14. Kepala Seksi Administrasi dan Sisem Informasi SDM : I Sanny Prakosa Wardhana, S.Psi  "<<endl;
    cout<<"15. Kepala Seksi Pendidikan : Erika Marfiani, dr., Sp.PD. "<<endl;
    cout<<"16. Kepala Seksi Pelatihan Eksternal : Mohamad Nurdin Zuhri, dr., Sp.M. "<<endl;
    cout<<"17. Kepala Seksi Pengembangan : Yuni Hisbiyah, dr., Sp.A., M.MRS. "<<endl;
    cout<<"18. Kepala Seksi Hilirisasi Riset : Dr. Indri Lakhsmi Putri, dr., Sp.BP-RE(KKF). "<<endl;
     cout<<"======================================================================"<< endl;
		}
  if(pl == 4){
    cout<<"======================================================================"<< endl;
		cout<<"|                          KEPALA INSTALASI                          |"<<endl;
    cout<<"======================================================================"<< endl;
		cout<<"1. Kepala Instalasi Gawat Darurat : Prihatma Kriswidyatomo, dr., Sp.An. "<<endl;
    cout<<"2. Kepala Instalasi Rawat Inap	: Satriyo Dwi Suryantoro, dr., Sp.PD. "<<endl;
    cout<<"3. Kepala Instalasi Rawat Jalan :	Hendro Susilo, dr., Sp.JP."<< endl;
		cout<<"4. Kepala Instalasi Vaskuler Terpadu :	M. Yusuf, dr., Sp.JP., Ph.D., FIHA., FESC."<< endl;
    cout<<"5. Kepala Instalasi Kedokteran Fisik dan Rehabilitasi : Yudith Dian Prawitri, dr., Sp.KFR. "<<endl;
    cout<<"6. Kepala Instalasi Maternal – Perinatal	: Khanisyah Erza Gumilar, dr., Sp.OG. "<<endl;
    cout<<"7. Kepala Instalasi Onkologi Terpadu :	Prof. Dr. Ami Ashariati Prayogo, dr., Sp.PD-KHOM. "<<endl;
    cout<<"8. Kepala Instalasi Rawat Intensif	: Lucky Adriyanto, dr., Sp.An.KAP. "<<endl;
    cout<<"9. Kepala Instalasi Bedah Sentral : Asdi Wihandono, dr., Sp.B(K)Onk. "<<endl;
    cout<<"10. Kepala Instalasi Hemodialisa	: Prof. Dr. M. Thaha, "<<endl;
    cout<<"11. Kepala Instalasi Anestesi	: Herdiani Sulistyo Putri, dr., Sp.An., FIPM. "<<endl;
    cout<<"12. Kepala Instalasi Radiologi	: Erika Soebakti, dr., Sp.Rad. "<<endl;
    cout<<"13. Kepala Instalasi Farmasi	: Khusnul Fitri Hamidah, S.Farm., Apt. "<<endl;
    cout<<"14. Kepala Instalasi Laboratorium Sentral : M. Rabiul Fuadi, dr., Sp.PK. "<<endl;
    cout<<"15. Kepala Instalasi Rekam Medis :	Rosita Prananingtias, A.Md.PK. "<<endl;
    cout<<"16. Kepala Instalasi Teknologi Informasi	: Hendro Suprayogi, S.Kom. "<<endl;
    cout<<"17. Kepala Instalasi Pemeliharaan Sarana dan Sanitasi : Bagas Angger Prakoso, A.Md. "<<endl;
    cout<<"18. Kepala Instalasi Gizi : Niko Rahardi, A.Md.Gz. "<<endl;
    cout<<"19. Kepala Instalasi CSSD Laundry : Toetik Aryani, Dra., M.Si., Apt. "<<endl;
    cout<<"20. Kepala Instalasi MCU dan Vaksinasi Internasional : Mutiara Rizky Haryati, dr., Sp.PD. "<<endl;
    cout<<"21. Kepala Instalasi Laboratorium Riset : Yessy Puspitasari, dr., Sp.PK. "<<endl;
    cout<<"22. Kepala Instalasi Promosi Kesehatan dan Humas :	Brihastami Sawitri, dr., Sp.KJ. "<<endl;
    cout<<"23. Kepala Instalasi Pemasaran dan Kerjasama	: Niken Sasadhara Sasmita, dr. "<<endl;
    cout<<"24. Kepala Instalasi Pengobatan Tradisional : Ario Imandiri, dr., Sp.Ak. "<<endl;
cout<<"================================================================="<< endl;
		}
  if(pl == 5){
    cout<<"======================================================================"<< endl;
    cout<<"|                              KEPALA KSM                            |"<<endl;
    cout<<"======================================================================"<< endl;
		cout<<"1. Kepala KSM Bedah Umum	: Ricky Wibowo, dr., Sp.B. "<<endl;
    cout<<"2. Kepala KSM Ilmu Penyakit Dalam : Dr. Muhammad Noor Diansyah, dr., Sp.PD. FINASIM. "<<endl;
    cout<<"3. Kepala KSM Kesehatan Anak	: Robby Nur Hariansyah, dr., Sp.A."<< endl;
		cout<<"4. Kepala KSM Anastesiologi dan Reanimasi : Yoppy Prim Avidar, dr., Sp.An."<< endl;
    cout<<"5. Kepala KSM Kardiologi dan Kedokteran Vaskuler : Prof. Dr. Budi Susetyo-Pikir"<<endl;
    cout<<"6. Kepala KSM Forensik dan Medikolegal : Nily Sulistyorini, dr., Sp.FM. "<<endl;
    cout<<"7. Kepala KSM Obstetri dan Genikologi : Pungky Mulawardhana, dr., Sp.OG(K).Onk. "<<endl;
    cout<<"8. Kepala KSM Kedokteran Jiwa : Andini Dyah Sitawati, dr., Sp.KJ. "<<endl;
    cout<<"9. Kepala KSM Kesehatan Kulit : Medhi Denisa Alinda, dr., Sp.KK. "<<endl;
    cout<<"10. Kepala KSM Kesehatan Mata : Maitri Anindita Alinda, dr., Sp.M."<<endl;
    cout<<"11. Kepala KSM Orthopedi : Yunus, dr., Sp.OT(K). "<<endl;
    cout<<"12. Kepala KSM Bedah Syaraf : Prof. Dr. Abdul Hafid Bajamal, dr., Sp.BS(K). "<<endl;
    cout<<"13. Kepala KSM Bedah Plastik : Rachmaniar Pramanasari, dr., Sp.BP-RE. "<<endl;
    cout<<"14. Kepala KSM Bedah Urologi :	Lukman Hakim, dr., MARS., Sp.U(K)., Ph.D. "<<endl;
    cout<<"15. Kepala Instalasi Rekam Medis	: Rosita Prananingtias, A.Md.PK. "<<endl;
    cout<<"16. Kepala KSM Bedah Anak : Barmadisatrio, dr., Sp.B(K)BA."<<endl;
    cout<<"======================================================================"<< endl;
		}
   if(pl == 6){
    cout<<"======================================================================"<< endl;
    cout<<"|                             DOKTER                                 |"<<endl;
    cout<<"======================================================================"<< endl;
		cout<<"1. Bedah Umum	: Ricky Wibowo, dr., Sp.B. "<<endl;
    cout<<"2. Ilmu Penyakit Dalam : Dr. Muhammad Noor Diansyah, dr., Sp.PD. FINASIM. "<<endl;
    cout<<"3. Kesehatan Anak	: Robby Nur Hariansyah, dr., Sp.A."<< endl;
		cout<<"4. Anastesiologi dan Reanimasi : Yoppy Prim Avidar, dr., Sp.An."<< endl;
    cout<<"5. Kardiologi dan Kedokteran Vaskuler : Prof. Dr. Budi Susetyo-Pikir"<<endl;
    cout<<"6. Forensik dan Medikolegal : Nily Sulistyorini, dr., Sp.FM. "<<endl;
    cout<<"7. Obstetri dan Genikologi : Pungky Mulawardhana, dr., Sp.OG(K).Onk. "<<endl;
    cout<<"8. Kedokteran Jiwa : Andini Dyah Sitawati, dr., Sp.KJ. "<<endl;
    cout<<"9. Kesehatan Kulit : Medhi Denisa Alinda, dr., Sp.KK. "<<endl;
    cout<<"10. Kesehatan Mata : Maitri Anindita Alinda, dr., Sp.M."<<endl;
    cout<<"11. Orthopedi : Yunus, dr., Sp.OT(K). "<<endl;
    cout<<"12. Bedah Syaraf : Prof. Dr. Abdul Hafid Bajamal, dr., Sp.BS(K). "<<endl;
    cout<<"13. Bedah Plastik : Rachmaniar Pramanasari, dr., Sp.BP-RE. "<<endl;
    cout<<"14. Urologi :	Lukman Hakim, dr., MARS., Sp.U(K)., Ph.D. "<<endl;
    cout<<"15. Rekam Medis	: Rosita Prananingtias, A.Md.PK. "<<endl;
    cout<<"16. Bedah Anak : Barmadisatrio, dr., Sp.B(K)BA."<<endl;
    cout<<"======================================================================="<< endl;
		}
  if(pl == 7){
    cout<<"======================================================================"<< endl;
    cout<<"|                             PERAWAT                                 |"<<endl;
    cout<<"======================================================================"<< endl;
		cout<<"1. Perawat Bedah Umum	: Ricky Wibowo, dr., Sp.B. "<<endl;
    cout<<"2. Perawat Ilmu Penyakit Dalam : Dr. Muhammad Noor Diansyah, dr."<<endl;
    cout<<"3. Perawat Kesehatan Anak	: Robby Nur Hariansyah, dr., Sp.A."<< endl;
		cout<<"4. Perawat Anastesiologi dan Reanimasi : Yoppy Prim Avidar, dr."<< endl;
    cout<<"5. Perawat Kardiologi dan Kedokteran Vaskuler : Prof. Dr.Budi Susetyo"<<endl;
    cout<<"6. Perawat Forensik dan Medikolegal : Nily Sulistyorini, dr., Sp.FM. "<<endl;
    cout<<"7. Perawat Obstetri dan Genikologi : Pungky Mulawardhana, dr."<<endl;
    cout<<"8. Perawat Kedokteran Jiwa : Andini Dyah Sitawati, dr., Sp.KJ. "<<endl;
    cout<<"9. Perawat Kesehatan Kulit : Medhi Denisa Alinda, dr., Sp.KK. "<<endl;
    cout<<"10. Perawat Kesehatan Mata : Maitri Anindita Alinda, dr., Sp.M."<<endl;
    cout<<"11. Perawat Orthopedi : Yunus, dr., Sp.OT(K). "<<endl;
    cout<<"12. Perawat Bedah Syaraf : Prof. Dr. Abdul Hafid Bajamal, dr."<<endl;
    cout<<"13. Perawat Bedah Plastik : Rachmaniar Pramanasari, dr., Sp.BP-RE. "<<endl;
    cout<<"14. Perawat Bedah Urologi :	Lukman Hakim, dr., MARS., Sp.U(K)."<<endl;
    cout<<"15. Perawat Rekam Medis	: Rosita Prananingtias, A.Md.PK. "<<endl;
    cout<<"16. Perawat Bedah Anak : Barmadisatrio, dr., Sp.B(K)BA."<<endl;
    cout<<"======================================================================"<< endl;
		}
  if(pl == 8){
    cout<<"======================================================================"<< endl;
    cout<<"|                             ADMINISTRASI                           |"<<endl;
    cout<<"======================================================================"<< endl;
		cout<<"1. 06.00 - 12.00	: Ricky Saputro, Julia Sari, Bagus Wibowo "<<endl;
    cout<<"2. 12.00 - 18.00 : Noor Diansyah, Danang Putro, Hakim Agung"<<endl;
    cout<<"3. 18.00 - 00.00	: Irfan Yono, Sutono, Sumini"<< endl;
		cout<<"4. 00.00 - 06.00 : Radiasyah, Budi Hartono, Setianto"<< endl;
    cout<<"======================================================================"<< endl;
		}
  if(pl == 9){
    cout<<"======================================================================"<< endl;
    cout<<"|                            CLEANING SERVICE                        |"<<endl;
    cout<<"======================================================================"<< endl;
		cout<<"1. 06.00 - 12.00	: Saputro, Sari, Wibowo "<<endl;
    cout<<"2. 12.00 - 18.00 : Noor , Putro, Hakim"<<endl;
    cout<<"3. 18.00 - 00.00	: Yono, Sutini, Sunarti"<< endl;
		cout<<"4. 00.00 - 06.00 : Radi, Hartono, Setiantoro"<< endl;
    cout<<"======================================================================"<< endl;
		}
	}

void Kamar::ambulance(){
  cout<<"==================================================="<<endl;
  cout<<"|                                                 |"<<endl;
  cout<<"|                  MENU AMBULANCE                 |"<<endl;
  cout<<"|                                                 |"<<endl;
  cout<<"==================================================="<<endl;
  cout<<"Pilihan menu : "<<endl;
  cout<<"---------------------------------------------------"<<endl;
  cout<<"1. Ambulance Darurat "<<endl;
  cout<<"2. Ambulance Jenazah "<<endl;
  cout<<"---------------------------------------------------"<<endl;
  cout<<"Masukkan pilihan (1-2) ";
  cin>>amb;
  if(amb==1){
    cout<<"|-----------------------------------------------|"<<endl;
    cout<<"|             Ambulance Darurat                 |"<<endl;
    cout<<"|-----------------------------------------------|"<<endl;
    cout<<"================================================="<<endl;
    cout<<"Nomor telepon : 1-502-300"<<endl;
    cout<<"|-----------------------------------------------|"<<endl;
    cout<<"|                  Shift                        |"<<endl;
    cout<<"|-----------------------------------------------|"<<endl;
    cout<<"Shift 06.00 - 12.00 / Pak Tg"<<endl;
    cout<<"Shift 12.00 - 18.00 / Pak Lp"<<endl;
    cout<<"Shift 18.00 - 24.00 / Pak Df"<<endl;
    cout<<"Shift 24.00 - 06.00 / Pak Gt"<<endl;
    cout<<"================================================"<<endl;
  }
  else{
    cout<<"|-----------------------------------------------|"<<endl;
    cout<<"|             Ambulance Jenazah                 |"<<endl;
    cout<<"|-----------------------------------------------|"<<endl;
    cout<<"================================================="<<endl;
    cout<<"Nomor telepon : 1-502-300"<<endl;
    cout<<"|-----------------------------------------------|"<<endl;
    cout<<"|                  Shift                        |"<<endl;
    cout<<"|-----------------------------------------------|"<<endl;
    cout<<"Shift 06.00 - 12.00 / Pak Pk"<<endl;
    cout<<"Shift 12.00 - 18.00 / Pak Rd"<<endl;
    cout<<"Shift 18.00 - 24.00 / Pak Bx"<<endl;
    cout<<"Shift 24.00 - 06.00 / Pak Nj"<<endl;
    cout<<"================================================"<<endl;
  }
}

void Kamar::sport(){
  cout<<"==================================================="<<endl;
  cout<<"|                                                 |"<<endl;
  cout<<"|           MENU APPOINTMENT OLAHRAGA             |"<<endl;
  cout<<"|                                                 |"<<endl;
  cout<<"==================================================="<<endl;
  cout<<"Pilihan menu : "<<endl;
  cout<<"1. Penggunaan alat gym "<<endl;
  cout<<"2. Penggunaan kolam renang "<<endl;
  cout<<"Masukkan pilihan : ";
  cin>>olg;
  
  if(olg==1){
    cout<<"|-----------------------------------------------|"<<endl;
    cout<<"|             Penggunaan Alat Gym               |"<<endl;
    cout<<"|-----------------------------------------------|"<<endl;
    cout<<"Daftar alat : "<<endl;
    cout<<"-------------------------------------------------"<<endl;
    cout<<"1. Rowing Machine - 200k"<<endl;
    cout<<"2. Squat Rack - 300k"<<endl;
    cout<<"3. Treadmill - 350k"<<endl;
    cout<<"4. Barbell - 150k"<<endl;
    cout<<"5. Cable Machine - 250k"<<endl;
    cout<<"6. Leg Press Machine - 350k"<<endl;
    cout<<"7. Dumbbell - 200k"<<endl;
    cout<<"8. Matras Yoga - 150k"<<endl;
    cout<<"9. Sepeda Statis - 300k"<<endl;
    cout<<"--------------------------------------------------"<<endl;
    cout<<"Pilih alat : "<<endl;
    cin>>alt;
    switch (alt) {
      case 1 :
      cout<<"1. Rowing Machine - 200k"<<endl;
      break;
      case 2 :
      cout<<"2. Squat Rack - 300k"<<endl;
      break;
      case 3 :
      cout<<"3. Treadmill - 350k"<<endl;
      break;
      case 4 :
      cout<<"4. Barbell - 150k"<<endl;
      break;
      case 5 :
      cout<<"5. Cable Machine - 250k"<<endl;
      break;
      case 6 :
      cout<<"6. Leg Press Machine - 350k"<<endl;
      break;
      case 7 :
      cout<<"7. Dumbbell - 200k"<<endl;
      break;
      case 8 :
      cout<<"8. Matras Yoga - 150k"<<endl;
      break;
      case 9 :
      cout<<"9. Sepeda Statis - 300k"<<endl;
      break;
    }
  }
  else {
    cout<<"|-----------------------------------------------|"<<endl;
    cout<<"|           Penggunaan Kolam Renang             |"<<endl;
    cout<<"|-----------------------------------------------|"<<endl;
    cout<<"Masukkan jumlah orang : "; 
    cin>>jml;
    hsl = jml*40000;
    cout<<"Total harga : "<<hsl<<endl;
  }
}

void Kamar::appoint(){
  cout<<"==================================================="<<endl;
  cout<<"|                                                 |"<<endl;
  cout<<"|                 MENU APPOINTMENT                |"<<endl;
  cout<<"|                                                 |"<<endl;
  cout<<"==================================================="<<endl;
  cout<<"---------------------------------------------------"<<endl;
   cout<<endl<<"======================================================="<< endl;
  cout<<"                     DAFTAR POLI " << endl;
  cout<<"======================================================="<< endl;
  cout << " 1. Poli Anak " << endl;
  cout << " 2. Poli Jiwa "<< endl;
  cout << " 3. Poli THT " << endl;
  cout << " 4. Poli Mata " << endl;
  cout << " 5. Poli Saraf " << endl;
  cout << " 6. Poli Jantung " << endl;
  cout<<"======================================================="<< endl;
  cout << " Masukkan Poli (1-6) : ";
  cin >> pl;
  	if(pl == 1){
		cout<<endl<<"===================== POLI ANAK ======================="<<endl;
		cout<<" 1.) 07.00 - 14.00 / Dr. A "<<endl;
		cout<<" 2.) 14.00 - 21.00 / Dr. B "<<endl;
		cout<<" 3.) 21.00 - 07.00 / Dr. C "<<endl;
		cout<<"======================================================="<< endl;
		cout<<"Masukkan pilihan jam dan dokter (1-3) : ";
		cin>>jd;
		switch (jd){
			case 1 :
				cout<<"1.) 07.00 - 14.00 / Dr. A "<<endl;
				break;
			case 2 :
				cout<<" 2.) 14.00 - 21.00 / Dr. B "<<endl;
				break;
			case 3 :
				cout<<" 3.) 21.00 - 07.00 / Dr. C "<<endl;
				break;
		}
	}
    else if (pl == 2){
		cout<<endl<<"======================= POLI JIWA =====================" <<endl;
		cout<<" 1.) 07.00 - 14.00 / Dr. Hg "<<endl;
		cout<<" 2.) 14.00 - 21.00 / Dr. Bk "<<endl;
		cout<<" 3.) 21.00 - 07.00 / Dr. Ft "<<endl;
		cout<<"======================================================="<< endl;
		cout<<"Masukkan pilihan jam dan dokter (1-3) : ";
		cin>>jd;
		switch (jd){
			case 1 :
				cout<<"1.) 07.00 - 14.00 / Dr. Hg"<<endl;
				break;
			case 2 :
				cout<<" 2.) 14.00 - 21.00 / Dr. Bk "<<endl;
				break;
			case 3 :
				cout<<" 3.) 21.00 - 07.00 / Dr. Ft "<<endl;
				break;
		}
	}
    else if(pl == 3){
		cout<<endl<<"======================= POLI THT ====================== "<<endl;
		cout<<" 1.) 07.00 - 14.00 / Dr. Tr "<<endl;
		cout<<" 2.) 14.00 - 21.00 / Dr. Ds "<<endl;
		cout<<" 3.) 21.00 - 07.00 / Dr. Kl "<<endl;
		cout<<"======================================================="<< endl;
		cout<<"Masukkan pilihan jam dan dokter (1-3) : ";
		cin>>jd;
		switch (jd){
			case 1 :
				cout<<"1.) 07.00 - 14.00 / Dr. Tr"<<endl;
				break;
			case 2 :
				cout<<" 2.) 14.00 - 21.00 / Dr. Ds "<<endl;
				break;
			case 3 :
				cout<<" 3.) 21.00 - 07.00 / Dr. Kl "<<endl;
				break;
			}
	} 
    else if (pl == 4) {
		cout<<endl<<"====================== POLI MATA ======================"<<endl;
		cout<<" 1.) 07.00 - 14.00 / Dr. Jh "<<endl;
		cout<<" 2.) 14.00 - 21.00 / Dr. Bg "<<endl;
		cout<<" 3.) 21.00 - 07.00 / Dr. Yi "<<endl;
		cout<<"======================================================="<< endl;
		cout<<"Masukkan pilihan jam dan dokter (1-3) : ";
		cin>>jd;
		switch (jd){
			case 1 :
				cout<<"1.) 07.00 - 14.00 / Dr. Jh"<<endl;
				break;
			case 2 :
				cout<<" 2.) 14.00 - 21.00 / Dr. Bg"<<endl;
				break;
			case 3 :
				cout<<" 3.) 21.00 - 07.00 / Dr. Yi "<<endl;
				break;
			}
	} 
    else if (pl == 5){
		cout<<endl<<"===================== POLI SARAF ======================"<<endl;
		cout<<" 1.) 07.00 - 14.00 / Dr. Ds "<<endl;
		cout<<" 2.) 14.00 - 21.00 / Dr. Wx "<<endl;
		cout<<" 3.) 21.00 - 07.00 / Dr. Nb "<<endl;
		cout<<"======================================================="<< endl;
		cout<<"Masukkan pilihan jam dan dokter (1-3) : ";
		cin>>jd;
		switch (jd){
			case 1 :
				cout<<"1.) 07.00 - 14.00 / Dr. Ds"<<endl;
				break;
			case 2 :
				cout<<" 2.) 14.00 - 21.00 / Dr. Wx"<<endl;
				break;
			case 3 :
				cout<<" 3.) 21.00 - 07.00 / Dr. Nb"<<endl;
				break;
			}
	}
    else {
		cout<<endl<<"==================== POLI JANTUNG ===================== "<<endl;
		cout<<" 1.) 07.00 - 14.00 / Dr. Zh "<<endl;
		cout<<" 2.) 14.00 - 21.00 / Dr. Ji "<<endl;
		cout<<" 3.) 21.00 - 07.00 / Dr. Fd "<<endl;
		cout<<"======================================================="<< endl;
		cout<<"Masukkan pilihan jam dan dokter (1-3) : ";
		cin>>jd;
		switch (jd){
			case 1 :
				cout<<"1.) 07.00 - 14.00 / Dr. Zh"<<endl;
				break;
			case 2 :
				cout<<"2.) 14.00 - 21.00 / Dr. Ji "<<endl;
				break;
			case 3 :
				cout<<"3.) 21.00 - 07.00 / Dr. Fd "<<endl;
				break;
			}
}
  cout<<"|==================================================|"<<endl;
  cout<<"|              Tanggal Appointment                 |"<<endl;
  cout<<"|==================================================|"<<endl;
  cout<<"Masukkan tanggal : ";
  cin>>tanggal;
  }

void Kamar::herbal(){
  cout<<"|-----------------------------------------------|"<<endl;
    cout<<"|             Penjualan Obat Herbal             |"<<endl;
    cout<<"|-----------------------------------------------|"<<endl;
    cout<<"Daftar obat herbal : "<<endl;
    cout<<"-------------------------------------------------"<<endl;
    cout<<"1. Jamu Kunir asem - 200k"<<endl;
    cout<<"2. Jamu Beras Kencur - 300k"<<endl;
    cout<<"3. Jamu Brotowali - 350k"<<endl;
    cout<<"4. Temulawak - 150k"<<endl;
    cout<<"5. Sambiloto - 250k"<<endl;
    cout<<"6. Tempuyung - 350k"<<endl;
    cout<<"7. Keji Beling - 200k"<<endl;
    cout<<"8. Beluntas - 150k"<<endl;
    cout<<"9. Jamu sinom - 300k"<<endl;
    cout<<"--------------------------------------------------"<<endl;
    cout<<"Pilih obat herbal : "<<endl;
    cin>>obt;
    switch (obt) {
      case 1 :
      cout<<"1. Jamu Kunir asem - 200k"<<endl;
      break;
      case 2 :
      cout<<"2. Jamu Beras Kencur - 300k"<<endl;
      break;
      case 3 :
      cout<<"3. Jamu Brotowali - 350k"<<endl;
      break;
      case 4 :
      cout<<"4. Temulawak - 150k"<<endl;
      break;
      case 5 :
      cout<<"5. Sambiloto - 250k"<<endl;
      break;
      case 6 :
      cout<<"6. Tempuyung - 350k"<<endl;
      break;
      case 7 :
      cout<<"7. Keji Beling - 200k"<<endl;
      break;
      case 8 :
      cout<<"8. Beluntas - 150k"<<endl;
      break;
      case 9 :
      cout<<"9. Jamu sinom - 300k"<<endl;
      break;
    }
  }
