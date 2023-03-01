/*
Author: Frida Mesa
Course: CSCI-135
Instructor: 
Assignment: Project 1 Task B
*/

#include <iostream>
#include <string>
using namespace std;

const int g_MAX_WORDS = 1000;
int g_word_count = 0;
string g_words[g_MAX_WORDS];
string g_definitions[g_MAX_WORDS];
string g_pos[g_MAX_WORDS];

void addWord(string word, string definition, string pos) {
    for (int i = 0; i < g_word_count; i++) {
        if (g_words[i] == word) {
            cout << "Word already exists in the dictionary.\n";
            return;
        }
    }

    g_words[g_word_count] = word;
    g_definitions[g_word_count] = definition;
    g_pos[g_word_count] = pos;
    g_word_count++;

    cout << "Word added to the dictionary.\n";
}


