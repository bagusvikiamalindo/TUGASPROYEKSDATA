
struct DataDouble{
  int stok_obat, kode_obat;
	string nama_obat;
	DataDouble *next;
	DataDouble *prev;
}; 
DataDouble *head = NULL;
DataDouble *tail = NULL;
DataDouble *baru, *temp;

int isEmptyDouble(){
	if(head == NULL)
		return 1;
	else
		return 0;
}

void createDataDouble(){
  baru = new DataDouble();
  cout << " Masukkan kode obat : "; 
  cin >> baru->kode_obat;
  cout << " Masukkan nama obat : "; 
  cin >> baru->nama_obat;
  cout << " Masukkan stok obat : "; 
  cin >> baru->stok_obat;
  baru->prev = baru;
	baru->next = baru;
}

void tambahDepanDouble(){
	createDataDouble();
	if(head == NULL) {
 		head=baru;
 		tail=baru;
 	} 
  else {
		baru->next = head;
		head->prev = baru;
		baru->prev = tail;
		tail->next = baru;
		head = baru;
	}
  cout << endl ;
	cout << " Data depan berhasil diinputkan ke sistem!" << endl;
}

void hapusDepanDouble(){
	temp = head;
	if (head == NULL){
    cout << endl ;
		cout << " Linked list kosong!" << endl;
	} 
  else {
		if(head == tail){
			head = NULL;
			tail = NULL;
		} 
    else {
			head = head->next;
			head->prev = tail;
			tail->next = head;
		}
		delete temp;
		baru = head;
    cout << endl ;
		cout << " Data depan berhasil dihapus!" << endl;
	}
}

void printDataDouble(){
	temp = head;
	if(head == NULL){
        cout << endl ;
        cout << " Data kosong!" << endl;
  } 
  else {
    do {
      cout << endl ;
			cout << " Kode Obat : " << temp->kode_obat << endl;
			cout << " Nama Obat : " << temp->nama_obat << endl;
      cout << " Stok Obat : " << temp->stok_obat << endl;
			temp = temp->next;		
		}
    while(temp != head);
	}
}