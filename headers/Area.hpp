#pragma once
#include <vector>

using namespace std; 

struct AreaSharpFriendly {
public:
	int x, y;
	int** tileInfo;
	int width;
	int height;
	AreaSharpFriendly* areas;
	size_t areasCount; 
};

class Area {
	protected:
		// Position of the area (If is inside another area position will matter) 
		int x, y; 

		int** tileInfo;
		int width;
		int height;
		vector<Area>* areas; 

	private: 
		Area() {};

	public: 
		Area(const AreaSharpFriendly sharpArea);
		Area(int width, int height, int x = 0, int y = 0); 
		Area(const Area& other); 

		///Changes tileInfo based on child Areas. 
		virtual int** processArea();

		int* operator[](const int index) {
			return tileInfo[index]; 
		};

		int getWidth() {
			return width; 
		}

		int getHeight() {
			return height; 
		}

		int getX() {
			return x; 
		}

		int getY() {
			return y; 
		}



		void addArea(int width, int height, int x, int y) {
			areas->push_back(Area(width, height, x, y)); 
		}
		vector<Area>* getChildren() {
			return areas; 
		}

		const AreaSharpFriendly convertToSharp(); 

};

