/* MY Name : Ibahim Hussain Muhammad Abkar
Class : The Second Class 
Department : Computer Engineering
using linked list for inserting data ,deleting data , searching data ,and modifying data
 




*/
#include <iostream>
#include <string>
using namespace std;
class contact {  //the Main Class :
	private:
		string name, phone,GivenName,Additional_Name,Family_Name,Yomi_Name,GivenYomi_Name,Additional_Yomi_Name,FamilyNameYomi,NamePrefix,NameSuffix,
Initials,Nickname,ShortName,MaidenName,Gender,Location,BillingInformation,DirectoryServer,Mileage,
Occupation;
	public:
		contact *next;   // Alinked list node
		contact() {
		};
		contact(string name, string phone, string GivenName, string Additional_Name,string Family_Name,string Yomi_Name,string GivenYomi_Name,
		
		string Additional_Yomi_Name,string FamilyNameYomi,string NamePrefix,string NameSuffix,
        
        string Initials,string Nickname,string ShortName,string MaidenName,string Gender,string Location,string BillingInformation,
        
        string DirectoryServer,string Mileage,
        
        string Occupation )
		 {
			this -> name = name ; this -> phone = phone;this ->GivenName = GivenName; this -> Additional_Name =Additional_Name;
			
			this -> Family_Name = Family_Name;this -> Yomi_Name=Yomi_Name =Yomi_Name=Yomi_Name;
				
			this -> GivenYomi_Name=GivenYomi_Name; this -> additional_Yomi_name = additional_Yomi_name;this -> FamilyNameYomi = FamilyNameYomi ;
			 this ->nameprefix = nameprefix;
			
			this -> NameSuffix = NameSuffix;this -> FamilyNameYomi= FamilyNameYomi;this -> Initials = Initials;
			
			this -> Nickname = Nickname; this -> ShortName = ShortName; this -> MaidenName = MaidenName;
			 this -> Gender = Gender; this -> location = location ; this -> billinInformation = billinInformation ;
			 this -> DictionaryServer = DictionaryServer ; this -> Mileage = Mileage;
			
			this -> Occupation = Occupation;
			
			 next = NULL;
		}
		string getName() {   
			return name;
		}
		string getPhone() {
			return phone;
		}
		string getGivenName() {
			return GivenName;
		string getAdditional_Name() {
			return Additional_Name;
		
		string getFamily_Name() {
			return Family_Name;
		}
		string getYomi_Name=Yomi_Name() {
			return Yomi_Name=Yomi_Name;
		}
		string getGivenYomi_Name() {
			return GivenYomi_Name;
		}
		string getAdditional_Yomi_Name() {
			return Additional_Yomi_Name;
		}
		string getFamilyNameYomi() {
			return FamilyNameYomi;
		}
		string getNamepreffix() {
			return NameSuffix;
		}
		string getNameSuffix() {
			return NameSuffix;
		}
		string getInitials() {
			return Initials;
		}
		string getNickname() {
			return Nickname;
		}
		string getShortName() {
			return ShortName;
		}
		string getMaidenName() {
			return MaidenName;
		}
		string getGender() {
			return Gender;
		string getlocation() {
			return location;
		}
		string getbillinInformation() {
			return billinInformation;
		}
		string getDictionaryServer() {
			return DictionaryServer;
		}
		string getDictionaryServer() {
			return;
		}
		string getMileage() {
			return Mileage;
		}
		string getOccupation() {
			return Occupation;
		}
		
	
		void setContact(string name, string phone,string GivenName, string Additional_Name,string Family_Name,string Yomi_Name,string GivenYomi_Name,
		string Additional_Yomi_Name,string FamilyNameYomi,string prefix, string NameSuffix,
           string Initials,string Nickname,string ShortName,string MaidenName,string Gender,string Location,string BillingInformation,string DirectoryServer,string Mileage,
           string Occupation )
       {
			this -> name = name; this -> phone = phone ; this ->GivenName = GivenName; this -> Additional_Name =Additional_Name;this -> Family_Name = Family_Name;this -> Yomi_Name=Yomi_Name;
			
			this -> GivenYomi_Name=GivenYomi_Name; this -> additional_Yomi_name = additional_Yomi_name;this -> FamilyNameYomi = FamilyNameYomi; FamilyNameYomi = FamilyNameYomi ; this -> FamilyNameYomi= FamilyNameYomi;this -> NameSuffix = NameSuffix;this -> Initials = Initials;
			
			this -> Nickname = Nickname; this -> ShortName = ShortName; this -> MaidenName = MaidenName; this -> Gender = Gender; this -> location = location ; this -> billinInformation = billinInformation ;this -> DictionaryServer = DictionaryServer ; this -> Mileage = Mileage;
			
			this -> Occupation = Occupation;
		}
		void getContact() {
			cout << name << "   " << phone << endl;
		}
};
class contactsList {
	private:
		contact *head;
		contact *last;
		int size;
	public:
		contactsList();
		contact* find(string);
		void addBegin(string, string);
		contact* findContact(string);
		void insertAfter(contact*, string, string);
	};
contactsList::contactsList() {
	head = NULL ; last = NULL; size = 0;
}
void contactsList::addBegin(string name, string phone ,string GivenName, string Additional_Name,string Family_Name,string Yomi_Name,string GivenYomi_Name,
		string Additional_Yomi_Name,string FamilyNameYomi,string NameSuffix,
string Initials,string Nickname,string ShortName,string MaidenName,string Gender,string Location,string BillingInformation,string DirectoryServer,string Mileage,
string Occupation ) {
	contact* new_contact = new contact(name , phone ,GivenName,Additional_Name,Family_Name,Yomi_Name,GivenYomi_Name,Additional_Yomi_Name,FamilyNameYomi,NamePrefix,NameSuffix,
Initials,Nickname,ShortName,MaidenName,Gender,Location,BillingInformation,DirectoryServer,Mileage,
Occupation);
	if (last == NULL || head == NULL) {
		head = new_contact;
		last = new_contact;
	}
	else {
		new_contact -> next = head;
		head = new_contact;
	}
	size++;
}
void contactsList::insertAfter(contact* n_contact, string name, string phone,  string GivenName, string Additional_Name,string Family_Name,
string Yomi_Name,string GivenYomi_Name,
		string Additional_Yomi_Name,string FamilyNameYomi,string NameSuffix,
string Initials,string Nickname,string ShortName,string MaidenName,string Gender,string Location,
string BillingInformation,string DirectoryServer,string Mileage,
string Occupation ){
	if (n_contact == NULL){
		cout << "\nNot Found!" << endl;
		return;
	}
	contact* new_contact = new contact(name, phone, GivenName,Additional_Name,Family_Name,Yomi_Name,GivenYomi_Name,Additional_Yomi_Name,FamilyNameYomi,
	NamePrefix,NameSuffix,
Initials,Nickname,ShortName,MaidenName,Gender,Location,BillingInformation,DirectoryServer,Mileage,
Occupation);
	new_contact -> next = n_contact -> next;
	n_contact -> next = new_contact;
	if (n_contact == last) last = n_contact;
	size++;
}
contact* contactsList::find(string serachQuery ){
	contact* n = NULL;
	for( n = head ; n != NULL ; n = n->next)
		if (n -> getName() == serachQuery || n -> getPhone() == serachQuery) {
			return n;
		}
	return n;
}
contact* contactsList::findContact(string serachQuery){
	contact* f = find(serachQuery);
	if (f == NULL){
		cout << "\n\nNot found!" << endl;
	}
	else {
		cout << "\n\n------------------------------------" << endl;
		f -> getContact();
		cout << "-----------------------------------" << endl;
	}
	return f;
};
bool menu() {
	cout << "\n(1) Add" << endl;
	cout << "(2) Search" << endl;
	cout << "(3) Edit" << endl;
	cout << "(4) Delet "<< endl;
	return true;
}
bool menu();
contact* f;
int main() {
	int n;
	string name, search, phone;
	contactsList a;
	while(menu()) {
		cout << "\nYor choice: ";
		cin >> n;
		switch(n) {
			case 1:
				cout << "\nName: ";
				cin >> name;
				cout << "Phone: ";
				cin >> phone;
				cout << "GivenName";
				cin >> GivenName;
				a.addBegin(name,phone,GivenName,Additional_Name,Family_Name,Yomi_Name,GivenYomi_Name,Additional_Yomi_Name,FamilyNameYomi,NamePrefix,NameSuffix,
            Initials,Nickname,ShortName,MaidenName,Gender,Location,BillingInformation,DirectoryServer,Mileage,
         Occupation);
				break;
			case 2:
				cout << "\nSearch Contact: ";
				cin >> search;
				f = a.findContact(search);
				break;
			case 3:
			
			//GivenName,Additional_Name,Family_Name,Yomi_Name,GivenYomi_Name,Additional_Yomi_Name,FamilyNameYomi,NamePrefix,NameSuffix,
            //Initials,Nickname,ShortName,MaidenName,Gender,Location,BillingInformation,DirectoryServer,Mileage,
         //Occupation;
			
			
				cout << "\nWhat contact to edit: ";
				cin >> search;
				cout << "\nName: ";
				cin >> name;
				cout << "Phone Number: ";
				cin >> phone;
				cout << "Given Name ":
				cin >> Given Name ;
				f = a.findContact(search);
				a.insertAfter(f, name, phone,GivenName,Additional_Name,Family_Name,Yomi_Name,
				GivenYomi_Name,Additional_Yomi_Name,FamilyNameYomi,NamePrefix,NameSuffix, Initials,Nickname,ShortName,
				MaidenName,Gender,Location,BillingInformation,DirectoryServer,Mileage,
         Occupation);
				//a.deleteContact(search);
				break;
			default:
				break;
		}
	}
	return 0;
}
