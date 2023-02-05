// program showing concept of getter and setter

#include <iostream>
using namespace std;
class Demo
{
private:
    string email, password;

public:
    /*Setter Methods*/
    void setEmail(string email)
    {
        this->email = email;
        // strcpy(this->name, name);
    }
    void setPassword(string password)
    {
        this->password = password;
    }
    /*Getter Methods*/
    string getEmail()
    {
        return email;
    }
    string getPassword()
    {
        return password;
    }
};

int main()
{
    Demo obj;
    string email, password;
    cout << "Enter Email: ";
    cin >> email;

    cout << "Enter Password: ";
    cin >> password;

    /*Calling of Setter Methods*/
    obj.setEmail(email);
    obj.setPassword(password);

    /*Calling of Getter Methods */
    cout << "Email : " << obj.getEmail() << endl;
    cout << "Password : " << obj.getPassword() << endl;
}