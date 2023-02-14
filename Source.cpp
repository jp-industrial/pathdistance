#include "c:\Users\james\Desktop\std_lib_facilities.h"

int main()

{
	//program that calculates distance of pathways between two cities.

	vector <double> distances; //distances will be stored here.
	double temp = 0;
	double total = 0;
	double median = 0;
	

	cout << "Please enter the sequence of distances, using \"|\" as the terminating character.\n";
	
	while (cin >> temp) { //accept inputs and write to vector
		distances.push_back(temp);
	}
	
	//TOTAL
	cout << "input phase terminated \n"; //in case of terminating input:
	for (double d : distances) //for doubles d in distances:
		total += d; //add number d to total sequentially,
	cout << "Total of distances: " << total << "\n"; //and print total's value.

	sort(distances); //vector must be sorted for accurate median and min/max calculation.
	
	//MEDIAN
	if (distances.size() % 2 == 0) //if vector has even number of objects:
		median = ( distances[ (distances.size() / 2) ] + distances[ (distances.size() / 2) - 1] ) / 2; //assign this value to median.

	else if (distances.size() % 2 != 0) //if vector has odd number of objects:
		median = distances[((distances.size() + 1) / 2) - 1]; //assign this value to median.

	cout << "Median distance: " << median << "\n"; //prints median.

	
	//MIN
	cout << "Smallest distance: " << distances[0] << "\n"; //distances have already been sorted, so we print the first term.

	//MAX
	cout << "Largest distance: " << distances[(distances.size() - 1)] << "\n"; //we print the last term, counting from 0.

	//MEAN
	cout << "Mean distance: " << total / distances.size() << "\n";

	//COUNT
	cout << "Number of distances entered: " << distances.size() << "\n";

}