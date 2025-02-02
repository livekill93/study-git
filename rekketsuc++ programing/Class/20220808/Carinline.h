#ifndef __CARINLINE_H_
#define __CARINLINE_H_

#include <iostream>

using namespace std;

namespace CAR_CONST
{
     enum{
        ID_LEN =20,
        MAX_SPD =200,
        FUEL_STEP =2,
        ACC_STEP =10,
        BRK_STEP =10
    };
} // namespace CAR_CONST

class Car{
    private:
	    char gamerID[CAR_CONST::ID_LEN];	// 소유자ID
	    int fuelGauge;				// 연료량
	    int curSpeed;				// 현재속도
    public:
        void InitMembers(char * ID, int fuel) ;
        void ShowCarState();
        void Accel();
        void Break();

};
inline void Car::ShowCarState() {
	            cout << "소유자 ID : " << gamerID << endl;
	            cout << "연료량 : " << fuelGauge << "%" << endl;
	            cout << "현재속도 : " << curSpeed << "Km/h" << endl << endl;
        }
inline void Car::Break() {
	            if (curSpeed < CAR_CONST::BRK_STEP) {
    		    curSpeed = 0;
		
	    	    return;
    	    }
	
    	curSpeed -= CAR_CONST::BRK_STEP;
    }
#endif 