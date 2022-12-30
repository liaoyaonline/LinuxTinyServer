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
#define NUM_THREAD 100
void* thread_inc(void* arg);
void* thread_add(void* arg);
long long num = 0;
int main(int argc, char* argv[]) {
  pthread_t thread_id[NUM_THREAD];
  int i;
  printf("sizeof long long : %lu \n", sizeof(long long));
  for (i = 0; i < NUM_THREAD; i++) {
    if (i % 2) {
      pthread_create(&(thread_id[i]), NULL, thread_inc, NULL);
    } else {
      pthread_create(&(thread_id[i]), NULL, thread_add, NULL);
    }
  }
  for (i = 0; i < NUM_THREAD; i++) {
    pthread_join(thread_id[i], NULL);
  }
  printf("result: %lld \n", num);
  return 0;
}
void* thread_inc(void* arg) {
  int i;
  for (i = 0; i < 50000000; i++) {
    num += 1;
  }
  return NULL;
}
void* thread_add(void* arg) {
  int i;
  for (i = 0; i < 50000000; i++) {
    num -= 1;
  }
  return NULL;
}
