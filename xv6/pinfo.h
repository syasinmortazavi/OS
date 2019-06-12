
#define sys_call_num 10 
#define p_num 100 

struct Linked_list {
  char* data;
  //int parameter = -1;
  struct Linked_list *next;
};

struct syscall_info{
  struct Linked_list time;//_and_parameter;
  int value ;
  int pid ;
};

static struct syscall_info info_array [sys_call_num][p_num];  

int check_pid(int p_id){
  int flag = 0;
  int rte_row = -1;
  for (int i = 0; i < p_num; i++)
  {
    if(info_array[0][i].pid == p_id){
      flag = 1;
      rte_row = i;
    }
  }
  if(flag != 1){
    for (int i = 0; i < p_num; i++)
    {
      if(info_array[0][i].pid == -1){
        for (int j = 0; j < sys_call_num; j++)
        {
          info_array[j][i].pid = p_id;
        }
        rte_row = i;
        break;
      }else continue;
    }   
  }
  return rte_row;
}
 
int addpdata(int sysid ,int pid){
  int array_row = check_pid(pid);
  info_array[sysid][array_row].value++;
  return 0;
}
