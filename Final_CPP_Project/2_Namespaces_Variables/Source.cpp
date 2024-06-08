//- Use of Namespaces and Syntax
/*
The main Use-Case of Namespace are:-
Eg. Instance - Say we have function name initialize() which has same name for both the MathLib and UILib this would result in name conflict, solution is to use namespaces
1.Prevent Name Collisons

2.Organize Code

3.Scope Management

4.Modularity
*/

#include <iostream>

namespace math_lib {
	void initialize() {
		std::cout << "Initialization the Math Library" << std::endl;
	}

	int add(int a, int b) {
		return a + b;
	}

    class Vector {
    public:
        Vector(int x, int y) : x(x), y(y) {}
        void display() {
            std::cout << "Vector(" << x << ", " << y << ")" << std::endl;
        }
    private:
        int x, y;
    };
}//namespace math_lib

namespace ui_lib {
    void initialize() {
        std::cout << "Initializing User Interface Library" << std::endl;
    }

    void draw() {
        std::cout << "Drawing User Interface" << std::endl;
    }
}//namespace ui_lib

int main() {
    //using math_lib namespace
    math_lib::initialize();
    int sum = math_lib::add(3, 4);
    std::cout << "Sum: " << sum << std::endl;

    math_lib::Vector vec(1, 2);
    vec.display();

    // Using UILib namespace
    ui_lib::initialize();
    ui_lib::draw();

    return 0;
}

//-Based Upon the above code distungish the usecase of namespaces
/*
1.Prevent Name Collisons
Both MathLib and UILib namespaces contain an initialize() function. Using namespaces avoids the conflict that would arise if both functions were in the global namespace.

2.Organize Code
The MathLib namespace groups together all mathematical operations and related classes, making it clear what the purpose of these functions and classes is.
The UILib namespace groups together all user interface-related functions, again making the code more organized and easier to understand.

3.Scope Management
The namespaces provide a way to manage scope and ensure that the initialize() function in MathLib does not interfere with the initialize() function in UILib.

4.Modularity
Each namespace represents a module that can be developed, maintained, and tested independently. This modular approach makes the codebase easier to manage.
*/

//-Some More Uses of Namespaces
//Nested Namespace
namespace MathLib {
    namespace Alegebra {
        int multiply(int a, int b) {
            return a * b;
        }
    }

    namespace Geometry {
        double areaofCircle(double radius) {
            return 3.14159 * radius * radius;
        }
    }
}

//using declarations
using MathLib::Alegebra::multiply;//-bring specific names from a namespace into the current scope

int res = multiply(3, 4); // I can now directly use the functions of nested namespace or namespace with scope resolution modifier

//using directives
using namespace MathLib::Geometry;//? bring all names from a namespace into the current scope, though this is less recommended as it can lead to name conflicts

int area = areaofCircle(23);
