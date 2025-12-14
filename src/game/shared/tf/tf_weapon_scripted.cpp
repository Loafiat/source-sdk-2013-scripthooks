//========= Copyright Valve Corporation, All rights reserved. ============//
//
//
//=============================================================================
#include "cbase.h"
#include "tf_weapon_scripted.h"
#include "tf_fx_shared.h"
#include "tf_weapon_medigun.h"

// Client specific.
#ifdef CLIENT_DLL
#include "c_tf_player.h"
// Server specific.
#else
#include "tf_player.h"
#endif

//=============================================================================
//
// Weapon Syringe Gun tables.
//
IMPLEMENT_NETWORKCLASS_ALIASED( TFWeaponScripted, DT_WeaponScripted )

BEGIN_NETWORK_TABLE( CTFWeaponScripted, DT_WeaponScripted )
END_NETWORK_TABLE()

BEGIN_PREDICTION_DATA( CTFWeaponScripted )
END_PREDICTION_DATA()

LINK_ENTITY_TO_CLASS( tf_weapon_scripted, CTFWeaponScripted );
PRECACHE_WEAPON_REGISTER( tf_weapon_scripted );

// Server specific.
#ifndef CLIENT_DLL
BEGIN_DATADESC( CTFWeaponScripted )
END_DATADESC()
#endif

//=============================================================================
//
// Weapon Scripted functions.
//

//-----------------------------------------------------------------------------
// Purpose:
//-----------------------------------------------------------------------------

/*
bool CTFWeaponScripted::Deploy()
{
#ifndef CLIENT_DLL
	HSCRIPT hFunc = m_ScriptScope.LookupFunction( "Deploy" );
	if ( hFunc )
	{
		ScriptVariant_t pFunctionReturn;
		m_ScriptScope.Call( hFunc, &pFunctionReturn );
		m_ScriptScope.ReleaseFunction( hFunc );
	}
#endif
	return BaseClass::Deploy();
}

//-----------------------------------------------------------------------------
// Purpose:
//-----------------------------------------------------------------------------
bool CTFWeaponScripted::Holster( CBaseCombatWeapon *pSwitchingTo )
{
#ifndef CLIENT_DLL
	HSCRIPT hFunc = m_ScriptScope.LookupFunction( "Holster" );
	if ( hFunc )
	{
		ScriptVariant_t pFunctionReturn;
		m_ScriptScope.Call( hFunc, &pFunctionReturn );
		m_ScriptScope.ReleaseFunction( hFunc );
	}
#endif
	return BaseClass::Holster( pSwitchingTo );
}

void CTFWeaponScripted::RemoveProjectileAmmo( CTFPlayer *pPlayer )
{
	

	return BaseClass::RemoveProjectileAmmo( pPlayer );
}

bool CTFWeaponScripted::HasPrimaryAmmo( void )
{
	
	return BaseClass::HasPrimaryAmmo();
}
*/

void CTFWeaponScripted::PrimaryAttack( void ) 
{
#ifndef CLIENT_DLL
	HSCRIPT hFunc = m_ScriptScope.LookupFunction( "PrimaryAttack" );
	if ( hFunc )
	{
		ScriptVariant_t pFunctionReturn;
		m_ScriptScope.Call( hFunc, &pFunctionReturn );
		m_ScriptScope.ReleaseFunction( hFunc );

		if( !pFunctionReturn )
			return;
	}
#endif
	return BaseClass::PrimaryAttack();
}
