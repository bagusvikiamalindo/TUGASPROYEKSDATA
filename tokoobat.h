void Apotek::tokbat(){
  int memilih;
  for (int o = 0; o < 1; o++){
  cout<<"==================================================="<<endl;
  cout<<"                   DATA PASIEN                     "<<endl;
  cout<<"==================================================="<<endl;
  cout << " Masukkan Nama Anda     : ";
  cin.ignore();
  getline(cin, pasien[o].nama);
  cout << " Masukkan Alamat Anda   : ";
  getline(cin, pasien[o].alamat);
  cout << " Masukkan No.Hp Anda    : ";
  cin >> pasien[o].no_telepon;
  cout << " Masukkan Umur Anda     : ";
  cin >> pasien[o].umur;
  cin.ignore();
  cout<<"==================================================="<<endl;
  cout<<endl;
  cout<<"========================"<<endl;
  cout<<"|    KATEGORI PRODUK   |"<<endl;
  cout<<"========================"<<endl;
  cout<<endl;
  cout<<"========================================="<<endl;
  cout<<"1. Vitamin Herbal & Suplemen "<<endl;
  cout<<"2. Obat "<<endl;
  cout<<"3. Ibu dan Bayi "<<endl;
  cout<<"4. Alat Kesehatan "<<endl;
  cout<<"5. Makanan dan Minuman sehat "<<endl;
  cout<<"6. Kesehatan Gigi & Mulut "<<endl;
  cout<<"7. Skincare "<<endl;
  cout<<"8. Perawatan Tubuh "<<endl;
  cout<<"9. Kecantikan "<<endl;
  cout<<"=========================================="<<endl;
  cout<<" Masukan Pilihan anda : ";
  cin>>memilih;
  if(memilih == 1){
		cout<<endl<<"===================== Vitamin Herbal & Suplemen ================="<<endl;
    cout<<endl;
		cout<<" 1.) Tolak angin cair Plus Madu sachet       Rp 37.000"<<endl;
		cout<<" 2.) Becom Zet Kaplet (10 Kalpet)            Rp 23.000"<<endl;
		cout<<" 3.) Zegavit Kaplet (5 Kaplet)               Rp 21.200"<<endl;
    cout<<" 4.) Imbost F0orce Kaplet (10 Kaplet)        Rp 90.200"<<endl;
    cout<<" 5.) Enervon C tablet (1 botol dan 30 Tablet)Rp 34.400"<<endl;
    cout<<" 6.) Omepros kapsul (30 Kapsul)              Rp 112.716"<<endl;
    cout<<" 7.) Blackmores Pregnancy                    Rp 172.000"<<endl;
    cout<<" 8.) Blackmores Odourless                    Rp 197.000"<<endl;
    cout<<" 9.) Lianhua Qinwen Kapsul                   Rp 48.000"<<endl;
    cout<<" 10.) Stimuno Forte Kapsul (30 Kapsul)       Rp 64.000"<<endl;
    cout<<" 11.) Vitalong C Kapsul                      Rp 42.000"<<endl;
    cout<<" 12.) Prove D3-1000 Tablet                   Rp 24.000"<<endl;
    cout<<" 13.) Vegablend 21 Adult Kapsul              Rp 140.000"<<endl;
    cout<<" 14.) Oxyvit D3 60 Kapsul                    Rp 114.100"<<endl;
    cout<<" 15.) Neurobion Forte 10 Tablet              Rp 34.200"<<endl;
    cout<<" 16.) Imboost Kids 21 Tablet Hisap           Rp 27.600"<<endl;
    cout<<" 17.) Prove D3-1000 IU 10 Tablet             Rp 28.000 "<<endl;
    cout<<" 18.) Astria 4 mg 12 Kapsul                  Rp 60.200"<<endl;
    cout<<" 19.) Halowell E 200 IU 12 Kapsul            Rp 34.000"<<endl;
    cout<<" 20.) Folamil Genio 30 Kapsul                Rp 127.900"<<endl;
		cout<<"======================================================================="<< endl;
		cout<<"Masukkan pilihan jam dan dokter (1-20) : ";
		cin>>pilihobat;
		switch (pilihobat){
			case 1 :
				cout<<"1.) Tolak angin cair Plus Madu sachet "<<endl;
        cout<<"Masukan Jumlah obat : ";
        cin>>jumlahobat ;
        hargaobat = 37000;
        hargaobat_total = hitung(jumlahobat, hargaobat);
        temp_daftarobat = vitamin[0];
				break;
			case 2 :
				cout<<"2.) Becom Zet Kaplet (10 Kalpet)      "<<endl;
        cout<<"Masukan Jumlah obat : ";
        cin>>jumlahobat ;
        hargaobat = 23000;
        hargaobat_total = hitung(jumlahobat, hargaobat);
        temp_daftarobat = vitamin[1];
				break;
			case 3 :
				cout<<"3.) Zegavit Kaplet (5 Kaplet)     "<<endl;
        cout<<"Masukan Jumlah obat : ";
        cin>>jumlahobat ;
        hargaobat = 21200;
        hargaobat_total = hitung(jumlahobat, hargaobat);
        temp_daftarobat = vitamin[2];
				break;
      case 4 :
				cout<<"4.) Imbost F0orce Kaplet (10 Kaplet)     "<<endl;
        cout<<"Masukan Jumlah obat : ";
        cin>>jumlahobat ;
        hargaobat = 90200;
        hargaobat_total = hitung(jumlahobat, hargaobat);
        temp_daftarobat = vitamin[3];
				break;
      case 5 :
				cout<<" 5.) Enervon C tablet (1 botol dan 30 Tablet)"<<endl;
        cout<<"Masukan Jumlah obat : ";
        cin>>jumlahobat ;
        hargaobat = 34400;
        hargaobat_total = hitung(jumlahobat, hargaobat);
        temp_daftarobat = vitamin[4];
				break;
      case 6 :
				cout<<" 6.) Omepros kapsul (30 Kapsul)          "<<endl;
        cout<<"Masukan Jumlah obat : ";
        cin>>jumlahobat ;
        hargaobat = 112716;
        hargaobat_total = hitung(jumlahobat, hargaobat);
        temp_daftarobat = vitamin[5];
				break;
      case 7 :
				cout<<" 7.) Blackmores Pregnancy                 "<<endl;
        cout<<"Masukan Jumlah obat : ";
        cin>>jumlahobat ;
        hargaobat = 172000;
        hargaobat_total = hitung(jumlahobat, hargaobat);
        temp_daftarobat = vitamin[6];
				break;
      case 8 :
				cout<<" 8.) Blackmores Odourless                 "<<endl;
        cout<<"Masukan Jumlah obat : ";
        cin>>jumlahobat ;
        hargaobat = 197000;
        hargaobat_total = hitung(jumlahobat, hargaobat);
        temp_daftarobat = vitamin[7];
				break;
      case 9 :
				cout<<" 9.) Lianhua Qinwen Kapsul             "<<endl;
        cout<<"Masukan Jumlah obat : ";
        cin>>jumlahobat ;
        hargaobat = 48000;
        hargaobat_total = hitung(jumlahobat, hargaobat);
        temp_daftarobat = vitamin[8];
				break;
      case 10 :
				cout<<" 10.) Stimuno Forte Kapsul (30 Kapsul)   "<<endl;
        cout<<"Masukan Jumlah obat : ";
        cin>>jumlahobat ;
        hargaobat = 64000;
        hargaobat_total = hitung(jumlahobat, hargaobat);
        temp_daftarobat = vitamin[9];
				break;
      case 11 :
				cout<<" 11.) Vitalong C Kapsul                  "<<endl;
        cout<<"Masukan Jumlah obat : ";
        cin>>jumlahobat ;
        hargaobat = 42000;
        hargaobat_total = hitung(jumlahobat, hargaobat);
        temp_daftarobat = vitamin[10];
				break;
      case 12 :
				cout<<" 12.) Prove D3-1000 Tablet               "<<endl;
        cout<<"Masukan Jumlah obat : ";
        cin>>jumlahobat ;
        hargaobat = 24000;
        hargaobat_total = hitung(jumlahobat, hargaobat);
        temp_daftarobat = vitamin[11];
				break;
      case 13 :
				cout<<" 13.) Vegablend 21 Adult Kapsul          "<<endl;
        cout<<"Masukan Jumlah obat : ";
        cin>>jumlahobat ;
        hargaobat = 140000;
        hargaobat_total = hitung(jumlahobat, hargaobat);
        temp_daftarobat = vitamin[12];
				break;
      case 14 :
				cout<<" 14.) Oxyvit D3 60 Kapsul                 "<<endl;
        cout<<"Masukan Jumlah obat : ";
        cin>>jumlahobat ;
        hargaobat = 114100;
        hargaobat_total = hitung(jumlahobat, hargaobat);
        temp_daftarobat = vitamin[13];
				break;
      case 15 :
				cout<<" 15.) Neurobion Forte 10 Tablet          "<<endl;
        cout<<"Masukan Jumlah obat : ";
        cin>>jumlahobat ;
        hargaobat = 34200;
        hargaobat_total = hitung(jumlahobat, hargaobat);
        temp_daftarobat = vitamin[14];
				break;
      case 16 :
				cout<<" 16.) Imboost Kids 21 Tablet Hisap        "<<endl;
        cout<<"Masukan Jumlah obat : ";
        cin>>jumlahobat ;
        hargaobat = 27600;
        hargaobat_total = hitung(jumlahobat, hargaobat);
        temp_daftarobat = vitamin[15];
				break;
      case 17 :
				cout<<" 17.) Prove D3-1000 IU 10 Tablet         "<<endl;
        cout<<"Masukan Jumlah obat : ";
        cin>>jumlahobat ;
        hargaobat = 28000;
        hargaobat_total = hitung(jumlahobat, hargaobat);
        temp_daftarobat = vitamin[16];
				break;
      case 18 :
				cout<<" 18.) Astria 4 mg 12 Kapsul              "<<endl;
        cout<<"Masukan Jumlah obat : ";
        cin>>jumlahobat ;
        hargaobat = 60200;
        hargaobat_total = hitung(jumlahobat, hargaobat);
        temp_daftarobat = vitamin[17];
				break;
      case 19 :
				cout<<" 19.) Halowell E 200 IU 12 Kapsul        "<<endl;
        cout<<"Masukan Jumlah obat : ";
        cin>>jumlahobat ;
        hargaobat = 34000;
        hargaobat_total = hitung(jumlahobat, hargaobat);
        temp_daftarobat = vitamin[18];
				break;
      case 20 :
				cout<<" 20.) Folamil Genio 30 Kapsul            "<<endl;
        cout<<"Masukan Jumlah obat : ";
        cin>>jumlahobat ;
        hargaobat = 127900;
        hargaobat_total = hitung(jumlahobat, hargaobat);
        temp_daftarobat = vitamin[19];
				break;
		}
    }
    else if (memilih == 2){
		cout<<endl<<"======================= OBAT =====================" <<endl;
    cout<<endl;
		cout<<" 1.) Acyclovir 1 Tablet                      Rp 8.000"<<endl;
		cout<<" 2.)  Albothyl                               Rp 30.000"<<endl;
		cout<<" 3.) Alpara                                  Rp 75.665"<<endl;
    cout<<" 4.) Ambroxol 30mg 1 tablet                  Rp 2.860"<<endl;
		cout<<" 5.) Amoxicillin 1 tablet                    Rp 5.120"<<endl;
		cout<<" 6.) Bioplacenton 1 Tube (15 gram)           Rp 19.500"<<endl;
    cout<<" 7.) Calcifar Plus                           Rp 2.102"<<endl;
		cout<<" 8.) Cataflam 25MG TAB 1 Tablet	            Rp 3.800"<<endl;
		cout<<" 9.) Caviplex                                Rp 4.203"<<endl;
    cout<<" 10.) Cefadroxil Syrup                       Rp 12.000"<<endl;
		cout<<" 11.) Cefixime 1 Tablet                      Rp  3.200"<<endl;
		cout<<" 12.) Cetaphil Cetaphil Moisturising Cream 200 Mg Rp 250.000"<<endl;
    cout<<" 13.) Combantrin 1 Strip                     Rp 14.000"<<endl;
		cout<<" 14.) Counterpain salep 15 Gr)               Rp 27.000"<<endl;
		cout<<" 15.) Cetirizine 1 botol isi 350 Tablet      Rp 43.000"<<endl;
    cout<<" 16.) Dextral Forte                          Rp 5.255"<<endl;
		cout<<" 17.) Ever E 1 Strip isi 6 kapsul            Rp 18.000"<<endl;
		cout<<" 18.) Gentamicin Salep 5 Gram                Rp  3.678"<<endl;
    cout<<" 19.) Infus RL Merk Ecosol                   Rp 13.000"<<endl;
		cout<<" 20.) Insto 1 Botol                          Rp 14.000"<<endl;
		cout<<"======================================================="<< endl;
		cout<<"Masukkan pilihan anda) : ";
		cin>>pilihobat;
		switch (pilihobat){
		case 1 :
				cout<<" 1.) Acyclovir 1 Tablet          "<<endl;
        cout<<"Masukan Jumlah obat : ";
        cin>>jumlahobat ;
        hargaobat = 8000;
        hargaobat_total = hitung(jumlahobat, hargaobat);
        temp_daftarobat = obat_dua[0];
				break;
			case 2 :
				cout<<" 2.)  Albothyl                    "<<endl;
        cout<<"Masukan Jumlah obat : ";
        cin>>jumlahobat ;
        hargaobat = 30000;
        hargaobat_total = hitung(jumlahobat, hargaobat);
        temp_daftarobat = obat_dua[1];
				break;
			case 3 :
				cout<<" 3.) Alpara                        "<<endl;
        cout<<"Masukan Jumlah obat : ";
        cin>>jumlahobat ;
        hargaobat = 75665;
        hargaobat_total = hitung(jumlahobat, hargaobat);
        temp_daftarobat = obat_dua[2];
				break;
      case 4 :
				cout<<" 4.) Ambroxol 30mg 1 tablet         "<<endl;
        cout<<"Masukan Jumlah obat : ";
        cin>>jumlahobat ;
        hargaobat = 2860;
        hargaobat_total = hitung(jumlahobat, hargaobat);
        temp_daftarobat = obat_dua[3];
				break;
      case 5 :
				cout<<" 5.) Amoxicillin 1 tablet         "<<endl;
        cout<<"Masukan Jumlah obat : ";
        cin>>jumlahobat ;
        hargaobat = 5120;
        hargaobat_total = hitung(jumlahobat, hargaobat);
        temp_daftarobat = obat_dua[4];
				break;
      case 6 :
				cout<<" 6.) Bioplacenton 1 Tube (15 gram)    "<<endl;
        cout<<"Masukan Jumlah obat : ";
        cin>>jumlahobat ;
        hargaobat = 19500;
        hargaobat_total = hitung(jumlahobat, hargaobat);
        temp_daftarobat = obat_dua[5];
				break;
      case 7 :
				cout<<" 7.) Calcifar Plus                   "<<endl;
        cout<<"Masukan Jumlah obat : ";
        cin>>jumlahobat ;
        hargaobat = 2102;
        hargaobat_total = hitung(jumlahobat, hargaobat);
        temp_daftarobat = obat_dua[6];
				break;
      case 8 :
				cout<<" 8.) Cataflam 25MG TAB 1 Tablet	   "<<endl;
        cout<<"Masukan Jumlah obat : ";
        cin>>jumlahobat ;
        hargaobat = 3.800;
        hargaobat_total = hitung(jumlahobat, hargaobat);
        temp_daftarobat = obat_dua[7];
				break;
      case 9 :
				cout<<" 9.) Caviplex                            "<<endl;
        cout<<"Masukan Jumlah obat : ";
        cin>>jumlahobat ;
        hargaobat = 4203;
        hargaobat_total = hitung(jumlahobat, hargaobat);
        temp_daftarobat = obat_dua[8];
				break;
      case 10 :
				cout<<" 10.) Cefadroxil Syrup                  "<<endl;
        cout<<"Masukan Jumlah obat : ";
        cin>>jumlahobat ;
        hargaobat = 12000;
        hargaobat_total = hitung(jumlahobat, hargaobat);
        temp_daftarobat = obat_dua[9];
				break;
      case 11 :
				cout<<" 11.) Cefixime 1 Tablet               "<<endl;
        cout<<"Masukan Jumlah obat : ";
        cin>>jumlahobat ;
        hargaobat = 3200;
        hargaobat_total = hitung(jumlahobat, hargaobat);
        temp_daftarobat = obat_dua[10];
				break;
      case 12 :
				cout<<" 12.) Cetaphil Cetaphil Moisturising Cream 200 Mg"<<endl;
        cout<<"Masukan Jumlah obat : ";
        cin>>jumlahobat ;
        hargaobat = 250000;
        hargaobat_total = hitung(jumlahobat, hargaobat);
        temp_daftarobat = obat_dua[11];
				break;
      case 13 :
				cout<<" 13.) Combantrin 1 Strip                 "<<endl;
        cout<<"Masukan Jumlah obat : ";
        cin>>jumlahobat ;
        hargaobat = 14000;
        hargaobat_total = hitung(jumlahobat, hargaobat);
        temp_daftarobat = obat_dua[12];
				break;
      case 14 :
				cout<<" 14.) Counterpain salep 15 Gr)            "<<endl;
        cout<<"Masukan Jumlah obat : ";
        cin>>jumlahobat ;
        hargaobat = 27000;
        hargaobat_total = hitung(jumlahobat, hargaobat);
        temp_daftarobat = obat_dua[13];
				break;
      case 15 :
				cout<<" 15.) Cetirizine 1 botol isi 350 Tablet    "<<endl;
        cout<<"Masukan Jumlah obat : ";
        cin>>jumlahobat ;
        hargaobat = 43000;
        hargaobat_total = hitung(jumlahobat, hargaobat);
        temp_daftarobat = obat_dua[14];
				break;
      case 16 :
				cout<<" 16.) Dextral Forte                     "<<endl;
        cout<<"Masukan Jumlah obat : ";
        cin>>jumlahobat ;
        hargaobat = 5255;
        hargaobat_total = hitung(jumlahobat, hargaobat);
        temp_daftarobat = obat_dua[15];
				break;
      case 17 :
				cout<<" 17.) Ever E 1 Strip isi 6 kapsul   "<<endl;
        cout<<"Masukan Jumlah obat : ";
        cin>>jumlahobat ;
        hargaobat =  18000;
        hargaobat_total = hitung(jumlahobat, hargaobat);
        temp_daftarobat = obat_dua[16];
				break;
      case 18 :
				cout<<" 18.) Gentamicin Salep 5 Gram        "<<endl;
        cout<<"Masukan Jumlah obat : ";
        cin>>jumlahobat ;
        hargaobat = 3678;
        hargaobat_total = hitung(jumlahobat, hargaobat);
        temp_daftarobat = obat_dua[17];
				break;
      case 19 :
				cout<<" 19.) Infus RL Merk Ecosol               "<<endl;
        cout<<"Masukan Jumlah obat : ";
        cin>>jumlahobat ;
        hargaobat = 13000;
        hargaobat_total = hitung(jumlahobat, hargaobat);
        temp_daftarobat = obat_dua[18];
				break;
      case 20 :
				cout<<" 20.) Insto 1 Botol                      "<<endl;
        cout<<"Masukan Jumlah obat : ";
        cin>>jumlahobat ;
        hargaobat = 14000;
        hargaobat_total = hitung(jumlahobat, hargaobat);
        temp_daftarobat = obat_dua[19];
				break;
		}
      }
     else if (memilih == 3){
		cout<<endl<<"======================= IBU & BAYI =====================" <<endl;
    cout<<endl;
		cout<<" 1.) SGM eksplore 3 Plus Susu                Rp 79.000"<<endl;
		cout<<" 2.) Cetai]pil Baby daily                    Rp 135.000"<<endl;
		cout<<" 3.) Transpulmin baby Balsam 2 gram          Rp 69.665"<<endl;
    cout<<" 4.) Bepanten Baby salep 20 gram             Rp 39.860"<<endl;
		cout<<" 5.) My Baby Minyak Telon                    Rp 16.120"<<endl;
		cout<<" 6.) Strimar nose Hygiene Baby               Rp 140.500"<<endl;
    cout<<" 7.) Mom Uung ASI Bosster Kapsul             Rp 120.102"<<endl;
		cout<<" 8.) Mama's Chice intensive 	                Rp 99.800"<<endl;
		cout<<" 9.) Neppi baby Wipes Parfum                 Rp 34.203"<<endl;
    cout<<" 10.) Lactacyd Liquid Baby skincare baby     Rp 103.000"<<endl;
		cout<<" 11.) Swetty Bronze Comfort NB-S             Rp 52.200"<<endl;
		cout<<" 12.) Meltafer Table Kunyah                  Rp 16.000"<<endl;
    cout<<" 13.) Asifit Kaplet                          Rp 22.000"<<endl;
		cout<<" 14.) Prolacta For Mother                    Rp 44.000"<<endl;
		cout<<" 15.) Pure Baby Shampo                       Rp 62.000"<<endl;
    cout<<" 16.) Sebamed Baby                           Rp 65.255"<<endl;
		cout<<" 17.) Mamypoko Popok  L                      Rp 50.000"<<endl;
		cout<<" 18.) Milna Baby Biscuit                     Rp 14.678"<<endl;
    cout<<" 19.) Prenagen Momy vanilla Box              Rp 74.000"<<endl;
		cout<<" 20.) Mama's Choice almond                   Rp 104.000"<<endl;
		cout<<"======================================================="<< endl;
		cout<<"Masukkan pilihan anda : ";
		cin>>pilihobat;
		switch (pilihobat){
		case 1 :
				cout<<" 1.) SGM eksplore 3 Plus Susu        "<<endl;
        cout<<"Masukan Jumlah obat : ";
        cin>>jumlahobat ;
        hargaobat = 79000;
        hargaobat_total = hitung(jumlahobat, hargaobat);
        temp_daftarobat = ibu_bayi[0];
				break;
			case 2 :
				cout<<" 2.) Cetaphil Baby daily        "<<endl;
        cout<<"Masukan Jumlah obat : ";
        cin>>jumlahobat ;
        hargaobat = 135000;
        hargaobat_total = hitung(jumlahobat, hargaobat);
        temp_daftarobat = ibu_bayi[1];
				break;
			case 3 :
				cout<<" 3.) Transpulmin baby Balsam 2 gram  "<<endl;
        cout<<"Masukan Jumlah obat : ";
        cin>>jumlahobat ;
        hargaobat = 69665;
        hargaobat_total = hitung(jumlahobat, hargaobat);
        temp_daftarobat = ibu_bayi[2];
				break;
      case 4 :
				cout<<" 4.) Bepanten Baby salep 20 gram      "<<endl;
        cout<<"Masukan Jumlah obat : ";
        cin>>jumlahobat ;
        hargaobat = 39860;
        hargaobat_total = hitung(jumlahobat, hargaobat);
        temp_daftarobat = ibu_bayi[3];
				break;
      case 5 :
				cout<<" 5.) My Baby Minyak Telon                    Rp 16.120"<<endl;
        cout<<"Masukan Jumlah obat : ";
        cin>>jumlahobat ;
        hargaobat = 16120;
        hargaobat_total = hitung(jumlahobat, hargaobat);
        temp_daftarobat = ibu_bayi[4];
				break;
      case 6 :
				cout<<" 6.) Strimar nose Hygiene Baby       "<<endl;
        cout<<"Masukan Jumlah obat : ";
        cin>>jumlahobat ;
        hargaobat = 140500;
        hargaobat_total = hitung(jumlahobat, hargaobat);
        temp_daftarobat = ibu_bayi[5];
				break;
      case 7 :
				cout<<" 7.) Mom Uung ASI Bosster Kapsul    "<<endl;
        cout<<"Masukan Jumlah obat : ";
        cin>>jumlahobat ;
        hargaobat = 120102;
        hargaobat_total = hitung(jumlahobat, hargaobat);
        temp_daftarobat = ibu_bayi[6];
				break;
      case 8 :
				cout<<" 8.) Mama's Chice intensive 	            "<<endl;
        cout<<"Masukan Jumlah obat : ";
        cin>>jumlahobat ;
        hargaobat = 99800;
        hargaobat_total = hitung(jumlahobat, hargaobat);
        temp_daftarobat = ibu_bayi[7];
				break;
      case 9 :
				cout<<" 9.) Neppi baby Wipes Parfum            "<<endl;
        cout<<"Masukan Jumlah obat : ";
        cin>>jumlahobat ;
        hargaobat = 34203;
        hargaobat_total = hitung(jumlahobat, hargaobat);
        temp_daftarobat = ibu_bayi[8];
				break;
      case 10 :
				cout<<" 10.) Lactacyd Liquid Baby skincare baby "<<endl;
        cout<<"Masukan Jumlah obat : ";
        cin>>jumlahobat ;
        hargaobat = 103000;
        hargaobat_total = hitung(jumlahobat, hargaobat);
        temp_daftarobat = ibu_bayi[9];
				break;
      case 11 :
				cout<<" 11.) Swetty Bronze Comfort NB-S    "<<endl;
        cout<<"Masukan Jumlah obat : ";
        cin>>jumlahobat ;
        hargaobat =  52200;
        hargaobat_total = hitung(jumlahobat, hargaobat);
        temp_daftarobat = ibu_bayi[10];
				break;
      case 12 :
				cout<<" 12.) Meltafer Table Kunyah              "<<endl;
        cout<<"Masukan Jumlah obat : ";
        cin>>jumlahobat ;
        hargaobat = 16000;
        hargaobat_total = hitung(jumlahobat, hargaobat);
        temp_daftarobat = ibu_bayi[11];
				break;
      case 13 :
				cout<<" 13.) Asifit Kaplet                     "<<endl;
        cout<<"Masukan Jumlah obat : ";
        cin>>jumlahobat ;
        hargaobat =22000;
        hargaobat_total = hitung(jumlahobat, hargaobat);
        temp_daftarobat = ibu_bayi[12];
				break;
      case 14 :
				cout<<" 14.) Prolacta For Mother            "<<endl;
        cout<<"Masukan Jumlah obat : ";
        cin>>jumlahobat ;
        hargaobat = 44000;
        hargaobat_total = hitung(jumlahobat, hargaobat);
        temp_daftarobat = ibu_bayi[13];
				break;
      case 15 :
				cout<<" 15.) Pure Baby Shampo             "<<endl;
        cout<<"Masukan Jumlah obat : ";
        cin>>jumlahobat ;
        hargaobat = 62000;
        hargaobat_total = hitung(jumlahobat, hargaobat);
        temp_daftarobat = ibu_bayi[14];
				break;
      case 16 :
				cout<<" 16.) Sebamed Baby                "<<endl;
        cout<<"Masukan Jumlah obat : ";
        cin>>jumlahobat ;
        hargaobat = 65255;
        hargaobat_total = hitung(jumlahobat, hargaobat);
        temp_daftarobat = ibu_bayi[15];
				break;
      case 17 :
				cout<<" 17.) Mamypoko Popok  L          "<<endl;
        cout<<"Masukan Jumlah obat : ";
        cin>>jumlahobat ;
        hargaobat =  50000;
        hargaobat_total = hitung(jumlahobat, hargaobat);
        temp_daftarobat = ibu_bayi[16];
				break;
      case 18 :
				cout<<" 18.) Milna Baby Biscuit            "<<endl;
        cout<<"Masukan Jumlah obat : ";
        cin>>jumlahobat ;
        hargaobat = 14678;
        hargaobat_total = hitung(jumlahobat, hargaobat);
        temp_daftarobat = ibu_bayi[17];
				break;
      case 19 :
				cout<<" 19.) Prenagen Momy vanilla Box      "<<endl;
        cout<<"Masukan Jumlah obat : ";
        cin>>jumlahobat ;
        hargaobat = 74000;
        hargaobat_total = hitung(jumlahobat, hargaobat);
        temp_daftarobat = ibu_bayi[18];
				break;
      case 20 :
				cout<<" 20.) Mama's Choice almond            "<<endl;
        cout<<"Masukan Jumlah obat : ";
        cin>>jumlahobat ;
        hargaobat = 104000;
        hargaobat_total = hitung(jumlahobat, hargaobat);
        temp_daftarobat = ibu_bayi[19];
				break;
		}
	}
    else if (memilih == 4){
		cout<<endl<<"======================= ALAT KESEHATAN =====================" <<endl;
    cout<<endl;
		cout<<" 1.) Softies Daily Mask 5                    Rp 10.185"<<endl;
		cout<<" 2.) Softies Daily Mask 30                   Rp 51.500"<<endl;
		cout<<" 3.) Medishield by Paseo Masker              Rp 73.700"<<endl;
    cout<<" 4.) FamilyDr Pulse Oximeter                 Rp 360.000"<<endl;
		cout<<" 5.) Betadine Larutan Antiseptik 5 ml        Rp 7.630"<<endl;
		cout<<" 6.) PS Love MenstruHeat 6 pcs               Rp 19.700"<<endl;
    cout<<" 7.) Vicks Vaporub 10 g                      Rp 7.300"<<endl;
		cout<<" 8.) Easy Touch Cholesterol Test Strip       Rp 157.500"<<endl;
		cout<<" 9.) Rossmax Dual Stetoskop EB-200           Rp 99.900"<<endl;
    cout<<" 10.) Onemed Condom Cath - S (1 Pc)          Rp 13.000"<<endl;
		cout<<" 11.) Serenity Commode FS-813                Rp 607.500"<<endl;
		cout<<" 12.) DoCare Dry Absorbent Gloves            Rp 110.000"<<endl;
    cout<<" 13.) Onemed Ultrafix 15 cm x 5 m            Rp 47.210"<<endl;
		cout<<" 14.) Vivo Vibe Naughty Devil Red            Rp 86.500"<<endl;
		cout<<" 15.) Vivo Stayhard XL Donut Ring            Rp 75.500"<<endl;
    cout<<" 16.) Variteks Pregnancy Corset 109 (L)      Rp 670.000"<<endl;
		cout<<" 17.) Serenity Ultrasonic Nebulizer SR-810B  Rp 1.050.000"<<endl;
		cout<<" 18.) Diapro Value Underpad Size 60 x 90 cm  Rp 32.066"<<endl;
    cout<<" 19.) Serenity Stretcher Trolley SR-E2       Rp 5.775.000"<<endl;
		cout<<" 20.) Serenity Digital Thermometer MT-B132-F Rp 33.750"<<endl;
		cout<<"======================================================="<< endl;
		cout<<"Masukkan pilihan anda : ";
		cin>>pilihobat;
		switch (pilihobat){
		case 1 :
				cout<<" 1.) Softies Daily Mask 5      "<<endl;
        cout<<"Masukan Jumlah obat : ";
        cin>>jumlahobat ;
        hargaobat = 10185;
        hargaobat_total = hitung(jumlahobat, hargaobat);
        temp_daftarobat = alat_kesehatan[0];
				break;
			case 2 :
				cout<<" 2.) Softies Daily Mask 30          "<<endl;
        cout<<"Masukan Jumlah obat : ";
        cin>>jumlahobat ;
        hargaobat = 51500;
        hargaobat_total = hitung(jumlahobat, hargaobat);
        temp_daftarobat = alat_kesehatan[1];
				break;
			case 3 :
				cout<<" 3.) Medishield by Paseo Masker        "<<endl;
        cout<<"Masukan Jumlah obat : ";
        cin>>jumlahobat ;
        hargaobat =73700;
        hargaobat_total = hitung(jumlahobat, hargaobat);
        temp_daftarobat = alat_kesehatan[2];
				break;
      case 4 :
				cout<<" 4.) FamilyDr Pulse Oximeter        "<<endl;
        cout<<"Masukan Jumlah obat : ";
        cin>>jumlahobat ;
        hargaobat =  360000;
        hargaobat_total = hitung(jumlahobat, hargaobat);
        temp_daftarobat = alat_kesehatan[3];
				break;
      case 5 :
				cout<<" 5.) Betadine Larutan Antiseptik 5 ml    "<<endl;
        cout<<"Masukan Jumlah obat : ";
        cin>>jumlahobat ;
        hargaobat = 7630;
        hargaobat_total = hitung(jumlahobat, hargaobat);
        temp_daftarobat = alat_kesehatan[4];
				break;
      case 6 :
				cout<<" 6.) PS Love MenstruHeat 6 pcs         "<<endl;
        cout<<"Masukan Jumlah obat : ";
        cin>>jumlahobat ;
        hargaobat = 19700;
        hargaobat_total = hitung(jumlahobat, hargaobat);
        temp_daftarobat = alat_kesehatan[5];
				break;
      case 7 :
				cout<<" 7.) Vicks Vaporub 10 g                 "<<endl;
        cout<<"Masukan Jumlah obat : ";
        cin>>jumlahobat ;
        hargaobat = 7300;
        hargaobat_total = hitung(jumlahobat, hargaobat);
        temp_daftarobat = alat_kesehatan[6];
				break;
      case 8 :
				cout<<" 8.) Easy Touch Cholesterol Test Strip     "<<endl;
        cout<<"Masukan Jumlah obat : ";
        cin>>jumlahobat ;
        hargaobat = 157500;
        hargaobat_total = hitung(jumlahobat, hargaobat);
        temp_daftarobat = alat_kesehatan[7];
				break;
      case 9 :
				cout<<" 9.) Rossmax Dual Stetoskop EB-200       "<<endl;
        cout<<"Masukan Jumlah obat : ";
        cin>>jumlahobat ;
        hargaobat = 99900;
        hargaobat_total = hitung(jumlahobat, hargaobat);
        temp_daftarobat = alat_kesehatan[8];
				break;
      case 10 :
				cout<<" 10.) Onemed Condom Cath - S (1 Pc)      "<<endl;
        cout<<"Masukan Jumlah obat : ";
        cin>>jumlahobat ;
        hargaobat = 13000;
        hargaobat_total = hitung(jumlahobat, hargaobat);
        temp_daftarobat = alat_kesehatan[9];
				break;
      case 11 :
				cout<<" 11.) Serenity Commode FS-813         "<<endl;
        cout<<"Masukan Jumlah obat : ";
        cin>>jumlahobat ;
        hargaobat =  607500;
        hargaobat_total = hitung(jumlahobat, hargaobat);
        temp_daftarobat = alat_kesehatan[10];
				break;
      case 12 :
				cout<<" 12.) DoCare Dry Absorbent Gloves       "<<endl;
        cout<<"Masukan Jumlah obat : ";
        cin>>jumlahobat ;
        hargaobat = 110.000;
        hargaobat_total = hitung(jumlahobat, hargaobat);
        temp_daftarobat = alat_kesehatan[11];
				break;
      case 13 :
				cout<<" 13.) Onemed Ultrafix 15 cm x 5 m        "<<endl;
        cout<<"Masukan Jumlah obat : ";
        cin>>jumlahobat ;
        hargaobat =47210;
        hargaobat_total = hitung(jumlahobat, hargaobat);
        temp_daftarobat = alat_kesehatan[12];
				break;
      case 14 :
				cout<<" 14.) Vivo Vibe Naughty Devil Red      "<<endl;
        cout<<"Masukan Jumlah obat : ";
        cin>>jumlahobat ;
        hargaobat = 86500;
        hargaobat_total = hitung(jumlahobat, hargaobat);
        temp_daftarobat = alat_kesehatan[13];
				break;
      case 15 :
				cout<<" 15.) Vivo Stayhard XL Donut Ring        "<<endl;
        cout<<"Masukan Jumlah obat : ";
        cin>>jumlahobat ;
        hargaobat = 75500;
        hargaobat_total = hitung(jumlahobat, hargaobat);
        temp_daftarobat = alat_kesehatan[14];
				break;
      case 16 :
				cout<<" 16.) Variteks Pregnancy Corset 109 (L)     "<<endl;
        cout<<"Masukan Jumlah obat : ";
        cin>>jumlahobat ;
        hargaobat = 670000;
        hargaobat_total = hitung(jumlahobat, hargaobat);
        temp_daftarobat = alat_kesehatan[15];
				break;
      case 17 :
				cout<<" 17.) Serenity Ultrasonic Nebulizer SR-810B "<<endl;
        cout<<"Masukan Jumlah obat : ";
        cin>>jumlahobat ;
        hargaobat =  1050000;
        hargaobat_total = hitung(jumlahobat, hargaobat);
        temp_daftarobat = alat_kesehatan[16];
				break;
      case 18 :
				cout<<" 18.) Diapro Value Underpad Size 60 x 90 cm "<<endl;
        cout<<"Masukan Jumlah obat : ";
        cin>>jumlahobat ;
        hargaobat = 32066;
        hargaobat_total = hitung(jumlahobat, hargaobat);
        temp_daftarobat = alat_kesehatan[17];
				break;
      case 19 :
				cout<<" 19.) Serenity Stretcher Trolley SR-E2    "<<endl;
        cout<<"Masukan Jumlah obat : ";
        cin>>jumlahobat ;
        hargaobat =  5775000;
        hargaobat_total = hitung(jumlahobat, hargaobat);
        temp_daftarobat = alat_kesehatan[18];
				break;
      case 20 :
				cout<<" 20.) Serenity Digital Thermometer MT-B132-F "<<endl;
        cout<<"Masukan Jumlah obat : ";
        cin>>jumlahobat ;
        hargaobat = 33750;
        hargaobat_total = hitung(jumlahobat, hargaobat);
        temp_daftarobat = alat_kesehatan[19];
				break;
		}
	}
     else if (memilih == 5){
		cout<<endl<<"======================= MAKANAN & MINUMAN SEHAT =====================" <<endl;
    cout<<endl;
		cout<<" 1.) Bear Brand Susu Steril 189 ml           Rp 9.600"<<endl;
		cout<<" 2.) ISOPRO23 500 ml (1 Pack @ 6 Botol)      Rp 180.000"<<endl;
		cout<<" 3.) Seblang Banyuwangi - Beras Hitam Melik  Rp 37.900"<<endl;
    cout<<" 4.) OCJ - Beras Merah Pecah Kulit Vakum 1kg Rp 40.200"<<endl;
		cout<<" 5.) Tresno Joyo Madu TJ Murni 150 g         Rp 16.275"<<endl;
		cout<<" 6.) Tropicana Slim Sweetener Classic        Rp 76.680"<<endl;
    cout<<" 7.) Woods Lozenges Lemon                    Rp 4.287"<<endl;
		cout<<" 8.) Madu Uray - Raw Honey 875 g (640 mL)    Rp 106.000"<<endl;
		cout<<" 9.) Boost Optimum Nestle Rasa Vanila 400 g  Rp 148.498"<<endl;
    cout<<" 10.) Entramix Susu Rasa Vanila 185 g        Rp 46.900"<<endl;
		cout<<" 11.) WRP Cookies Chocolate 12 x 30 g        Rp 58.500"<<endl;
		cout<<" 12.) Fitmee - Soto 92 g                     Rp 19.900"<<endl;
    cout<<" 13.) WRP Delichips Salt & Pepper 12 x 40 g  Rp 78.500"<<endl;
		cout<<" 14.) Bionic Farm - Sweetatoes Keripik Ubi   Rp 13.900"<<endl;
		cout<<" 15.) Francis Organic Almond Drink           Rp 35.000"<<endl;
    cout<<" 16.) Heavenly Blush Tummy Yogurt Bar Berries Rp 84.000"<<endl;
		cout<<" 17.) Chia-Yo Homemade Granola Dark Chocolate Rp 95.000"<<endl;
		cout<<" 18.) Tropicana Slim Korean Garlic Butter Cookies Rp 26.800"<<endl;
    cout<<" 19.) East Bali Cashews - Granola Bites Chocolate Vanilla 125 g Rp 32.500"<<endl;
		cout<<" 20.) Ashitaki Creamy Latte Original 24 g (1 Box @ 5 Sachet) Rp 18.500"<<endl;
		cout<<"======================================================="<< endl;
		cout<<"Masukkan pilihan anda : ";
		cin>>pilihobat;
		switch (pilihobat){
		case 1 :
				cout<<" 1.) Bear Brand Susu Steril 189 ml       "<<endl;
        cout<<"Masukan Jumlah obat : ";
        cin>>jumlahobat ;
        hargaobat = 9600;
        hargaobat_total = hitung(jumlahobat, hargaobat);
        temp_daftarobat = makanansehat[0];
				break;
			case 2 :
				cout<<" 2.) ISOPRO23 500 ml (1 Pack @ 6 Botol)   "<<endl;
        cout<<"Masukan Jumlah obat : ";
        cin>>jumlahobat ;
        hargaobat =  180000;
        hargaobat_total = hitung(jumlahobat, hargaobat);
        temp_daftarobat = makanansehat[1];
				break;
			case 3 :
				cout<<" 3.) Seblang Banyuwangi - Beras Hitam Melik "<<endl;
        cout<<"Masukan Jumlah obat : ";
        cin>>jumlahobat ;
        hargaobat =37900;
        hargaobat_total = hitung(jumlahobat, hargaobat);
        temp_daftarobat = makanansehat[2];
				break;
      case 4 :
				cout<<" 4.) OCJ - Beras Merah Pecah Kulit Vakum 1kg "<<endl;
        cout<<"Masukan Jumlah obat : ";
        cin>>jumlahobat ;
        hargaobat =  40200;
        hargaobat_total = hitung(jumlahobat, hargaobat);
        temp_daftarobat = makanansehat[3];
				break;
      case 5 :
				cout<<" 5.) Tresno Joyo Madu TJ Murni 150 g     "<<endl;
        cout<<"Masukan Jumlah obat : ";
        cin>>jumlahobat ;
        hargaobat = 16275;
        hargaobat_total = hitung(jumlahobat, hargaobat);
        temp_daftarobat = makanansehat[4];
				break;
      case 6 :
				cout<<" 6.) Tropicana Slim Sweetener Classic     "<<endl;
        cout<<"Masukan Jumlah obat : ";
        cin>>jumlahobat ;
        hargaobat = 76680;
        hargaobat_total = hitung(jumlahobat, hargaobat);
        temp_daftarobat = makanansehat[5];
				break;
      case 7 :
				cout<<" 7.) Woods Lozenges Lemon          "<<endl;
        cout<<"Masukan Jumlah obat : ";
        cin>>jumlahobat ;
        hargaobat = 4287;
        hargaobat_total = hitung(jumlahobat, hargaobat);
        temp_daftarobat = makanansehat[6];
				break;
      case 8 :
				cout<<" 8.) Madu Uray - Raw Honey 875 g (640 mL)   "<<endl;
        cout<<"Masukan Jumlah obat : ";
        cin>>jumlahobat ;
        hargaobat = 106000;
        hargaobat_total = hitung(jumlahobat, hargaobat);
        temp_daftarobat = makanansehat[7];
				break;
      case 9 :
				cout<<" 9.) Boost Optimum Nestle Rasa Vanila 400 g "<<endl;
        cout<<"Masukan Jumlah obat : ";
        cin>>jumlahobat ;
        hargaobat = 148498;
        hargaobat_total = hitung(jumlahobat, hargaobat);
        temp_daftarobat = makanansehat[8];
				break;
      case 10 :
				cout<<" 10.) Entramix Susu Rasa Vanila 185 g    "<<endl;
        cout<<"Masukan Jumlah obat : ";
        cin>>jumlahobat ;
        hargaobat = 46900;
        hargaobat_total = hitung(jumlahobat, hargaobat);
        temp_daftarobat = makanansehat[9];
				break;
      case 11 :
				cout<<" 11.) WRP Cookies Chocolate 12 x 30 g      "<<endl;
        cout<<"Masukan Jumlah obat : ";
        cin>>jumlahobat ;
        hargaobat =  58500;
        hargaobat_total = hitung(jumlahobat, hargaobat);
        temp_daftarobat = makanansehat[10];
				break;
      case 12 :
				cout<<" 12.) Fitmee - Soto 92 g             "<<endl;
        cout<<"Masukan Jumlah obat : ";
        cin>>jumlahobat ;
        hargaobat = 19900.;
        hargaobat_total = hitung(jumlahobat, hargaobat);
        temp_daftarobat = makanansehat[11];
				break;
      case 13 :
				cout<<" 13.) WRP Delichips Salt & Pepper 12 x 40 g  "<<endl;
        cout<<"Masukan Jumlah obat : ";
        cin>>jumlahobat ;
        hargaobat =78500;
        hargaobat_total = hitung(jumlahobat, hargaobat);
        temp_daftarobat = makanansehat[12];
				break;
      case 14 :
				cout<<" 14.) Bionic Farm - Sweetatoes Keripik Ubi   "<<endl;
        cout<<"Masukan Jumlah obat : ";
        cin>>jumlahobat ;
        hargaobat = 13900;
        hargaobat_total = hitung(jumlahobat, hargaobat);
        temp_daftarobat = makanansehat[13];
				break;
      case 15 :
				cout<<" 15.) Francis Organic Almond Drink      "<<endl;
        cout<<"Masukan Jumlah obat : ";
        cin>>jumlahobat ;
        hargaobat = 35000;
        hargaobat_total = hitung(jumlahobat, hargaobat);
        temp_daftarobat = makanansehat[14];
				break;
      case 16 :
				cout<<" 16.) Heavenly Blush Tummy Yogurt Bar Berries"<<endl;
        cout<<"Masukan Jumlah obat : ";
        cin>>jumlahobat ;
        hargaobat = 84000;
        hargaobat_total = hitung(jumlahobat, hargaobat);
        temp_daftarobat = makanansehat[15];
				break;
      case 17 :
				cout<<" 17.) Chia-Yo Homemade Granola Dark Chocolate"<<endl;
        cout<<"Masukan Jumlah obat : ";
        cin>>jumlahobat ;
        hargaobat =  95000;
        hargaobat_total = hitung(jumlahobat, hargaobat);
        temp_daftarobat = makanansehat[16];
				break;
      case 18 :
				cout<<" 18.) Tropicana Slim Korean Garlic Butter Cookies"<<endl;
        cout<<"Masukan Jumlah obat : ";
        cin>>jumlahobat ;
        hargaobat = 26800;
        hargaobat_total = hitung(jumlahobat, hargaobat);
        temp_daftarobat = makanansehat[17];
				break;
      case 19 :
				cout<<" 19.) East Bali Cashews - Granola Bites Chocolate Vanilla 125 g "<<endl;
        cout<<"Masukan Jumlah obat : ";
        cin>>jumlahobat ;
        hargaobat =  32500;
        hargaobat_total = hitung(jumlahobat, hargaobat);
        temp_daftarobat = makanansehat[18];
				break;
      case 20 :
				cout<<" 20.) Ashitaki Creamy Latte Original 24 g (1 Box @ 5 Sachet) "<<endl;
        cout<<"Masukan Jumlah obat : ";
        cin>>jumlahobat ;
        hargaobat = 18500;
        hargaobat_total = hitung(jumlahobat, hargaobat);
        temp_daftarobat = makanansehat[19];
				break;
		}
	}
       else if (memilih == 6){
		cout<<endl<<"======================= KESEHATAN MULUT & GIGI=========================" <<endl;
    cout<<endl;
		cout<<" 1.) Gingivectomy - Laura-Sum Dental Care (LDC) Clinic  Rp 350.000"<<endl;
		cout<<" 2.) Metal Konven Braces (Atas & Bawah) - E Dental Care Rp 2.750.000"<<endl;
		cout<<" 3.) Tambal Gigi Ringan - RS Lancang Kuning   Rp 100.000"<<endl;
    cout<<" 4.) Topical Flour - Widia Dental Care        Rp 200.000 Rp 40.200"<<endl;
		cout<<" 5.) Dental Spa - Widia Dental Care           Rp 350.000"<<endl;
		cout<<" 6.) Clear Retainer Atas & Bawah - Laura-Sum Dental Care (LDC) Clinic Rp 1.000.000"<<endl;
    cout<<" 7.) Scaling Gigi - RS Sumber Waras Cirebon    Rp 199.000"<<endl;
		cout<<" 8.) Gingivektomi (Per Rahang) - E Dental Care Rp 2.750.000"<<endl;
		cout<<" 9.) Crown Gigi Emax - Widia Dental Care       Rp 3.500.000"<<endl;
    cout<<" 10.) Maryland Birdge - Widia Dental Care      Rp 2.000.000"<<endl;
		cout<<" 11.) Gigi Palsu Flexy Plat Valplast + 1 Elemen Gigi - RRDC Dental Care Rp 2.200.000"<<endl;
		cout<<" 12.) Teeth Whitening + Scaling - MP Clinic    Rp 2.600.000"<<endl;
    cout<<" 13.) Bleaching Gigi dan Dental Spa - RRDC Dental Care    Rp 1.950.000"<<endl;
		cout<<" 14.) Klar Aligner Basic - Widia Dental Care   Rp 10.000.000"<<endl;
		cout<<" 15.) Retainer - Widia Dental Care             Rp 500.000"<<endl;
    cout<<" 16.) Veneer Direct Composite 1 Gigi & Dental Check Up - A8 Dental Rp 1.000.000"<<endl;
		cout<<" 17.) Perawatan Orthodontic Metal Bracket - Pixel Dental  Rp 5.500.000"<<endl;
		cout<<" 18.) Cabut Gigi Dewasa - Widia Dental Care         Rp 250.000"<<endl;
    cout<<" 19.) Scaling Gigi - Agata Dental Clinic            Rp 499.000"<<endl;
		cout<<" 20.) Klar Aligner Advance - Widia Dental Care      Rp 13.000.000"<<endl;
		cout<<"======================================================="<< endl;
		cout<<"Masukkan pilihan anda : ";
		cin>>pilihobat;
		switch (pilihobat){
		case 1 :
				cout<<" 1.) Gingivectomy - Laura-Sum Dental Care (LDC) Clinic "<<endl;
        cout<<"Masukan Jumlah obat : ";
        cin>>jumlahobat ;
        hargaobat = 350000;
        hargaobat_total = hitung(jumlahobat, hargaobat);
        temp_daftarobat = gigi[0];
				break;
			case 2 :
				cout<<" 2.) Metal Konven Braces (Atas & Bawah) - E Dental Care "<<endl;
        cout<<"Masukan Jumlah obat : ";
        cin>>jumlahobat ;
        hargaobat =  2750000;
        hargaobat_total = hitung(jumlahobat, hargaobat);
        temp_daftarobat = gigi[1];
				break;
			case 3 :
				cout<<" 3.) Tambal Gigi Ringan - RS Lancang Kuning "<<endl;
        cout<<"Masukan Jumlah obat : ";
        cin>>jumlahobat ;
        hargaobat =100000;
        hargaobat_total = hitung(jumlahobat, hargaobat);
        temp_daftarobat = gigi[2];
				break;
      case 4 :
				 cout<<" 4.) Topical Flour - Widia Dental Care    "<<endl;
        cout<<"Masukan Jumlah obat : ";
        cin>>jumlahobat ;
        hargaobat =  200000 ;
        hargaobat_total = hitung(jumlahobat, hargaobat);
        temp_daftarobat = gigi[3];
				break;
      case 5 :
				cout<<" 5.) Dental Spa - Widia Dental Care      "<<endl;
        cout<<"Masukan Jumlah obat : ";
        cin>>jumlahobat ;
        hargaobat = 350000;
        hargaobat_total = hitung(jumlahobat, hargaobat);
        temp_daftarobat = gigi[4];
				break;
      case 6 :
				cout<<" 6.) Clear Retainer Atas & Bawah - Laura-Sum Dental Care (LDC) Clinic "<<endl;
        cout<<"Masukan Jumlah obat : ";
        cin>>jumlahobat ;
        hargaobat = 1000000;
        hargaobat_total = hitung(jumlahobat, hargaobat);
        temp_daftarobat = gigi[5];
				break;
      case 7 :
				cout<<" 7.) Scaling Gigi - RS Sumber Waras Cirebon   "<<endl;
        cout<<"Masukan Jumlah obat : ";
        cin>>jumlahobat ;
        hargaobat = 199000;
        hargaobat_total = hitung(jumlahobat, hargaobat);
        temp_daftarobat = gigi[6];
				break;
      case 8 :
				cout<<" 8.) Gingivektomi (Per Rahang) - E Dental Care "<<endl;
        cout<<"Masukan Jumlah obat : ";
        cin>>jumlahobat ;
        hargaobat = 2750000;
        hargaobat_total = hitung(jumlahobat, hargaobat);
        temp_daftarobat = gigi[7];
				break;
      case 9 :
				cout<<" 9.) Crown Gigi Emax - Widia Dental Care   0"<<endl;
        cout<<"Masukan Jumlah obat : ";
        cin>>jumlahobat ;
        hargaobat = 3500000;
        hargaobat_total = hitung(jumlahobat, hargaobat);
        temp_daftarobat = gigi[8];
				break;
      case 10 :
				cout<<" 10.) Maryland Birdge - Widia Dental Care   "<<endl;
        cout<<"Masukan Jumlah obat : ";
        cin>>jumlahobat ;
        hargaobat = 2000000;
        hargaobat_total = hitung(jumlahobat, hargaobat);
        temp_daftarobat = gigi[9];
				break;
      case 11 :
				cout<<" 11.) Gigi Palsu Flexy Plat Valplast + 1 Elemen Gigi - RRDC Dental Care "<<endl;
        cout<<"Masukan Jumlah obat : ";
        cin>>jumlahobat ;
        hargaobat =  2200000;
        hargaobat_total = hitung(jumlahobat, hargaobat);
        temp_daftarobat = gigi[10];
				break;
      case 12 :
				cout<<" 12.) Teeth Whitening + Scaling - MP Clinic  "<<endl;
        cout<<"Masukan Jumlah obat : ";
        cin>>jumlahobat ;
        hargaobat =  2600000.;
        hargaobat_total = hitung(jumlahobat, hargaobat);
        temp_daftarobat = gigi[11];
				break;
      case 13 :
				cout<<" 13.) Bleaching Gigi dan Dental Spa - RRDC Dental Care   "<<endl;
        cout<<"Masukan Jumlah obat : ";
        cin>>jumlahobat ;
        hargaobat =1950000;
        hargaobat_total = hitung(jumlahobat, hargaobat);
        temp_daftarobat = gigi[12];
				break;
      case 14 :
				cout<<" 14.) Klar Aligner Basic - Widia Dental Care  "<<endl;
        cout<<"Masukan Jumlah obat : ";
        cin>>jumlahobat ;
        hargaobat = 10000000;
        hargaobat_total = hitung(jumlahobat, hargaobat);
        temp_daftarobat = gigi[13];
				break;
      case 15 :
				cout<<" 15.) Retainer - Widia Dental Care      "<<endl;
        cout<<"Masukan Jumlah obat : ";
        cin>>jumlahobat ;
        hargaobat = 500000;
        hargaobat_total = hitung(jumlahobat, hargaobat);
        temp_daftarobat = gigi[14];
				break;
      case 16 :
				cout<<" 16.) Veneer Direct Composite 1 Gigi & Dental Check Up - A8 Dental "<<endl;
        cout<<"Masukan Jumlah obat : ";
        cin>>jumlahobat ;
        hargaobat = 1000000;
        hargaobat_total = hitung(jumlahobat, hargaobat);
        temp_daftarobat = gigi[15];
				break;
      case 17 :
				cout<<" 17.) Perawatan Orthodontic Metal Bracket - Pixel Dental "<<endl;
        cout<<"Masukan Jumlah obat : ";
        cin>>jumlahobat ;
        hargaobat =  5500000;
        hargaobat_total = hitung(jumlahobat, hargaobat);
        temp_daftarobat = gigi[16];
				break;
      case 18 :
				cout<<" 18.) Cabut Gigi Dewasa - Widia Dental Care      "<<endl;
        cout<<"Masukan Jumlah obat : ";
        cin>>jumlahobat ;
        hargaobat =  250000;
        hargaobat_total = hitung(jumlahobat, hargaobat);
        temp_daftarobat = gigi[17];
				break;
      case 19 :
				cout<<" 19.) Scaling Gigi - Agata Dental Clinic     "<<endl;
        cout<<"Masukan Jumlah obat : ";
        cin>>jumlahobat ;
        hargaobat =   499000;
        hargaobat_total = hitung(jumlahobat, hargaobat);
        temp_daftarobat = gigi[18];
				break;
      case 20 :
				cout<<" 20.) Klar Aligner Advance - Widia Dental Care   "<<endl;
        cout<<"Masukan Jumlah obat : ";
        cin>>jumlahobat ;
        hargaobat = 13000000;
        hargaobat_total = hitung(jumlahobat, hargaobat);
        temp_daftarobat = gigi[19];
				break;
		}
	}
    else if (memilih == 7){
		cout<<endl<<"======================= SKINCARE =========================" <<endl;
    cout<<endl;
		cout<<" 1.) Avoskin Miraculous Refining Serum 30 ml      Rp 249.000"<<endl;
		cout<<" 2.) Avoskin Perfect Hydrating Treatment Essence 30 ml   Rp 149.000"<<endl;
		cout<<" 3.) Avoskin Hydrating Treatment Essence 100 mL          Rp 119.000"<<endl;
    cout<<" 4.) Scarlett Facial Wash Normal Original 100 ml         Rp 55.000"<<endl;
		cout<<" 5.) Scarlett Scarlet Whitening Brightly Ever After Serum Original 15 ml   Rp 55.000"<<endl;
		cout<<" 6.) Scarlett Whitening Acne Serum Original 15 ml        Rp 55.000"<<endl;
    cout<<" 7.) Avoskin Miraculous Retinol Ampoule 30 mL            Rp 259.000"<<endl;
		cout<<" 8.) Avoskin Miraculous Refining Toner 100 ml            Rp 195.000"<<endl;
		cout<<" 9.) Avoskin Advanced Action Eye Ampoule 12 ml           Rp 219.000"<<endl;
    cout<<" 10.) Avoskin Intensive Nourishing Eye Cream 10 g        Rp 149.000"<<endl;
		cout<<" 11.) Cetaphil Gentle Skin Cleanser 1L                   Rp 290.750"<<endl;
		cout<<" 12.) Avoskin Your Skin Bae Niacinamide 12% + Centella Asiatica   Rp 139.000"<<endl;
    cout<<" 13.) Avoskin New Ultra Brightening Cream 10 g           Rp 169.000"<<endl;
		cout<<" 14.) Avoskin Miraculous Refining Toner 20 ml            Rp 99.000"<<endl;
		cout<<" 15.) Avoskin Your Skin Bae Alpha Arbutin 3% + Grapeseed Serum 30 ml  Rp 139.000"<<endl;
    cout<<" 16.) Avoskin Your Skin Bae Marine Collagen 10% + Ginseng Root   Rp 139.000"<<endl;
		cout<<" 17.) Avoskin Natural Sublime Facial Cleanser 100 ml      Rp 119.000"<<endl;
		cout<<" 18.) Avoskin Perfect Hydrating Treatment Essence 100 ml  Rp 299.000"<<endl;
    cout<<" 19.) Avoskin Your Skin Bae Ultimate Hyaluron Hyacross 3% + Green Tea   Rp 139.000"<<endl;
		cout<<" 20.) Avoskin Naufa Pure Olive Oil Bar Soap               Rp 22.000"<<endl;
		cout<<"======================================================="<< endl;
		cout<<"Masukkan pilihan anda : ";
		cin>>pilihobat;
		switch (pilihobat){
		case 1 :
				cout<<" 1.) Avoskin Miraculous Refining Serum 30 ml   "<<endl;
        cout<<"Masukan Jumlah obat : ";
        cin>>jumlahobat ;
        hargaobat = 249000;
        hargaobat_total = hitung(jumlahobat, hargaobat);
        temp_daftarobat = skin[0];
				break;
			case 2 :
				cout<<" 2.) Avoskin Perfect Hydrating Treatment Essence 30 ml  "<<endl;
        cout<<"Masukan Jumlah obat : ";
        cin>>jumlahobat ;
        hargaobat =  149000;
        hargaobat_total = hitung(jumlahobat, hargaobat);
        temp_daftarobat = skin[1];
				break;
			case 3 :
				cout<<" 3.) Avoskin Hydrating Treatment Essence 100 mL          Rp 119.000"<<endl;
        cout<<"Masukan Jumlah obat : ";
        cin>>jumlahobat ;
        hargaobat =  119000;
        hargaobat_total = hitung(jumlahobat, hargaobat);
        temp_daftarobat = skin[2];
				break;
      case 4 :
				  cout<<" 4.) Scarlett Facial Wash Normal Original 100 ml      "<<endl;
        cout<<"Masukan Jumlah obat : ";
        cin>>jumlahobat ;
        hargaobat =  55000 ;
        hargaobat_total = hitung(jumlahobat, hargaobat);
        temp_daftarobat = skin[3];
				break;
      case 5 :
				cout<<" 5.) Scarlett Scarlet Whitening Brightly Ever After Serum Original 15 ml  "<<endl;
        cout<<"Masukan Jumlah obat : ";
        cin>>jumlahobat ;
        hargaobat = 55000;
        hargaobat_total = hitung(jumlahobat, hargaobat);
        temp_daftarobat = skin[4];
				break;
      case 6 :
				cout<<" 6.) Scarlett Whitening Acne Serum Original 15 ml    "<<endl;
        cout<<"Masukan Jumlah obat : ";
        cin>>jumlahobat ;
        hargaobat = 55000;
        hargaobat_total = hitung(jumlahobat, hargaobat);
        temp_daftarobat = skin[5];
				break;
      case 7 :
				cout<<" 7.) Avoskin Miraculous Retinol Ampoule 30 mL       "<<endl;
        cout<<"Masukan Jumlah obat : ";
        cin>>jumlahobat ;
        hargaobat = 259000;
        hargaobat_total = hitung(jumlahobat, hargaobat);
        temp_daftarobat = skin[6];
				break;
      case 8 :
				cout<<" 8.) Avoskin Miraculous Refining Toner 100 ml       "<<endl;
        cout<<"Masukan Jumlah obat : ";
        cin>>jumlahobat ;
        hargaobat = 195000;
        hargaobat_total = hitung(jumlahobat, hargaobat);
        temp_daftarobat = skin[7];
				break;
      case 9 :
				cout<<" 9.) Avoskin Advanced Action Eye Ampoule 12 ml      "<<endl;
        cout<<"Masukan Jumlah obat : ";
        cin>>jumlahobat ;
        hargaobat = 219000;
        hargaobat_total = hitung(jumlahobat, hargaobat);
        temp_daftarobat = skin[8];
				break;
      case 10 :
				cout<<" 10.) Avoskin Intensive Nourishing Eye Cream 10 g   "<<endl;
        cout<<"Masukan Jumlah obat : ";
        cin>>jumlahobat ;
        hargaobat = 149000;
        hargaobat_total = hitung(jumlahobat, hargaobat);
        temp_daftarobat = skin[9];
				break;
      case 11 :
				cout<<" 11.) Cetaphil Gentle Skin Cleanser 1L           "<<endl;
        cout<<"Masukan Jumlah obat : ";
        cin>>jumlahobat ;
        hargaobat =  290750;
        hargaobat_total = hitung(jumlahobat, hargaobat);
        temp_daftarobat = skin[10];
				break;
      case 12 :
				cout<<" 12.) Avoskin Your Skin Bae Niacinamide 12% + Centella Asiatica "<<endl;
        cout<<"Masukan Jumlah obat : ";
        cin>>jumlahobat ;
        hargaobat =  139000.;
        hargaobat_total = hitung(jumlahobat, hargaobat);
        temp_daftarobat = skin[11];
				break;
      case 13 :
				 cout<<" 13.) Avoskin New Ultra Brightening Cream 10 g    "<<endl;
        cout<<"Masukan Jumlah obat : ";
        cin>>jumlahobat ;
        hargaobat =169000;
        hargaobat_total = hitung(jumlahobat, hargaobat);
        temp_daftarobat = skin[12];
				break;
      case 14 :
				cout<<" 14.) Avoskin Miraculous Refining Toner 20 ml     "<<endl;
        cout<<"Masukan Jumlah obat : ";
        cin>>jumlahobat ;
        hargaobat = 99000;
        hargaobat_total = hitung(jumlahobat, hargaobat);
        temp_daftarobat = skin[13];
				break;
      case 15 :
				cout<<" 15.) Avoskin Your Skin Bae Alpha Arbutin 3% + Grapeseed Serum 30 ml   "<<endl;
        cout<<"Masukan Jumlah obat : ";
        cin>>jumlahobat ;
        hargaobat = 139000;
        hargaobat_total = hitung(jumlahobat, hargaobat);
        temp_daftarobat = skin[14];
				break;
      case 16 :
				cout<<" 16.) Avoskin Your Skin Bae Marine Collagen 10% + Ginseng Root  "<<endl;
        cout<<"Masukan Jumlah obat : ";
        cin>>jumlahobat ;
        hargaobat =  139000;
        hargaobat_total = hitung(jumlahobat, hargaobat);
        temp_daftarobat = skin[15];
				break;
      case 17 :
				cout<<" 17.) Avoskin Natural Sublime Facial Cleanser 100 ml  "<<endl;
        cout<<"Masukan Jumlah obat : ";
        cin>>jumlahobat ;
        hargaobat =  119000;
        hargaobat_total = hitung(jumlahobat, hargaobat);
        temp_daftarobat = skin[16];
				break;
      case 18 :
				cout<<" 18.) Avoskin Perfect Hydrating Treatment Essence 100 ml "<<endl;
        cout<<"Masukan Jumlah obat : ";
        cin>>jumlahobat ;
        hargaobat =  299000;
        hargaobat_total = hitung(jumlahobat, hargaobat);
        temp_daftarobat = skin[17];
				break;
      case 19 :
			 cout<<" 19.) Avoskin Your Skin Bae Ultimate Hyaluron Hyacross 3% + Green Tea  "<<endl;
        cout<<"Masukan Jumlah obat : ";
        cin>>jumlahobat ;
        hargaobat =   39000;
        hargaobat_total = hitung(jumlahobat, hargaobat);
        temp_daftarobat = skin[18];
				break;
      case 20 :
				cout<<" 20.) Avoskin Naufa Pure Olive Oil Bar Soap      "<<endl;
        cout<<"Masukan Jumlah obat : ";
        cin>>jumlahobat ;
        hargaobat =  22000;
        hargaobat_total = hitung(jumlahobat, hargaobat);
        temp_daftarobat = skin[19];
				break;
		}
	}
    else if (memilih == 8){
		cout<<endl<<"======================= PERAWATAN TUBUH =========================" <<endl;
    cout<<endl;
		cout<<" 1.) Softies Wet Wipes Antibacterial Antiseptic 20s      Rp 14.900"<<endl;
		cout<<" 2.) Cap Lang Minyak Kayu Putih 210 ml                   Rp 63.939"<<endl;
		cout<<" 3.) Bio Oil 125 ml                                      Rp 178.000"<<endl;
    cout<<" 4.) Scarlett Shower Scrub Mango Original Sabun 300 g    Rp 55.000"<<endl;
		cout<<" 5.) Betadine Sabun Cair Antiseptik 100 ml               Rp 34.786"<<endl;
		cout<<" 6.) FreshCare Citrus Roll On 10 ml                      Rp 11.300"<<endl;
    cout<<" 7.) Sebamed Liquid Face & Body Wash 200 ml              Rp 147.208"<<endl;
		cout<<" 8.) Noroid Soothing Cream 80 ml                         Rp 145.000"<<endl;
		cout<<" 9.) NIVEA Extra White Care & Protect SPF15 Serum 180ml - Twin Pack   Rp 67.636"<<endl;
    cout<<" 10.) Antis Refill Jeruk Nipis 300 ml - 2 Pouch          Rp 52.480"<<endl;
		cout<<" 11.) Plossa Minyak Angin Eucalyptus 10 ml               Rp 10.500"<<endl;
		cout<<" 12.) Noroid Soothing Lotion 200 ml                      Rp 159.000"<<endl;
    cout<<" 13.) Acanthe Sunscreen SPF 30 Krim 30 g                 Rp 73.849"<<endl;
		cout<<" 14.) Caladine Cream 15 g                                Rp 7.210"<<endl;
		cout<<" 15.) NIVEA Deodorant Invisible Black & White Roll On 50 ml  Rp 22.200"<<endl;
    cout<<" 16.) VITAFLOW Multi Purpose Sanitizer 50 mL             Rp 52.000"<<endl;
		cout<<" 17.) Scarlett Whitening Body Scrub Pomegrante Original Lulur 300 g   Rp 55.000"<<endl;
		cout<<" 18.) NIVEA Soft Jar 100 ml                              Rp 25.200"<<endl;
    cout<<" 19.) Mama's Choice Intensive Nipple Cream 15 ml         Rp 99.0000"<<endl;
		cout<<" 20.) QV Intensive Cream 100 g                           Rp 137.857"<<endl;
		cout<<"======================================================="<< endl;
		cout<<"Masukkan pilihan anda : ";
		cin>>pilihobat;
		switch (pilihobat){
		case 1 :
				cout<<" 1.) Softies Wet Wipes Antibacterial Antiseptic 20s  "<<endl;
        cout<<"Masukan Jumlah obat : ";
        cin>>jumlahobat ;
        hargaobat = 14900;
        hargaobat_total = hitung(jumlahobat, hargaobat);
        temp_daftarobat = tubuh[0];
				break;
			case 2 :
				cout<<" 2.) Cap Lang Minyak Kayu Putih 210 ml        "<<endl;
        cout<<"Masukan Jumlah obat : ";
        cin>>jumlahobat ;
        hargaobat =  63939;
        hargaobat_total = hitung(jumlahobat, hargaobat);
        temp_daftarobat = tubuh[1];
				break;
			case 3 :
				cout<<" 3.) Bio Oil 125 ml                "<<endl;
        cout<<"Masukan Jumlah obat : ";
        cin>>jumlahobat ;
        hargaobat =  178000;
        hargaobat_total = hitung(jumlahobat, hargaobat);
        temp_daftarobat = tubuh[2];
				break;
      case 4 :
				cout<<" 4.) Scarlett Shower Scrub Mango Original Sabun 300 g  "<<endl;
        cout<<"Masukan Jumlah obat : ";
        cin>>jumlahobat ;
        hargaobat =  55000 ;
        hargaobat_total = hitung(jumlahobat, hargaobat);
        temp_daftarobat = tubuh[3];
				break;
      case 5 :
				cout<<" 5.) Betadine Sabun Cair Antiseptik 100 ml      "<<endl;
        cout<<"Masukan Jumlah obat : ";
        cin>>jumlahobat ;
        hargaobat = 34786;
        hargaobat_total = hitung(jumlahobat, hargaobat);
        temp_daftarobat = tubuh[4];
				break;
      case 6 :
				cout<<" 6.) FreshCare Citrus Roll On 10 ml              "<<endl;
        cout<<"Masukan Jumlah obat : ";
        cin>>jumlahobat ;
        hargaobat = 11300;
        hargaobat_total = hitung(jumlahobat, hargaobat);
        temp_daftarobat = tubuh[5];
				break;
      case 7 :
				cout<<" 7.) Sebamed Liquid Face & Body Wash 200 ml       "<<endl;
        cout<<"Masukan Jumlah obat : ";
        cin>>jumlahobat ;
        hargaobat = 147208;
        hargaobat_total = hitung(jumlahobat, hargaobat);
        temp_daftarobat = tubuh[6];
				break;
      case 8 :
				cout<<" 8.) Noroid Soothing Cream 80 ml                "<<endl;
        cout<<"Masukan Jumlah obat : ";
        cin>>jumlahobat ;
        hargaobat = 145000;
        hargaobat_total = hitung(jumlahobat, hargaobat);
        temp_daftarobat = tubuh[7];
				break;
      case 9 :
				cout<<" 9.) NIVEA Extra White Care & Protect SPF15 Serum 180ml - Twin Pack  "<<endl;
        cout<<"Masukan Jumlah obat : ";
        cin>>jumlahobat ;
        hargaobat = 6763;
        hargaobat_total = hitung(jumlahobat, hargaobat);
        temp_daftarobat = tubuh[8];
				break;
      case 10 :
				cout<<" 10.) Antis Refill Jeruk Nipis 300 ml - 2 Pouch      "<<endl;
        cout<<"Masukan Jumlah obat : ";
        cin>>jumlahobat ;
        hargaobat = 52480;
        hargaobat_total = hitung(jumlahobat, hargaobat);
        temp_daftarobat = tubuh[9];
				break;
      case 11 :
				cout<<" 11.) Plossa Minyak Angin Eucalyptus 10 ml      "<<endl;
        cout<<"Masukan Jumlah obat : ";
        cin>>jumlahobat ;
        hargaobat =  10500;
        hargaobat_total = hitung(jumlahobat, hargaobat);
        temp_daftarobat = tubuh[10];
				break;
      case 12 :
				cout<<" 12.) Noroid Soothing Lotion 200 ml              "<<endl;
        cout<<"Masukan Jumlah obat : ";
        cin>>jumlahobat ;
        hargaobat =  159000.;
        hargaobat_total = hitung(jumlahobat, hargaobat);
        temp_daftarobat = tubuh[11];
				break;
      case 13 :
				cout<<" 13.) Acanthe Sunscreen SPF 30 Krim 30 g           "<<endl;
        cout<<"Masukan Jumlah obat : ";
        cin>>jumlahobat ;
        hargaobat =73849;
        hargaobat_total = hitung(jumlahobat, hargaobat);
        temp_daftarobat = tubuh[12];
				break;
      case 14 :
				cout<<" 14.) Caladine Cream 15 g                "<<endl;
        cout<<"Masukan Jumlah obat : ";
        cin>>jumlahobat ;
        hargaobat = 7210;
        hargaobat_total = hitung(jumlahobat, hargaobat);
        temp_daftarobat = tubuh[13];
				break;
      case 15 :
			cout<<" 15.) NIVEA Deodorant Invisible Black & White Roll On 50 ml "<<endl;
        cout<<"Masukan Jumlah obat : ";
        cin>>jumlahobat ;
        hargaobat =  22200;
        hargaobat_total = hitung(jumlahobat, hargaobat);
        temp_daftarobat = tubuh[14];
				break;
      case 16 :
				cout<<" 16.) VITAFLOW Multi Purpose Sanitizer 50 mL         "<<endl;
        cout<<"Masukan Jumlah obat : ";
        cin>>jumlahobat ;
        hargaobat =  52000;
        hargaobat_total = hitung(jumlahobat, hargaobat);
        temp_daftarobat = tubuh[15];
				break;
      case 17 :
				cout<<" 17.) Scarlett Whitening Body Scrub Pomegrante Original Lulur 300 g "<<endl;
        cout<<"Masukan Jumlah obat : ";
        cin>>jumlahobat ;
        hargaobat =  55000;
        hargaobat_total = hitung(jumlahobat, hargaobat);
        temp_daftarobat = tubuh[16];
				break;
      case 18 :
				cout<<" 18.) NIVEA Soft Jar 100 ml                   "<<endl;
        cout<<"Masukan Jumlah obat : ";
        cin>>jumlahobat ;
        hargaobat =  25200;
        hargaobat_total = hitung(jumlahobat, hargaobat);
        temp_daftarobat = tubuh[17];
				break;
      case 19 :
			 cout<<" 19.) Mama's Choice Intensive Nipple Cream 15 ml    "<<endl;
        cout<<"Masukan Jumlah obat : ";
        cin>>jumlahobat ;
        hargaobat =   990000;
        hargaobat_total = hitung(jumlahobat, hargaobat);
        temp_daftarobat = tubuh[18];
				break;
      case 20 :
				cout<<" 20.) QV Intensive Cream 100 g                  "<<endl;
        cout<<"Masukan Jumlah obat : ";
        cin>>jumlahobat ;
        hargaobat =  137857;
        hargaobat_total = hitung(jumlahobat, hargaobat);
        temp_daftarobat = tubuh[19];
				break;
		}
	}
    else if (memilih == 9){
		cout<<endl<<"======================= KECANTIKAN =========================" <<endl;
    cout<<endl;
		cout<<" 1.) Paket Kecantikan Fit Selalu (Extrim Gel 195 mL & Intenz Resurfacing Serum 30 mL) Rp 1.075.000"<<endl;
		cout<<" 2.) Natur Shampoo Olive Oil 140 ml                      Rp 28.000"<<endl;
		cout<<" 3.) Herbal Care Hops Shampo 330 ml                      Rp 145.000"<<endl;
    cout<<" 4.) Herbal Care Horsetail Shampoo 330 ml                Rp 145.000"<<endl;
		cout<<" 5.) Herbal Care Buriti Body Butter 200 ml               Rp 145.000"<<endl;
		cout<<" 6.) Herbal Care Flax Conditioner 200 ml                 Rp 145.000"<<endl;
    cout<<" 7.) Husada Kapas Pembalut 250 g                         Rp 16.500"<<endl;
		cout<<" 8.) NAzalea Zaitun Oil Habbats 150 ml                   Rp 29.000"<<endl;
		cout<<" 9.) Herbal Care Ginseng Conditioner 200 ml              Rp 145.000"<<endl;
    cout<<" 10.) Beauty Barn Mom - Supple Skin 170 g                Rp 550.000"<<endl;
		cout<<" 11.) Beauty Barn Mom - Supple Skin 50 g                 Rp 200.000"<<endl;
		cout<<" 12.) Herbal Care Wild Rose With Perilla Oil Dry Body Scrub 220 g  Rp 145.000"<<endl;
    cout<<" 13.) Herbal Care Hops Conditioner 200 ml                Rp 145.000"<<endl;
		cout<<" 14.) Herbal Care Black Radish Shampoo Anti Hair Fall 330 ml   Rp 145.000"<<endl;
		cout<<" 15.) Herbal Care Nettle Shampoo 330 ml                  Rp 145.000"<<endl;
    cout<<" 16.) Sweet Secret Vanilla Moisturizing Body Cream 200 ml    Rp 145.000"<<endl;
		cout<<" 17.) Scarlett Whitening Body Scrub Pomegrante Original Lulur 300 g   Rp 55.000"<<endl;
		cout<<" 18.) NIVEA Soft Jar 100 ml                              Rp 25.200"<<endl;
    cout<<" 19.) Mama's Choice Intensive Nipple Cream 15 ml         Rp 99.0000"<<endl;
		cout<<" 20.) QV Intensive Cream 100 g                           Rp 137.857"<<endl;
		cout<<"======================================================="<< endl;
		cout<<"Masukkan pilihan anda : ";
		cin>>pilihobat;
		switch (pilihobat){
		case 1 :
				cout<<" 1.) Paket Kecantikan Fit Selalu (Extrim Gel 195 mL & Intenz Resurfacing Serum 30 mL) "<<endl;
        cout<<"Masukan Jumlah obat : ";
        cin>>jumlahobat ;
        hargaobat = 107.000;
        hargaobat_total = hitung(jumlahobat, hargaobat);
        temp_daftarobat = cantik[0];
				break;
			case 2 :
				cout<<" 2.) Natur Shampoo Olive Oil 140 ml          "<<endl;
        cout<<"Masukan Jumlah obat : ";
        cin>>jumlahobat ;
        hargaobat =  28000;
        hargaobat_total = hitung(jumlahobat, hargaobat);
        temp_daftarobat = cantik[1];
				break;
			case 3 :
				cout<<" 3.) Herbal Care Hops Shampo 330 ml            "<<endl;
        cout<<"Masukan Jumlah obat : ";
        cin>>jumlahobat ;
        hargaobat =  145000;
        hargaobat_total = hitung(jumlahobat, hargaobat);
        temp_daftarobat = cantik[2];
				break;
      case 4 :
				cout<<" 4.) Herbal Care Horsetail Shampoo 330 ml         "<<endl;
        cout<<"Masukan Jumlah obat : ";
        cin>>jumlahobat ;
        hargaobat =  145000 ;
        hargaobat_total = hitung(jumlahobat, hargaobat);
        temp_daftarobat = cantik[3];
				break;
      case 5 :
				cout<<" 5.) Herbal Care Buriti Body Butter 200 ml           "<<endl;
        cout<<"Masukan Jumlah obat : ";
        cin>>jumlahobat ;
        hargaobat = 145000;
        hargaobat_total = hitung(jumlahobat, hargaobat);
        temp_daftarobat = cantik[4];
				break;
      case 6 :
				cout<<" 6.) Herbal Care Flax Conditioner 200 ml     "<<endl;
        cout<<"Masukan Jumlah obat : ";
        cin>>jumlahobat ;
        hargaobat = 145000;
        hargaobat_total = hitung(jumlahobat, hargaobat);
        temp_daftarobat = cantik[5];
				break;
      case 7 :
				cout<<" 7.) Husada Kapas Pembalut 250 g         "<<endl;
        cout<<"Masukan Jumlah obat : ";
        cin>>jumlahobat ;
        hargaobat = 16500;
        hargaobat_total = hitung(jumlahobat, hargaobat);
        temp_daftarobat = cantik[6];
				break;
      case 8 :
				cout<<" 8.) NAzalea Zaitun Oil Habbats 150 ml         "<<endl;
        cout<<"Masukan Jumlah obat : ";
        cin>>jumlahobat ;
        hargaobat = 29000;
        hargaobat_total = hitung(jumlahobat, hargaobat);
        temp_daftarobat = cantik[7];
				break;
      case 9 :
				cout<<" 9.) Herbal Care Ginseng Conditioner 200 ml       "<<endl;
        cout<<"Masukan Jumlah obat : ";
        cin>>jumlahobat ;
        hargaobat = 45000;
        hargaobat_total = hitung(jumlahobat, hargaobat);
        temp_daftarobat = cantik[8];
				break;
      case 10 :
				cout<<" 10.) Beauty Barn Mom - Supple Skin 170 g       "<<endl;
        cout<<"Masukan Jumlah obat : ";
        cin>>jumlahobat ;
        hargaobat = 550000;
        hargaobat_total = hitung(jumlahobat, hargaobat);
        temp_daftarobat = cantik[9];
				break;
      case 11 :
				cout<<" 11.) Beauty Barn Mom - Supple Skin 50 g     "<<endl;
        cout<<"Masukan Jumlah obat : ";
        cin>>jumlahobat ;
        hargaobat =  200000;
        hargaobat_total = hitung(jumlahobat, hargaobat);
        temp_daftarobat = cantik[10];
				break;
      case 12 :
				cout<<" 12.) Herbal Care Wild Rose With Perilla Oil Dry Body Scrub 220 g"<<endl;
        cout<<"Masukan Jumlah obat : ";
        cin>>jumlahobat ;
        hargaobat =  145000.;
        hargaobat_total = hitung(jumlahobat, hargaobat);
        temp_daftarobat = cantik[11];
				break;
      case 13 :
				cout<<" 13.) Herbal Care Hops Conditioner 200 ml      "<<endl;
        cout<<"Masukan Jumlah obat : ";
        cin>>jumlahobat ;
        hargaobat =145000;
        hargaobat_total = hitung(jumlahobat, hargaobat);
        temp_daftarobat = cantik[12];
				break;
      case 14 :
				cout<<" 14.) Herbal Care Black Radish Shampoo Anti Hair Fall 330 ml  "<<endl;
        cout<<"Masukan Jumlah obat : ";
        cin>>jumlahobat ;
        hargaobat = 145000;
        hargaobat_total = hitung(jumlahobat, hargaobat);
        temp_daftarobat = cantik[13];
				break;
      case 15 :
			cout<<" 15.) Herbal Care Nettle Shampoo 330 ml         "<<endl;
        cout<<"Masukan Jumlah obat : ";
        cin>>jumlahobat ;
        hargaobat =  145000;
        hargaobat_total = hitung(jumlahobat, hargaobat);
        temp_daftarobat = cantik[14];
				break;
      case 16 :
				cout<<" 16.) Sweet Secret Vanilla Moisturizing Body Cream 200 ml  "<<endl;
        cout<<"Masukan Jumlah obat : ";
        cin>>jumlahobat ;
        hargaobat =  145000;
        hargaobat_total = hitung(jumlahobat, hargaobat);
        temp_daftarobat = cantik[15];
				break;
      case 17 :
				cout<<" 17.) Scarlett Whitening Body Scrub Pomegrante Original Lulur 300 g  "<<endl;
        cout<<"Masukan Jumlah obat : ";
        cin>>jumlahobat ;
        hargaobat =  55000;
        hargaobat_total = hitung(jumlahobat, hargaobat);
        temp_daftarobat = cantik[16];
				break;
      case 18 :
				cout<<" 18.) NIVEA Soft Jar 100 ml              "<<endl;
        cout<<"Masukan Jumlah obat : ";
        cin>>jumlahobat ;
        hargaobat =  25200;
        hargaobat_total = hitung(jumlahobat, hargaobat);
        temp_daftarobat = cantik[17];
				break;
      case 19 :
			 cout<<" 19.) Mama's Choice Intensive Nipple Cream 15 ml    "<<endl;
        cout<<"Masukan Jumlah obat : ";
        cin>>jumlahobat ;
        hargaobat =   990000;
        hargaobat_total = hitung(jumlahobat, hargaobat);
        temp_daftarobat = cantik[18];
				break;
      case 20 :
				cout<<" 20.) QV Intensive Cream 100 g                  "<<endl;
        cout<<"Masukan Jumlah obat : ";
        cin>>jumlahobat ;
        hargaobat =  137857;
        hargaobat_total = hitung(jumlahobat, hargaobat);
        temp_daftarobat = cantik[19];
				break;
		}
	}
    cout<<endl;
  }
  for (int o = 0; o < 1; o++) {
    cout << endl <<  "==============================================================="<< endl;
    cout << "          STRUK PEMBAYARAN TOKO OBAT " << endl;
    cout << "==============================================================="<< endl;
    cout << "     Jln. Sorosutan No.6B, Umbulharjo, Kota Yogyakarta" << endl;
    cout << " Nama          : " << pasien[o].nama << endl;
    cout << " Alamat        : " << pasien[o].alamat << endl;
    cout << " No.Hp         : " << pasien[o].no_telepon << endl;
    cout << " Umur          : " << pasien[o].umur << endl;
  }
  cout << "-----------------------------------------------------"<< endl;
  cout << " Nama Obat - " << temp_daftarobat << endl;
  cout << " Harga                                       = " << hargaobat << endl;
  cout << " Jumlah                                      = " << jumlahobat << endl;
  cout << "-----------------------------------------------------"<< endl;
  cout << " Harga Total                                 = " << hargaobat_total+hargaper << endl;
  cout << " Bayar                                       = ";
  cin >> bayar;
  kembali=bayar-(hargaobat_total+hargaper) ;
  cout << " Kembali                                     = " << kembali << endl;
  cout << "==============================================================="<< endl; 
  cout << endl << "         Terima kasih Semoga Lekas Sembuh"<<endl<<endl;


  cout<<"+---------------------------------+"<<endl;
  cout<<"| ketik angka 1 untuk selanjutnya |"<<endl;
  cout<<"+---------------------------------+"<<endl;
}
  