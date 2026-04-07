#pragma on
#include <iostream>
#include <string>
#include <vector>
using namespace std;

//Music class
class Music {
private:
	string title, artist, album;
	int year;

public:
	Music(string title, string artist, string album, int year) {
		this->title = title;
		this->artist = artist;
		this->album = album;
		this->year = year;
	}

	string getTitle() { return title; }
	string getArtist() { return artist; }
	string getAlbum() { return album; }
	int getYear() { return year; }

};
//Music Streaming Service Class
class Mss {
private:
	string serviceName;
	vector<Music> musicList;

public:
	Mss(string name) {
		this->serviceName = name;
	}
	//add a music to the service
	void addMusic(string title, string artist, string album, int year) {
		Music newMusic(title, artist, album, year);
		musicList.push_back(newMusic);
		//벡터 함수 기능으로 값을 넣어줌
		cout << title << "by" << artist << "added to" << serviceName << endl;

	}
	//search by title
	Music* searchByTitle(string title) {
		//객체를 반환할때는 별표로 포인터 표시 해야함
		for (int i = 0;i < musicList.size(); i++) {
			if (musicList[i].getTitle() == title) {
				return &musicList[i];
				// = return &musicList+i;
			}

		}return NULL;
	}
	//Search by artist
	vector<Music*> searchByArtist(string artist) {
		vector<Music*> result;

		for (int i = 0;i < musicList.size();i++) {
			//artist와 musicList에 있는 artist가 같으면 result에 추가
			if (musicList[i].getArtist() == artist) {
				result.push_back(&musicList[i]);
			}
		}
		return result;
	}
};