// MGetKV3ClassDefaults = {
//	"_class": "CTagsWorkshopFileFilter",
//	"m_tags":
//	[
//	]
//}
// MPropertyFriendlyName = "Tags"
// MWorkshopFileListerFilterAllowMultiple
// MHasKV3TransferPolymorphicClassname
class CTagsWorkshopFileFilter : public IWorkshopFileListerFilter
{
	CUtlVector< CUtlString > m_tags;
};
