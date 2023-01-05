  /*#define linklistsingle
  #include <iostream>
  
  using namespace std;*/

struct DataSingle{
  	string menu1;
  	DataSingle *next1;
}; 
  DataSingle *head1, *tail1, *cur1, *newNode1, *del1;
  
  void createDataSingle(string menu1){
  	head1 = new DataSingle();
  	head1->menu1 = menu1;	
  	head1->next1 = NULL;
  	tail1 = head1;
  }
  
  void tambahAwalSingle(string menu1){
  	newNode1 = new DataSingle();
  	newNode1->menu1 = menu1;
  	newNode1->next1 = head1;
  	head1 = newNode1;
  }
  
  void deleteAwalSingle(){
    del1 = head1;
    head1 = head1->next1;
    delete del1;
  }
  
  void printDataSingle(){
  	cur1 = head1;
  	while( cur1 != NULL){
  		cout << cur1->menu1 << endl;
  		cur1 = cur1->next1;		
  	}
  }