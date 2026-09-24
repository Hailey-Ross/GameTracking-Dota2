// MGetKV3ClassDefaults = {
//	"_class": "CDotaAssetTypeWorkshopFileFilterBase",
//	"m_assetTypes":
//	[
//	]
//}
// MHasKV3TransferPolymorphicClassname
class CDotaAssetTypeWorkshopFileFilterBase : public IWorkshopFileListerFilter
{
	CUtlVector< DotaWorkshopAssetType_t > m_assetTypes;
};
