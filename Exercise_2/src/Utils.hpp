#ifndef Utils_H
#define Utils_H
#include <iostream>
#include "PolygonalMesh.hpp"


using namespace std;

namespace PolygonalLibrary{
// import the polygonal mesh and test if the mesh is correct
// mesh: a PolygonalMesh struct
// return the result of the reading, true if is correct,false otherwise
bool ImportMesh(const string &filepath , PolygonalMesh& mesh);

// import the Cell0D properties from Cell1.csv file
// mesh: a PolygovalMesh struct
// return the result of the reading, true if is correct, false otherwise
bool ImportCell0Ds(const string &filepath, PolygonalMesh& mesh);

// import the Cell1D properties from Cell1.csv file
// mesh: a PolygonalMesh struct
// return the result of the reading, true if is correct, else otherwise
bool ImportCell1Ds(const string &filepath, PolygonalMesh& mesh);

// import the Cell2D properties from Cell2D.csv file
// mesh: a PolygonalMesh struct
// return the result of the reading, true if is correct, false otherwise
bool ImportCell2Ds(const string &filepath, PolygonalMesh& mesh);
}


// compute euclidean distance between two vectors 2-dimensional
double euclidean_distance(const Vector2d& v1, const Vector2d& v2);

// compute the area of a polygonal using the Gaussian formula
double polygonal_area(const vector <Vector2d>& vertices);

// find the maximum between three double values
double find_max(const double& a, const double& b, const double& c);

#endif
