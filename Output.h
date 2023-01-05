void Apotek::output() {
  for (int i = 0; i < 1; i++) {
    cout << endl <<  "==============================================================="<< endl;
    cout << "          STRUK PEMBAYARAN RUMAH SAKIT TAVIZI" << endl;
    cout << "==============================================================="<< endl;
    cout << "     Jln. Sorosutan No.6B, Umbulharjo, Kota Yogyakarta" << endl;
    cout << " Tanggal Periksa   : " << pasien[i].tanggal << "-" << pasien[i].bulan << "-" << pasien[i].tahun << endl;
    cout << " Nama          : " << pasien[i].nama << endl;
    cout << " Alamat        : " << pasien[i].alamat << endl;
    cout << " No.Hp         : " << pasien[i].no_telepon << endl;
    cout << " Umur          : " << pasien[i].umur << endl;
    cout << " Jenis Kelamin : " << pasien[i].jk << endl;
  }
  cout << "-----------------------------------------------------"<< endl;
  cout << " Jenis Sakit - " << temp_daftar << endl;
  cout << " Harga                                       = " << harga << endl;
  cout << " Jumlah                                      = " << jumlah << endl;
  cout << " Rawat Inap                                  = " << hari << " hari" << endl;
  cout << "-----------------------------------------------------"<< endl;
  cout << " Harga Total                                 = " << harga_total+hargaper << endl;
  cout << " Bayar                                       = ";
  cin >> bayar;
  kembali=bayar-(harga_total+hargaper) ;
  cout << " Kembali                                     = " << kembali << endl;
  cout << "==============================================================="<< endl; 
  cout << endl << "         Terima kasih Semoga Lekas Sembuh"<<endl<<endl;

  cout<<"+---------------------------------+"<<endl;
  cout<<"| ketik angka 1 untuk selanjutnya |"<<endl;
  cout<<"+---------------------------------+"<<endl;
}