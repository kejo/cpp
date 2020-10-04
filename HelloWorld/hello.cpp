#include <string>
#include "log.h"
#include "MyMath.h"

int main(){
    Log("Hello World!!! This is Ketan!!!");
    int result = add(23,52);
    double result_d = add(double(24),52.0);
    std::string message = "23 + 52 = ";
    message += std::to_string(result);
    Log(message);
    std::string message1 = "24 + 52.0 = ";
    message1 += std::to_string(result_d);
    Log(message1);
}
