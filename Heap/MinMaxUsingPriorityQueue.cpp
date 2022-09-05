#include <iostream>
#include <queue>
#include <vector>

using namespace std;
class Mountain
{

public:
    string name;
    int height;
    Mountain(string arg_name, int arg_height) : name(arg_name), height(arg_height)
    {
    }
    bool operator<(const Mountain &obj) const
    {
        if (this->name.size() < obj.name.size())
        {
            return true;
        }
        return false;
    }
};

class CompareName
{

public:
    bool operator()(const Mountain &a, const Mountain &b) const
    {
        // Mountain with smaller name goes below
        if (a.name.size() < b.name.size())
            return true;
        return false;
    }
};

int main()
{

    // priority_queue<Mountain,  vector<Mountain>, CompareName> pq_mountains;
    priority_queue<Mountain> pq_mountains;

    Mountain m1("K2", 8611);
    Mountain m2("Kangchenjunga", 8586);
    Mountain m3("Everest", 8848);
    Mountain m4("Annapurna", 8091);

    pq_mountains.push(m1);
    pq_mountains.push(m2);
    pq_mountains.push(m3);
    pq_mountains.push(m4);

    cout << "Max heap using priority_queue." << endl;
    cout << "Arranging mountain name(s) based on the length (max_heap) of the names." << endl;
    cout << "Mountain with longest name comes at the top.\n"
         << endl;
    while (!pq_mountains.empty())
    {
        Mountain mount = pq_mountains.top();
        pq_mountains.pop();
        cout << mount.name << " " << mount.height << endl;
    }

    vector<int> vec_nums{5, 2, 7, 13, 11};
    priority_queue<int> pq_maxheap(vec_nums.begin(), vec_nums.end());

    cout << "\nElements in vector : ";
    for (const auto &num : vec_nums)
    {
        cout << num << " ";
    }

    cout << "\nElements in max heap (created from vector) : ";
    while (!pq_maxheap.empty())
    {
        cout << pq_maxheap.top() << " ";
        pq_maxheap.pop();
    }

    priority_queue<int, vector<int>, greater<int>> pq_minheap;
    pq_minheap.push(5);
    pq_minheap.push(2);
    pq_minheap.push(7);
    pq_minheap.push(13);
    pq_minheap.push(11);

    cout << "\nElements in min heap (created from vector) : ";
    while (!pq_minheap.empty())
    {
        cout << pq_minheap.top() << " ";
        pq_minheap.pop();
    }
    return 0;
}