#include "Rectangle.h"
#include "Pet.h"
#include "Music.h"

using namespace std;
//위 문장 추가하면 아래 cout에서 std::빼고 작성 가능
int main() {
	Rectangle rect1(4, 6);
	std::cout << "rectangle 1: " << std::endl;
	//printf("Rectangle 1: \n");
	cout << "Area:" << rect1.getArea() << endl;
	//printf("Area:%lf\n", rect1.gerArea());
	cout << "Perimeter:" << rect1.getPerimeter() << endl;
	cout << "Is Square?:" <<boolalpha<< rect1.isSquare() << endl;
	//booialpha 는 0,1을 true, false형태로 바꾸는 것
	cout<<"============================================="<<endl;

	Pet myPet("Lucky", 5, "dog");
	cout << "My pet's name is " << myPet.getName() << endl;
	Puppy myPuppy("kong", 3, "dog", "puddle");
	cout << "My puppy's breed is " << myPuppy.getBreed() << endl;
	cout << myPuppy.getName() << endl;
	cout << "=============================================" << endl;

	//create Mss
	Mss myService("Melon");
	//add some music to the service
	myService.addMusic("Jump", "Blackpink", "Jump", 2025);
	myService.addMusic("Swim", "BTS", "ARIRANG", 2026);
	myService.addMusic("BangBang", "IVE", "REVIVE", 2026);

	//search
	string music_title;
	cout << "Enter the Music Title: ";
	cin >> music_title;
	Music* result = myService.searchByTitle(music_title);
	if (result != NULL) {
		cout << "찾았다" << result->getTitle() << endl;
	}
	else {
		cout << "못찾았다" << endl;
	}
	//search by artist
	string artist_name;
	cout << "Enter thr artist name:";
	cin >> artist_name;

	vector<Music*> artistResult = myService.searchByArtist(artist_name);
	if (artistResult.size() > 0) {
		cout << "Found" << artistResult.size() << "songs by" << artist_name << ":" << endl;
		for (int i = 0;i < artistResult.size();i++) {
			cout << artistResult[i]->getTitle() << endl;
		}
	}
	else {
		cout << "Not Found" << endl;
	}

	return 0;
}