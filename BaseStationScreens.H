//
//BaseStationScreens.h
//
#ifndef BaseStationScreens
#define BaseStationScreens
#ifndef	_GDD_SCREENS_H_
#define	 _GDD_SCREENS_H_
void GDDDemoCreateFirstScreen(void);
void GDDDemoGOLMsgCallback(WORD objMsg, OBJ_HEADER* pObj, GOL_MSG* pMsg);
void GDDDemoGOLDrawCallback(void);
void GDDDemoNextScreen(void);
extern const FONT_FLASH gentium_16_200_0_0_0_0;
void CreateBaseMain(void); //Main Screen to be created
void CreateEditBox(void);
void CreatePagerNumber(void);
void CreatePagerActivated(void);
void CreatePagerCaled(void);
void CreateTableNumber(void);
void CreateOrderFood(void);
void CreatePagerNumber(void);
#endif
