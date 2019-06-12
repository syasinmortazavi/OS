
#include "types.h"
#include "stat.h"
#include "user.h"
#include "pinfo.h"


void print(struct syscall_info info_array [sys_call_num][p_num]){

  for (int i = 0; i < sys_call_num; i++){
    if(info_array[i][0].pid != -1){
      for (int j = 0; j < p_num; j++)
      {
        printf(1,"%d",info_array[i][j].value);
      }
    }
    else return;
  }

}

int main(void){
	

	//static struct syscall_info info_array [sys_call_num][p_num];
	//int id1 = fork();
	//printf(1,"%d\n",id1);
	
	// if (fork == 0){
	// 	getpinfo(getpid());
	// }
	//getpinfo(getpid());
	exit();
}
