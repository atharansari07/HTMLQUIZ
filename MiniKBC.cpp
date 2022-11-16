#include <iostream>
using namespace std;
void startgame();
void endgame(int score);
void startgame()
{
    char ans;
    int score = 0;
    cout << "1.What does HTML stand for ?" << endl;
    cout << "a) Home Tool Markup Launguage!" << endl;
    cout << "b) Hyperlinks and text Markup Launguage!" << endl;
    cout << "c) Hyper Text markup Launguage!" << endl;
    cout << "Please enter 'a' 'b' or 'c' and press enter!" << endl;
    cin >> ans;
    if (ans == 'c')
    {
        cout << "Congratulation Your Answer is Write\n\n " << endl;
        score++;
    }
    else
    {
        cout << "Your Answer is wrong \n\n"
             << endl;
    }
    cout << "2.Who is making Web stander ?" << endl;
    cout << "a) Mozilla!" << endl;
    cout << "b) The World Wide web consortium!" << endl;
    cout << "c) Google!" << endl;
    cout << "d) Microsoft" << endl;
    cout << "Please enter 'a' 'b' or 'c' and press enter!" << endl;
    cin >> ans;
    if (ans == 'b')
    {
        cout << "Congratulation Your Answer is Write \n\n"
             << endl;
        score++;
    }
    else
    {
        cout << "Your Answer is wrong \n\n"
             << endl;
    }
    cout << "3.How Many size of headers are available in HTML by default? " << endl;
    cout << "a) 5" << endl;
    cout << "b) 1" << endl;
    cout << "c) 3" << endl;
    cout << "d) 6" << endl;
    cout << "Please enter 'a' 'b' or 'c' and press enter!" << endl;
    cin >> ans;
    if (ans == 'd')
    {
        cout << "Congratulation Your Answer is Write\n\n " << endl;
        score++;
    }
    else
    {
        cout << "Your Answer is wrong\n\n " << endl;
    }
    cout << "4.What is Smallest Header in HTML by default? " << endl;
    cout << "a) h1" << endl;
    cout << "b) h2" << endl;
    cout << "c) h6" << endl;
    cout << "d) h4" << endl;
    cout << "Please enter 'a' 'b' or 'c' and press enter!" << endl;
    cin >> ans;
    if (ans == 'c')
    {
        cout << "Congratulation Your Answer is Write \n\n"
             << endl;
        score++;
    }
    else
    {
        cout << "Your Answer is wrong\n\n " << endl;
    }
    cout << "5.What are the types of lists are available in HTML? " << endl;
    cout << "a) Ordered,Unordered List" << endl;
    cout << "b) Bullest,Numbered Lists" << endl;
    cout << "c) Named,Unnamed Lists" << endl;
    cout << "d) None of the above" << endl;
    cout << "Please enter 'a' 'b' or 'c' and press enter!" << endl;
    cin >> ans;
    if (ans == 'a')
    {
        cout << "Congratulation Your Answer is Write\n\n " << endl;
        score++;
    }
    else
    {
        cout << "Your Answer is wrong \n\n"
             << endl;
    }
    cout << "6.How to Create Ordered List? " << endl;
    cout << "a) <ul>" << endl;
    cout << "b) <ol>" << endl;
    cout << "c) <href>" << endl;
    cout << "d) <b>" << endl;
    cout << "Please enter 'a' 'b' or 'c' and press enter!" << endl;
    cin >> ans;
    if (ans == 'b')
    {
        cout << "Congratulation Your Answer is Write \n\n"
             << endl;
        score++;
    }
    else
    {
        cout << "Your Answer is wrong \n\n"
             << endl;
    }
    cout << "7.HTML files are saved by default with the extension ?" << endl;
    cout << "a) .html" << endl;
    cout << "b) .h" << endl;
    cout << "c) .ht" << endl;
    cout << "d) None of the above" << endl;
    cout << "Please enter 'a' 'b' or 'c' and press enter!" << endl;
    cin >> ans;
    if (ans == 'a')
    {
        cout << "Congratulation Your Answer is Write \n\n"
             << endl;
        score++;
    }
    else
    {
        cout << "Your Answer is wrong " << endl;
    }
    cout << "We enclose HTML Tags within ?" << endl;
    cout << "a) {}" << endl;
    cout << "b) <>" << endl;
    cout << "c) !!" << endl;
    cout << "d) None of them" << endl;
    cout << "Please enter 'a' 'b' or 'c' and press enter!" << endl;
    cin >> ans;
    if (ans == 'b')
    {
        cout << "Congratulation Your Answer is Write \n\n"
             << endl;
        score++;
    }
    else
    {
        cout << "Your Answer is wrong " << endl;
    }
    cout << "9.What is the Effect of the <b> Tag ?" << endl;
    cout << "a) It converts the text within it to bold font" << endl;
    cout << "b) it is used to write black-colored font" << endl;
    cout << "c) it is used to change the font size" << endl;
    cout << "d) None of the above" << endl;
    cout << "Please enter 'a' 'b' or 'c' and press enter!" << endl;
    cin >> ans;
    if (ans == 'a')
    {
        cout << "Congratulation Your Answer is Write \n\n"
             << endl;
        score++;
    }
    else
    {
        cout << "Your Answer is wrong " << endl;
    }
    cout << "10.Which of the following is correct about HTML ?" << endl;
    cout << "a) HTML uses User Defind Tags" << endl;
    cout << "b) HTML uses tags defind withinthe launguage" << endl;
    cout << "c) Both a and b" << endl;
    cout << "d) None of the above" << endl;
    cout << "Please enter 'a' 'b' or 'c' and press enter!" << endl;
    cin >> ans;
    if (ans == 'b')
    {
        cout << "Congratulation Your Answer is Write \n\n"
             << endl;
        score++;
    }
    else
    {
        cout << "Your Answer is wrong \n\n"
             << endl;
    }
    cout << "11.How to display preformatted text in html ?" << endl;
    cout << "a) <p>" << endl;
    cout << "b) <pre>" << endl;
    cout << "c) <hr>" << endl;
    cout << "d) All of them" << endl;
    cout << "Please enter 'a' 'b' or 'c' and press enter!" << endl;
    cin >> ans;
    if (ans == 'b')
    {
        cout << "Congratulation Your Answer is Write \n\n"
             << endl;
        score++;
    }
    else
    {
        cout << "Your Answer is wrong \n\n"
             << endl;
    }
    cout << "12.Which of the following tags doesn't require a closing tags ?" << endl;
    cout << "a) <br>" << endl;
    cout << "b) <hr>" << endl;
    cout << "c) Both a and b" << endl;
    cout << "d) None of the above" << endl;
    cout << "Please enter 'a' 'b' or 'c' and press enter!" << endl;
    cin >> ans;
    if (ans == 'c')
    {
        cout << "Congratulation Your Answer is Write \n\n"
             << endl;
        score++;
    }
    else
    {
        cout << "Your Answer is wrong\n\n " << endl;
    }
    cout << "13.What is meant by an empty tag ?" << endl;
    cout << "a) There is no such concepts of an empty tag in HTML" << endl;
    cout << "b) An empty tag doesn't require a closing tag " << endl;
    cout << "c) An empty tag doesn't have any content within it" << endl;
    cout << "d) None of the above" << endl;
    cout << "Please enter 'a' 'b' or 'c' and press enter!" << endl;
    cin >> ans;
    if (ans == 'b')
    {
        cout << "Congratulation Your Answer is Write\n\n " << endl;
        score++;
    }
    else
    {
        cout << "Your Answer is wrong \n\n"
             << endl;
    }
    cout << "14.What are the attributes used to change the size of an image ?" << endl;
    cout << "a) Width and Height" << endl;
    cout << "b) Big and small" << endl;
    cout << "c) Top and Bottom" << endl;
    cout << "d) None of the above" << endl;
    cout << "Please enter 'a' 'b' or 'c' and press enter!" << endl;
    cin >> ans;
    if (ans == 'a')
    {
        cout << "Congratulation Your Answer is Write\n\n " << endl;
        score++;
    }
    else
    {
        cout << "Your Answer is wrong \n\n"
             << endl;
    }
    cout << "15.Which Attribute is used to provide a unique name to an HTML element ?" << endl;
    cout << "a) id" << endl;
    cout << "b) class" << endl;
    cout << "c) type" << endl;
    cout << "d) None of the above" << endl;
    cout << "Please enter 'a' 'b' or 'c' and press enter!" << endl;
    cin >> ans;
    if (ans == 'a')
    {
        cout << "Congratulation Your Answer is Write \n\n"
             << endl;
        score++;
    }
    else
    {
        cout << "Your Answer is wrong\n\n " << endl;
    }

    endgame(score);
}
void endgame(int score)
{

    cout << "thanks for playing " << endl;
    cout << "your score is =" << score << endl;
}
int main()
{
    string play;
    int score;

    cout << "-----------------------WELCOME TO HTML QUIZ----------------------" << endl;
    cout << "If you want to Play then Type 'Play' " << endl;
    cin >> play;
    if (play == "play")
    {
        startgame();
    }
    else
    {
        endgame(0);
    }

    return 0;
}