#pragma once
#include <vector>

using namespace std; 

class Area {
	protected:
		// Position of the area (If is inside another area position will matter) 
		int x, y; 
		int** tileInfo;
		int width, height; 
		vector<Area*> areas; 



	public: 
		Area(AreaSharpFriendly sharpArea);
		Area(int width, int height, int x, int y); 

		virtual int** processArea();

};

struct AreaSharpFriendly {
	public: 
		int x, y; 
		int** tileInfo; 
		int width, height; 
		Area** areas; 
};