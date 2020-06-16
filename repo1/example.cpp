#include "fc_io.h"
#include "fc_system.h"

void gen_wave(bool sig[], int index, FC_System_Timer &tmr, FC_IO_Out &G, int &counter_val){
    if(sig[counter_val] == 1){
        for(int i = 0;i<30;i++){
            // tmr.WaitTimer();
            if(i >23){
                G = 0;
                continue;
            }

            if(i%2 == 0){
                G = 0;
            }
            else
                G = 1;

        }
    }
    else{
        G = 0;
        tmr.Sleep(5);
    }
}

int main()
{
    //% hw_begin
    FC_IO_Clk clk(10);
    // FC_IO_Out counter(8);
    // FC_IO_UART_TX tx(115200);
    FC_System_Timer timer;
    FC_IO_Out Gpio0;
    FC_IO_Out Gpio1;
    FC_IO_Out Gpio2;
    FC_IO_Out Gpio3;
    FC_IO_Out Gpio4;
    FC_IO_Out Gpio5;
    FC_IO_Out Gpio6;
    FC_IO_Out Gpio7;
    // FC_IO_Out idx;
    // FC_IO_Pulse p;
    //% hw_end
    int counter_value = 0;
    int index = 0;
    // bool f = 0;
    bool sig0[64] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    bool sig1[64] = {1,0,0,0,0,0,0,0,1,1,1,1,1,0,0,0,0,1,1,1,0,0,0,0,1,1,1,1,0,0,0,0,1,1,1,1,0,0,0,0,1,0,0,1,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,0,0,0};
    bool sig2[64] = {1,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,1,1,0,1,1,0,0,0,1,0,0,1,0,0,0,0,1,0,0,1,0,0,0,0,1,0,1,1,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,0,0,0};
    bool sig3[64] = {1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,1,0,0,0,0,1,0,0,1,0,0,0,0,1,0,1,0,0,0,0,0,1,1,1,0,0,0,0,0,1,1,1,0,0,0,0,0};
    bool sig4[64] = {1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,0,0,1,1,1,1,0,0,0,0,1,1,1,1,0,0,0,0,0,1,1,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,0,0,0};
    bool sig5[64] = {1,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,1,0,0,0,1,0,0,0,0,0,1,1,0,0,0,0,0,0,1,1,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,0,0,0};
    bool sig6[64] = {1,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,1,1,0,1,1,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,0,0,1,1,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,1,1,0,0,0,0,0};
    bool sig7[64] = {1,1,1,1,1,0,0,0,1,1,1,1,1,0,0,0,0,1,1,1,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    // tx << "Hello World!";

    // p.Pulse(100,TU_clk);
    timer.Start(1, TU_us);
    for(;;){
        if(counter_value > 63){
            counter_value = 0;
        }
        index = counter_value % 8;
        // idx = index;
        counter_value = counter_value+1;
        

        
        gen_wave(sig0, index, timer, Gpio0,counter_value);
        gen_wave(sig1, index, timer, Gpio1,counter_value);
        gen_wave(sig2, index, timer, Gpio2,counter_value);
        gen_wave(sig3, index, timer, Gpio3,counter_value);
        gen_wave(sig4, index, timer, Gpio4,counter_value);
        gen_wave(sig5, index, timer, Gpio5,counter_value);
        gen_wave(sig6, index, timer, Gpio6,counter_value);
        gen_wave(sig7, index, timer, Gpio7,counter_value);
        timer.WaitTimer();
        // for(int i = 1;i<200;i++){
        //     timer.WaitTimer();
        //     if(i <120){
        //         Gpio0 = 0;
        //         continue;
        //     }
        //     if(i %2 == 0){
        //         Gpio0 = 1;
        //     }
        //     else
        //         Gpio0 = 0;
        // }
    }





    // for (;;)
    // {   

        
    //     timer.WaitTimer();
    //     if(counter_value < 10000){
    //         f = ~f;
    //         Gpio0 = f;

    //     }
    //     else
    //     {
    //         Gpio0 = 0;
    //     }
        
        // counter_value = counter_value+1;
        // index = counter_value % 6;
        // Gpio0 = sig0[index];
        // Gpio1 = sig1[index];
        // Gpio2 = sig2[index];
        // Gpio3 = sig3[index];
        // Gpio4 = sig4[index];
        // Gpio5 = sig5[index];
        // Gpio6 = sig6[index];
        // Gpio7 = sig7[index];
        // timer.Sleep(10);
        // while (counter_value % 200 < 100)
        // {
        //     gen_wave(sig3, index, Gpio3);
        // }
        
    
}