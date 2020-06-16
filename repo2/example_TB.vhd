
----------------------------------------------------------------------------------------------------
--                                                example
----------------------------------------------------------------------------------------------------
-- Descr: VHDL generated by InstantSOC 1.1.0 by FPGA-cores.com
-- Date:  16-06-2020 11:35:48
-- Src:   c:\Users\Leo\OneDrive\Projects\RISC\instantsoc\rc4\example.cpp
----------------------------------------------------------------------------------------------------

----------------
-- LICENSE
----------------
-- Copyright (C) 2019 FPGA-Cores.com. 
-- This code is only free to use for non-commercial use and for evaluation purpose.
-- Commercial use needs a commercial license - contact FPGA-Cores.com.
-- The code is generated on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.

-- -------------
-- DISCLAIMER
-- -------------
-- THIS CODE GENERATED BY TOOLS FROM FPGA-Cores.com IS PROVIDED "AS IS" AND ANY EXPRESSED OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, 
-- THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL FPGA-Cores.com OR ANY 
-- OF THEIR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, 
-- PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, 
-- WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS CODE, EVEN IF 
-- ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
--
-- Without limiting the foregoing, FPGA-Cores.com make no warranty that:
--    * the code will meet your requirements.
--    * the code will be uninterrupted, timely, secure or error-free.
--    * the results that may be obtained from the use of the code will be effective, accurate or reliable.
--    * the quality of the code will meet your expectations.
--    * any errors in the tools will be corrected.
--
-- The generated code and its documentation:
--    * could include technical or other mistakes, inaccuracies or typographical errors. 
--    * may be out of date and FPGA-Cores.com, its contributors, and FPGA Cores make no commitment to update such materials.
--
-- The use of the generated code is done at your own discretion and risk and with agreement 
-- that you will be solely responsible for any damage to your system or loss of data that results from such activities. 
-- No advice or information, whether oral or written, obtained by you from FPGA-Cores.com, its website, shall create any warranty for the code.

library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.numeric_std.all;

entity example_TB is
end entity;

architecture SIM of example_TB is

    component example is
    port(
        clk : in std_logic;
        Gpio0 : out std_logic;
        Gpio1 : out std_logic;
        Gpio2 : out std_logic;
        Gpio3 : out std_logic;
        Gpio4 : out std_logic;
        Gpio5 : out std_logic;
        Gpio6 : out std_logic;
        Gpio7 : out std_logic;
        sw0 : in std_logic;
        sw1 : in std_logic;
        sw2 : in std_logic;
        sw3 : in std_logic;
        sw4 : in std_logic;
        sw5 : in std_logic;
        sw6 : in std_logic;
        sw7 : in std_logic;
        sw8 : in std_logic;
        sw9 : in std_logic;
        sw10 : in std_logic;
        sw11 : in std_logic;
        sw12 : in std_logic;
        sw13 : in std_logic;
        sw14 : in std_logic;
        sw15 : in std_logic;
        led1 : out std_logic;
        led2 : out std_logic;
        led3 : out std_logic;
        led4 : out std_logic;
        led5 : out std_logic;
        led6 : out std_logic;
        led7 : out std_logic;
        led8 : out std_logic;
        led9 : out std_logic;
        led10 : out std_logic;
        led11 : out std_logic;
        led12 : out std_logic;
        led13 : out std_logic;
        led14 : out std_logic;
        led15 : out std_logic;
        sd_seg : out std_logic_vector(7 downto 0);
        sd_sel : out std_logic_vector(7 downto 0)
    );
    end component;

    signal clk : std_logic := '0';
    signal Gpio0 : std_logic := '0';
    signal Gpio1 : std_logic := '0';
    signal Gpio2 : std_logic := '0';
    signal Gpio3 : std_logic := '0';
    signal Gpio4 : std_logic := '0';
    signal Gpio5 : std_logic := '0';
    signal Gpio6 : std_logic := '0';
    signal Gpio7 : std_logic := '0';
    signal sw0 : std_logic := '0';
    signal sw1 : std_logic := '0';
    signal sw2 : std_logic := '0';
    signal sw3 : std_logic := '0';
    signal sw4 : std_logic := '0';
    signal sw5 : std_logic := '0';
    signal sw6 : std_logic := '0';
    signal sw7 : std_logic := '0';
    signal sw8 : std_logic := '0';
    signal sw9 : std_logic := '0';
    signal sw10 : std_logic := '0';
    signal sw11 : std_logic := '0';
    signal sw12 : std_logic := '0';
    signal sw13 : std_logic := '0';
    signal sw14 : std_logic := '0';
    signal sw15 : std_logic := '0';
    signal led1 : std_logic := '0';
    signal led2 : std_logic := '0';
    signal led3 : std_logic := '0';
    signal led4 : std_logic := '0';
    signal led5 : std_logic := '0';
    signal led6 : std_logic := '0';
    signal led7 : std_logic := '0';
    signal led8 : std_logic := '0';
    signal led9 : std_logic := '0';
    signal led10 : std_logic := '0';
    signal led11 : std_logic := '0';
    signal led12 : std_logic := '0';
    signal led13 : std_logic := '0';
    signal led14 : std_logic := '0';
    signal led15 : std_logic := '0';
    signal sd_seg : std_logic_vector(7 downto 0) := (others=>'0');
    signal sd_sel : std_logic_vector(7 downto 0) := (others=>'0');

