#include <iostream>
#include <vector>
#include <map>
#include <sstream>
#include <utility>
#include <string>
using namespace std;

template <typename T>
vector<T> operator*(const vector<T>& lhs, const vector<T>& rhs);

template<typename Key, typename Value>
map<Key, Value> operator*(const map<Key, Value>& lhs, const map<Key, Value>& rhs);

template<typename Key, typename Value>
pair<Key, Value> operator*(const pair<Key, Value>& lhs, const pair<Key, Value>& rhs);

template <typename Collection> Collection Sqr(Collection& c);

template <typename Collection>
Collection Sqr(Collection& c) {
	return c * c;
}

template<typename T>
vector<T> operator*(const vector<T>& lhs, const vector<T>& rhs) {
	vector<T> new_vector;
	for (const auto& v : lhs) {
		new_vector.push_back(v * v);
	}
	return new_vector;
}

template<typename Key, typename Value>
map<Key, Value> operator*(const map<Key, Value>& lhs, const map<Key, Value>& rhs) {
	map<Key, Value> new_map;
	for (const auto& m : lhs) {
		new_map[m.first] = m.second * m.second;
	}
	return new_map;
}

template<typename Key, typename Value>
pair<Key, Value> operator*(const pair<Key, Value>& lhs, const pair<Key, Value>& rhs) {
	Key new_key = lhs.first * rhs.first;
	Value new_value = lhs.second * rhs.second;
	return make_pair(new_key, new_value);
}