int main() {
    double num1 = 0.0;
    double num2 = 0.0;
    string operatorVar;
    cout << "What is your first number?";
    cout << "\n";
    cin >> num1;
    cout << "\n";
    cout << "What is your operator?";
    cout << "\n";
    cin >> operatorVar;
    cout << "\n";
    cout << "What is your second number?";
    cout << "\n";
    cin >> num2;
    cout << "\n";


    
    if (operatorVar == "+") {
        cout << num1 + num2;
    }
    
    if (operatorVar == "-") {
        cout << num1 - num2;
    }
    
    if (operatorVar == "*") {
        cout << num1 * num2;
    }
    
    if (operatorVar == "/") {
        cout << num1 / num2;
    }
    
    cout << "\n";
    
}
