using namespace std;
#define MAX 100
#define n 100
struct Data_pasien {
  string no_telepon;
  string nama;
  string alamat;
  string tinggi;
  string bb;
  string nadi;
  string suhu;
  string tekdar;
  string jk;
  string jam;
  int tanggal, bulan, tahun, umur;
};
  struct pasien{
    string nama,poli;
    int nim;
    }antri[n];
  struct queue{
    int awal, akhir;
    }Queue;
  


class Apotek {
public:
  void melbusatu();
  void loginsatu();
  void regstrsatu();
  void forgotsatu();
  void melbudua();
  void logindua();
  void regstrdua();
  void forgotdua();
  void proses();
  void tokbat();
  void masuk();
  void ktp();
  void alat();
  void input();
  void pengkajian();
  void output();
  void outputobat();
  void filetxt();
  void datapemesanan();
  void menu();
  void deQueue(void);
  void inQueue(void);
  void tampil(void);
  void rest(void);
  void konsultasi();

  Data_pasien pasien[100];
  int hitung(int a, int b);

private:
  int pilih, harga, jumlah, i, bayar, kembali, pl, jd, pilihper, hargaper, hari;
  int pilihobat,jumlahobat,hargaobat,hargaobat_total;
  int pilihdokter,hargadokter,pilihjam,tlkonsul,nokonsul;
  string namakonsul,jkkonsul;
  long harga_total;
  int bisa = 0;
  int hit = 0;
	string userid, password, id, pass;
	char l, f;
  string pasw, user;
	bool menulogin=false;
  int t=0;
  int pas,p;
	string usr,u;
  
  string agama[6]={"ISLAM", "KRISTEN", "KATOLIK", "HINDU", "BUDHA"};
	string status[3]={"KAWIN", "BELUM KAWIN"};
	string pekerjaan[6]={"PNS", "PEGAWAI NEGERI", "SWASTA", "BUMN", "PELAJAR/MAHASISWA"};
	string kewarganegaraan[3]={"WNI", "WNA"};
  string poli[6]={"Poli Anak", "Poli Jiwa", "Poli THT", "Poli Mata", "Poli Saraf", "Poli Jantung"};
  string danak[3]={"Dr. A", "Dr. B", "Dr. C"};
  string djiwa[3]={"Dr. Hg", "Dr. Bk", "Dr. Ft"};
  string dtht[3]={"Dr. Tr", "Dr. Ds", "Dr. Kl"};
  string dmata[3]={"Dr. Jh", "Dr. Bg", "Dr. Yi"};
  string dsaraf[3]={"Dr. Ds", "Dr. Wx", "Dr. Nb"};
  string djantung[3]={"Dr. Zh", "Dr. Ji", "Dr. Fd"};
	int pilihanagama, pilihanstatus, pilihanpekerjaan, pilihankewarganegaraan;
  string daftar[10] = {"Demam",
                       "Depresi"
                       "Diare",
                       "Radang",
                       "Maagh",
                       "Sesak Napas",
                       "Konjungtivitis",
                       "Glaukoma",
                       "Neuropati perifer",
                       "Jantung koroner"};
  string strukobatstrukobatobat[10] = {"Paracetamol",
                     "Oralit",
                     "Serotonin"
                     "Methyl Prednisolone",
                     "Mylanta",
                     "Dexametrazone",
                     "Obat tetes mata",
                     "Dorzolamide",
                     "OAINS",
                     "Aspirin"};
  string vitamin[20] = {
		"Tolak angin cair Plus Madu sachet",
		" Becom Zet Kaplet (10 Kalpet)",
		" Zegavit Kaplet (5 Kaplet)",
    " Imbost Force Kaplet (10 Kaplet)",
    " Enervon C tablet (1 botol dan 30 Tablet)",
    " Omepros kapsul (30 Kapsul),"
    " Blackmores Pregnancy",
    " Blackmores Odourless",
    " Lianhua Qinwen Kapsul",
    " Stimuno Forte Kapsul (30 Kapsul)",
    " Vitalong C Kapsul",
    " Prove D3-1000 Tablet",
    " Vegablend 21 Adult Kapsul",
    " Oxyvit D3 60 Kapsul",
    " Neurobion Forte 10 Tablet",
    " Imboost Kids 21 Tablet Hisap",
    " Prove D3-1000 IU 10 Tablet",
    " Astria 4 mg 12 Kapsul",
    " Halowell E 200 IU 12 Kapsul",
    "Folamil Genio 30 Kapsul"}; 

