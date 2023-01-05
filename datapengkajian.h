void Apotek::pengkajian(){
int i = 0;

cout << endl << "=======================================================" << endl;
  cout << "                     DATA PENGKAJIAN     " << endl;
  cout << "=======================================================" << endl;
  cout << " 1. Tekanan darah MmHg : " ;
  cin.ignore();
  getline(cin, pasien[i].tekdar);
  cout << " 2. Berat Badan        : " ;
  cin.ignore();
  getline(cin, pasien[i].bb);
  cout << " 3. Tinggi Badan       : " ;
  cin.ignore();
  getline(cin, pasien[i].tinggi);
  cout << " 4. Nadi               : " ;
  cin.ignore();
  getline(cin, pasien[i].nadi);
  cout << " 5. Suhu Badan         : " ;
  cin.ignore();
  getline(cin, pasien[i].suhu);
  cout << "=======================================================" << endl;
  
  cout<<endl;
}
