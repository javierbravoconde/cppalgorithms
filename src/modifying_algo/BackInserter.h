/*
 * BackInserter.h
 *
 *  Created on: Jun 13, 2016
 *      Author: javier
 */

#ifndef MODIFYING_ALGO_BACKINSERTER_H_
#define MODIFYING_ALGO_BACKINSERTER_H_

#include <string>
#include <vector>
#include <algorithm>

namespace modifying_algo
{
	void backInserter()
	{
		std::cout << "starting backInserter" << std::endl;
		std::vector<std::string> aVectorOrigin {"a", "b", "c"};
		std::vector<std::string> aVectorFinal;

		//We use back_inserter so it will push each matching element at the end of the aVectorFinal
		std::copy_if(aVectorOrigin.begin(), aVectorOrigin.end() ,  back_inserter(aVectorFinal), [](const std::string& i){return i!="c";});

		std::cout << aVectorFinal.size() << std::endl;
	}

	void noBackInserter()
	{
		std::cout << "starting noBackInserter" << std::endl;
		std::vector<std::string> aVectorOrigin {"a", "b", "c"};

		//Because we are not using back_inserter, we need to allocate enough space on the destination vector
		std::vector<std::string> aVectorFinal(aVectorOrigin.size());

		auto it = std::copy_if(aVectorOrigin.begin(), aVectorOrigin.end(), aVectorFinal.begin(), [](const std::string& i){return i!="c";});

		//Now in case we ended up inserting less element than the vector pre-allocated capacity, we need to remove
		//the final garbage
		aVectorFinal.erase(it, aVectorFinal.end());

		std::cout << aVectorFinal.size() << std::endl;
	}
}



#endif /* MODIFYING_ALGO_BACKINSERTER_H_ */
