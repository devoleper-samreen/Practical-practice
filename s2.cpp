#include <iostreame>
using namespace std;
#include <stdexcept> 

class Factorial{
    private:
    int num;

    public:
    void readNumber(){
        cout<<"Enter a non-negetive number\n"
        cin>>num;

        if(num<0)
        {
            cin.clear();
            throw invalid_argument("Invalid input. Please enter a non-negative integer.");
        }
    }

    long long calculateFactorial(int num){
        if(num<0){
            throw invalid_argument("Factorial of negative number is not defined.");
        }

        if(num>20){
            throw overflow_error("Factorial result too large for long long.");
        }

        long long factorial = 1;

        for(int i=1; i<num; i++)
        {
            factorial *= i;
        }

        return factorial;

    }

    void displayFactorail(){
        try{
            long long result = calculateFactorial(num);
            cout<<"factorial of"<<num<<"is"<<result<<endl;
        }
        catch(const exception &e){
            cout<<"error : "<<e.what()<<endl;

        }
    }

};

int main(){
    Factorial fact;

    try{
        fact.readNumber();
        fact.displayFactorail()
    }catch (const exception &e) {
        cout << "Error: " << e.what() << endl;
    }
}