#include <iostream>
#include <thread>
#include <latch>
#include <barrier>
#include <syncstream>

using namespace std;

void synchronizedOut(const string &s)
{
    osyncstream(cout) << s;
}

void dividePrint(){
    synchronizedOut("\n");
}

barrier threadsSync (4, dividePrint);
latch finishCountingSync(4);

void thread_1(){
    synchronizedOut("Action 1 is performed from set a.\n");
    threadsSync.arrive_and_wait();
    synchronizedOut("Action 1 is performed from set c.\n");
    threadsSync.arrive_and_wait();
    synchronizedOut("Action 5 is performed from set c.\n");
    threadsSync.arrive_and_wait();
    synchronizedOut("Action 3 is performed from set b.\n");
    threadsSync.arrive_and_wait();
    synchronizedOut("Action 7 is performed from set b.\n");
    threadsSync.arrive_and_wait();
    synchronizedOut("Action 3 is performed from set e.\n");
    threadsSync.arrive_and_wait();
    synchronizedOut("Action 2 is performed from set d.\n");
    threadsSync.arrive_and_wait();
    synchronizedOut("Action 6 is performed from set d.\n");
    threadsSync.arrive_and_wait();
    synchronizedOut("Action 1 is performed from set f.\n");
    threadsSync.arrive_and_wait();
    synchronizedOut("Action 5 is performed from set f.\n");
    threadsSync.arrive_and_wait();
    synchronizedOut("Action 4 is performed from set g.\n");
    threadsSync.arrive_and_wait();
    synchronizedOut("Action 8 is performed from set g.\n");
    threadsSync.arrive_and_wait();
    synchronizedOut("Action 3 is performed from set h.\n");
    threadsSync.arrive_and_wait();
    synchronizedOut("Action 7 is performed from set h.\n");
    threadsSync.arrive_and_wait();
    synchronizedOut("Action 3 is performed from set i.\n");
    threadsSync.arrive_and_wait();
    synchronizedOut("Action 7 is performed from set i.\n");
    threadsSync.arrive_and_wait();
    synchronizedOut("Action 4 is performed from set j.\n");
    threadsSync.arrive_and_drop();
    finishCountingSync.count_down();
}

void thread_2(){
    synchronizedOut("Action 2 is performed from set a.\n");
    threadsSync.arrive_and_wait();
    synchronizedOut("Action 2 is performed from set c.\n");
    threadsSync.arrive_and_wait();
    synchronizedOut("Action 6 is performed from set c.\n");
    threadsSync.arrive_and_wait();
    synchronizedOut("Action 4 is performed from set b.\n");
    threadsSync.arrive_and_wait();
    synchronizedOut("Action 8 is performed from set b.\n");
    threadsSync.arrive_and_wait();
    synchronizedOut("Action 4 is performed from set e.\n");
    threadsSync.arrive_and_wait();
    synchronizedOut("Action 3 is performed from set d.\n");
    threadsSync.arrive_and_wait();
    synchronizedOut("Action 7 is performed from set d.\n");
    threadsSync.arrive_and_wait();
    synchronizedOut("Action 2 is performed from set f.\n");
    threadsSync.arrive_and_wait();
    synchronizedOut("Action 1 is performed from set g.\n");
    threadsSync.arrive_and_wait();
    synchronizedOut("Action 5 is performed from set g.\n");
    threadsSync.arrive_and_wait();
    synchronizedOut("Action 9 is performed from set g.\n");
    threadsSync.arrive_and_wait();
    synchronizedOut("Action 4 is performed from set h.\n");
    threadsSync.arrive_and_wait();
    synchronizedOut("Action 8 is performed from set h.\n");
    threadsSync.arrive_and_wait();
    synchronizedOut("Action 4 is performed from set i.\n");
    threadsSync.arrive_and_wait();
    synchronizedOut("Action 1 is performed from set j.\n");
    threadsSync.arrive_and_wait();
    synchronizedOut("Action 5 is performed from set j.\n");
    threadsSync.arrive_and_drop();
    finishCountingSync.count_down();
}

