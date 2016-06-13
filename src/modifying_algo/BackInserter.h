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
		std::cout << "starting algo" << std::endl;
		std::vector<std::string> aVectorOrigin {"a", "b", "c"};
		std::vector<std::string> aVectorFinal;

		std::copy_if(aVectorOrigin.begin(), aVectorOrigin.end() ,  back_inserter(aVectorFinal), [](const std::string& i){return i!="c";});


		std::cout << aVectorFinal.size();

	}

}



#endif /* MODIFYING_ALGO_BACKINSERTER_H_ */
