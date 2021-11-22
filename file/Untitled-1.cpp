#include <iostream>
#include <conio.h>
using namespace std;


class Animal{

    private:   
        string name;
        float height,weight;
        int id;

    public:
    	virtual void toStream (istream& is);
        friend istream& operator >> (istream& ,Animal* );
        friend ostream& operator << (ostream& os,Animal* al);
        Animal operator = (Animal* al); 
        
        Animal();
        Animal(string name,float height, float weight, int id);
        Animal(Animal* al);
        ~Animal();
        void setName(string name);
        void setID(int id); 
        string getName();
        int getID();
        //void EnterID();
		//void EnterName();            
};


//Dv Ãn C? 
typedef class Graminivore:public Animal{

        string food;
        int amount;
    public: 
        virtual void toStream(istream& is);
        friend ostream& operator << (ostream& os,Graminivore *gn);
        
}Grami;


// Dv Ãn Th?t
typedef class Hypercarnivore:public Animal{

        string food;
        int amount;
    public: 
        virtual void toStream(istream& is);
        friend ostream& operator << (ostream& os,Hypercarnivore *hy);
        
}Hyper;

// Vi Sinh V?t
typedef class Microorganism:public Animal{
    
		string food; 
        int amount;
    public: 
        virtual void toStream(istream& is);
        friend ostream& operator << (ostream& os,Microorganism *mi);
}Microo;


// Cây T?m Ki?m Nh? Phân
struct Node{
	Animal *data; 
	Node* left;
	Node* right; 
}; 


struct BST{
		
		Node *root; 
		long size;
		
		Node* CreateNode(Animal *al); 
		//Work With Tree
        int LeftOf(Animal *al,Node* root );
        int RightOf(Animal *al,Node* root );
        Node* Insert(Node* &root, Animal* al1);
        Node* SearchName(Node* root,Animal* al1);
        void PostOrder(Node* root);
        void InOrder(Node* root);
        Node* Delete(Node* &root, Animal *al1);
        Node* LeftMostAnimal(Node* root);
};

//Linked List
struct NodeL{
    Animal *data;
    NodeL *next;
};

struct SList{
	NodeL *head;
	NodeL *tail;
	long size;
	SList();
    ~SList();
	NodeL* CreateNodeL(Animal *v);
    void addLast(Animal *v);
    NodeL *previous(NodeL *p);
    NodeL *searchName(NodeL *p, string name);
    void sort();
    void removeFirst();
    void removeLast();
    void removeName();
    void traverse() const;
};
 
void Hyper::toStream(istream& is){
    Animal::toStream(is);
    fflush(stdin);
    cout <<"\t\tFavorite Food: ";
    is >> food;
    cout <<"\t\tAmout: ";
    is >> amount;
}

ostream& operator << (ostream& os,Hyper *hy){
    Animal *al = static_cast <Animal *> (hy);
    os << al;
    os << "\t\tAmount: "<< hy->amount<<endl; 
    os << "\t\tFavorite Food: "<< hy->food<<endl; 
    cout <<"\t*********************~~*********************" << endl; 
}


NodeL* SList::CreateNodeL(Animal *v){
	NodeL* p = new NodeL;
    Animal *v1 = new Animal(v);
	p->data = v1;	
	p->next = NULL;	
	return p; 
}
//khoi tao
SList::SList(){
    head = NULL;
    tail = NULL;
    size =0;
}
// giai phong bo nho
SList::~SList(){
    head = NULL;
    tail = NULL;
    size = 0;
}


// th?m v?o cu?i
void SList::addLast(Animal *v){
    NodeL *p = CreateNodeL(v);
    if(size == 0){
        head = p;
        tail = p;
    }
    else{
        tail->next = p;
        tail = p;
    }
    size = size + 1;
}


// Duyet cac ptu trong danh sach
void SList::traverse() const{
    NodeL *p = head;
    while(p != NULL){
    cout << p->data; 
        p = p->next;
    }
    cout <<endl;
    delete p;   
}


// T?m ki?m 
NodeL *SList::searchName(NodeL *p, string name){
    while(p != NULL){
        if(p->data->getName() == name)
            break;
        p=p->next;
    }
    return p;
}


// S?p x?p
void SList::sort(){
    for(NodeL *p = head; p != tail; p=p->next){
        for(NodeL *q = p->next; q != NULL; q = q->next){
            if(p->data->getID() > q->data->getID()){
                swap(p->data,q->data);
            }
        }
    }
}


// t?m 1 ph?n t? ngay tr??c ph?n t? b?t k?
NodeL* SList::previous(NodeL *p) {
	NodeL *t = head;
	while (t->next != p)
		t = t->next;
	return t;
}


