#pragma once
#include "Generator.hpp"


class RandomNoise : public Generator {
	private:
		int tileQuantity; 

	public:
		RandomNoise() { tileQuantity = 2; };
		RandomNoise(int tiles) { tileQuantity = tiles; };
		void generate(Area* area) override;
};