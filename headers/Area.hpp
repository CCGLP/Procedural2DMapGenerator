#pragma once
#include <vector>
#include <iostream>
#include <utility>

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
		~Area() { //Problemita en el destructor aquí. Si borro hijos antes, peta al borrar el padre. 
			if (tileInfo) {
				for (int i = 0; i < width; i++) {
					if (tileInfo[i]) {
						delete[] tileInfo[i];
						tileInfo[i] = nullptr; 
					}
				}
				delete[] tileInfo;
				tileInfo = nullptr; 
			}


			if (areas && areasSize > 0) {

				for (int i = 0; i < areasSize; i++) {
					if (areas[i]) {
						delete areas[i];
						areas[i] = nullptr; 
					}
				}
				delete[] areas;
				areas = nullptr; 

			}
			


		};

		pair<int, int> getRandomPointInArea(Area* mainParent);

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