begin

    --- The Device Under Test ---
    DUT : example
    port map(
        clk => clk,
        Gpio0 => Gpio0,
        Gpio1 => Gpio1,
        Gpio2 => Gpio2,
        Gpio3 => Gpio3,
        Gpio4 => Gpio4,
        Gpio5 => Gpio5,
        Gpio6 => Gpio6,
        Gpio7 => Gpio7,
        sw0 => sw0,
        sw1 => sw1,
        sw2 => sw2,
        sw3 => sw3,
        sw4 => sw4,
        sw5 => sw5,
        sw6 => sw6,
        sw7 => sw7,
        sw8 => sw8,
        sw9 => sw9,
        sw10 => sw10,
        sw11 => sw11,
        sw12 => sw12,
        sw13 => sw13,
        sw14 => sw14,
        sw15 => sw15,
        led1 => led1,
        led2 => led2,
        led3 => led3,
        led4 => led4,
        led5 => led5,
        led6 => led6,
        led7 => led7,
        led8 => led8,
        led9 => led9,
        led10 => led10,
        led11 => led11,
        led12 => led12,
        led13 => led13,
        led14 => led14,
        led15 => led15,
        sd_seg => sd_seg,
        sd_sel => sd_sel
    );

    -- Clock Generation 10 MHz
    clk <= not clk after 50 ns;











    --- Test process for IO_In ---
    process is
        variable din : std_logic := '0';
    begin
        wait for 1 us;
        sw0 <= std_logic(din);
    end process;

    --- Test process for IO_In ---
    process is
        variable din : std_logic := '0';
    begin
        wait for 1 us;
        sw1 <= std_logic(din);
    end process;

    --- Test process for IO_In ---
    process is
        variable din : std_logic := '0';
    begin
        wait for 1 us;
        sw2 <= std_logic(din);
    end process;

    --- Test process for IO_In ---
    process is
        variable din : std_logic := '0';
    begin
        wait for 1 us;
        sw3 <= std_logic(din);
    end process;

    --- Test process for IO_In ---
    process is
        variable din : std_logic := '0';
    begin
        wait for 1 us;
        sw4 <= std_logic(din);
    end process;

    --- Test process for IO_In ---
    process is
        variable din : std_logic := '0';
    begin
        wait for 1 us;
        sw5 <= std_logic(din);
    end process;

    --- Test process for IO_In ---
    process is
        variable din : std_logic := '0';
    begin
        wait for 1 us;
        sw6 <= std_logic(din);
    end process;

    --- Test process for IO_In ---
    process is
        variable din : std_logic := '0';
    begin
        wait for 1 us;
        sw7 <= std_logic(din);
    end process;

    --- Test process for IO_In ---
    process is
        variable din : std_logic := '0';
    begin
        wait for 1 us;
        sw8 <= std_logic(din);
    end process;

    --- Test process for IO_In ---
    process is
        variable din : std_logic := '0';
    begin
        wait for 1 us;
        sw9 <= std_logic(din);
    end process;

    --- Test process for IO_In ---
    process is
        variable din : std_logic := '0';
    begin
        wait for 1 us;
        sw10 <= std_logic(din);
    end process;

    --- Test process for IO_In ---
    process is
        variable din : std_logic := '0';
    begin
        wait for 1 us;
        sw11 <= std_logic(din);
    end process;

    --- Test process for IO_In ---
    process is
        variable din : std_logic := '0';
    begin
        wait for 1 us;
        sw12 <= std_logic(din);
    end process;

    --- Test process for IO_In ---
    process is
        variable din : std_logic := '0';
    begin
        wait for 1 us;
        sw13 <= std_logic(din);
    end process;

    --- Test process for IO_In ---
    process is
        variable din : std_logic := '0';
    begin
        wait for 1 us;
        sw14 <= std_logic(din);
    end process;

    --- Test process for IO_In ---
    process is
        variable din : std_logic := '0';
    begin
        wait for 1 us;
        sw15 <= std_logic(din);
    end process;
















end architecture;
