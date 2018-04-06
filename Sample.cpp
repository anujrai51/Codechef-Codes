#include <cstdio>
#include<iostream>
using namespace std;
void fun1(char *s1, char *s2) {
    cout<<&s1<<" "<<&s2<<endl;

  char *temp;
  temp = s1;
  s1 = s2;
  s2 = temp;
cout<<&s1<<" "<<&s2<<endl<<endl;

}
void fun2(char **s1, char **s2) {
  char *temp;
  cout<<&s1<<" "<<&s2<<endl;

  temp = *s1;
  *s1 = *s2;
  *s2 = temp;
cout<<&s1<<" "<<&s2<<endl;

}
int main() {
  char *str1 = "Hi", *str2 = "Bye";
  cout<<&str1<<" "<<&str2<<endl;
  fun1(str1, str2);
  printf("%s %s", str1, str2);
  fun2(&str1, &str2);
  printf("%s %s", str1, str2);
  return 0;
}
