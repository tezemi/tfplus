/**
 * =============================================================================
 * TF2 Plus
 * SourceMod extension designed for TF2.
 * =============================================================================
*/

#include "extension.h"

TFPlus g_TFplus;				// Singleton for extension
IForward *g_OnAimBump = NULL;	// Forward for CTFPlayer::ApplyPunchImpulseX

const sp_nativeinfo_t MyNatives[] = 
{
	{NULL,  NULL},
};

SMEXT_LINK(&g_TFplus);

void TFPlus::SDK_OnAllLoaded()
{
	sharesys->AddNatives(myself, MyNatives);
	g_OnAimBump = forwards->CreateForward("OnAimBump", ET_Event, 2, NULL, Param_Cell, Param_String);
}

void TFPlus::SDK_OnUnload()
{
	forwards->ReleaseForward(g_OnAimBump);
}
