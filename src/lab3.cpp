#include "eecs230.h"

//
// Lab 3 EXAMPLE functions
//

/* The main function, or the "entry function" of the lab3 program, simply calls the other
 * functions to run.
 */

double compute_cm(double input_inches){
    double output_cm=input_inches*2.54;
    return output_cm;

}

void print_results(vector<double> inputs_inches){
    double input_inches;
    double output_cm;

    for (int i=0; i<inputs_inches.size(); i++){
        input_inches=inputs_inches[i];
        output_cm = compute_cm(input_inches);
        cout<<input_inches<<" in = "<<output_cm<<" cm\n";

    }
}

void prompt_for_inches(){
    vector<double> inputs_inches;
    double input_inches;

    cout<<"Enter lengths in inches (stop with 0): \n";

    while (cin >> input_inches && input_inches != 0){
        inputs_inches.push_back(input_inches);
    }

    print_results(inputs_inches);
}

int main() {
    prompt_for_inches();


    return 0; // Lets the operating system know everything ran successfully.
}

