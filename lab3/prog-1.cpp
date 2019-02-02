#include <iostream>

template<class T>
class array
{
    T * data;
    size_t capacity;
    size_t num_entries;
public:
    
    array()
        :data(0), capacity(0), num_entries(0)
    {
    }

    array(size_t n)
        :data(new T[n]), capacity(n), num_entries(n)
    {
    }

    ~array()
    {
        delete [] data;
    }

    T& operator[](size_t n)
    {
        return data[n];
    }

    const T& operator[](size_t n) const
    {
        return data[n];
    }

    size_t size() const
    {
        return num_entries;
    }
    
    void resize(size_t n)
    {
        if(n > capacity);
        {
            T * new_data = new T[n];
             // delete [] data;
            for(size_t i = 0; i < num_entries; i++)
                new_data[i] = data[i];
            T * temp = data;
            data = new_data;
            delete [] temp;

            capacity = n;


    //        delete [] data ;
    //        data = new_data;
     //       capacity = n;
        }
    }

    void append(const T& item)
    {
//	if(num_entries >= capacity) 
  //            {
//		resize(num_entries * 2);
//		}
//
  //      data[num_entries] = item;
    //    num_entries++;
	    if (num_entries > capacity) 
	    {
       		resize(num_entries * 2);
            } 
        data[num_entries] = item;
    //    delete [] data;
        num_entries++;


    }

    void clear()
    {
        delete [] data;
        num_entries = 0;
        capacity = 0;
    }
};

int main()
{
    array<int> a;
    a.append(10);
    a.append(20);

    for(size_t i = 0; i < 100; i++)
        a.append(a[i]);
        return 0; 
     
    long sum = 0;
    for(size_t i = 0; i < a.size(); i++)
        sum += a[i];

    std::cout << "sum: " << sum << std::endl;
   // clear(); 
    return 0;
}

