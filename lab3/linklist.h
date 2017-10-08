/***********************************************************************/
/*Copyright (C)   GeSong, sa517089@mail.ustc.edu.cn                    */
/*FILE NAME             : licklist.c 								   */
/*PRINCIPAL AUTHOR      : GeSong									   */
/*DATE OF FIRST RELEASE : 2017/10/8									   */
/*DESCRIPTION			: linklist for the menu						   */
/*LANGUAGE				: C	   										   */
/***********************************************************************/

#ifndef LINKLIST
#define LINKLIST

typedef struct DataNode
{
	char* cmd;
	char* desc;
	void (*handler)();
	struct DataNode *next;
}tDataNode;

//to comfirm whether there is the command
tDataNode *FindCmd(tDataNode *head,char *cmd);
//show all command 
void ShowAllCmd(tDataNode* head);

#endif
