/*pow(16,i),queue.front()struct Tree{};vector<string> res(8, "");mp.find(key) ==
 * mp.end() int a[5] = {},vector<int> num(a,a+..) set test; test.insert(1),auto
 * it = test.begin() bool cmp(const word &num1, const word &num2) {
  return num1.value != num2.value ? num1.value > num2.value: num1.name <
 num2.name;} v.insert(v.begin()+3,1);map.containsKey(num) s.substr(i,2)####
string b= to_string(int a); int a =
atoi(b.c_str());d.emplace(d.begin()+1,4)在0后，1前面插入4
d.erase(d.begin()+1);删除1坐标上的数据*/
#include <arpa/inet.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/socket.h>
#include <unistd.h>
void error_handling(char* message);
int main(int argc, char* argv[]) {
  char* addr1 = "1.2.3.4";
  char* addr2 = "1.2.3.256";
  unsigned long conv_addr = inet_addr(addr1);
  if (conv_addr == INADDR_NONE) {
    printf("ERROR occured !\n");
  } else {
    printf("Network ordered interger addr: %#lx \n", conv_addr);
  }
  conv_addr = inet_addr(addr2);
  if (conv_addr == INADDR_NONE)
    printf("Error occureded \n");
  else {
    printf("Network ordered integer addr: %#lx \n\n", conv_addr);
  }
  return 0;
}
void error_handling(char* message) {
  fputs(message, stderr);
  fputc('\n', stderr);
  exit(1);
}
