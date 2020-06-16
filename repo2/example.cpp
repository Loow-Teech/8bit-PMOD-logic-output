#include "fc_io.h"
#include "fc_system.h"

void gen_wave(bool sig[], int index, FC_System_Timer &tmr, FC_IO_Out &G, int &counter_val){
    if(sig[counter_val] == 1){
        for(int i = 0;i<30;i++){
            // tmr.WaitTimer();
            if(i >27){
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

U32 To7Seg(char d) 
{
    switch(d) {
        case 'L': return 0x38; break; 
        case 'O': return 0x3F; break; 
        case 'V': return 0x3E; break;
        case 'W': return 0x3E; break;
        case 'T': return 0x31; break;
        case 'E': return 0x79; break;
        case 'C': return 0x39; break;
        case 'H': return 0x76; break; 
        default: return 0x00;
    }
}

void seg_show(FC_IO_SegmentDisplay &s){
    char str[8] = {'H','C','E','T','V','V','O','L'};
    for(int i = 7; i >= 0; i--){
        s.SetDisplay(~(To7Seg(str[i])),i);
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
    FC_IO_In sw0;
    FC_IO_In sw1;
    FC_IO_In sw2;
    FC_IO_In sw3;
    FC_IO_In sw4;
    FC_IO_In sw5;
    FC_IO_In sw6;
    FC_IO_In sw7;
    FC_IO_In sw8;
    FC_IO_In sw9;
    FC_IO_In sw10;
    FC_IO_In sw11;
    FC_IO_In sw12;
    FC_IO_In sw13;
    FC_IO_In sw14;
    FC_IO_In sw15;
    
    FC_IO_Out led1;
    FC_IO_Out led2;
    FC_IO_Out led3;
    FC_IO_Out led4;
    FC_IO_Out led5;
    FC_IO_Out led6;
    FC_IO_Out led7;
    FC_IO_Out led8;
    FC_IO_Out led9;
    FC_IO_Out led10;
    FC_IO_Out led11;
    FC_IO_Out led12;
    FC_IO_Out led13;
    FC_IO_Out led14;
    FC_IO_Out led15;
    // FC_IO_Out led(15);
    FC_IO_SegmentDisplay sd(8,8,0);
    // U32 sw[15] = {sw1,sw2,sw3,sw4,sw5,sw6,sw7,sw8,sw9,sw10,sw11,sw12,sw13,sw14,sw15};
    // FC_IO_Out idx;
    // FC_IO_Pulse p;
    //% hw_end
    int counter_value = 0;
    int index = 0;
    // bool f = 0;
    bool sig0[48] = {0,0,1,1,1,1,0,0,0,0,0,0,1,0,0,0,0,0,1,1,1,1,0,0,0,0,0,1,1,1,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,1,0};
    bool sig1[48] = {0,0,1,0,0,1,0,0,0,0,0,0,1,0,0,0,0,0,1,0,0,1,0,0,0,0,1,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,0};
    bool sig2[48] = {0,0,1,0,0,1,0,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,0,1,0,0};
    bool sig3[48] = {0,0,1,1,1,1,0,0,0,0,0,0,1,0,0,0,0,0,1,1,1,0,0,0,0,0,1,0,0,0,0,0,0,1,1,1,1,1,1,0,0,0,1,1,0,1,0,0};
    bool sig4[48] = {0,0,1,1,1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,1,0,0,0,0,1,0,0,0,0,0,0,1,1,1,1,1,1,0,0,0,0,1,0,1,0,0};
    bool sig5[48] = {0,0,1,0,1,1,0,0,0,0,0,0,1,0,0,0,0,0,1,0,0,1,0,0,0,0,1,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,0,0};
    bool sig6[48] = {0,0,1,0,0,1,0,0,0,0,0,0,1,0,0,0,0,0,1,0,0,1,0,0,0,0,1,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0};
    bool sig7[48] = {0,0,1,0,0,1,1,0,0,0,0,0,1,0,0,0,0,0,1,1,1,1,0,0,0,0,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0};
    // tx << "Hello World!";

    // p.Pulse(100,TU_clk);
    timer.Start(1, TU_us);
    for(;;){
        if(counter_value > 47){
            counter_value = 0;
        }
        index = counter_value % 8;
        // idx = index;
        counter_value = counter_value+1;
        seg_show(sd);

        led1 = sw1;
        led2 = sw2;
        led3 = sw3;
        led4 = sw4;
        led5 = sw5;
        led6 = sw6;
        led7 = sw7;
        led8 = sw8;
        led9 = sw9;
        led10 = sw10;
        led11 = sw11;
        led12 = sw12;
        led13 = sw13;
        led14 = sw14;
        led15 = sw15;
        if(sw0 == 1){
            gen_wave(sig0, index, timer, Gpio0,counter_value);
            gen_wave(sig1, index, timer, Gpio1,counter_value);
            gen_wave(sig2, index, timer, Gpio2,counter_value);
            gen_wave(sig3, index, timer, Gpio3,counter_value);
            gen_wave(sig4, index, timer, Gpio4,counter_value);
            gen_wave(sig5, index, timer, Gpio5,counter_value);
            gen_wave(sig6, index, timer, Gpio6,counter_value);
            gen_wave(sig7, index, timer, Gpio7,counter_value);
        }

        timer.WaitTimer();

    }




        
    
}