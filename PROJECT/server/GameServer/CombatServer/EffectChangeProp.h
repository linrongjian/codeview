
#ifndef __COMBATSERVER_EFFECTCHANGEPROP_H__
#define __COMBATSERVER_EFFECTCHANGEPROP_H__

#include "Effect.h"


class EffectChangeProp : public Effect
{
public:
	EffectChangeProp();
	virtual ~EffectChangeProp();

public:
		// 效果开始启动
	// pMaster 本效果作用生物
	// UID uidCreator 产生者UID
	// pStatusBelong 效果属于的状态
	// 返回值：BOOL - 操作成功则返回TRUE，否则返回FASLE
	virtual bool Start(ICreature *pMaster, UID uidCreator, IStatus *pStatusBelong = NULL);

	// 效果结束
	virtual bool End();

private:
	//记录供献值
	INT32	m_VarPropValue;

};










#endif