void SList::removeFirst(){
   if(size == 0){
   	    cout <<"Khong tim thay ten can xoa";
	}else{
		NodeL*t = head;
		head=head->next;
		delete t;
		size--;
    }
}


void SList::removeLast(){
	NodeL *pre = previous(tail);
	NodeL*t =tail;
	pre->next=NULL;
	tail=pre;
	delete t;
	size--;
}	

// xoa 1 ptu 
void SList::removeName(){
    string name;
    cout<<"Nhap ten dong vat can xoa:";
    fflush(stdin);
    getline(cin,name);
    NodeL *p = head;
    for(p;p!=NULL;p=p->next){
        if(p->data->getName()==name){
            if(p == head){
                removeFirst();
                break;
            }
            else if(p==tail){
                removeLast();
                break;
            }
            else{
                NodeL *pre = previous(p);
                pre->next = p->next;
                delete p;
                size--;
                break;
            }
        }
    }
    if(p == NULL){
        cout <<"Khong tim thay ten dong vat can xoa"<<endl;
    }
}


void Grami::toStream(istream& is){
    Animal::toStream(is);
    fflush(stdin);
    cout <<"\t\tFavorite Food: ";
    is >> food;
    cout <<"\t\tAmout: ";
    is >> amount; 
}

ostream& operator << (ostream& os,Grami *gn){
    Animal *al = static_cast <Animal *> (gn);
    os << al;
    os << "\t\tAmount: "<< gn->amount<<endl; 
    os << "\t\tFavorite Food: "<< gn->food<<endl; 
    cout <<"\t*********************~~*********************" << endl; 
}

Node* BST::CreateNode(Animal *al){
	Node * p= new Node; 
    Animal *al1 = new Animal(al);
	p->data = al1;
	p->left = NULL;
	p->right = NULL; 
	return p; 
} 


//Duy?t Ph?n T? B?n Tr?i Root > Left v? Right > Root
int BST::LeftOf(Animal *al,Node* root){    
    return (al->getID() < root->data->getID());
}


int BST::RightOf(Animal *al,Node* root){    
    return (al->getID() > root->data->getID());
}


//Ch?n Ph?n T?
Node* BST::Insert(Node* &root,Animal *al1){
    if ( root == NULL){
        Node* node = CreateNode(al1);
        size++;
        return node;
    }
    else{
    	if(LeftOf(al1,root))
    		root->left = Insert(root->left,al1);
    	else if(RightOf(al1,root))
    		root->right = Insert(root->right,al1);
	}
        size ++;
		return root;
}


//T?m Ki?m Ph?n T?
Node* BST::SearchName(Node *root,Animal *al1){
	if (root == NULL){
		return NULL;
	}
	
	if(root->data->getName() == al1->getName()){
        return root;
    }
	else if(LeftOf(al1,root))
		SearchName(root->left,al1);
	else if(RightOf(al1,root))
		SearchName(root->right,al1);
	return root;
}


//Duy?t Ph?n T? Theo Left -> Right -> Node
void BST::PostOrder(Node* root){
	if(root != NULL){
		PostOrder(root->left);
		PostOrder(root->right);
		cout << root->data;
	}
}

void BST::InOrder(Node* root){
	if(root != NULL){
		InOrder(root->left);
		InOrder(root->right);
		cout << root->data;
	}
}

//Tr? V? Ph?n T? B? Nh?t B?n Trai
Node* BST::LeftMostAnimal(Node* root){
    while(root->left != NULL)
        root = root->left;
    return root;
}


//X?a Ph?n T?
Node* BST::Delete(Node* &root, Animal *al1){
    if (root == NULL)
        return root;
    if (LeftOf(al1,root))
        root->left = Delete(root->left,al1);
    else if (RightOf(al1,root))
        root->right = Delete(root->right,al1);
    else
    {
        if (root->left == NULL)
        {
            Node* newRoot = root->right;
            delete root;
            return newRoot;
        }
        if (root->left == NULL)
        {
            Node* newRoot = root->left;
            delete root;
            return newRoot;
        }
        root = LeftMostAnimal(root->right);
        root->right = Delete(root->right,al1);
    }
    size --;
    return root;
}


istream& operator >> (istream& is,Animal *al){
    al->toStream(is);
    return is;
}


ostream& operator << (ostream& os,Animal *al){
    os << "\t*********************--*********************\n";
    os << "\t\tName: " << al->name << endl;
    os << "\tHeight: " << al->height << " kg" << "|| Weight: " << al->weight << " cm" <<endl;
    os << "\t\tID: " << al->id<<endl;
    return os;
}


