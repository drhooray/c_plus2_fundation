#include <iostream>
#include <string>
#include <vector>

using namespace std;



class Animal{
	private:
		int height;
		int weight;
		string name;

		static int numOfAnimals;

	public:
		int getHeight(){ return height;}
		int getWeight(){ return weight;}
		string getName(){ return name;};
		void setHeight(int cm){ height =cm;}
		void setWeight(int kg){ weight = kg;}
		void setName(string animalName){ name = animalName;}

		//overload
		void setAll(int, int, string);

		//construct prototype
		Animal(int, int, string);
		~Animal();

		Animal();

		static int getNumOfAnimal(){ return numOfAnimals;}
		void toString();

};

// declare everything

int Animal::numOfAnimals = 0;
void Animal::setAll(int height, int weight, string name){
	//there are no object to put on this structure
	this->height= height;
	this->weight= weight;
	this->name= name;
	Animal::numOfAnimals++;
}
Animal::~Animal(){
	cout<<"animal"<<this->name<<"detoryed" <<endl;
}
Animal::Animal(int height, int weight, string name){
	this->height = height;
	this->weight = weight;
	this->name = name;
	Animal::numOfAnimals++;
}

Animal::Animal(){
	Animal::numOfAnimals++;
}

void Animal::toString(){
	cout<<this->name<<" is "<< this->height <<
		" cms tall and "<<this->weight<<"kg inweight"<<endl;
}

int main(){
	Animal fred;
	fred.setHeight(33);
	fred.setWeight(10);
	fred.setName("Fred");

	cout<< fred.getName() <<" is"<<fred.getHeight() <<" cms tall and" 
		<< fred.getWeight() << " kgs weight" <<endl;

	Animal tom(36,15,"Tom");

	cout<< tom.getName() <<" is"<<tom.getHeight() <<" cms tall and" 
		<< tom.getWeight() << " kgs weight" <<endl;
	return 0;
}