  string obat_dua[20]= {
    "Acyclovir 1 Tablet ",
		" Albothyl",
		" Alpara",
    " Ambroxol 30mg 1 tablet",
		" Amoxicillin 1 tablet",
		" Bioplacenton 1 Tube (15 gram)",
    " Calcifar Plus",
		" Cataflam 25MG TAB 1 Tablet",
		" Caviplex",
    " Cefadroxil Syrup",
		" Cefixime 1 Tablet",
		" Cetaphil Cetaphil Moisturising Cream 200 Mg",
    " Combantrin 1 Strip",
		" Counterpain salep 15 Gr)",
		" Cetirizine 1 botol isi 350 Tablet",
    " Dextral Forte",
		" Ever E 1 Strip isi 6 kapsul",
		" Gentamicin Salep 5 Gram",
    " Infus RL Merk Ecosol",
		" Insto 1 Botol"
  };

  string ibu_bayi[20]={
    "SGM eksplore 3 Plus Susu",
		"Cetai]pil Baby daily",
		" Transpulmin baby Balsam 2 gram",
    " Bepanten Baby salep 20 gram",
		" My Baby Minyak Telon",
		" Strimar nose Hygiene Baby",
    " Mom Uung ASI Bosster Kapsul",
		" Mama's Chice intensive",
		" Neppi baby Wipes Parfum",
    " Lactacyd Liquid Baby skincare baby",
		" Swetty Bronze Comfort NB-S",
		" Meltafer Table Kunyah",
    " Asifit Kaplet",
		" Prolacta For Mother",
		" Pure Baby Shampo",
    " Sebamed Baby",
		" Mamypoko Popok  L",
		" Milna Baby Biscuit",
    " Prenagen Momy vanilla Box",
		" Mama's Choice almond"
  };

string alat_kesehatan[20]={
    " Softies Daily Mask 5",
		"Softies Daily Mask 30",
		" Medishield by Paseo Masker",
    " FamilyDr Pulse Oximeter",
		" Betadine Larutan Antiseptik 5 ml",
		" PS Love MenstruHeat 6 pcs ",
    " Vicks Vaporub 10 g ",
		" Easy Touch Cholesterol Test Strip",
		" Rossmax Dual Stetoskop EB-200 ",
    " Onemed Condom Cath - S (1 Pc)",
		" Serenity Commode FS-813 ",
		" DoCare Dry Absorbent Gloves ",
    " Onemed Ultrafix 15 cm x 5 m",
		" Vivo Vibe Naughty Devil Red",
		" Vivo Stayhard XL Donut Ring",
    " Variteks Pregnancy Corset 109 (L)",
		" Serenity Ultrasonic Nebulizer SR-810B",
		" Diapro Value Underpad Size 60 x 90 cm ",
    " Serenity Stretcher Trolley SR-E2 ",
		" Serenity Digital Thermometer MT-B132-F"
};

