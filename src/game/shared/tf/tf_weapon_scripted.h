//========= Copyright Valve Corporation, All rights reserved. ============//
//
// Purpose: 
//
//=============================================================================

#ifndef TF_WEAPON_SYRINGEGUN_H
#define TF_WEAPON_SYRINGEGUN_H
#ifdef _WIN32
#pragma once
#endif

#include "tf_weaponbase_gun.h"

// Client specific.
#ifdef CLIENT_DLL
#define CTFWeaponScripted C_TFWeaponScripted
#endif

//=============================================================================
//
// TF Weapon Syringe gun.
//
class CTFWeaponScripted : public CTFWeaponBaseGun
{
public:

	DECLARE_CLASS( CTFWeaponScripted, CTFWeaponBaseGun );
	DECLARE_NETWORKCLASS(); 
	DECLARE_PREDICTABLE();

// Server specific.
#ifdef GAME_DLL
	DECLARE_DATADESC();
#endif

	CTFWeaponScripted() {}
	~CTFWeaponScripted() {}

	virtual void PrimaryAttack();
	virtual int		GetWeaponID( void ) const			{ return TF_WEAPON_NONE; }
	//virtual bool	Deploy( void );
	//virtual bool	Holster( CBaseCombatWeapon *pSwitchingTo );

	//virtual void RemoveProjectileAmmo( CTFPlayer *pPlayer );
	//virtual bool HasPrimaryAmmo( void );

private:

	CTFWeaponScripted( const CTFWeaponScripted & ) {}
};

#endif // TF_WEAPON_SYRINGEGUN_H
