#pragma once


UENUM(BlueprintType)
enum class ECharacterState : uint8
{
	ECS_Unequipped UMETA(DisplayName = "Unequipped"),
	ECS_EquippedOneHandWeapon UMETA(DisplayName = "Equipped OneHand Weapon"),
	ECS_EquippedTwoHandWeapon UMETA(DisplayName = "Equipped TwoHand Weapon")

};