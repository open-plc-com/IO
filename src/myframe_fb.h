/*
	Name:			myframe_fb.h
	Purpose:		MIOC
	Author:			www.open-plc.com
	Created:		2019/07
	Modified by:
	RCS-ID:
	Copyright:		(c) Open-PLC
	Licence:		The MIT License (MIT)
*/


#ifndef __myframe_fb__
#define __myframe_fb__
#include <wx/string.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/menu.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/statusbr.h>
#include <wx/stattext.h>
#include <wx/textctrl.h>
#include <wx/statbmp.h>
#include <wx/toolbar.h>
#include <wx/statline.h>
#include <wx/grid.h>
#include <wx/sizer.h>
#include <wx/panel.h>
#include <wx/checkbox.h>
#include <wx/statbox.h>
#include <wx/scrolwin.h>
#include <wx/aui/auibook.h>
#include <wx/frame.h>
#include <wx/choice.h>
#include <wx/filepicker.h>
#include <wx/button.h>
#include <wx/dialog.h>
#include <wx/hyperlink.h>
#define ID_TOOL_NEW_PRJ 1000
#define ID_TOOL_OPEN_PRJ 1001
#define ID_TOOL_SAVE 1002
#define ID_TOOL_CLOSE_PRJ 1003
#define ID_TOOL_EXIT 1004
#define ID_TOOL_COM_CONNECT 1005
#define ID_TOOL_UART_CONFIG 1006
#define ID_TOOL_GENERATE 1007
#define ID_TOOL_ABOUT 1008
#define ID_TOOL_FUNCTIONS 1009
#define ID_TOOL_CONNECT 1010
#define ID_TOOL_INS_ROW 1011
#define ID_TOOL_DEL_ROW 1012
#define ID_TOOL_ROW_UP 1013
#define ID_TOOL_ROW_DOWN 1014
#define ID_TOOL_RUN 1015
#define ID_TOOL_SERIAL_HELP 1016
#define ID_TOOL_CAN_CFG 1017
#define ID_TOOL_CAN_HELP 1018
#define ID_TOOL_ETH_CFG 1019
#define ID_TOOL_ETH_HELP 1020
#define ID_TOOL_I2C_HELP 1021
#define ID_TOOL_BME280_HELP 1022
#define ID_TOOL_BH1750_HELP 1023
#define ID_TOOL_CCS811_HELP 1024
#define ID_TOOL_EC11_CONFIG 1025
#define ID_TOOL_EC11_HELP 1026
#define ID_TOOL_TIMER_CONFIG 1027
class MyFrameFB : public wxFrame
{
private:
protected:
wxMenuBar* m_menubar;
wxMenu* m_menu_file;
wxMenu* m_menu_tools;
wxMenu* m_help;
wxStatusBar* m_statusBar;
wxPanel* m_panel1;
wxToolBar* m_main_tool;
wxStaticText* m_staticText4;
wxTextCtrl* m_text_mcu;
wxStaticText* m_static_comment;
wxTextCtrl* m_text_comment;
wxStaticText* m_staticTextCOM;
wxTextCtrl* m_tool_com_port;
wxStaticBitmap* m_bitmap_com_indicator;
wxAuiNotebook* m_auinotebook;
wxPanel* m_data_panel;
wxToolBar* m_tool_data;
wxStaticLine* m_staticline1;
wxScrolledWindow* m_config_window;
wxStaticBoxSizer* sbSizerInterfaces;
wxStaticBoxSizer* sbSizerSerial;
wxToolBar* m_tool_UART;
wxCheckBox* m_check_UART;
wxCheckBox* m_check_USB_VCP;
wxCheckBox* m_check_USB_console;
wxStaticBoxSizer* sbSizerCAN;
wxToolBar* m_tool_CAN;
wxCheckBox* m_check_CAN_Internal;
wxCheckBox* m_check_CAN_MCP2515;
wxStaticBoxSizer* sbSizerEth;
wxToolBar* m_tool_Ethernet;
wxCheckBox* m_check_W5500;
wxStaticLine* m_staticline_indicators;
wxStaticBoxSizer* sbSizerIndicators;
wxStaticBoxSizer* sbSizerLED;
wxCheckBox* m_check_PC13;
wxStaticBoxSizer* sbSizerDisplayI2C;
wxStaticLine* m_staticline8;
wxStaticLine* m_staticline71;
wxCheckBox* m_check_LCD1602;
wxStaticLine* m_staticline4;
wxCheckBox* m_check_8574;
wxCheckBox* m_check_8574A;
wxStaticLine* m_staticline11;
wxStaticLine* m_staticline3;
wxStaticLine* m_staticline9;
wxCheckBox* m_check_SSD1306;
wxStaticLine* m_staticline10;
wxStaticText* m_staticText8;
wxStaticLine* m_staticline14;
wxStaticLine* m_staticline5;
wxToolBar* m_tool_Display_I2C;
wxStaticLine* m_staticline_sensors;
wxStaticBoxSizer* sbSizerSensors;
wxToolBar* m_toolBarSensor;
wxCheckBox* m_check_BME280;
wxCheckBox* m_check_BH1750;
wxCheckBox* m_check_CCS811;
wxCheckBox* m_check_EC11;
wxStaticLine* m_staticline_system;
wxStaticBoxSizer* sbSizerSystem;
wxToolBar* m_toolBarSystem;
wxCheckBox* m_check_WatchDog;
wxCheckBox* m_check_MCO;
wxCheckBox* m_check_Timer;
wxStaticText* m_text_ibt_fix_time;
wxTextCtrl* m_ibt_fix_time;
wxStaticLine* m_staticline_bottom;
wxPanel* m_panel_log;
wxTextCtrl* m_log;
virtual void OnGridChar( wxKeyEvent& event ) { event.Skip(); }
virtual void On_check_UART1( wxCommandEvent& event ) { event.Skip(); }
virtual void On_check_USB_VCP( wxCommandEvent& event ) { event.Skip(); }
virtual void On_check_USB_console( wxCommandEvent& event ) { event.Skip(); }
virtual void On_check_CAN_Internal( wxCommandEvent& event ) { event.Skip(); }
virtual void On_check_CAN_MCP2515( wxCommandEvent& event ) { event.Skip(); }
virtual void On_check_W5500( wxCommandEvent& event ) { event.Skip(); }
virtual void On_check_PC13( wxCommandEvent& event ) { event.Skip(); }
virtual void On_check_LCD1602( wxCommandEvent& event ) { event.Skip(); }
virtual void On_check_PCF8574( wxCommandEvent& event ) { event.Skip(); }
virtual void On_check_PCF8574A( wxCommandEvent& event ) { event.Skip(); }
virtual void On_check_SSD1306( wxCommandEvent& event ) { event.Skip(); }
virtual void On_check_BME280( wxCommandEvent& event ) { event.Skip(); }
virtual void On_check_BH1750( wxCommandEvent& event ) { event.Skip(); }
virtual void On_check_WATCHDOG( wxCommandEvent& event ) { event.Skip(); }
virtual void On_check_MCO( wxCommandEvent& event ) { event.Skip(); }
virtual void On_check_TIMER( wxCommandEvent& event ) { event.Skip(); }
public:
wxGrid* m_grid;
MyFrameFB( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 800,600 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );
~MyFrameFB();
};
class New_Project_FB : public wxDialog
{
private:
protected:
wxPanel* m_panel3;
wxStaticText* m_staticText2;
wxStaticText* m_staticText10;
wxTextCtrl* m_project_name;
wxStaticText* m_staticText3;
wxDirPickerCtrl* m_dir;
wxStaticText* m_staticText7;
wxStaticLine* m_staticline6;
wxStdDialogButtonSizer* m_sdb;
wxButton* m_sdbOK;
wxButton* m_sdbCancel;
virtual void OnDirChanged( wxFileDirPickerEvent& event ) { event.Skip(); }
virtual void OnOkButton( wxCommandEvent& event ) { event.Skip(); }
public:
wxChoice* m_choice_MCU;
wxTextCtrl* m_path_project_name;
wxTextCtrl* m_text_comment;
New_Project_FB( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Create new project"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxDEFAULT_DIALOG_STYLE );
~New_Project_FB();
};
class Open_Project_FB : public wxDialog
{
private:
protected:
wxPanel* m_panel;
wxStaticText* m_staticText;
wxStaticLine* m_staticline;
wxStdDialogButtonSizer* m_sdb;
wxButton* m_sdbOK;
wxButton* m_sdbCancel;
virtual void OnOkButton( wxCommandEvent& event ) { event.Skip(); }
public:
wxFilePickerCtrl* m_file;
Open_Project_FB( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Open project"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 600,100 ), long style = wxDEFAULT_DIALOG_STYLE );
~Open_Project_FB();
};
class Set_COM_FB : public wxDialog
{
private:
protected:
wxPanel* m_panel4;
wxStaticText* m_staticText5;
wxStaticText* m_staticText6;
wxStdDialogButtonSizer* m_sdbSizer2;
wxButton* m_sdbSizer2OK;
wxButton* m_sdbSizer2Cancel;
virtual void OnChoiseCOM( wxCommandEvent& event ) { event.Skip(); }
virtual void OnOkButton( wxCommandEvent& event ) { event.Skip(); }
public:
wxChoice* m_com_choice;
wxChoice* m_speed_choice;
Set_COM_FB( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Set COM-port"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxDEFAULT_DIALOG_STYLE );
~Set_COM_FB();
};
class My_Help : public wxDialog
{
private:
protected:
wxPanel* m_panel5;
wxStaticBitmap* m_bitmap2;
wxStaticLine* m_staticline13;
wxStaticText* m_staticText9;
wxHyperlinkCtrl* m_hyperlink;
wxStdDialogButtonSizer* m_sdbSizer3;
wxButton* m_sdbSizer3OK;
public:
My_Help( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = 0 );
~My_Help();
};
class PG_Help_OK : public wxDialog
{
private:
protected:
public:
wxPanel* m_panel;
wxStaticBitmap* m_bitmap;
wxGrid* m_grid;
wxStaticLine* m_staticline;
wxStdDialogButtonSizer* m_sdbSizer;
wxButton* m_sdbSizerOK;
PG_Help_OK( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxCAPTION );
~PG_Help_OK();
};
class PG_Help_OK_Cancel : public wxDialog
{
private:
protected:
public:
wxPanel* m_panel;
wxStaticBitmap* m_bitmap;
wxGrid* m_grid;
wxStaticLine* m_staticline;
wxStdDialogButtonSizer* m_sdbSizer;
wxButton* m_sdbSizerOK;
wxButton* m_sdbSizerCancel;
PG_Help_OK_Cancel( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxCAPTION );
~PG_Help_OK_Cancel();
};
#endif