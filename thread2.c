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
int main(int argc, char* argv[]) {
  pthread_t t_id;
  int thread_param = 5;
  void* thr_ret;
  if (pthread_create(&t_id, NULL, thread_main, (void*)&thread_param) != 0) {
    puts("pthread_create() error");
    return -1;
  }
  if (pthread_join(t_id, &thr_ret) != 0) {
    puts("pthrad_join() error");
    return -1;
  }
  printf("Thread return message: %s \n", (char*)thr_ret);
  free(thr_ret);
  return 0;
}
void* thread_main(void* arg) {
  int i;
  int cnt = *((int*)arg);
  char* msg = (char*)malloc(sizeof(char) * 50);
  strcpy(msg, "Hello ,I'am thread~ \n");
  for (i = 0; i < cnt; i++) {
    sleep(1);
    puts("running thread");
  }

  return (void*)msg;
}
