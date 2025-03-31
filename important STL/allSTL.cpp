//defining a vector //
vector<int> v;
//define vector of fixed size//
vector<int> v(5);
//even after defining a size we can increase the size of vector by adding more than 10 elemnets using push_back.//
adding an element in a vector
v.push_back(num_to_be_added);
but  v.emplace_back(num_to_be_added); //is better//
to sort a vector use 
sort(v.begin(), v.end());
//to generate a vector of a fixed size and all elements same//
vector<int> v(10, 3);  gives a vector of size 10 and all elements 3
v.pop_back(); removes the last element of array;

