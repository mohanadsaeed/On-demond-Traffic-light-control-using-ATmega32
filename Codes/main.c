#include "Application/App.h"
#include "MCAL/Timer/Timer.h"

int main(){
	App_Init();
	while(1){
		App_Start();
	}
	return 0;
}
