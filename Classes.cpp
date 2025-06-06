// Classes.cpp : Defines the entry point for the application.
//

#include "Classes.h"
#include <list>

using namespace std;

class YoutubeChannel
{
private:
	string Name;
	string OnwerName;
	int SubCount{0};
	list<string> PublishedVideo;

public:
	void GetInfo()
	{

		cout << "You Channel name: " << Name << endl;
		cout << "Onwer Name: " << OnwerName << endl;
		cout << "Sub Count:" << SubCount << endl;
		for (auto publishVideo : PublishedVideo)
		{
			cout << "Videos: " << publishVideo << endl;
		}
	}
	void Subcribe()
	{
		SubCount++;
	}
	void UnSubcribe()
	{
		SubCount--;
	}
	void PublishVideo(string title)
	{
		PublishedVideo.push_back(title);
	}
	YoutubeChannel(string f_Name, string f_ownerName)
	{
		Name = f_Name;
		OnwerName = f_ownerName;
	}
};

int main()
{
	YoutubeChannel ytchannel("Quan", "RoboticLTQ");
	ytchannel.Subcribe();
	ytchannel.Subcribe();
	ytchannel.Subcribe();
	ytchannel.UnSubcribe();
	ytchannel.PublishVideo("C++ for beginner");
	ytchannel.PublishVideo("C++ OOP");
	ytchannel.GetInfo();

	return 0;
}
