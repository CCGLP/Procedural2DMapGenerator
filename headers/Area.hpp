#pragma once
#include <vector>
#include <iostream>
using namespace std; 



struct Area {
	public:
		// Position of the area (If is inside another area position will matter) 
		int x, y; 

		int** tileInfo;
		int width;
		int height;
		Area** areas; 
		int areasSize;

	private: 
		Area() {};

	public: 
		Area(int width, int height, int x = 0, int y = 0); 
		Area(const Area& other); 
		~Area() {
			cout << "Deleting memory............" << endl;
			for (int i = 0; i < width; i++) {
				delete[] tileInfo[i];
			}

			delete[] tileInfo;


			for (int i = 0; i < areasSize; i++) {
				delete areas[i]; 
			}
			delete[] areas; 
			

		};

		///Changes tileInfo based on child Areas. 
		void processArea();

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



		Area* addArea(int width, int height, int x, int y) {
			Area** newAreas = new Area*[(areasSize+1)]; 
			int i; 
			for (i = 0;  i < areasSize; i++) {
				newAreas[i] = areas[i]; 
			}
			newAreas[i] = new Area(width, height, x, y);
			areasSize++;
			areas = newAreas; 
			return newAreas[i]; 
		}
		Area** getChildren() {
			return areas; 
		}


};

