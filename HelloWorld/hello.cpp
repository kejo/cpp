#include <string>;
void Log(std::string message);

int add(int x = 0, int y = 0){
    return x + y;
}

int add(double x = 0.0, double y = 0.0){
    return x + y;
}

int main(){
    Log("Hello World!!! This is Ketan!!!");
    // Log(__cplusplus);
    // std::cout << "Hello World!!!" << std::endl;
    // std::cout << __cplusplus << std::endl;
    // std::getchar();
    int result = add(23,52);
    double result_d = add(23.0,52.0);
    std::string message = "23 + 52 = ";
    message += std::to_string(result);
    Log(message);
    std::string message1 = "23.0 + 52.0 = ";
    message1 += std::to_string(result_d);
    Log(message1);
}
