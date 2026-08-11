#include <queue>

class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        queue<int> students_queue;
        queue<int> sandwiches_pile;

        int students_counter=0;

        // followup question, do I need to convert it
        // to a queue? or should I use the original vector
        for(const int& i : sandwiches){ sandwiches_pile.push(i); }
        for(const int& i : students){ students_queue.push(i); }


        while(!students_queue.empty() && !sandwiches_pile.empty()){
            if(students_queue.front() == sandwiches_pile.front()){
                students_queue.pop();
                sandwiches_pile.pop();
                students_counter=0;
            } else {
                students_counter++;
                if(students_counter == students_queue.size()){
                    return students_counter;
                }
                students_queue.push(students_queue.front());
                students_queue.pop();
            }
        }
        return students_counter;
    }
};