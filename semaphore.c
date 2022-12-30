/*pow(16,i),queue.front()struct Tree{};vector<string> res(8, "");mp.find(key) ==
 * mp.end() int a[5] = {},vector<int> num(a,a+..) set test; test.insert(1),auto
 * it = test.begin() bool cmp(const word &num1, const word &num2) {
  return num1.value != num2.value ? num1.value > num2.value: num1.name <
 num2.name;} v.insert(v.begin()+3,1);map.containsKey(num) s.substr(i,2)####
string b= to_string(int a); int a =
atoi(b.c_str());d.emplace(d.begin()+1,4)在0后，1前面插入4
d.erase(d.begin()+1);删除1坐标上的数据*/
#include <pthread.h>
#include <semaphore.h>
#include <stdio.h>
#define NUM_THREAD 100
void* tread(void* arg);
void* accu(void* arg);
static sem_t sem_one;
static sem_t sem_two;
static int num;
int main(int argc, char* argv[]) {
  pthread_t id_t1, id_t2;
  sem_init(&sem_one, 0, 0);
  sem_init(&sem_two, 0, 1);
  pthread_create(&id_t1, NULL, tread, NULL);
  pthread_create(&id_t2, NULL, accu, NULL);
  pthread_join(id_t1, NULL);
  pthread_join(id_t2, NULL);
  sem_destroy(&sem_one);
  sem_destroy(&sem_two);
  return 0;
}
void* tread(void* arg) {
  int i;
  for (i = 0; i < 5; i++) {
    fputs("Input num: ", stdout);
    sem_wait(&sem_two);
    scanf("%d", &num);
    sem_post(&sem_one);
  }
  return NULL;
}
void* accu(void* arg) {
  int i, sum = 0;
  for (i = 0; i < 5; i++) {
    sem_wait(&sem_one);
    sum += num;
    sem_post(&sem_two);
  }
  printf("Result: %d \n", sum);
  return NULL;
}
