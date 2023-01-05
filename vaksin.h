// void Apotek::vaksin(){
// //#define MAX 10
// //membuat antrian
// bool kosong(){ //data kosong atau ada

// 	if (vaksin.belakang == -1)
// 		return 1;
// 	else
// 		return 0;
// }

// bool penuh(){ //data tersedia atau penuh

// 	if (vaksin.belakang == MAX)
// 		return 1;
// 	else 
// 		return 0;
// }

// void Enqueue (int datt,std::string nama,std::string alamat,std::string hp,char jk, int umur){
// //menambah antrian kedalam array

// 	if(kosong() == 1) //data kosong atau ada
// 	{
// 		vaksin.depan=vaksin.belakang=0;
// 		vaksin.datt[vaksin.belakang]=data;
// 		vaksin.nama[vaksin.belakang]=nama;
// 		vaksin.alamat[vaksin.belakang]=alamat;
// 		vaksin.jk[vaksin.belakang]=jk;
// 		vaksin.umur[vaksin.belakang]=umur;
// 		vaksin.hp[vaksin.belakang]=hp;
// 		cout<<"Data telah ditambahkan"<<endl;
// 	}
// 	else if (penuh() == 0) //data tidak penuh data dapat ditambahkan
// 	{
// 		vaksin.belakang++;
// 		vaksin.datt[vaksin.belakang]=data;
// 		vaksin.nama[vaksin.belakang]=nama;
// 		vaksin.alamat[vaksin.belakang]=alamat;
// 		vaksin.jk[vaksin.belakang]=jk;
// 		vaksin.umur[vaksin.belakang]=umur;
// 		vaksin.hp[vaksin.belakang]=hp;	
// 	}
// 	else if (penuh() == 1) //data penuh, data tidak dapat ditambahkan
// 	{
// 		cout<<"Data tidak dapat ditambahkan!"<<endl;
// 	}
// }

// void buat(){ //data akan dibuat atau dilanjutkan

// 	vaksin.depan=vaksin.belakang=-1;
// }

// void hapus(){ //menghapus data

// 	vaksin.depan=vaksin.belakang=-1;
// 	cout<<"Data Penerima Vaksin Covid 19 telah dihapus"<<endl;
// }

// void tampil(){ //menampilkan data

// 	if(kosong()==0) {
// 		cout<<"\n Daftar Penerima Vaksin Covid 19: "<< endl;
// 		cout<<"-------------------------------------------------------\n";
// 		cout<<"   \tNo "<<"  \tNama "<<"  \t\tUmur "<<"\t\t Alamat"<<"\t\tJenis Kelamin"<<"\tNo HP"<<endl;
// 		cout<<"-------------------------------------------------------\n"<<endl;
// 		for(int i=0; i<=vaksin.belakang; i++)
// 		{
// 			cout<<"\t"<<i+1<<"\t"<<vaksin.nama[i]<<"\t\t"<<vaksin.umur[i]<<"\t\t";
// 			cout<<vaksin.alamat[i]<<"\t\t"<<vaksin.jk[i]<<"\t\t"<<vaksin.hp[i]<<endl;
// 		}
// 		cout<<endl;
// 	}
// }
// void urut(){ //mengurutkan data

// 	if(kosong() == 0)
// 	{
// 		int j;
// 		int tamp;
// 		cout<<"\t\tData Penerima Vaksin Covid 19 Dari Umur Tertua"<<endl;
// 		cout<<"--------------------------------------------------------"<<endl;
// 		cout<<" \tNo "<<" \tNama "<<" \t\tUmur "<<"\t\tAlamat"<<"\t\tJenis Kelamin"<<"\t\tNo HP"<<endl;
// 		cout<<"--------------------------------------------------------"<<endl;
// 		for(int i=1;i<=vaksin.belakang;i++)
// 			for (i=0; i<=vaksin.belakang;i++){
// 				for(j=i+1;j<=vaksin.belakang;j++){
// 					if (vaksin.umur[i],vaksin.umur[j]){
// 						swap(vaksin.nama[i],vaksin.nama[j]);
// 						swap(vaksin.alamat[i],vaksin.alamat[j]);
// 						swap(vaksin.jk[i],vaksin.jk[j]);
// 						swap(vaksin.hp[i],vaksin.hp[j]);
// 						tamp=vaksin.umur[i];
// 						vaksin.umur[i] = vaksin.umur[j];
// 						vaksin.umur[j] = tamp;	
// 					}
// 				}
// 			}
// 			for(int i=vaksin.depan;i<=vaksin.belakang;i++)
// 			{
// 				cout<<"\t"<<i+1<<"\t"<<vaksin.nama[i]<<"\t\t"<<vaksin.umur[i]<<"\t\t";
// 				cout<<vaksin.alamat[i]<<"\t\t"<<vaksin.jk[i]<<"\t\t"<<vaksin.hp[i]<<endl;
// 			}
// 		}
// 	else{
// 		cout<<"Data Penerima Kosong!"<<endl;
// 	}
// }

// void cari(){ //mencari nama penerima
// 	string cari;
// 	int ketemu;
// 	cout<<"Masukkan Nama yang dicari: ";
// 	cin>>cari;
// 	cout<<endl;
	
// 	ketemu=false;
// 	for(int i=vaksin.depan;i<<=vaksin.belakang;i++) {
// 		if(vaksin.nama[i] == cari)
// 		{
// 			ketemu=true;
// 			cout<<"Terdapat penerima vaksin Covid 19 yang bernama: "<<cari<<endl;
// 		}
// 	}
// 	if(ketemu==0)
// 	{
// 		cout<<"Maaf nama penerima tidak ada didata"<<endl;
// 	}
// }

// void vak() {
// 	buat();
// 	do
// 	{
// 		cout<<"-----------------------------------------------\n";
// 		cout<<"\t\tProgram Pendataan Penerima Vaksin Covid-19\n";
// 		cout<<"-----------------------------------------------\n";
// 		cout<<"[1] Memasukkan Data Penerima Vaksin Covid-19\n";
// 		cout<<"[2] Menampilkan Data Penerima Vaksin Covid-19\n";
// 		cout<<"[3] Mengurutkan Data Penerima Vaksin Covid-19\n";
// 		cout<<"[4] Mencari Nama Penerima Vaksin Covid-19\n";
// 		cout<<"[5] Menghapus Data Penerima Vaksin Covid-19\n";
// 		cout<<"[6] Keluar\n";
// 		cout<<"-----------------------------------------------"<<endl;
// 		cout<<" Masukkan Pilihan: ";
// 		cin>>pilihan;	
// 		switch(pilihan)
// 		{
// 		case 1:
// 			cout<<"Nama: ";
// 			cin>>nama;
// 			cout<<"Alamat: ";
// 			cin>>alamat;
// 			cout<<"Jenis Kelamin(L/P): ";
// 			cin>>jk;
// 			cout<<"Umur: ";
// 			cin>>umur;
// 			cout<<"No HP: ";
// 			cin>>hp;
// 			Enqueue (data,nama,alamat,hp,jk,umur);
// 			break;
// 		case 2:
// 			tampil();
// 			break;
// 		case 3:
// 			urut();
// 			break;	
// 		case 4:
// 			cari();
// 			break;
// 		case 5:
// 			hapus();
// 			break;	
// 		case 6:
// 			cout<<"Terimakasih"<<endl;
// 			break;
// 		default:
// 			cout<<"Pilihan yang Anda masukkan tidak ada di menu!"<<endl;
// 			break;
// 		}
// 	}
// 	while(pilihan!=6);
// 	system("cls");	
// 	//return 0;
// }
//   }
  
  
