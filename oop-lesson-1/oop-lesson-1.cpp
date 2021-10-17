// oop-lesson-1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cmath>
using namespace std;

class Power {
private:
    uint8_t a, b;
public:
    void set(uint8_t a1, uint8_t b1)
    {
        a = a1;
        b = b1;
    }
    uint8_t calculate()
        {
          return(pow(a,b));
        }
};

class RGBA{
private:
    uint8_t m_red;
    uint8_t m_green;
    uint8_t m_blue;
    uint8_t m_alpha;
public:
    RGBA() {
        m_red = 0;
        m_green = 0;
        m_blue = 0;
        m_alpha=255;
    }
    RGBA(uint8_t m_r, uint8_t m_g, uint8_t m_b, uint8_t m_a)
    {
        m_red = m_r;
        m_green = m_g;
        m_blue = m_b;
        m_alpha = m_a;
    }
    void print()
    {
        cout << (int)m_red << " " << (int)m_green << " " << (int)m_blue << " " << (int)m_alpha << " " << endl;
    }
};

class Stack {
private:
    
    size_t stack[10];
    size_t length;
public:
    void reset()
    {
        length = 0;
        for (size_t i = 0; i < 10; i++)
        {
            stack[i] = 0;
        }
    }
    bool push(uint8_t Value)
    {
        if (length==10) return(false);
        stack[length] = Value;
        length++;
        return(true);
    }
    bool pop()
    {        
        stack[length] = 0;
        if (length == 0)
        {
            cout << "end of Stack" << endl;
            return(false);
        }
            
        length--;
        return(true);
    }
    void print()
    {
        for (size_t i = 0; i < length; i++)
        {
            cout << stack[i];
        }
        cout << endl;
    }
};
int main()
{
    //1
    {
        Power pw;
        pw.set(3, 4);
        std::cout << (int)pw.calculate() << endl;
    }
    //2
    {
        RGBA rgb;
        rgb.print();
        RGBA rgb2(1,2,3,4);
        rgb2.print();
    }
    //3
    {
        Stack stack;
        stack.reset();
        stack.print();

        stack.push(3);
        stack.push(7);
        stack.push(5);
        stack.print();

        stack.pop();
        stack.print();

        stack.pop();
        stack.pop();
        stack.print();
    }
}