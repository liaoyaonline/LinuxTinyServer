/*pow(16,i),queue.front()struct Tree{};vector<string> res(8, "");mp.find(key) ==
 * mp.end() int a[5] = {},vector<int> num(a,a+..) set test; test.insert(1),auto
 * it = test.begin() bool cmp(const word &num1, const word &num2) {
  return num1.value != num2.value ? num1.value > num2.value: num1.name <
 num2.name;} v.insert(v.begin()+3,1);map.containsKey(num) s.substr(i,2)####
string b= to_string(int a); int a =
atoi(b.c_str());d.emplace(d.begin()+1,4)在0后，1前面插入4
d.erase(d.begin()+1);删除1坐标上的数据*/
#include <arpa/inet.h>
#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/socket.h>
#include <unistd.h>
void* thread_main(void* arg);
int sum = 0;
int main(int argc, char* argv[]) {
  pthread_t id_t1, id_t2;
  int range1[] = {1, 5};
  int range2[] = {6, 10};
  pthread_create(&id_t1, NULL, thread_main, (void*)range1);
  pthread_create(&id_t2, NULL, thread_main, (void*)range2);
  pthread_join(id_t1, NULL);
  pthread_join(id_t2, NULL);
  printf("result: %d \n", sum);
  return 0;
}
void* thread_main(void* arg) {
  int start = ((int*)arg)[0];
  int end = ((int*)arg)[1];
  while (start <= end) {
    sum += start;
    start++;
  }
  return NULL;
}