void thread_3(){
    synchronizedOut("Action 3 is performed from set a.\n");
    threadsSync.arrive_and_wait();
    synchronizedOut("Action 3 is performed from set c.\n");
    threadsSync.arrive_and_wait();
    synchronizedOut("Action 1 is performed from set b.\n");
    threadsSync.arrive_and_wait();
    synchronizedOut("Action 5 is performed from set b.\n");
    threadsSync.arrive_and_wait();
    synchronizedOut("Action 1 is performed from set e.\n");
    threadsSync.arrive_and_wait();
    synchronizedOut("Action 5 is performed from set e.\n");
    threadsSync.arrive_and_wait();
    synchronizedOut("Action 4 is performed from set d.\n");
    threadsSync.arrive_and_wait();
    synchronizedOut("Action 8 is performed from set d.\n");
    threadsSync.arrive_and_wait();
    synchronizedOut("Action 3 is performed from set f.\n");
    threadsSync.arrive_and_wait();
    synchronizedOut("Action 2 is performed from set g.\n");
    threadsSync.arrive_and_wait();
    synchronizedOut("Action 6 is performed from set g.\n");
    threadsSync.arrive_and_wait();
    synchronizedOut("Action 1 is performed from set h.\n");
    threadsSync.arrive_and_wait();
    synchronizedOut("Action 5 is performed from set h.\n");
    threadsSync.arrive_and_wait();
    synchronizedOut("Action 1 is performed from set i.\n");
    threadsSync.arrive_and_wait();
    synchronizedOut("Action 5 is performed from set i.\n");
    threadsSync.arrive_and_wait();
    synchronizedOut("Action 2 is performed from set j.\n");
    threadsSync.arrive_and_wait();
    synchronizedOut("Action 6 is performed from set j.\n");
    threadsSync.arrive_and_drop();
    finishCountingSync.count_down();
}

void thread_4(){
    synchronizedOut("Action 4 is performed from set a.\n");
    threadsSync.arrive_and_wait();
    synchronizedOut("Action 4 is performed from set c.\n");
    threadsSync.arrive_and_wait();
    synchronizedOut("Action 2 is performed from set b.\n");
    threadsSync.arrive_and_wait();
    synchronizedOut("Action 6 is performed from set b.\n");
    threadsSync.arrive_and_wait();
    synchronizedOut("Action 2 is performed from set e.\n");
    threadsSync.arrive_and_wait();
    synchronizedOut("Action 1 is performed from set d.\n");
    threadsSync.arrive_and_wait();
    synchronizedOut("Action 5 is performed from set d.\n");
    threadsSync.arrive_and_wait();
    synchronizedOut("Action 9 is performed from set d.\n");
    threadsSync.arrive_and_wait();
    synchronizedOut("Action 4 is performed from set f.\n");
    threadsSync.arrive_and_wait();
    synchronizedOut("Action 3 is performed from set g.\n");
    threadsSync.arrive_and_wait();
    synchronizedOut("Action 7 is performed from set g.\n");
    threadsSync.arrive_and_wait();
    synchronizedOut("Action 2 is performed from set h.\n");
    threadsSync.arrive_and_wait();
    synchronizedOut("Action 6 is performed from set h.\n");
    threadsSync.arrive_and_wait();
    synchronizedOut("Action 2 is performed from set i.\n");
    threadsSync.arrive_and_wait();
    synchronizedOut("Action 6 is performed from set i.\n");
    threadsSync.arrive_and_wait();
    synchronizedOut("Action 3 is performed from set j.\n");
    threadsSync.arrive_and_wait();
    synchronizedOut("Action 7 is performed from set j.\n");
    threadsSync.arrive_and_drop();
    finishCountingSync.count_down();
}
int main() {
    cout<<"Counting started!"<<endl;
    jthread t1 (thread_1);
    jthread t2 (thread_2);
    jthread t3 (thread_3);
    jthread t4 (thread_4);
    finishCountingSync.wait();
    cout<<"Counting finished!";
    return 0;
}
