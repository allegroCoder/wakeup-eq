#ifndef __GLOBAL_H__
#define __GLOBAL_H__

using namespace std;

// Data types
typedef struct struct_tag {
    string name;
    vector<unsigned> marking;
} state_type;

typedef struct struct_tag2 {
    vector<string> places;
    vector<state_type> states;
} window_type;

typedef struct struct_tag3 {
    vector<string> source;
    vector<string> arc;
    vector<string> dest;
    string initial;
} net_type;

typedef struct struct_tag4 {
    string         name;
    vector<int>    marking;
} signal_type;

typedef struct struct_tag5 {
    vector<signal_type> inputs;
    vector<signal_type> outputs;
} espresso_format;

// Global variables
extern string espresso_path;
extern string marking_path;
extern net_type network;
extern vector<window_type> windows;
extern espresso_format km;

#endif
