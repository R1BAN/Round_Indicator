Task_Table:
.dW Idle				;00 - Idle mode routine
.dW	Process_Timers		;01 - System timers service
.dW	Show_Scale			;02	- ��������� ��������� ������� (������)
.dW	ConvDone			;03 - ��������� �������������� ���
.dW	BlinkOn				;04 - �������� �������� ���������
.dW	BlinkOff			;05 - ��������� �������� ���������
.dW	DecPeak1			;06 - ��������� ������� �������� 1
.dW	DecPeak2			;07 - ��������� ������� �������� 2
