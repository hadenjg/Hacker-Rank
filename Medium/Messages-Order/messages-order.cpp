#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

class Message {
    std::string text;
    int order_created;
    static int number_of_messages;
public: 
    Message() {}
    Message(std::string txt)
    {
        text = txt;
        number_of_messages++;
        order_created = number_of_messages;
    }

    const string& get_text() {
       return text; 
    }

    bool operator<(const Message& m)
    {
        if(this->order_created < m.order_created)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
};

//initialize static variable order_created
int Message::number_of_messages = 0;

class MessageFactory {
public:
    MessageFactory() {}
    Message create_message(const string& text) {
        Message msg(text);
        return msg;
    }
};

class Recipient {
public:
    Recipient() {}
    void receive(const Message& msg) {
        messages_.push_back(msg);
    }
    void print_messages() {
        fix_order();
        for (auto& msg : messages_) {
            std::cout << msg.get_text() << endl;
        }
        messages_.clear();
    }
private:
    void fix_order() {
        std::sort(messages_.begin(), messages_.end());
    }
    std::vector<Message> messages_;
};

class Network {
public:
    static void send_messages(vector<Message> messages, Recipient& recipient) {
    // simulates the unpredictable network, where sent messages might arrive in unspecified order
        std::random_shuffle(messages.begin(), messages.end());         
        for (auto msg : messages) {
            recipient.receive(msg);
        }
    }
};



int main() {
    MessageFactory message_factory;
    Recipient recipient;
    std::vector<Message> messages;
    std::string text;
    //Have to change while loop to a for loop to test.  If i don't an infinite loop happens
//    while (getline(cin, text)) {
    int n;
    std::cin >> n;
    for(int i =0; i < n; i++)
    {
        getline(cin, text);
        messages.push_back(message_factory.create_message(text));
    }
    Network::send_messages(messages, recipient);
    recipient.print_messages();
}

