// MGetKV3ClassDefaults = {
//	"_class": "CFileTypeWorkshopFileFilter",
//	"m_fileTypes":
//	[
//	]
//}
// MPropertyFriendlyName = "File Type"
// MHasKV3TransferPolymorphicClassname
class CFileTypeWorkshopFileFilter : public IWorkshopFileListerFilter
{
	CUtlVector< EWorkshopFileType > m_fileTypes;
};
