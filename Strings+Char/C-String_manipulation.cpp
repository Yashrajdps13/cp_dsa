#include <iostream>
#include <cstring>

using namespace std;

int main(){

    const char message1[] {"The sky is blue."};
    const char* message2[] {message1};
    cout<<strlen(message1)<<endl;
    cout<<sizeof(message1)<<endl;
    cout<<size(message1)<<endl;
    cout<<&message2<<endl;
    cout<<*message2<<endl;
    char a[] {"alabama"};
    char b[] {"broken"};
    char c[] {"hello"};
    char d[] {"hell"};
    cout<<strcmp(a,b)<<endl;
    cout<<strcmp(b,a)<<endl;    
    cout<<strncmp(d,c,3)<<endl;    
    cout<<strcmp(d,c)<<endl;    
    const char* str {"Try not. Do, or do not. There is no try."};
    char target='T';
    const char* result=str;
    size_t iterations {};
    while((result=strchr(result,target))!=nullptr){
        cout<<"Found "<<target<<" at "<<result<<endl;
        result++;
        iterations++;
    }
    cout<<iterations<<endl;
    cout<<&result<<endl;
    const char input[] {"/home/usr/hello.cpp"};
    char* output= strrchr(input,'/');
    if(output){
        cout<<output-4<<endl;
    }
    const char* test="lol";
    cout<<strlen(test);
    return 0;
}