  string makanansehat[20]={
		" Bear Brand Susu Steril 189 ml",
		" ISOPRO23 500 ml (1 Pack @ 6 Botol)",
		" Seblang Banyuwangi - Beras Hitam Melik",
    " OCJ - Beras Merah Pecah Kulit Vakum 1kg",
		" Tresno Joyo Madu TJ Murni 150 g ",
		" Tropicana Slim Sweetener Classic ",
    " Woods Lozenges Lemon ",
		" Madu Uray - Raw Honey 875 g (640 mL)",
		" Boost Optimum Nestle Rasa Vanila 400 g ",
   " Entramix Susu Rasa Vanila 185 g",
		" WRP Cookies Chocolate 12 x 30 g",
		" Fitmee - Soto 92 g",
    " WRP Delichips Salt & Pepper 12 x 40 g",
		" Bionic Farm - Sweetatoes Keripik Ubi",
		" Francis Organic Almond Drink ",
    " Heavenly Blush Tummy Yogurt Bar Berries ",
		" Chia-Yo Homemade Granola Dark Chocolate",
		" Tropicana Slim Korean Garlic Butter Cookies ",
    " East Bali Cashews - Granola Bites Chocolate Vanilla 125 g",
		" Ashitaki Creamy Latte Original 24 g (1 Box @ 5 Sachet) "
  };
    string gigi[20]={
		" Gingivectomy - Laura-Sum Dental Care (LDC) Clinic",
		" Metal Konven Braces (Atas & Bawah) - E Dental Care ",
		" Tambal Gigi Ringan - RS Lancang Kuning",
    " Topical Flour - Widia Dental Care",
		" Dental Spa - Widia Dental Care",
		" Clear Retainer Atas & Bawah - Laura-Sum Dental Care (LDC) Clinic ",
    " Scaling Gigi - RS Sumber Waras Cirebon",
		"Gingivektomi (Per Rahang) - E Dental Care ",
		" Crown Gigi Emax - Widia Dental Care",
    " Maryland Birdge - Widia Dental Care ",
		" Gigi Palsu Flexy Plat Valplast + 1 Elemen Gigi - RRDC Dental Care ",
		" Teeth Whitening + Scaling - MP Clinic ",
    " Bleaching Gigi dan Dental Spa - RRDC Dental Care ",
		" Klar Aligner Basic - Widia Dental Care ",
		" Retainer - Widia Dental Care ",
    " Veneer Direct Composite 1 Gigi & Dental Check Up - A8 Dental",
		" Perawatan Orthodontic Metal Bracket - Pixel Dental",
		" Cabut Gigi Dewasa - Widia Dental Care",
    " Scaling Gigi - Agata Dental Clinic ",
		" Klar Aligner Advance - Widia Dental Care"
    };

  string skin[20]={
		" Avoskin Miraculous Refining Serum 30 ml",
		" Avoskin Perfect Hydrating Treatment Essence 30 ml",
		" Avoskin Hydrating Treatment Essence 100 mL ",
   " Scarlett Facial Wash Normal Original 100 ml",
		" Scarlett Scarlet Whitening Brightly Ever After Serum Original 15 ml ",
		" Scarlett Whitening Acne Serum Original 15 ml ",
    " Avoskin Miraculous Retinol Ampoule 30 mL ",
		" Avoskin Miraculous Refining Toner 100 ml ",
		" Avoskin Advanced Action Eye Ampoule 12 ml ",
    " Avoskin Intensive Nourishing Eye Cream 10 g ",
		" Cetaphil Gentle Skin Cleanser 1L",
		" Avoskin Your Skin Bae Niacinamide 12% + Centella Asiatica ",
    " Avoskin New Ultra Brightening Cream 10 g ",
		" Avoskin Miraculous Refining Toner 20 ml  ",
		" Avoskin Your Skin Bae Alpha Arbutin 3% + Grapeseed Serum 30 ml ",
    " Avoskin Your Skin Bae Marine Collagen 10% + Ginseng Root",
		" Avoskin Natural Sublime Facial Cleanser 100 ml  ",
		" Avoskin Perfect Hydrating Treatment Essence 100 ml ",
    "Avoskin Your Skin Bae Ultimate Hyaluron Hyacross 3% + Green Tea",
		" Avoskin Naufa Pure Olive Oil Bar Soap"
  };