void Animal::toStream(istream& is){
    fflush(stdin);
    cout <<"\t\tName Of The Animal: ";
    getline  (is,name);
    cout <<"\t\tHeight: ";
    is >> height;
    cout <<"\t\tWeight: ";
    is >> weight;
    do{
        cout <<"\t\tID: ";
        is >> id;
        if(id < 1 || id > 299)
            cout << "\t\tNegative !"<<endl;
    }   while(id < 1 || id > 299);  
}


Animal Animal::operator = (Animal* al){
	this->name = al->name;
	this->height = al->height;
	this->weight = al->weight;
	this->id = al->id; 
}


//Kh?i T?o H?m
Animal::Animal(){
    this->name = "None";
	this->height = 0;
	this->weight = 0;
	this->id = 0;
}


Animal::Animal(string name,float height, float weight, int id){
    this->name = name;
    this->height = height;
    this->weight = weight;
    this->id =  0; 
}


Animal::Animal(Animal* al){
    this->name = al->name;
	this->height = al->height;
    this->weight = al->weight;
    this->id =  al->id; 
}


Animal::~Animal(){
}

//L?y D? Li?u
string Animal::getName(){
    return name; 
}


int Animal::getID(){
	return id;
}

//Produce Key 
/*void Animal::EnterName(){
    cout << "Enter Key Name: ";
    cin >> name; 
}

void Animal::EnterID(){
	cout << "Enter Id Key: ";
    cin >> id;
	do{
		if(){ 
        	cout << "Enter Id Again: ";
        	cin >> id; 
		}
	}while(id < 1 || id > 299);
}*/

void Animal::setID(int id){
	this->id = id;	
}

void Animal::setName(string name){
    this->name = name;
}

void Microorganism::toStream(istream& is){
    Animal::toStream(is) ;
    fflush(stdin);
    cout <<"\t\tFavorite Food: ";
    is >> food;
    cout <<"\t\tAmount: ";
    is >> amount;  
}

ostream& operator << (ostream& os,Microo *mi){
    Animal *al = static_cast <Animal *> (mi);
    os << al;
    os << "\t\tAmount: "<< mi->amount<<endl; 
    os << "\t\tFavorite Food: "<< mi->food<<endl; 
    cout <<"\t*********************~~*********************" << endl; 
}



/*void BST::InOrder(Node* root){
	if(root != NULL){
		InOrder(root->right);
		InOrder(root->left);
		cout << root->data;
	}
}*/






