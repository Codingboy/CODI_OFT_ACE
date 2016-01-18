class CfgPatches
{
	class CODI_OFT_ACE
	{
		authors[] = {"Coding"};
		version = 0.1;
		units[] = {"CODI_OFT_Item_Tablet"};
		weapons[] = {"CODI_OFT_Tablet"};
		requiredVersion = 0.1;
		license = "CC-BY-NC-SA 4.0";
		licenseURL = "http://creativecommons.org/licenses/by-nc-sa/4.0/";
	};
};

class CfgVehicles
{
	class Item_Base_F;
	class CODI_OFT_Item_Tablet: Item_Base_F
	{
		author = "Coding";
		scope = 2;
		scopeCurator = 2;
		displayName = "OFT";
		vehicleClass = "Items";
	};
};

class CfgWeapons
{
	class ACE_ItemCore;
	class InventoryItem_Base_F;
	class CODI_OFT_Tablet: ACE_ItemCore
	{
		author = "Coding";
		scope = 2;
		displayName = "OFT";
		descriptionShort = $STR_CODI_OFT_ACE_itemDescription;
		picture = "\CODI_OFT_ACE\logo.paa";
		class ItemInfo: InventoryItem_Base_F
		{
			mass = 1;
		};
	};
};