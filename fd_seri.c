/*pow(16,i),queue.front()struct Tree{};vector<string> res(8, "");mp.find(key) ==
 * mp.end() int a[5] = {},vector<int> num(a,a+..) set test; test.insert(1),auto
 * it = test.begin() bool cmp(const word &num1, const word &num2) {
  return num1.value != num2.value ? num1.value > num2.value: num1.name <
 num2.name;} v.insert(v.begin()+3,1);map.containsKey(num) s.substr(i,2)####
string b= to_string(int a); int a =
atoi(b.c_str());d.emplace(d.begin()+1,4)在0后，1前面插入4
d.erase(d.begin()+1);删除1坐标上的数据*/
#include <arpa/inet.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/socket.h>
#include <unistd.h>
void error_handling(char* message);
int main(void) {
  int fd1, fd2, fd3;
  fd1 = socket(PF_INET, SOCK_STREAM, 0);
  fd2 = open("test.dat", O_CREAT | O_WRONLY | O_TRUNC);
  fd3 = socket(PF_INET, SOCK_DGRAM, 0);
  printf("file descriptor 1: %d\n", fd1);
  printf("file descriptor 2: %d\n", fd2);
  printf("file descriptor 3: %d\n", fd3);
  close(fd1);
  close(fd2);
  close(fd3);
  return 0;
}
void error_handling(char* message) {
  fputs(message, stderr);
  fputc('\n', stderr);
  exit(1);
}
