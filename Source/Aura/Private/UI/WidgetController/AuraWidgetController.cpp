// Copyright Drift Studios


#include "UI/WidgetController/AuraWidgetController.h"

void UAuraWidgetController::SetWidgetControllerParams(const FWidgetControllerParams& WCParms)
{

	PlayerController=WCParms.PlayerController;
	PlayerState=WCParms.PlayerState;
	AbilitySystemComponent=WCParms.AbilitySystemComponent;
	AttributeSet=WCParms.AttributeSet;
}

void UAuraWidgetController::BroadCastInitialValues()
{
}

void UAuraWidgetController::BindCallbacksToDependencies()
{
}
