/*
 * EraseRemove.h
 *
 *  Created on: Jun 13, 2016
 *      Author: javier
 */

#ifndef ERASE_REMOVE_ERASEREMOVE_H_
#define ERASE_REMOVE_ERASEREMOVE_H_

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>


namespace erase_remove
{

	void eraseRemove()
	{
		std::vector<std::string> aListNames {"Javier", "Maria", "Olalla"};

		std::cout << aListNames.size() << std::endl;

		aListNames.erase(std::remove_if(aListNames.begin(), aListNames.end(),
									   	   [](const std::string& s){if(s=="Javier"){return true;}else{ return false;}}
									   ),
						 aListNames.end());

		std::cout << aListNames.size() << std::endl;
		for (const std::string& aName : aListNames)
		{
			std::cout << aName;
		}
		std::cout << std::endl;

	}

}




#endif /* ERASE_REMOVE_ERASEREMOVE_H_ */
