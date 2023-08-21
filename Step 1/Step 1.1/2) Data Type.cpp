// https://www.codingninjas.com/studio/problems/data-type_8357232?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTab=1

int dataTypes(string type) {
	
	if(type.compare("Integer") == 0)
		return 4; 
	else if (type.compare("Long") == 0)
		return 8; 
	else if (type.compare("Float") == 0)
		return 4; 
	else if (type.compare("Double") == 0)
		return 8; 
	else 
		return 1; 

}