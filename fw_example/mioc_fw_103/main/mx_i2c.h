/*
�� ����������� ���������� I2C ��� ����������������� STM32F030
���������� �� ������������
SPL ������������ ������ ��� ������ �������������� �������
��� ������� ����� ��������� AF ������� � �������� SPL ������
--------------------------
����� Zlodey
masya-chel@mail.ru
masya-chel@yandex.ru
--------------------------
���� 2015�.
*/

#ifndef I2C_H	// �������� ��������� ��������� ����� ������
#define I2C_H

#include "main.h"

#define I2C_BUS I2C1


// ��������������� ����������
typedef enum _I2C_Direction {I2C_Transmitter=0, I2C_Receiver=1} I2C_Direction;
/*
������� �������� ��� ��������� ������ ���������
����� �� ������������ � ���� ���������� �����, � ��� ��� ��������
��������:
I2C->CR2 |= 1<<I2C_OFFSET_CR2_NBYTES;	// ����� �������, ��� ��������� 1 ����
I2C->CR2 |= 1<<16;						// ����� ��������� ��������, �� �� 1 ����, �� �� 16
*/
#define I2C_OFFSET_TIMINGR_SCLL		0
#define I2C_OFFSET_TIMINGR_SCLH		8
#define I2C_OFFSET_TIMINGR_SDADEL	16
#define I2C_OFFSET_TIMINGR_SCLDEL	20
#define I2C_OFFSET_TIMINGR_PRESC	28
#define I2C_OFFSET_CR2_NBYTES		16


////////////////////////////////////////////////
//    ������ ���������� ��������� �������     //
////////////////////////////////////////////////
void I2C_Initialization (void);
void I2C_Start (void);
void I2C_Stop (void);
u8 I2C_Write_Transaction (u8 Adress, u8 Register, u8 *Data, u8 Size);
u8 I2C_Read_Transaction (u8 Adress, u8 Register, u8 *Data, u8 Size);


#endif