BST MENU(Node* , Animal *al){
    long allSize[5];
    char k, c;
	do{
        cout << "                                  MENU                                           " << endl;
        cout << "---------------------------------------------------------------------------------" <<endl;
        cout << "+           MENU BUILDING PROGRAM WORKING WITH CLASS OF ANIMALS                +\n" << endl;
        cout << "+                      CHOOSE THE FOLLOWING FUNCTIONS:                         +\n" << endl;
        cout << "+               1. TO WORK WITH THE CLASS OF GRAMINIVORE                       +\n" << endl;
        cout << "+               2. TO WORK WITH THE CLASS OF HYPERCARNIVORE                    +\n" << endl;
        cout << "+               3. TO WORK WITH THE CLASS OF MICROORGANISM               		+\n" << endl;
        cout << "+               4. TO WORK WITH THE LINKED LIST                          		+\n" << endl;
        cout << "+               5. TO QUANTITY STATISTICS                                		+\n" << endl;
        cout << "+               0. TO EXIT THE PROGRAM                                   		+\n" << endl;
        cout << "---------------------------------------------------------------------------------" <<endl;
        int panel;
        cout << "\n\n\t Please choose a function:  ";
        cin >> panel;
        switch (panel){
            case 1: {
                BST tree;
                tree.root = NULL;
                tree.size = 0;
                cout << "\n Welcome to the Graminivore class" << endl;
                cout << " Enter number of animal: ";
                int n;
                cin >> n;
                for(int i = 0; i < n; i++){
                    al = new Grami;
                    cin >> al;
                    tree.root = tree.Insert(tree.root, al);
                }
                cout << " Now choose your work: ";
                int work2;
                char k, c;
                do{
                    cout << "----------------------------------------------------" << endl;
                    cout << "+ 		1.  PRINT GRAMINIVORE WITH TREE LIST 		+\n" << endl;
                    cout << "+ 		2.  SORTED LIST  	  						+\n" << endl;
                    cout << "+ 		3.  ADD MORE ANIMAL		 					+\n" << endl;
                    cout << "+ 		4.  DELETE ANIMAL 							+\n" << endl;
                    cout << "+ 		5.  SEARCH FOR ANIMAL				 		+\n" << endl;
                    cout << "+ 			     -ESC. EXIT-	 					+\n" << endl;
                    cout << "----------------------------------------------------" << endl;
                    cout << "\n\n\t Please choose a function:  ";
                    cin >> work2;
                    switch(work2){
                        case 1: {
                            tree.PostOrder(tree.root);
                        }break;
                        case 2: {
                            cout << " Here Is Sorted Tree " << endl;
                            tree.InOrder(tree.root);
                        }break;
                        case 3: {
                            Animal *all = new Grami;
                            cout << " Enter Another Animal: ";
                            cin >> all;
                            tree.Insert(tree.root, all);
                        }break;
                        case 4: {
                        	int id;
                        	string name;
                            cout << " Delete Animal " << endl;
                            Animal *temp1 = new Grami;
                            cin>>name;
                            temp1->setID(id);
                            tree.root = tree.Delete(tree.root, temp1);
                            cout <<"Done"<<endl;
                        }break;
                        case 5: {
                        	int id;
                            cout << " Search Animal " <<endl;
                            Animal *temp2 = new Grami;
                            cin >> id;
                            temp2->setID(id); 
                            cout << tree.SearchName(tree.root, temp2)->data;
                        }break;
                    }
                        cout << "\nDo you want to exit ?(esc)";
                        k = c;
                        c = getch();
                        
                }while(c!=27);
                // BST temp;
                // temp = temp.size;
                allSize[0] = tree.size;
            }break;
            case 2: {
                BST tree;
                tree.root = NULL;
                tree.size = 0;
                cout << "\n Welcome to the HYPERCARNIVORE class" << endl;
                cout << " Enter number of animal: ";
                int n;
                cin >> n;
                for(int i = 0; i < n; i++){
                    al = new Hyper;
                    cin >> al;
                    tree.Insert(tree.root, al);
                }
                cout << "Now choose your work: ";
                int work3;
                char k,c;
                do{
                    cout << "----------------------------------------------------" << endl;
                    cout << "+ 		1.  PRINT HYPERCARNIVORE WITH TREE LIST 	+\n" << endl;
                    cout << "+ 		2.  SORTED LIST  	  						+\n" << endl;
                    cout << "+ 		3.  ADD MORE ANIMAL		 					+\n" << endl;
                    cout << "+ 		4.  DELETE ANIMAL 							+\n" << endl;
                    cout << "+ 		5.  SEARCH FOR ANIMAL				 		+\n" << endl;
                    cout << "+ 			     -ESC. EXIT-	 					+\n" << endl;
                    cout << "----------------------------------------------------" << endl;
                    cout << "\n\n\t Please choose a function:  ";
                    cin >> work3;
                    switch(work3){
                        case 1: {
                            tree.PostOrder(tree.root);
                        }break;
                        case 2: {
                            cout << " Here Is Sorted List " << endl;
                            tree.InOrder(tree.root);
                        }break;
                        case 3: {
                        	Animal *all = new Hyper;
                            cout << " Enter Another Animal: ";
                            cin >>all;
                            tree.Insert(tree.root, all);
                        }break;
                        case 4: {
                        	string name;
                        	int id;
                            cout << " Delete Animal " << endl;
                            Animal *temp1 = new Hyper;
                            cin >> name;
                            temp1->setID(id);
                            tree.root = tree.Delete(tree.root, temp1);
                            cout <<"Done"<<endl;
                        }break;
                        case 5: {
                        	int id;
                            cout << " Search Animal " << endl;
                            Animal *temp2 = new Hyper;
                            cin >> id;
                            temp2->setID(id);
                            cout << tree.SearchName(tree.root, temp2)->data;
                        }break;
                    }
                        cout << "\nDo you want to exit ?(esc)";
                        c = getch();
                        
                }while(c!=27);
                // BST temp;
                // temp = temp.size; 
                allSize[1] = tree.size;
            }break;
            case 3: {
                BST tree;
                tree.root = NULL;
                tree.size = 0;
                cout << "\n Welcome to the MICROORGANISM class" << endl;
                cout << " Enter number of animal: ";
                int n;
                cin >> n;
                for(int i = 0; i < n; i++){
                    al = new Hyper;
                    cin >> al;
                    tree.Insert(tree.root, al);
                }
                cout << "Now choose your work: ";
                int work4;
                char k, c;
                do{
                    cout << "----------------------------------------------------" << endl;
                    cout << "+ 		1.  PRINT MICROORGANISM WITH TREE LIST 		+\n" << endl;
                    cout << "+ 		2.  SORTED LIST  	  						+\n" << endl;
                    cout << "+ 		3.  ADD MORE ANIMAL		 					+\n" << endl;
                    cout << "+ 		4.  DELETE ANIMAL 							+\n" << endl;
                    cout << "+ 		5.  SEARCH FOR ANIMAL				 		+\n" << endl;
                    cout << "+ 			     -ESC. EXIT-	 					+\n" << endl;
                    cout << "----------------------------------------------------" << endl;
                    cout << "\n\n\tPlease Choose A Function: ";
                    cin >> work4;
                    switch(work4){
                        case 1: {
                            tree.PostOrder(tree.root);
                        }break;
                        case 2: {
                            cout << " Here Is Sorted List " << endl;
                            tree.InOrder(tree.root);
                        }break;
                        case 3: {
                        	Animal *all = new Microo;
                            cout << " Enter Another Animal: ";
                            cin >>all;
                            tree.Insert(tree.root, all);
                        }break;
                        case 4: {
                        	string name;
                        	int id;
                            cout << " Delete Animal " << endl; 
                            Animal *temp1 = new Microo;
                            cin >> name;
                            temp1->setID(id);
                            tree.root = tree.Delete(tree.root, temp1);
                            cout <<"Done"<<endl;
						}break;
                        case 5: {
                        	int id;
                            cout << " Search Animal " << endl;
                            Animal *temp2 = new Microo;
                            cin >> id;
                            temp2->setID(id);
                            cout << tree.SearchName(tree.root, temp2)->data;
                        }break;
                    }
                        cout << "\nDo you want to exit ?(esc)";
                        k = c;
                        c = getch();
                        
                }while(c!=27);
                // BST temp;
                // temp = temp.size;
                allSize[2] = tree.size;
            }break;
            case 4: {
                Animal *al;
                SList list;
                cout << "\n Welcome To The Linked List " << endl;
                cout << "\n Enter Number Of Animal: ";
                int n;
                cin >> n;
                for(int i = 0; i < n; i++){
                    cin >> al;
                    list.addLast(al);
                }
                cout << "Now choose your work: ";
                int work5;
                char k, c;
                do{
                    cout << "------------------------------------------------------------" << endl;
                    cout << "+ 		1.  INSERT THE ANIMAL CLASS WITH THE LINKED LIST  	+\n" << endl;
                    cout << "+ 		2.  PRINT THE ANIMAL CLASS WITH LINKED LIST 	  	+\n" << endl;
                    cout << "+ 		3.  SORTED LIST		 								+\n" << endl;
                    cout << "+ 		4.  DELETE ANIMAL 									+\n" << endl;
                    cout << "+ 		5.  SEARCH FOR ANIMAL				 				+\n" << endl;
                    cout << "+ 			     -ESC. EXIT-	 							+\n" << endl;
                    cout << "------------------------------------------------------------" << endl;
                    cout << "\n\n\t Please choose a function: ";
                    cin >> work5;
                    switch(work5){
                        case 1: {
                            Animal *al1 = new Grami;
                            cout << " Enter: " << endl;
                            cin >> al1;
                            list.addLast(al1);
                            
                            al1 = new Hyper;
                            cout << " Enter: " << endl;
                            cin >> al1;
                            list.addLast(al1);
                            
                            al1 = new Microo;
                            cout << " Enter: " << endl;
                            cin >> al1;
                            list.addLast(al1); 
                        }break;
                        case 2: {
                            // list.head();
                            // list.tail();
                        }break;
                        case 3: {
                            list.sort();
                            list.traverse();
                        }break;
                        case 4: {
                            list.removeFirst();
                            // list.previous();
                            list.removeLast();
                        }break;
                        case 5: {
                            Animal *al1 = new Grami;
                            // list.searchName();
                        }break;
                    }
                    cout << "\nDo you want to exit ?(esc)";
                    k = c;
                    c = getch();
                }while(c!=27);
                
            }break;
            case 5: {
                // Animal *al;
                cout << "\n Welcome To Quantity Statistics " << endl;
                // tree.size;       	
            }break;
            default : {
                cout << "\n You have chosen to Exit the program" << endl;
            }break;
        }
        cout << "\nDo you want to exit ?(esc)";
        k = c;
        c = getch();
	}while(c!=27);
}
int main(){
    BST list;
    Animal *a = new Animal;
    //a.setID(id);
    //a.setName(name);
    MENU(list.root, a);
    delete a; 
}