  string tubuh[20]={
    " Softies Wet Wipes Antibacterial Antiseptic 20s",
		" Cap Lang Minyak Kayu Putih 210 ml",
		" Bio Oil 125 ml",
    " Scarlett Shower Scrub Mango Original Sabun 300 g",
		" Betadine Sabun Cair Antiseptik 100 ml",
		" FreshCare Citrus Roll On 10 ml ",
    " Sebamed Liquid Face & Body Wash 200 ml",
		" Noroid Soothing Cream 80 ml",
		" NIVEA Extra White Care & Protect SPF15 Serum 180ml - Twin Pack",
    " Antis Refill Jeruk Nipis 300 ml - 2 Pouch",
		" Plossa Minyak Angin Eucalyptus 10 ml ",
		" Noroid Soothing Lotion 200 ml ",
    " Acanthe Sunscreen SPF 30 Krim 30 g ",
		" Caladine Cream 15 g  ",
		" NIVEA Deodorant Invisible Black & White Roll On 50 ml ",
    " VITAFLOW Multi Purpose Sanitizer 50 mL ",
		" Scarlett Whitening Body Scrub Pomegrante Original Lulur 300 g ",
		" NIVEA Soft Jar 100 ml",
    " Mama's Choice Intensive Nipple Cream 15 ml",
		" QV Intensive Cream 100 g"
  };

  string cantik[20]={
		" Paket Kecantikan Fit Selalu (Extrim Gel 195 mL & Intenz Resurfacing Serum 30 mL)",
		" Natur Shampoo Olive Oil 140 ml",
		" Herbal Care Hops Shampo 330 ml",
    " Herbal Care Horsetail Shampoo 330 ml",
		" Herbal Care Buriti Body Butter 200 ml",
		" Herbal Care Flax Conditioner 200 ml",
    " Husada Kapas Pembalut 250 g",
		" NAzalea Zaitun Oil Habbats 150 ml",
		" Herbal Care Ginseng Conditioner 200 ml",
    " Beauty Barn Mom - Supple Skin 170 g ",
		" Beauty Barn Mom - Supple Skin 50 g",
		" Herbal Care Wild Rose With Perilla Oil Dry Body Scrub 220 g",
    " Herbal Care Hops Conditioner 200 ml",
		" Herbal Care Black Radish Shampoo Anti Hair Fall 330 ml ",
		" Herbal Care Nettle Shampoo 330 ml  ",
    " Sweet Secret Vanilla Moisturizing Body Cream 200 ml  ",
		" Scarlett Whitening Body Scrub Pomegrante Original Lulur 300 g ",
		" NIVEA Soft Jar 100 ml  ",
    " Mama's Choice Intensive Nipple Cream 15 ml",
		" QV Intensive Cream 100 g "
  };

  string jenis_konsultasi[20]{
    "kulit",
    "Psikologi",
  };
string nomor[20]={
  "09823387287",
};
  string jadwal_dokter[20]={
"8 , 16, 20, 30 ",
  };

  string temp_poli;
  string temp_daftar;
  string temp_obat;
  string temp_daftarobat;
  string temp_jeniskonsul;
  string temp_NoChat;
  ofstream tulis_data;
  ofstream file;
  ofstream MyFile;
  ofstream MyData;
  ofstream strukobat;

};

struct databarang{ 
    string *kode = new string[20];  
    int *stok = new int[20];      
    string *nama = new string[20];  
};

struct dataalat{ 
    string *kode = new string[20];  
    int *stok = new int[20];      
    string *nama = new string[20];  
};

struct dataktp{
	string nama, rt, rw, tanggal, bulan, tahun, tempat, alamat, jeniskelamin, desa, kecamatan, darah, nik;	
}; 
dataktp data;

int Apotek::hitung(int a, int b) {
  if (b == 0)
    return 1;
  else if (b == 1)
    return a;
  else
    return a + hitung(a, b - 1);
}