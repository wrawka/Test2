#include <iostream>
#include <stdexcept>
#include <vector>
#include <string>
#include <sstream>
#include <set>
#include <map>
#include "test_runner.h"

using namespace std;

// template <class T>
// ostream& operator << (ostream& os, const set<T>& s) {
//     os << "{";
//     bool first = true;
//     for (const auto& x : s) {
//         if (!first) {
//             os << ", ";
//         }
//         first = false;
//         os << x;
//     }
//     return os << "}";
// }

// template <class K, class V>
// ostream& operator << (ostream& os, const map<K, V>& m) {
//     os << "{";
//     bool first = true;
//     for (const auto& kv : m) {
//         if (!first) {
//             os << ", ";
//         }
//         first = false;
//         os << kv.first << ": " << kv.second;
//     }
//     return os << "}";
// }

// template<class T, class U>
// void AssertEqual(const T& t, const U& u,
//         const string& hint)
// {
//     if (t != u) {
//         ostringstream os;
//         os << "Assertion failed: " << t << " != " << u
//              << " hint: " << hint;
//         throw runtime_error(os.str());
//     }
// }

string ParseEvent(istream& is) {
 // Реализуйте эту функцию
  string out;
  getline(is, out);
  return out;
}

void TestParseEvent() {
 {
   istringstream is("event");
   cout << "Testing 1\n";
   AssertEqual(ParseEvent(is), "event", "Parse event without leading spaces");
 }
 {
   istringstream is("   sport event ");
   cout << "Testing 2\n";
   AssertEqual(ParseEvent(is), "sport event ", "Parse event with leading spaces");
 }
//  {
//    istringstream is("  first event  \n  second event");
//    vector<string> events;
//    events.push_back(ParseEvent(is));
//    events.push_back(ParseEvent(is));
//    AssertEqual(events, vector<string>{"first event  ", "second event"}, "Parse multiple events");
//  }
}

int main() {
    TestParseEvent();
    // istringstream is("   sport event ");
    // AssertEqual("", "", "null");
    // cout << ParseEvent(is);
    return 0;
}