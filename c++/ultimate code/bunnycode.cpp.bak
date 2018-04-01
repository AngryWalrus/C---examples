//ultimate bunny code 1060U
#include<iostream>
#include<string>
//#include<fstring>
#include<ctime>
#include<cstdlib>

using namespace std;

string names[]= ""; //insert bunny name list ""
int namecount;//length of names

struct Bunny{
    Bunny();//constructor

    bool isFemale;//1 if female, 0 if male
    string color;
    string name;
    int Age;
    bool radioactive_vampire_mutant_bunny;//1 if true, 0 if false
    Bunny *next; //next bunny in linked list
    
    void print();//prints all the attibutes

};


Bunny::Bunny(){
    next = NULL;

    //chose a random sex
    if(rand()%2==1)
        isFemale=1;
    else{
        isFemale=0;
    }
    //choose a random color//white,black,brown,spotted
    switch(rand()%4){
        case 0: //white
            color = "white";
            break;
        case 1: //black
            color = "black";
            break;
        case 2: //brown
            color = "brown";
            break;
        case 3: //spotted
            color = "spotted";
            break;
    }
    //pick a random name
    name = name[rand()%namecount];
    if (rand()%50 == 1){//2%of the time
        radioactive_vampire_mutant_bunny = true;
    }
    else{
        radioactive_vampire_mutant_bunny = false;
    }

}

void Bunny::print(){
    if (radioactive_vampire_mutant_bunny==true){
        cout<<"radioactive vampire mutant "<<endl;
    }
    cout<<"Bunny"<< name<<"\tSex = "<<endl;
    if(isFemale)
        cout<<"Female"<<endl;
    else
        cout<<"Male"<<endl;
    cout<<"Age: "<<Age<<"\tcolor = "<<color<<endl;
    cout<<endl;
}


class Bunnies{
    public:
        int setMales(int m);
        int getMales();
        void addBunny(Bunny *b);//adds a bunny to the linked list
        Bunny* getFirst();
        void update();
        
    private:
        Bunny *first;//first bunny
        int males;
};

Bunny* Bunnies::getFirst(){
    return first;
}

//ages bunnies 1 year
//for each female, if there is a male >2 years old, a new bunny is born
void Bunnies::update(){
    Bunny *current = first;
    while(current-> !=NULL){
        if(current->isFemale && current->Age>=2){
            if(males>0)
        }
        current = current->next;
    }

}

//initialize with 5 random bunnies
Bunnies::Bunnies(){
    //first bunny does not exist until we create it
    first = NULL;
    for(int i = 0;i<5;i++){
        Bunny *newb = new Bunny();
        addBunny(newb)
    }
}

void Bunnies::setMales(int s){
    males =  s;
}

int Bunnies::getMales(){
return males;
}

//adds a bunny to the end of the list
void Bunnies::addBunny(bunny *b){
    if(!(b->isFemale)){
        setMales(1+getMales())
    }
    
    if(first==NULL){
        first = b;
    }
    else{
        Bunny *current = first;
        while(current->next != NULL){
            current = current->next;
        }
        current->next = b;

    }
}
int main(){
    srand(time(NULL));
    //Bunny *b1 = new Bunny();
    //cout<<"color = "<<b1->color<<endl;
    Bunnies *bs = new Bunny();
    Bunny *b1 = bs->first;
    while(b1!=NULL){
        cout<< "color = "<<b1->color<<endl;
        b1=b1->next;
    }
}

