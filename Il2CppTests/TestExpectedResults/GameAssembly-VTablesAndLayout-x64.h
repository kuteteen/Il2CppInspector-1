// Generated C++ file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
// Target Unity version: 2019.3.0 - 2019.3.6

#if defined(_GHIDRA_) || defined(_IDA_)
typedef unsigned __int8 uint8_t;
typedef unsigned __int16 uint16_t;
typedef unsigned __int32 uint32_t;
typedef unsigned __int64 uint64_t;
typedef __int8 int8_t;
typedef __int16 int16_t;
typedef __int32 int32_t;
typedef __int64 int64_t;
#endif

#if defined(_GHIDRA_)
typedef __int64 size_t;
typedef size_t intptr_t;
typedef size_t uintptr_t;
#else
#define _CPLUSPLUS_
#endif

// ******************************************************************************
// * IL2CPP internal types
// ******************************************************************************

typedef struct Il2CppClass Il2CppClass;
typedef struct Il2CppType Il2CppType;
typedef struct EventInfo EventInfo;
typedef struct MethodInfo MethodInfo;
typedef struct FieldInfo FieldInfo;
typedef struct PropertyInfo PropertyInfo;
typedef struct Il2CppAssembly Il2CppAssembly;
typedef struct Il2CppArray Il2CppArray;
typedef struct Il2CppDelegate Il2CppDelegate;
typedef struct Il2CppDomain Il2CppDomain;
typedef struct Il2CppImage Il2CppImage;
typedef struct Il2CppException Il2CppException;
typedef struct Il2CppProfiler Il2CppProfiler;
typedef struct Il2CppObject Il2CppObject;
typedef struct Il2CppReflectionMethod Il2CppReflectionMethod;
typedef struct Il2CppReflectionType Il2CppReflectionType;
typedef struct Il2CppString Il2CppString;
typedef struct Il2CppThread Il2CppThread;
typedef struct Il2CppAsyncResult Il2CppAsyncResult;
typedef struct Il2CppManagedMemorySnapshot Il2CppManagedMemorySnapshot;
typedef struct Il2CppCustomAttrInfo Il2CppCustomAttrInfo;
typedef enum
{
    IL2CPP_PROFILE_NONE = 0,
    IL2CPP_PROFILE_APPDOMAIN_EVENTS = 1 << 0,
    IL2CPP_PROFILE_ASSEMBLY_EVENTS = 1 << 1,
    IL2CPP_PROFILE_MODULE_EVENTS = 1 << 2,
    IL2CPP_PROFILE_CLASS_EVENTS = 1 << 3,
    IL2CPP_PROFILE_JIT_COMPILATION = 1 << 4,
    IL2CPP_PROFILE_INLINING = 1 << 5,
    IL2CPP_PROFILE_EXCEPTIONS = 1 << 6,
    IL2CPP_PROFILE_ALLOCATIONS = 1 << 7,
    IL2CPP_PROFILE_GC = 1 << 8,
    IL2CPP_PROFILE_THREADS = 1 << 9,
    IL2CPP_PROFILE_REMOTING = 1 << 10,
    IL2CPP_PROFILE_TRANSITIONS = 1 << 11,
    IL2CPP_PROFILE_ENTER_LEAVE = 1 << 12,
    IL2CPP_PROFILE_COVERAGE = 1 << 13,
    IL2CPP_PROFILE_INS_COVERAGE = 1 << 14,
    IL2CPP_PROFILE_STATISTICAL = 1 << 15,
    IL2CPP_PROFILE_METHOD_EVENTS = 1 << 16,
    IL2CPP_PROFILE_MONITOR_EVENTS = 1 << 17,
    IL2CPP_PROFILE_IOMAP_EVENTS = 1 << 18,
    IL2CPP_PROFILE_GC_MOVES = 1 << 19,
    IL2CPP_PROFILE_FILEIO = 1 << 20
} Il2CppProfileFlags;
typedef enum
{
    IL2CPP_PROFILE_FILEIO_WRITE = 0,
    IL2CPP_PROFILE_FILEIO_READ
} Il2CppProfileFileIOKind;
typedef enum
{
    IL2CPP_GC_EVENT_START,
    IL2CPP_GC_EVENT_MARK_START,
    IL2CPP_GC_EVENT_MARK_END,
    IL2CPP_GC_EVENT_RECLAIM_START,
    IL2CPP_GC_EVENT_RECLAIM_END,
    IL2CPP_GC_EVENT_END,
    IL2CPP_GC_EVENT_PRE_STOP_WORLD,
    IL2CPP_GC_EVENT_POST_STOP_WORLD,
    IL2CPP_GC_EVENT_PRE_START_WORLD,
    IL2CPP_GC_EVENT_POST_START_WORLD
} Il2CppGCEvent;
typedef enum
{
    IL2CPP_STAT_NEW_OBJECT_COUNT,
    IL2CPP_STAT_INITIALIZED_CLASS_COUNT,
    IL2CPP_STAT_METHOD_COUNT,
    IL2CPP_STAT_CLASS_STATIC_DATA_SIZE,
    IL2CPP_STAT_GENERIC_INSTANCE_COUNT,
    IL2CPP_STAT_GENERIC_CLASS_COUNT,
    IL2CPP_STAT_INFLATED_METHOD_COUNT,
    IL2CPP_STAT_INFLATED_TYPE_COUNT,
} Il2CppStat;
typedef enum
{
    IL2CPP_UNHANDLED_POLICY_LEGACY,
    IL2CPP_UNHANDLED_POLICY_CURRENT
} Il2CppRuntimeUnhandledExceptionPolicy;
typedef struct Il2CppStackFrameInfo
{
    const MethodInfo *method;
} Il2CppStackFrameInfo;
typedef void(*Il2CppMethodPointer)();
typedef struct Il2CppMethodDebugInfo
{
    Il2CppMethodPointer methodPointer;
    int32_t code_size;
    const char *file;
} Il2CppMethodDebugInfo;
typedef struct
{
    void* (*malloc_func)(size_t size);
    void* (*aligned_malloc_func)(size_t size, size_t alignment);
    void (*free_func)(void *ptr);
    void (*aligned_free_func)(void *ptr);
    void* (*calloc_func)(size_t nmemb, size_t size);
    void* (*realloc_func)(void *ptr, size_t size);
    void* (*aligned_realloc_func)(void *ptr, size_t size, size_t alignment);
} Il2CppMemoryCallbacks;
typedef struct
{
    const char *name;
    void(*connect)(const char *address);
    int(*wait_for_attach)(void);
    void(*close1)(void);
    void(*close2)(void);
    int(*send)(void *buf, int len);
    int(*recv)(void *buf, int len);
} Il2CppDebuggerTransport;
typedef uint16_t Il2CppChar;
typedef char Il2CppNativeChar;
typedef void (*il2cpp_register_object_callback)(Il2CppObject** arr, int size, void* userdata);
typedef void (*il2cpp_WorldChangedCallback)();
typedef void (*Il2CppFrameWalkFunc) (const Il2CppStackFrameInfo *info, void *user_data);
typedef void (*Il2CppProfileFunc) (Il2CppProfiler* prof);
typedef void (*Il2CppProfileMethodFunc) (Il2CppProfiler* prof, const MethodInfo *method);
typedef void (*Il2CppProfileAllocFunc) (Il2CppProfiler* prof, Il2CppObject *obj, Il2CppClass *klass);
typedef void (*Il2CppProfileGCFunc) (Il2CppProfiler* prof, Il2CppGCEvent event, int generation);
typedef void (*Il2CppProfileGCResizeFunc) (Il2CppProfiler* prof, int64_t new_size);
typedef void (*Il2CppProfileFileIOFunc) (Il2CppProfiler* prof, Il2CppProfileFileIOKind kind, int count);
typedef void (*Il2CppProfileThreadFunc) (Il2CppProfiler *prof, unsigned long tid);
typedef const Il2CppNativeChar* (*Il2CppSetFindPlugInCallback)(const Il2CppNativeChar*);
typedef void (*Il2CppLogCallback)(const char*);
typedef size_t(*Il2CppBacktraceFunc) (Il2CppMethodPointer* buffer, size_t maxSize);
typedef struct Il2CppManagedMemorySnapshot Il2CppManagedMemorySnapshot;
typedef uintptr_t il2cpp_array_size_t;
typedef void ( *SynchronizationContextCallback)(intptr_t arg);
typedef uint32_t Il2CppMethodSlot;
static const uint32_t kInvalidIl2CppMethodSlot = 65535;
static const int ipv6AddressSize = 16;
typedef int32_t il2cpp_hresult_t;
typedef struct Il2CppMetadataField
{
    uint32_t offset;
    uint32_t typeIndex;
    const char* name;
    uint8_t isStatic;
} Il2CppMetadataField;
typedef enum Il2CppMetadataTypeFlags
{
    kNone = 0,
    kValueType = 1 << 0,
    kArray = 1 << 1,
    kArrayRankMask = 0xFFFF0000
} Il2CppMetadataTypeFlags;
typedef struct Il2CppMetadataType
{
    Il2CppMetadataTypeFlags flags;
    Il2CppMetadataField* fields;
    uint32_t fieldCount;
    uint32_t staticsSize;
    uint8_t* statics;
    uint32_t baseOrElementTypeIndex;
    char* name;
    const char* assemblyName;
    uint64_t typeInfoAddress;
    uint32_t size;
} Il2CppMetadataType;
typedef struct Il2CppMetadataSnapshot
{
    uint32_t typeCount;
    Il2CppMetadataType* types;
} Il2CppMetadataSnapshot;
typedef struct Il2CppManagedMemorySection
{
    uint64_t sectionStartAddress;
    uint32_t sectionSize;
    uint8_t* sectionBytes;
} Il2CppManagedMemorySection;
typedef struct Il2CppManagedHeap
{
    uint32_t sectionCount;
    Il2CppManagedMemorySection* sections;
} Il2CppManagedHeap;
typedef struct Il2CppStacks
{
    uint32_t stackCount;
    Il2CppManagedMemorySection* stacks;
} Il2CppStacks;
typedef struct NativeObject
{
    uint32_t gcHandleIndex;
    uint32_t size;
    uint32_t instanceId;
    uint32_t classId;
    uint32_t referencedNativeObjectIndicesCount;
    uint32_t* referencedNativeObjectIndices;
} NativeObject;
typedef struct Il2CppGCHandles
{
    uint32_t trackedObjectCount;
    uint64_t* pointersToObjects;
} Il2CppGCHandles;
typedef struct Il2CppRuntimeInformation
{
    uint32_t pointerSize;
    uint32_t objectHeaderSize;
    uint32_t arrayHeaderSize;
    uint32_t arrayBoundsOffsetInHeader;
    uint32_t arraySizeOffsetInHeader;
    uint32_t allocationGranularity;
} Il2CppRuntimeInformation;
typedef struct Il2CppManagedMemorySnapshot
{
    Il2CppManagedHeap heap;
    Il2CppStacks stacks;
    Il2CppMetadataSnapshot metadata;
    Il2CppGCHandles gcHandles;
    Il2CppRuntimeInformation runtimeInformation;
    void* additionalUserInformation;
} Il2CppManagedMemorySnapshot;
typedef enum Il2CppTypeEnum
{
    IL2CPP_TYPE_END = 0x00,
    IL2CPP_TYPE_VOID = 0x01,
    IL2CPP_TYPE_BOOLEAN = 0x02,
    IL2CPP_TYPE_CHAR = 0x03,
    IL2CPP_TYPE_I1 = 0x04,
    IL2CPP_TYPE_U1 = 0x05,
    IL2CPP_TYPE_I2 = 0x06,
    IL2CPP_TYPE_U2 = 0x07,
    IL2CPP_TYPE_I4 = 0x08,
    IL2CPP_TYPE_U4 = 0x09,
    IL2CPP_TYPE_I8 = 0x0a,
    IL2CPP_TYPE_U8 = 0x0b,
    IL2CPP_TYPE_R4 = 0x0c,
    IL2CPP_TYPE_R8 = 0x0d,
    IL2CPP_TYPE_STRING = 0x0e,
    IL2CPP_TYPE_PTR = 0x0f,
    IL2CPP_TYPE_BYREF = 0x10,
    IL2CPP_TYPE_VALUETYPE = 0x11,
    IL2CPP_TYPE_CLASS = 0x12,
    IL2CPP_TYPE_VAR = 0x13,
    IL2CPP_TYPE_ARRAY = 0x14,
    IL2CPP_TYPE_GENERICINST = 0x15,
    IL2CPP_TYPE_TYPEDBYREF = 0x16,
    IL2CPP_TYPE_I = 0x18,
    IL2CPP_TYPE_U = 0x19,
    IL2CPP_TYPE_FNPTR = 0x1b,
    IL2CPP_TYPE_OBJECT = 0x1c,
    IL2CPP_TYPE_SZARRAY = 0x1d,
    IL2CPP_TYPE_MVAR = 0x1e,
    IL2CPP_TYPE_CMOD_REQD = 0x1f,
    IL2CPP_TYPE_CMOD_OPT = 0x20,
    IL2CPP_TYPE_INTERNAL = 0x21,
    IL2CPP_TYPE_MODIFIER = 0x40,
    IL2CPP_TYPE_SENTINEL = 0x41,
    IL2CPP_TYPE_PINNED = 0x45,
    IL2CPP_TYPE_ENUM = 0x55
} Il2CppTypeEnum;
typedef enum
{
    IL2CPP_TOKEN_MODULE = 0x00000000,
    IL2CPP_TOKEN_TYPE_REF = 0x01000000,
    IL2CPP_TOKEN_TYPE_DEF = 0x02000000,
    IL2CPP_TOKEN_FIELD_DEF = 0x04000000,
    IL2CPP_TOKEN_METHOD_DEF = 0x06000000,
    IL2CPP_TOKEN_PARAM_DEF = 0x08000000,
    IL2CPP_TOKEN_INTERFACE_IMPL = 0x09000000,
    IL2CPP_TOKEN_MEMBER_REF = 0x0a000000,
    IL2CPP_TOKEN_CUSTOM_ATTRIBUTE = 0x0c000000,
    IL2CPP_TOKEN_PERMISSION = 0x0e000000,
    IL2CPP_TOKEN_SIGNATURE = 0x11000000,
    IL2CPP_TOKEN_EVENT = 0x14000000,
    IL2CPP_TOKEN_PROPERTY = 0x17000000,
    IL2CPP_TOKEN_MODULE_REF = 0x1a000000,
    IL2CPP_TOKEN_TYPE_SPEC = 0x1b000000,
    IL2CPP_TOKEN_ASSEMBLY = 0x20000000,
    IL2CPP_TOKEN_ASSEMBLY_REF = 0x23000000,
    IL2CPP_TOKEN_FILE = 0x26000000,
    IL2CPP_TOKEN_EXPORTED_TYPE = 0x27000000,
    IL2CPP_TOKEN_MANIFEST_RESOURCE = 0x28000000,
    IL2CPP_TOKEN_GENERIC_PARAM = 0x2a000000,
    IL2CPP_TOKEN_METHOD_SPEC = 0x2b000000,
} Il2CppTokenType;
typedef int32_t TypeIndex;
typedef int32_t TypeDefinitionIndex;
typedef int32_t FieldIndex;
typedef int32_t DefaultValueIndex;
typedef int32_t DefaultValueDataIndex;
typedef int32_t CustomAttributeIndex;
typedef int32_t ParameterIndex;
typedef int32_t MethodIndex;
typedef int32_t GenericMethodIndex;
typedef int32_t PropertyIndex;
typedef int32_t EventIndex;
typedef int32_t GenericContainerIndex;
typedef int32_t GenericParameterIndex;
typedef int16_t GenericParameterConstraintIndex;
typedef int32_t NestedTypeIndex;
typedef int32_t InterfacesIndex;
typedef int32_t VTableIndex;
typedef int32_t InterfaceOffsetIndex;
typedef int32_t RGCTXIndex;
typedef int32_t StringIndex;
typedef int32_t StringLiteralIndex;
typedef int32_t GenericInstIndex;
typedef int32_t ImageIndex;
typedef int32_t AssemblyIndex;
typedef int32_t InteropDataIndex;
static const TypeIndex kTypeIndexInvalid = -1;
static const TypeDefinitionIndex kTypeDefinitionIndexInvalid = -1;
static const DefaultValueDataIndex kDefaultValueIndexNull = -1;
static const CustomAttributeIndex kCustomAttributeIndexInvalid = -1;
static const EventIndex kEventIndexInvalid = -1;
static const FieldIndex kFieldIndexInvalid = -1;
static const MethodIndex kMethodIndexInvalid = -1;
static const PropertyIndex kPropertyIndexInvalid = -1;
static const GenericContainerIndex kGenericContainerIndexInvalid = -1;
static const GenericParameterIndex kGenericParameterIndexInvalid = -1;
static const RGCTXIndex kRGCTXIndexInvalid = -1;
static const StringLiteralIndex kStringLiteralIndexInvalid = -1;
static const InteropDataIndex kInteropDataIndexInvalid = -1;
typedef uint32_t EncodedMethodIndex;
typedef enum Il2CppMetadataUsage
{
    kIl2CppMetadataUsageInvalid,
    kIl2CppMetadataUsageTypeInfo,
    kIl2CppMetadataUsageIl2CppType,
    kIl2CppMetadataUsageMethodDef,
    kIl2CppMetadataUsageFieldInfo,
    kIl2CppMetadataUsageStringLiteral,
    kIl2CppMetadataUsageMethodRef,
} Il2CppMetadataUsage;
typedef struct Il2CppImage Il2CppImage;
typedef struct Il2CppType Il2CppType;
typedef struct Il2CppTypeDefinitionMetadata Il2CppTypeDefinitionMetadata;
typedef union Il2CppRGCTXDefinitionData
{
    int32_t rgctxDataDummy;
    MethodIndex methodIndex;
    TypeIndex typeIndex;
} Il2CppRGCTXDefinitionData;
typedef enum Il2CppRGCTXDataType
{
    IL2CPP_RGCTX_DATA_INVALID,
    IL2CPP_RGCTX_DATA_TYPE,
    IL2CPP_RGCTX_DATA_CLASS,
    IL2CPP_RGCTX_DATA_METHOD,
    IL2CPP_RGCTX_DATA_ARRAY,
} Il2CppRGCTXDataType;
typedef struct Il2CppRGCTXDefinition
{
    Il2CppRGCTXDataType type;
    Il2CppRGCTXDefinitionData data;
} Il2CppRGCTXDefinition;
typedef struct Il2CppInterfaceOffsetPair
{
    TypeIndex interfaceTypeIndex;
    int32_t offset;
} Il2CppInterfaceOffsetPair;
typedef struct Il2CppTypeDefinition
{
    StringIndex nameIndex;
    StringIndex namespaceIndex;
    TypeIndex byvalTypeIndex;
    TypeIndex byrefTypeIndex;
    TypeIndex declaringTypeIndex;
    TypeIndex parentIndex;
    TypeIndex elementTypeIndex;
    GenericContainerIndex genericContainerIndex;
    uint32_t flags;
    FieldIndex fieldStart;
    MethodIndex methodStart;
    EventIndex eventStart;
    PropertyIndex propertyStart;
    NestedTypeIndex nestedTypesStart;
    InterfacesIndex interfacesStart;
    VTableIndex vtableStart;
    InterfacesIndex interfaceOffsetsStart;
    uint16_t method_count;
    uint16_t property_count;
    uint16_t field_count;
    uint16_t event_count;
    uint16_t nested_type_count;
    uint16_t vtable_count;
    uint16_t interfaces_count;
    uint16_t interface_offsets_count;
    uint32_t bitfield;
    uint32_t token;
} Il2CppTypeDefinition;
typedef struct Il2CppFieldDefinition
{
    StringIndex nameIndex;
    TypeIndex typeIndex;
    uint32_t token;
} Il2CppFieldDefinition;
typedef struct Il2CppFieldDefaultValue
{
    FieldIndex fieldIndex;
    TypeIndex typeIndex;
    DefaultValueDataIndex dataIndex;
} Il2CppFieldDefaultValue;
typedef struct Il2CppFieldMarshaledSize
{
    FieldIndex fieldIndex;
    TypeIndex typeIndex;
    int32_t size;
} Il2CppFieldMarshaledSize;
typedef struct Il2CppFieldRef
{
    TypeIndex typeIndex;
    FieldIndex fieldIndex;
} Il2CppFieldRef;
typedef struct Il2CppParameterDefinition
{
    StringIndex nameIndex;
    uint32_t token;
    TypeIndex typeIndex;
} Il2CppParameterDefinition;
typedef struct Il2CppParameterDefaultValue
{
    ParameterIndex parameterIndex;
    TypeIndex typeIndex;
    DefaultValueDataIndex dataIndex;
} Il2CppParameterDefaultValue;
typedef struct Il2CppMethodDefinition
{
    StringIndex nameIndex;
    TypeDefinitionIndex declaringType;
    TypeIndex returnType;
    ParameterIndex parameterStart;
    GenericContainerIndex genericContainerIndex;
    uint32_t token;
    uint16_t flags;
    uint16_t iflags;
    uint16_t slot;
    uint16_t parameterCount;
} Il2CppMethodDefinition;
typedef struct Il2CppEventDefinition
{
    StringIndex nameIndex;
    TypeIndex typeIndex;
    MethodIndex add;
    MethodIndex remove;
    MethodIndex raise;
    uint32_t token;
} Il2CppEventDefinition;
typedef struct Il2CppPropertyDefinition
{
    StringIndex nameIndex;
    MethodIndex get;
    MethodIndex set;
    uint32_t attrs;
    uint32_t token;
} Il2CppPropertyDefinition;
typedef struct Il2CppMethodSpec
{
    MethodIndex methodDefinitionIndex;
    GenericInstIndex classIndexIndex;
    GenericInstIndex methodIndexIndex;
} Il2CppMethodSpec;
typedef struct Il2CppStringLiteral
{
    uint32_t length;
    StringLiteralIndex dataIndex;
} Il2CppStringLiteral;
typedef struct
{
    MethodIndex methodIndex;
    MethodIndex invokerIndex;
} Il2CppGenericMethodIndices;
typedef struct Il2CppGenericMethodFunctionsDefinitions
{
    GenericMethodIndex genericMethodIndex;
    Il2CppGenericMethodIndices indices;
} Il2CppGenericMethodFunctionsDefinitions;
static const int kPublicKeyByteLength = 8;
typedef struct Il2CppAssemblyNameDefinition
{
    StringIndex nameIndex;
    StringIndex cultureIndex;
    StringIndex hashValueIndex;
    StringIndex publicKeyIndex;
    uint32_t hash_alg;
    int32_t hash_len;
    uint32_t flags;
    int32_t major;
    int32_t minor;
    int32_t build;
    int32_t revision;
    uint8_t public_key_token[8];
} Il2CppAssemblyNameDefinition;
typedef struct Il2CppImageDefinition
{
    StringIndex nameIndex;
    AssemblyIndex assemblyIndex;
    TypeDefinitionIndex typeStart;
    uint32_t typeCount;
    TypeDefinitionIndex exportedTypeStart;
    uint32_t exportedTypeCount;
    MethodIndex entryPointIndex;
    uint32_t token;
    CustomAttributeIndex customAttributeStart;
    uint32_t customAttributeCount;
} Il2CppImageDefinition;
typedef struct Il2CppAssemblyDefinition
{
    ImageIndex imageIndex;
    uint32_t token;
    int32_t referencedAssemblyStart;
    int32_t referencedAssemblyCount;
    Il2CppAssemblyNameDefinition aname;
} Il2CppAssemblyDefinition;
typedef struct Il2CppMetadataUsageList
{
    uint32_t start;
    uint32_t count;
} Il2CppMetadataUsageList;
typedef struct Il2CppMetadataUsagePair
{
    uint32_t destinationIndex;
    uint32_t encodedSourceIndex;
} Il2CppMetadataUsagePair;
typedef struct Il2CppCustomAttributeTypeRange
{
    uint32_t token;
    int32_t start;
    int32_t count;
} Il2CppCustomAttributeTypeRange;
typedef struct Il2CppRange
{
    int32_t start;
    int32_t length;
} Il2CppRange;
typedef struct Il2CppWindowsRuntimeTypeNamePair
{
    StringIndex nameIndex;
    TypeIndex typeIndex;
} Il2CppWindowsRuntimeTypeNamePair;
#pragma pack(push, p1,4)
typedef struct Il2CppGlobalMetadataHeader
{
    int32_t sanity;
    int32_t version;
    int32_t stringLiteralOffset;
    int32_t stringLiteralCount;
    int32_t stringLiteralDataOffset;
    int32_t stringLiteralDataCount;
    int32_t stringOffset;
    int32_t stringCount;
    int32_t eventsOffset;
    int32_t eventsCount;
    int32_t propertiesOffset;
    int32_t propertiesCount;
    int32_t methodsOffset;
    int32_t methodsCount;
    int32_t parameterDefaultValuesOffset;
    int32_t parameterDefaultValuesCount;
    int32_t fieldDefaultValuesOffset;
    int32_t fieldDefaultValuesCount;
    int32_t fieldAndParameterDefaultValueDataOffset;
    int32_t fieldAndParameterDefaultValueDataCount;
    int32_t fieldMarshaledSizesOffset;
    int32_t fieldMarshaledSizesCount;
    int32_t parametersOffset;
    int32_t parametersCount;
    int32_t fieldsOffset;
    int32_t fieldsCount;
    int32_t genericParametersOffset;
    int32_t genericParametersCount;
    int32_t genericParameterConstraintsOffset;
    int32_t genericParameterConstraintsCount;
    int32_t genericContainersOffset;
    int32_t genericContainersCount;
    int32_t nestedTypesOffset;
    int32_t nestedTypesCount;
    int32_t interfacesOffset;
    int32_t interfacesCount;
    int32_t vtableMethodsOffset;
    int32_t vtableMethodsCount;
    int32_t interfaceOffsetsOffset;
    int32_t interfaceOffsetsCount;
    int32_t typeDefinitionsOffset;
    int32_t typeDefinitionsCount;
    int32_t imagesOffset;
    int32_t imagesCount;
    int32_t assembliesOffset;
    int32_t assembliesCount;
    int32_t metadataUsageListsOffset;
    int32_t metadataUsageListsCount;
    int32_t metadataUsagePairsOffset;
    int32_t metadataUsagePairsCount;
    int32_t fieldRefsOffset;
    int32_t fieldRefsCount;
    int32_t referencedAssembliesOffset;
    int32_t referencedAssembliesCount;
    int32_t attributesInfoOffset;
    int32_t attributesInfoCount;
    int32_t attributeTypesOffset;
    int32_t attributeTypesCount;
    int32_t unresolvedVirtualCallParameterTypesOffset;
    int32_t unresolvedVirtualCallParameterTypesCount;
    int32_t unresolvedVirtualCallParameterRangesOffset;
    int32_t unresolvedVirtualCallParameterRangesCount;
    int32_t windowsRuntimeTypeNamesOffset;
    int32_t windowsRuntimeTypeNamesSize;
    int32_t exportedTypeDefinitionsOffset;
    int32_t exportedTypeDefinitionsCount;
} Il2CppGlobalMetadataHeader;
#pragma pack(pop, p1)
typedef struct Il2CppClass Il2CppClass;
typedef struct MethodInfo MethodInfo;
typedef struct Il2CppType Il2CppType;
typedef struct Il2CppArrayType
{
    const Il2CppType* etype;
    uint8_t rank;
    uint8_t numsizes;
    uint8_t numlobounds;
    int *sizes;
    int *lobounds;
} Il2CppArrayType;
typedef struct Il2CppGenericInst
{
    uint32_t type_argc;
    const Il2CppType **type_argv;
} Il2CppGenericInst;
typedef struct Il2CppGenericContext
{
    const Il2CppGenericInst *class_inst;
    const Il2CppGenericInst *method_inst;
} Il2CppGenericContext;
typedef struct Il2CppGenericParameter
{
    GenericContainerIndex ownerIndex;
    StringIndex nameIndex;
    GenericParameterConstraintIndex constraintsStart;
    int16_t constraintsCount;
    uint16_t num;
    uint16_t flags;
} Il2CppGenericParameter;
typedef struct Il2CppGenericContainer
{
    int32_t ownerIndex;
    int32_t type_argc;
    int32_t is_method;
    GenericParameterIndex genericParameterStart;
} Il2CppGenericContainer;
typedef struct Il2CppGenericClass
{
    TypeDefinitionIndex typeDefinitionIndex;
    Il2CppGenericContext context;
    Il2CppClass *cached_class;
} Il2CppGenericClass;
typedef struct Il2CppGenericMethod
{
    const MethodInfo* methodDefinition;
    Il2CppGenericContext context;
} Il2CppGenericMethod;
typedef struct Il2CppType
{
    union
    {
        void* dummy;
        TypeDefinitionIndex klassIndex;
        const Il2CppType *type;
        Il2CppArrayType *array;
        GenericParameterIndex genericParameterIndex;
        Il2CppGenericClass *generic_class;
    } data;
    unsigned int attrs : 16;
    Il2CppTypeEnum type : 8;
    unsigned int num_mods : 6;
    unsigned int byref : 1;
    unsigned int pinned : 1;
} Il2CppType;
typedef enum Il2CppCallConvention
{
    IL2CPP_CALL_DEFAULT,
    IL2CPP_CALL_C,
    IL2CPP_CALL_STDCALL,
    IL2CPP_CALL_THISCALL,
    IL2CPP_CALL_FASTCALL,
    IL2CPP_CALL_VARARG
} Il2CppCallConvention;
typedef enum Il2CppCharSet
{
    CHARSET_ANSI,
    CHARSET_UNICODE,
    CHARSET_NOT_SPECIFIED
} Il2CppCharSet;
typedef struct Il2CppHString__
{
    int unused;
} Il2CppHString__;
typedef Il2CppHString__* Il2CppHString;
typedef struct Il2CppHStringHeader
{
    union
    {
        void* Reserved1;
        char Reserved2[24];
    } Reserved;
} Il2CppHStringHeader;
typedef struct Il2CppGuid
{
    uint32_t data1;
    uint16_t data2;
    uint16_t data3;
    uint8_t data4[8];
} Il2CppGuid;
typedef struct Il2CppSafeArrayBound
{
    uint32_t element_count;
    int32_t lower_bound;
} Il2CppSafeArrayBound;
typedef struct Il2CppSafeArray
{
    uint16_t dimension_count;
    uint16_t features;
    uint32_t element_size;
    uint32_t lock_count;
    void* data;
    Il2CppSafeArrayBound bounds[1];
} Il2CppSafeArray;
typedef struct Il2CppWin32Decimal
{
    uint16_t reserved;
    union
    {
        struct
        {
            uint8_t scale;
            uint8_t sign;
        } s;
        uint16_t signscale;
    } u;
    uint32_t hi32;
    union
    {
        struct
        {
            uint32_t lo32;
            uint32_t mid32;
        } s2;
        uint64_t lo64;
    } u2;
} Il2CppWin32Decimal;
typedef int16_t IL2CPP_VARIANT_BOOL;
typedef enum Il2CppVarType
{
    IL2CPP_VT_EMPTY = 0,
    IL2CPP_VT_NULL = 1,
    IL2CPP_VT_I2 = 2,
    IL2CPP_VT_I4 = 3,
    IL2CPP_VT_R4 = 4,
    IL2CPP_VT_R8 = 5,
    IL2CPP_VT_CY = 6,
    IL2CPP_VT_DATE = 7,
    IL2CPP_VT_BSTR = 8,
    IL2CPP_VT_DISPATCH = 9,
    IL2CPP_VT_ERROR = 10,
    IL2CPP_VT_BOOL = 11,
    IL2CPP_VT_VARIANT = 12,
    IL2CPP_VT_UNKNOWN = 13,
    IL2CPP_VT_DECIMAL = 14,
    IL2CPP_VT_I1 = 16,
    IL2CPP_VT_UI1 = 17,
    IL2CPP_VT_UI2 = 18,
    IL2CPP_VT_UI4 = 19,
    IL2CPP_VT_I8 = 20,
    IL2CPP_VT_UI8 = 21,
    IL2CPP_VT_INT = 22,
    IL2CPP_VT_UINT = 23,
    IL2CPP_VT_VOID = 24,
    IL2CPP_VT_HRESULT = 25,
    IL2CPP_VT_PTR = 26,
    IL2CPP_VT_SAFEARRAY = 27,
    IL2CPP_VT_CARRAY = 28,
    IL2CPP_VT_USERDEFINED = 29,
    IL2CPP_VT_LPSTR = 30,
    IL2CPP_VT_LPWSTR = 31,
    IL2CPP_VT_RECORD = 36,
    IL2CPP_VT_INT_PTR = 37,
    IL2CPP_VT_UINT_PTR = 38,
    IL2CPP_VT_FILETIME = 64,
    IL2CPP_VT_BLOB = 65,
    IL2CPP_VT_STREAM = 66,
    IL2CPP_VT_STORAGE = 67,
    IL2CPP_VT_STREAMED_OBJECT = 68,
    IL2CPP_VT_STORED_OBJECT = 69,
    IL2CPP_VT_BLOB_OBJECT = 70,
    IL2CPP_VT_CF = 71,
    IL2CPP_VT_CLSID = 72,
    IL2CPP_VT_VERSIONED_STREAM = 73,
    IL2CPP_VT_BSTR_BLOB = 0xfff,
    IL2CPP_VT_VECTOR = 0x1000,
    IL2CPP_VT_ARRAY = 0x2000,
    IL2CPP_VT_BYREF = 0x4000,
    IL2CPP_VT_RESERVED = 0x8000,
    IL2CPP_VT_ILLEGAL = 0xffff,
    IL2CPP_VT_ILLEGALMASKED = 0xfff,
    IL2CPP_VT_TYPEMASK = 0xfff,
} Il2CppVarType;
typedef struct Il2CppVariant Il2CppVariant;
typedef struct Il2CppIUnknown Il2CppIUnknown;
typedef struct Il2CppVariant
{
    union
    {
        struct __tagVARIANT
        {
            uint16_t type;
            uint16_t reserved1;
            uint16_t reserved2;
            uint16_t reserved3;
            union
            {
                int64_t llVal;
                int32_t lVal;
                uint8_t bVal;
                int16_t iVal;
                float fltVal;
                double dblVal;
                IL2CPP_VARIANT_BOOL boolVal;
                int32_t scode;
                int64_t cyVal;
                double date;
                Il2CppChar* bstrVal;
                Il2CppIUnknown* punkVal;
                void* pdispVal;
                Il2CppSafeArray* parray;
                uint8_t* pbVal;
                int16_t* piVal;
                int32_t* plVal;
                int64_t* pllVal;
                float* pfltVal;
                double* pdblVal;
                IL2CPP_VARIANT_BOOL* pboolVal;
                int32_t* pscode;
                int64_t* pcyVal;
                double* pdate;
                Il2CppChar* pbstrVal;
                Il2CppIUnknown** ppunkVal;
                void** ppdispVal;
                Il2CppSafeArray** pparray;
                struct Il2CppVariant* pvarVal;
                void* byref;
                char cVal;
                uint16_t uiVal;
                uint32_t ulVal;
                uint64_t ullVal;
                int intVal;
                unsigned int uintVal;
                Il2CppWin32Decimal* pdecVal;
                char* pcVal;
                uint16_t* puiVal;
                uint32_t* pulVal;
                uint64_t* pullVal;
                int* pintVal;
                unsigned int* puintVal;
                struct __tagBRECORD
                {
                    void* pvRecord;
                    void* pRecInfo;
                } n4;
            } n3;
        } n2;
        Il2CppWin32Decimal decVal;
    } n1;
} Il2CppVariant;
typedef struct Il2CppFileTime
{
    uint32_t low;
    uint32_t high;
} Il2CppFileTime;
typedef struct Il2CppStatStg
{
    Il2CppChar* name;
    uint32_t type;
    uint64_t size;
    Il2CppFileTime mtime;
    Il2CppFileTime ctime;
    Il2CppFileTime atime;
    uint32_t mode;
    uint32_t locks;
    Il2CppGuid clsid;
    uint32_t state;
    uint32_t reserved;
} Il2CppStatStg;
typedef enum Il2CppWindowsRuntimeTypeKind
{
    kTypeKindPrimitive = 0,
    kTypeKindMetadata,
    kTypeKindCustom
} Il2CppWindowsRuntimeTypeKind;
typedef struct Il2CppWindowsRuntimeTypeName
{
    Il2CppHString typeName;
    enum Il2CppWindowsRuntimeTypeKind typeKind;
} Il2CppWindowsRuntimeTypeName;
typedef void (*PInvokeMarshalToNativeFunc)(void* managedStructure, void* marshaledStructure);
typedef void (*PInvokeMarshalFromNativeFunc)(void* marshaledStructure, void* managedStructure);
typedef void (*PInvokeMarshalCleanupFunc)(void* marshaledStructure);
typedef struct Il2CppIUnknown* (*CreateCCWFunc)(Il2CppObject* obj);
typedef struct Il2CppInteropData
{
    Il2CppMethodPointer delegatePInvokeWrapperFunction;
    PInvokeMarshalToNativeFunc pinvokeMarshalToNativeFunction;
    PInvokeMarshalFromNativeFunc pinvokeMarshalFromNativeFunction;
    PInvokeMarshalCleanupFunc pinvokeMarshalCleanupFunction;
    CreateCCWFunc createCCWFunction;
    const Il2CppGuid* guid;
    const Il2CppType* type;
} Il2CppInteropData;
typedef struct Il2CppClass Il2CppClass;
typedef struct Il2CppGuid Il2CppGuid;
typedef struct Il2CppImage Il2CppImage;
typedef struct Il2CppAppDomain Il2CppAppDomain;
typedef struct Il2CppAppDomainSetup Il2CppAppDomainSetup;
typedef struct Il2CppDelegate Il2CppDelegate;
typedef struct Il2CppAppContext Il2CppAppContext;
typedef struct Il2CppNameToTypeDefinitionIndexHashTable Il2CppNameToTypeDefinitionIndexHashTable;
typedef struct Il2CppCodeGenModule Il2CppCodeGenModule;
typedef struct VirtualInvokeData
{
    Il2CppMethodPointer methodPtr;
    const MethodInfo* method;
} VirtualInvokeData;
typedef enum Il2CppTypeNameFormat
{
    IL2CPP_TYPE_NAME_FORMAT_IL,
    IL2CPP_TYPE_NAME_FORMAT_REFLECTION,
    IL2CPP_TYPE_NAME_FORMAT_FULL_NAME,
    IL2CPP_TYPE_NAME_FORMAT_ASSEMBLY_QUALIFIED
} Il2CppTypeNameFormat;
typedef struct Il2CppDefaults
{
    Il2CppImage *corlib;
    Il2CppClass *object_class;
    Il2CppClass *byte_class;
    Il2CppClass *void_class;
    Il2CppClass *boolean_class;
    Il2CppClass *sbyte_class;
    Il2CppClass *int16_class;
    Il2CppClass *uint16_class;
    Il2CppClass *int32_class;
    Il2CppClass *uint32_class;
    Il2CppClass *int_class;
    Il2CppClass *uint_class;
    Il2CppClass *int64_class;
    Il2CppClass *uint64_class;
    Il2CppClass *single_class;
    Il2CppClass *double_class;
    Il2CppClass *char_class;
    Il2CppClass *string_class;
    Il2CppClass *enum_class;
    Il2CppClass *array_class;
    Il2CppClass *delegate_class;
    Il2CppClass *multicastdelegate_class;
    Il2CppClass *asyncresult_class;
    Il2CppClass *manualresetevent_class;
    Il2CppClass *typehandle_class;
    Il2CppClass *fieldhandle_class;
    Il2CppClass *methodhandle_class;
    Il2CppClass *systemtype_class;
    Il2CppClass *monotype_class;
    Il2CppClass *exception_class;
    Il2CppClass *threadabortexception_class;
    Il2CppClass *thread_class;
    Il2CppClass *internal_thread_class;
    Il2CppClass *appdomain_class;
    Il2CppClass *appdomain_setup_class;
    Il2CppClass *field_info_class;
    Il2CppClass *method_info_class;
    Il2CppClass *property_info_class;
    Il2CppClass *event_info_class;
    Il2CppClass *mono_event_info_class;
    Il2CppClass *stringbuilder_class;
    Il2CppClass *stack_frame_class;
    Il2CppClass *stack_trace_class;
    Il2CppClass *marshal_class;
    Il2CppClass *typed_reference_class;
    Il2CppClass *marshalbyrefobject_class;
    Il2CppClass *generic_ilist_class;
    Il2CppClass *generic_icollection_class;
    Il2CppClass *generic_ienumerable_class;
    Il2CppClass *generic_ireadonlylist_class;
    Il2CppClass *generic_ireadonlycollection_class;
    Il2CppClass *runtimetype_class;
    Il2CppClass *generic_nullable_class;
    Il2CppClass *il2cpp_com_object_class;
    Il2CppClass *attribute_class;
    Il2CppClass *customattribute_data_class;
    Il2CppClass *version;
    Il2CppClass *culture_info;
    Il2CppClass *async_call_class;
    Il2CppClass *assembly_class;
    Il2CppClass *mono_assembly_class;
    Il2CppClass *assembly_name_class;
    Il2CppClass *mono_field_class;
    Il2CppClass *mono_method_class;
    Il2CppClass *mono_method_info_class;
    Il2CppClass *mono_property_info_class;
    Il2CppClass *parameter_info_class;
    Il2CppClass *mono_parameter_info_class;
    Il2CppClass *module_class;
    Il2CppClass *pointer_class;
    Il2CppClass *system_exception_class;
    Il2CppClass *argument_exception_class;
    Il2CppClass *wait_handle_class;
    Il2CppClass *safe_handle_class;
    Il2CppClass *sort_key_class;
    Il2CppClass *dbnull_class;
    Il2CppClass *error_wrapper_class;
    Il2CppClass *missing_class;
    Il2CppClass *value_type_class;
    Il2CppClass *threadpool_wait_callback_class;
    MethodInfo *threadpool_perform_wait_callback_method;
    Il2CppClass *mono_method_message_class;
    Il2CppClass* ireference_class;
    Il2CppClass* ireferencearray_class;
    Il2CppClass* ikey_value_pair_class;
    Il2CppClass* key_value_pair_class;
    Il2CppClass* windows_foundation_uri_class;
    Il2CppClass* windows_foundation_iuri_runtime_class_class;
    Il2CppClass* system_uri_class;
    Il2CppClass* system_guid_class;
    Il2CppClass* sbyte_shared_enum;
    Il2CppClass* int16_shared_enum;
    Il2CppClass* int32_shared_enum;
    Il2CppClass* int64_shared_enum;
    Il2CppClass* byte_shared_enum;
    Il2CppClass* uint16_shared_enum;
    Il2CppClass* uint32_shared_enum;
    Il2CppClass* uint64_shared_enum;
} Il2CppDefaults;
extern Il2CppDefaults il2cpp_defaults;
typedef struct Il2CppClass Il2CppClass;
typedef struct MethodInfo MethodInfo;
typedef struct FieldInfo FieldInfo;
typedef struct Il2CppObject Il2CppObject;
typedef struct MemberInfo MemberInfo;
typedef struct CustomAttributesCache
{
    int count;
    Il2CppObject** attributes;
} CustomAttributesCache;
typedef void (*CustomAttributesCacheGenerator)(CustomAttributesCache*);
typedef struct FieldInfo
{
    const char* name;
    const Il2CppType* type;
    Il2CppClass *parent;
    int32_t offset;
    uint32_t token;
} FieldInfo;
typedef struct PropertyInfo
{
    Il2CppClass *parent;
    const char *name;
    const MethodInfo *get;
    const MethodInfo *set;
    uint32_t attrs;
    uint32_t token;
} PropertyInfo;
typedef struct EventInfo
{
    const char* name;
    const Il2CppType* eventType;
    Il2CppClass* parent;
    const MethodInfo* add;
    const MethodInfo* remove;
    const MethodInfo* raise;
    uint32_t token;
} EventInfo;
typedef struct ParameterInfo
{
    const char* name;
    int32_t position;
    uint32_t token;
    const Il2CppType* parameter_type;
} ParameterInfo;
typedef void* (*InvokerMethod)(Il2CppMethodPointer, const MethodInfo*, void*, void**);
typedef enum MethodVariableKind
{
    kMethodVariableKind_This,
    kMethodVariableKind_Parameter,
    kMethodVariableKind_LocalVariable
} MethodVariableKind;
typedef enum SequencePointKind
{
    kSequencePointKind_Normal,
    kSequencePointKind_StepOut
} SequencePointKind;
typedef struct Il2CppMethodExecutionContextInfo
{
    TypeIndex typeIndex;
    int32_t nameIndex;
    int32_t scopeIndex;
} Il2CppMethodExecutionContextInfo;
typedef struct Il2CppMethodExecutionContextInfoIndex
{
    int32_t startIndex;
    int32_t count;
} Il2CppMethodExecutionContextInfoIndex;
typedef struct Il2CppMethodScope
{
    int32_t startOffset;
    int32_t endOffset;
} Il2CppMethodScope;
typedef struct Il2CppMethodHeaderInfo
{
    int32_t code_size;
    int32_t startScope;
    int32_t numScopes;
} Il2CppMethodHeaderInfo;
typedef struct Il2CppSequencePointSourceFile
{
    const char *file;
    uint8_t hash[16];
} Il2CppSequencePointSourceFile;
typedef struct Il2CppTypeSourceFilePair
{
    TypeDefinitionIndex klassIndex;
    int32_t sourceFileIndex;
} Il2CppTypeSourceFilePair;
typedef struct Il2CppSequencePoint
{
    MethodIndex methodDefinitionIndex;
    int32_t sourceFileIndex;
    int32_t lineStart, lineEnd;
    int32_t columnStart, columnEnd;
    int32_t ilOffset;
    SequencePointKind kind;
    int32_t isActive;
    int32_t id;
} Il2CppSequencePoint;
typedef struct Il2CppCatchPoint
{
    MethodIndex methodDefinitionIndex;
    TypeIndex catchTypeIndex;
    int32_t ilOffset;
    int8_t tryId;
    int8_t parentTryId;
} Il2CppCatchPoint;
typedef struct Il2CppDebuggerMetadataRegistration
{
    Il2CppMethodExecutionContextInfo* methodExecutionContextInfos;
    Il2CppMethodExecutionContextInfoIndex* methodExecutionContextInfoIndexes;
    Il2CppMethodScope* methodScopes;
    Il2CppMethodHeaderInfo* methodHeaderInfos;
    Il2CppSequencePointSourceFile* sequencePointSourceFiles;
    int32_t numSequencePoints;
    Il2CppSequencePoint* sequencePoints;
    int32_t numCatchPoints;
    Il2CppCatchPoint* catchPoints;
    int32_t numTypeSourceFileEntries;
    Il2CppTypeSourceFilePair* typeSourceFiles;
    const char** methodExecutionContextInfoStrings;
} Il2CppDebuggerMetadataRegistration;
typedef union Il2CppRGCTXData
{
    void* rgctxDataDummy;
    const MethodInfo* method;
    const Il2CppType* type;
    Il2CppClass* klass;
} Il2CppRGCTXData;
typedef struct MethodInfo
{
    Il2CppMethodPointer methodPointer;
    InvokerMethod invoker_method;
    const char* name;
    Il2CppClass *klass;
    const Il2CppType *return_type;
    const ParameterInfo* parameters;
    union
    {
        const Il2CppRGCTXData* rgctx_data;
        const Il2CppMethodDefinition* methodDefinition;
    };
    union
    {
        const Il2CppGenericMethod* genericMethod;
        const Il2CppGenericContainer* genericContainer;
    };
    uint32_t token;
    uint16_t flags;
    uint16_t iflags;
    uint16_t slot;
    uint8_t parameters_count;
    uint8_t is_generic : 1;
    uint8_t is_inflated : 1;
    uint8_t wrapper_type : 1;
    uint8_t is_marshaled_from_native : 1;
} MethodInfo;
typedef struct Il2CppRuntimeInterfaceOffsetPair
{
    Il2CppClass* interfaceType;
    int32_t offset;
} Il2CppRuntimeInterfaceOffsetPair;
typedef struct Il2CppClass
{
    const Il2CppImage* image;
    void* gc_desc;
    const char* name;
    const char* namespaze;
    Il2CppType byval_arg;
    Il2CppType this_arg;
    Il2CppClass* element_class;
    Il2CppClass* castClass;
    Il2CppClass* declaringType;
    Il2CppClass* parent;
    Il2CppGenericClass *generic_class;
    const Il2CppTypeDefinition* typeDefinition;
    const Il2CppInteropData* interopData;
    Il2CppClass* klass;
    FieldInfo* fields;
    const EventInfo* events;
    const PropertyInfo* properties;
    const MethodInfo** methods;
    Il2CppClass** nestedTypes;
    Il2CppClass** implementedInterfaces;
    Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
    void* static_fields;
    const Il2CppRGCTXData* rgctx_data;
    struct Il2CppClass** typeHierarchy;
    void *unity_user_data;
    uint32_t initializationExceptionGCHandle;
    uint32_t cctor_started;
    uint32_t cctor_finished;
    __declspec(align(8)) size_t cctor_thread;
    GenericContainerIndex genericContainerIndex;
    uint32_t instance_size;
    uint32_t actualSize;
    uint32_t element_size;
    int32_t native_size;
    uint32_t static_fields_size;
    uint32_t thread_static_fields_size;
    int32_t thread_static_fields_offset;
    uint32_t flags;
    uint32_t token;
    uint16_t method_count;
    uint16_t property_count;
    uint16_t field_count;
    uint16_t event_count;
    uint16_t nested_type_count;
    uint16_t vtable_count;
    uint16_t interfaces_count;
    uint16_t interface_offsets_count;
    uint8_t typeHierarchyDepth;
    uint8_t genericRecursionDepth;
    uint8_t rank;
    uint8_t minimumAlignment;
    uint8_t naturalAligment;
    uint8_t packingSize;
    uint8_t initialized_and_no_error : 1;
    uint8_t valuetype : 1;
    uint8_t initialized : 1;
    uint8_t enumtype : 1;
    uint8_t is_generic : 1;
    uint8_t has_references : 1;
    uint8_t init_pending : 1;
    uint8_t size_inited : 1;
    uint8_t has_finalize : 1;
    uint8_t has_cctor : 1;
    uint8_t is_blittable : 1;
    uint8_t is_import_or_windows_runtime : 1;
    uint8_t is_vtable_initialized : 1;
    uint8_t has_initialization_error : 1;
    VirtualInvokeData vtable[32];
} Il2CppClass;

typedef struct Il2CppClass_0 {
    const Il2CppImage* image;
    void* gc_desc;
    const char* name;
    const char* namespaze;
    Il2CppType byval_arg;
    Il2CppType this_arg;
    Il2CppClass* element_class;
    Il2CppClass* castClass;
    Il2CppClass* declaringType;
    Il2CppClass* parent;
    Il2CppGenericClass * generic_class;
    const Il2CppTypeDefinition* typeDefinition;
    const Il2CppInteropData* interopData;
    Il2CppClass* klass;
    FieldInfo* fields;
    const EventInfo* events;
    const PropertyInfo* properties;
    const MethodInfo** methods;
    Il2CppClass** nestedTypes;
    Il2CppClass** implementedInterfaces;
} Il2CppClass_0;

typedef struct Il2CppClass_1 {
    struct Il2CppClass** typeHierarchy;
    void * unity_user_data;
    uint32_t initializationExceptionGCHandle;
    uint32_t cctor_started;
    uint32_t cctor_finished;
#ifdef IS_32BIT
    uint32_t cctor_thread;
#else
    __declspec(align(8)) size_t cctor_thread;
#endif
    GenericContainerIndex genericContainerIndex;
    uint32_t instance_size;
    uint32_t actualSize;
    uint32_t element_size;
    int32_t native_size;
    uint32_t static_fields_size;
    uint32_t thread_static_fields_size;
    int32_t thread_static_fields_offset;
    uint32_t flags;
    uint32_t token;
    uint16_t method_count;
    uint16_t property_count;
    uint16_t field_count;
    uint16_t event_count;
    uint16_t nested_type_count;
    uint16_t vtable_count;
    uint16_t interfaces_count;
    uint16_t interface_offsets_count;
    uint8_t typeHierarchyDepth;
    uint8_t genericRecursionDepth;
    uint8_t rank;
    uint8_t minimumAlignment;
    uint8_t naturalAligment;
    uint8_t packingSize;
    uint8_t initialized_and_no_error : 1;
    uint8_t valuetype : 1;
    uint8_t initialized : 1;
    uint8_t enumtype : 1;
    uint8_t is_generic : 1;
    uint8_t has_references : 1;
    uint8_t init_pending : 1;
    uint8_t size_inited : 1;
    uint8_t has_finalize : 1;
    uint8_t has_cctor : 1;
    uint8_t is_blittable : 1;
    uint8_t is_import_or_windows_runtime : 1;
    uint8_t is_vtable_initialized : 1;
    uint8_t has_initialization_error : 1;
} Il2CppClass_1;

typedef struct __declspec(align(8)) Il2CppClass_Merged {
    struct Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
    void* static_fields;
    const Il2CppRGCTXData* rgctx_data;
    struct Il2CppClass_1 _1;
    VirtualInvokeData vtable[32];
} Il2CppClass_Merged;

typedef struct Il2CppTypeDefinitionSizes
{
    uint32_t instance_size;
    int32_t native_size;
    uint32_t static_fields_size;
    uint32_t thread_static_fields_size;
} Il2CppTypeDefinitionSizes;
typedef struct Il2CppDomain
{
    Il2CppAppDomain* domain;
    Il2CppAppDomainSetup* setup;
    Il2CppAppContext* default_context;
    const char* friendly_name;
    uint32_t domain_id;
    volatile int threadpool_jobs;
    void* agent_info;
} Il2CppDomain;
typedef struct Il2CppAssemblyName
{
    const char* name;
    const char* culture;
    const char* hash_value;
    const char* public_key;
    uint32_t hash_alg;
    int32_t hash_len;
    uint32_t flags;
    int32_t major;
    int32_t minor;
    int32_t build;
    int32_t revision;
    uint8_t public_key_token[8];
} Il2CppAssemblyName;
typedef struct Il2CppImage
{
    const char* name;
    const char *nameNoExt;
    Il2CppAssembly* assembly;
    TypeDefinitionIndex typeStart;
    uint32_t typeCount;
    TypeDefinitionIndex exportedTypeStart;
    uint32_t exportedTypeCount;
    CustomAttributeIndex customAttributeStart;
    uint32_t customAttributeCount;
    MethodIndex entryPointIndex;
    Il2CppNameToTypeDefinitionIndexHashTable * nameToClassHashTable;
    const Il2CppCodeGenModule* codeGenModule;
    uint32_t token;
    uint8_t dynamic;
} Il2CppImage;
typedef struct Il2CppAssembly
{
    Il2CppImage* image;
    uint32_t token;
    int32_t referencedAssemblyStart;
    int32_t referencedAssemblyCount;
    Il2CppAssemblyName aname;
} Il2CppAssembly;
typedef struct Il2CppCodeGenOptions
{
    uint8_t enablePrimitiveValueTypeGenericSharing;
} Il2CppCodeGenOptions;
typedef struct Il2CppTokenIndexPair
{
    uint32_t token;
    int32_t index;
} Il2CppTokenIndexPair;
typedef struct Il2CppTokenRangePair
{
    uint32_t token;
    Il2CppRange range;
} Il2CppTokenRangePair;
typedef struct Il2CppTokenIndexMethodTuple
{
    uint32_t token;
    int32_t index;
    void** method;
    uint32_t genericMethodIndex;
} Il2CppTokenIndexMethodTuple;
typedef struct Il2CppCodeGenModule
{
    const char* moduleName;
    const uint32_t methodPointerCount;
    const Il2CppMethodPointer* methodPointers;
    const int32_t* invokerIndices;
    const uint32_t reversePInvokeWrapperCount;
    const Il2CppTokenIndexMethodTuple* reversePInvokeWrapperIndices;
    const uint32_t rgctxRangesCount;
    const Il2CppTokenRangePair* rgctxRanges;
    const uint32_t rgctxsCount;
    const Il2CppRGCTXDefinition* rgctxs;
    const Il2CppDebuggerMetadataRegistration *debuggerMetadata;
} Il2CppCodeGenModule;
typedef struct Il2CppCodeRegistration
{
    uint32_t reversePInvokeWrapperCount;
    const Il2CppMethodPointer* reversePInvokeWrappers;
    uint32_t genericMethodPointersCount;
    const Il2CppMethodPointer* genericMethodPointers;
    uint32_t invokerPointersCount;
    const InvokerMethod* invokerPointers;
    CustomAttributeIndex customAttributeCount;
    const CustomAttributesCacheGenerator* customAttributeGenerators;
    uint32_t unresolvedVirtualCallCount;
    const Il2CppMethodPointer* unresolvedVirtualCallPointers;
    uint32_t interopDataCount;
    Il2CppInteropData* interopData;
    uint32_t codeGenModulesCount;
    const Il2CppCodeGenModule** codeGenModules;
} Il2CppCodeRegistration;
typedef struct Il2CppMetadataRegistration
{
    int32_t genericClassesCount;
    Il2CppGenericClass* const * genericClasses;
    int32_t genericInstsCount;
    const Il2CppGenericInst* const * genericInsts;
    int32_t genericMethodTableCount;
    const Il2CppGenericMethodFunctionsDefinitions* genericMethodTable;
    int32_t typesCount;
    const Il2CppType* const * types;
    int32_t methodSpecsCount;
    const Il2CppMethodSpec* methodSpecs;
    FieldIndex fieldOffsetsCount;
    const int32_t** fieldOffsets;
    TypeDefinitionIndex typeDefinitionsSizesCount;
    const Il2CppTypeDefinitionSizes** typeDefinitionsSizes;
    const size_t metadataUsagesCount;
    void** const* metadataUsages;
} Il2CppMetadataRegistration;
typedef struct Il2CppPerfCounters
{
    uint32_t jit_methods;
    uint32_t jit_bytes;
    uint32_t jit_time;
    uint32_t jit_failures;
    uint32_t exceptions_thrown;
    uint32_t exceptions_filters;
    uint32_t exceptions_finallys;
    uint32_t exceptions_depth;
    uint32_t aspnet_requests_queued;
    uint32_t aspnet_requests;
    uint32_t gc_collections0;
    uint32_t gc_collections1;
    uint32_t gc_collections2;
    uint32_t gc_promotions0;
    uint32_t gc_promotions1;
    uint32_t gc_promotion_finalizers;
    uint32_t gc_gen0size;
    uint32_t gc_gen1size;
    uint32_t gc_gen2size;
    uint32_t gc_lossize;
    uint32_t gc_fin_survivors;
    uint32_t gc_num_handles;
    uint32_t gc_allocated;
    uint32_t gc_induced;
    uint32_t gc_time;
    uint32_t gc_total_bytes;
    uint32_t gc_committed_bytes;
    uint32_t gc_reserved_bytes;
    uint32_t gc_num_pinned;
    uint32_t gc_sync_blocks;
    uint32_t remoting_calls;
    uint32_t remoting_channels;
    uint32_t remoting_proxies;
    uint32_t remoting_classes;
    uint32_t remoting_objects;
    uint32_t remoting_contexts;
    uint32_t loader_classes;
    uint32_t loader_total_classes;
    uint32_t loader_appdomains;
    uint32_t loader_total_appdomains;
    uint32_t loader_assemblies;
    uint32_t loader_total_assemblies;
    uint32_t loader_failures;
    uint32_t loader_bytes;
    uint32_t loader_appdomains_uloaded;
    uint32_t thread_contentions;
    uint32_t thread_queue_len;
    uint32_t thread_queue_max;
    uint32_t thread_num_logical;
    uint32_t thread_num_physical;
    uint32_t thread_cur_recognized;
    uint32_t thread_num_recognized;
    uint32_t interop_num_ccw;
    uint32_t interop_num_stubs;
    uint32_t interop_num_marshals;
    uint32_t security_num_checks;
    uint32_t security_num_link_checks;
    uint32_t security_time;
    uint32_t security_depth;
    uint32_t unused;
    uint64_t threadpool_workitems;
    uint64_t threadpool_ioworkitems;
    unsigned int threadpool_threads;
    unsigned int threadpool_iothreads;
} Il2CppPerfCounters;
typedef struct Il2CppClass Il2CppClass;
typedef struct MethodInfo MethodInfo;
typedef struct PropertyInfo PropertyInfo;
typedef struct FieldInfo FieldInfo;
typedef struct EventInfo EventInfo;
typedef struct Il2CppType Il2CppType;
typedef struct Il2CppAssembly Il2CppAssembly;
typedef struct Il2CppException Il2CppException;
typedef struct Il2CppImage Il2CppImage;
typedef struct Il2CppDomain Il2CppDomain;
typedef struct Il2CppString Il2CppString;
typedef struct Il2CppReflectionMethod Il2CppReflectionMethod;
typedef struct Il2CppAsyncCall Il2CppAsyncCall;
typedef struct Il2CppIUnknown Il2CppIUnknown;
typedef struct Il2CppWaitHandle Il2CppWaitHandle;
typedef struct MonitorData MonitorData;
typedef struct Il2CppReflectionAssembly Il2CppReflectionAssembly;
typedef Il2CppClass Il2CppVTable;
typedef struct Il2CppObject
{
    union
    {
        Il2CppClass *klass;
        Il2CppVTable *vtable;
    };
    MonitorData *monitor;
} Il2CppObject;
typedef int32_t il2cpp_array_lower_bound_t;
typedef struct Il2CppArrayBounds
{
    il2cpp_array_size_t length;
    il2cpp_array_lower_bound_t lower_bound;
} Il2CppArrayBounds;
typedef struct Il2CppArray
{
    Il2CppObject obj;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
} Il2CppArray;
typedef struct Il2CppArraySize
{
    Il2CppObject obj;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    __declspec(align(8)) void* vector[32];
} Il2CppArraySize;
typedef struct Il2CppString
{
    Il2CppObject object;
    int32_t length;
    Il2CppChar chars[32];
} Il2CppString;
typedef struct Il2CppReflectionType
{
    Il2CppObject object;
    const Il2CppType *type;
} Il2CppReflectionType;
typedef struct Il2CppReflectionRuntimeType
{
    Il2CppReflectionType type;
    Il2CppObject *type_info;
    Il2CppObject* genericCache;
    Il2CppObject* serializationCtor;
} Il2CppReflectionRuntimeType;
typedef struct Il2CppReflectionMonoType
{
    Il2CppReflectionRuntimeType type;
} Il2CppReflectionMonoType;
typedef struct Il2CppReflectionEvent
{
    Il2CppObject object;
    Il2CppObject *cached_add_event;
} Il2CppReflectionEvent;
typedef struct Il2CppReflectionMonoEvent
{
    Il2CppReflectionEvent event;
    Il2CppReflectionType* reflectedType;
    const EventInfo* eventInfo;
} Il2CppReflectionMonoEvent;
typedef struct Il2CppReflectionMonoEventInfo
{
    Il2CppReflectionType* declaringType;
    Il2CppReflectionType* reflectedType;
    Il2CppString* name;
    Il2CppReflectionMethod* addMethod;
    Il2CppReflectionMethod* removeMethod;
    Il2CppReflectionMethod* raiseMethod;
    uint32_t eventAttributes;
    Il2CppArray* otherMethods;
} Il2CppReflectionMonoEventInfo;
typedef struct Il2CppReflectionField
{
    Il2CppObject object;
    Il2CppClass *klass;
    FieldInfo *field;
    Il2CppString *name;
    Il2CppReflectionType *type;
    uint32_t attrs;
} Il2CppReflectionField;
typedef struct Il2CppReflectionProperty
{
    Il2CppObject object;
    Il2CppClass *klass;
    const PropertyInfo *property;
} Il2CppReflectionProperty;
typedef struct Il2CppReflectionMethod
{
    Il2CppObject object;
    const MethodInfo *method;
    Il2CppString *name;
    Il2CppReflectionType *reftype;
} Il2CppReflectionMethod;
typedef struct Il2CppReflectionGenericMethod
{
    Il2CppReflectionMethod base;
} Il2CppReflectionGenericMethod;
typedef struct Il2CppMethodInfo
{
    Il2CppReflectionType *parent;
    Il2CppReflectionType *ret;
    uint32_t attrs;
    uint32_t implattrs;
    uint32_t callconv;
} Il2CppMethodInfo;
typedef struct Il2CppPropertyInfo
{
    Il2CppReflectionType* parent;
    Il2CppReflectionType* declaringType;
    Il2CppString *name;
    Il2CppReflectionMethod *get;
    Il2CppReflectionMethod *set;
    uint32_t attrs;
} Il2CppPropertyInfo;
typedef struct Il2CppReflectionParameter
{
    Il2CppObject object;
    Il2CppReflectionType *ClassImpl;
    Il2CppObject *DefaultValueImpl;
    Il2CppObject *MemberImpl;
    Il2CppString *NameImpl;
    int32_t PositionImpl;
    uint32_t AttrsImpl;
    Il2CppObject *MarshalAsImpl;
} Il2CppReflectionParameter;
typedef struct Il2CppReflectionModule
{
    Il2CppObject obj;
    const Il2CppImage* image;
    Il2CppReflectionAssembly* assembly;
    Il2CppString* fqname;
    Il2CppString* name;
    Il2CppString* scopename;
    uint8_t is_resource;
    uint32_t token;
} Il2CppReflectionModule;
typedef struct Il2CppReflectionAssemblyName
{
    Il2CppObject obj;
    Il2CppString *name;
    Il2CppString *codebase;
    int32_t major, minor, build, revision;
    Il2CppObject *cultureInfo;
    uint32_t flags;
    uint32_t hashalg;
    Il2CppObject *keypair;
    Il2CppArray *publicKey;
    Il2CppArray *keyToken;
    uint32_t versioncompat;
    Il2CppObject *version;
    uint32_t processor_architecture;
    uint32_t contentType;
} Il2CppReflectionAssemblyName;
typedef struct Il2CppReflectionAssembly
{
    Il2CppObject object;
    const Il2CppAssembly *assembly;
    Il2CppObject *resolve_event_holder;
    Il2CppObject *evidence;
    Il2CppObject *minimum;
    Il2CppObject *optional;
    Il2CppObject *refuse;
    Il2CppObject *granted;
    Il2CppObject *denied;
    uint8_t from_byte_array;
    Il2CppString *name;
} Il2CppReflectionAssembly;
typedef struct Il2CppReflectionMarshal
{
    Il2CppObject object;
    int32_t count;
    int32_t type;
    int32_t eltype;
    Il2CppString* guid;
    Il2CppString* mcookie;
    Il2CppString* marshaltype;
    Il2CppObject* marshaltyperef;
    int32_t param_num;
    uint8_t has_size;
} Il2CppReflectionMarshal;
typedef struct Il2CppReflectionPointer
{
    Il2CppObject object;
    void* data;
    Il2CppReflectionType* type;
} Il2CppReflectionPointer;
typedef struct Il2CppInternalThread
{
    Il2CppObject obj;
    int lock_thread_id;
    void* handle;
    void* native_handle;
    Il2CppArray* cached_culture_info;
    Il2CppChar* name;
    int name_len;
    uint32_t state;
    Il2CppObject* abort_exc;
    int abort_state_handle;
    uint64_t tid;
    intptr_t debugger_thread;
    void** static_data;
    void* runtime_thread_info;
    Il2CppObject* current_appcontext;
    Il2CppObject* root_domain_thread;
    Il2CppArray* _serialized_principal;
    int _serialized_principal_version;
    void* appdomain_refs;
    int32_t interruption_requested;
    void* synch_cs;
    uint8_t threadpool_thread;
    uint8_t thread_interrupt_requested;
    int stack_size;
    uint8_t apartment_state;
    int critical_region_level;
    int managed_id;
    uint32_t small_id;
    void* manage_callback;
    void* interrupt_on_stop;
    intptr_t flags;
    void* thread_pinning_ref;
    void* abort_protected_block_count;
    int32_t priority;
    void* owned_mutexes;
    void * suspended;
    int32_t self_suspended;
    size_t thread_state;
    size_t unused2;
    void* last;
} Il2CppInternalThread;
typedef struct Il2CppIOSelectorJob
{
    Il2CppObject object;
    int32_t operation;
    Il2CppObject *callback;
    Il2CppObject *state;
} Il2CppIOSelectorJob;
typedef enum
{
    Il2Cpp_CallType_Sync = 0,
    Il2Cpp_CallType_BeginInvoke = 1,
    Il2Cpp_CallType_EndInvoke = 2,
    Il2Cpp_CallType_OneWay = 3
} Il2CppCallType;
typedef struct Il2CppMethodMessage
{
    Il2CppObject obj;
    Il2CppReflectionMethod *method;
    Il2CppArray *args;
    Il2CppArray *names;
    Il2CppArray *arg_types;
    Il2CppObject *ctx;
    Il2CppObject *rval;
    Il2CppObject *exc;
    Il2CppAsyncResult *async_result;
    uint32_t call_type;
} Il2CppMethodMessage;
typedef struct Il2CppAppDomainSetup
{
    Il2CppObject object;
    Il2CppString* application_base;
    Il2CppString* application_name;
    Il2CppString* cache_path;
    Il2CppString* configuration_file;
    Il2CppString* dynamic_base;
    Il2CppString* license_file;
    Il2CppString* private_bin_path;
    Il2CppString* private_bin_path_probe;
    Il2CppString* shadow_copy_directories;
    Il2CppString* shadow_copy_files;
    uint8_t publisher_policy;
    uint8_t path_changed;
    int loader_optimization;
    uint8_t disallow_binding_redirects;
    uint8_t disallow_code_downloads;
    Il2CppObject* activation_arguments;
    Il2CppObject* domain_initializer;
    Il2CppObject* application_trust;
    Il2CppArray* domain_initializer_args;
    uint8_t disallow_appbase_probe;
    Il2CppArray* configuration_bytes;
    Il2CppArray* serialized_non_primitives;
} Il2CppAppDomainSetup;
typedef struct Il2CppThread
{
    Il2CppObject obj;
    Il2CppInternalThread* internal_thread;
    Il2CppObject* start_obj;
    Il2CppException* pending_exception;
    Il2CppObject* principal;
    int32_t principal_version;
    Il2CppDelegate* delegate;
    Il2CppObject* executionContext;
    uint8_t executionContextBelongsToOuterScope;
} Il2CppThread;
typedef struct Il2CppException
{
    Il2CppObject object;
    Il2CppString* className;
    Il2CppString* message;
    Il2CppObject* _data;
    struct Il2CppException* inner_ex;
    Il2CppString* _helpURL;
    Il2CppArray* trace_ips;
    Il2CppString* stack_trace;
    Il2CppString* remote_stack_trace;
    int remote_stack_index;
    Il2CppObject* _dynamicMethods;
    il2cpp_hresult_t hresult;
    Il2CppString* source;
    Il2CppObject* safeSerializationManager;
    Il2CppArray* captured_traces;
    Il2CppArray* native_trace_ips;
} Il2CppException;
typedef struct Il2CppSystemException
{
    Il2CppException base;
} Il2CppSystemException;
typedef struct Il2CppArgumentException
{
    Il2CppException base;
    Il2CppString *argName;
} Il2CppArgumentException;
typedef struct Il2CppTypedRef
{
    const Il2CppType *type;
    void* value;
    Il2CppClass *klass;
} Il2CppTypedRef;
typedef struct Il2CppDelegate
{
    Il2CppObject object;
    Il2CppMethodPointer method_ptr;
    InvokerMethod invoke_impl;
    Il2CppObject *target;
    const MethodInfo *method;
    void* delegate_trampoline;
    intptr_t extraArg;
    uint8_t **method_code;
    Il2CppReflectionMethod *method_info;
    Il2CppReflectionMethod *original_method_info;
    Il2CppObject *data;
    uint8_t method_is_virtual;
} Il2CppDelegate;
typedef struct Il2CppMulticastDelegate
{
    Il2CppDelegate delegate;
    Il2CppArray *delegates;
} Il2CppMulticastDelegate;
typedef struct Il2CppMarshalByRefObject
{
    Il2CppObject obj;
    Il2CppObject *identity;
} Il2CppMarshalByRefObject;
typedef struct Il2CppAppDomain
{
    Il2CppMarshalByRefObject mbr;
    Il2CppDomain *data;
} Il2CppAppDomain;
typedef struct Il2CppStackFrame
{
    Il2CppObject obj;
    int32_t il_offset;
    int32_t native_offset;
    uint64_t methodAddress;
    uint32_t methodIndex;
    Il2CppReflectionMethod *method;
    Il2CppString *filename;
    int32_t line;
    int32_t column;
    Il2CppString *internal_method_name;
} Il2CppStackFrame;
typedef struct Il2CppDateTimeFormatInfo
{
    Il2CppObject obj;
    Il2CppObject* CultureData;
    Il2CppString* Name;
    Il2CppString* LangName;
    Il2CppObject* CompareInfo;
    Il2CppObject* CultureInfo;
    Il2CppString* AMDesignator;
    Il2CppString* PMDesignator;
    Il2CppString* DateSeparator;
    Il2CppString* GeneralShortTimePattern;
    Il2CppString* GeneralLongTimePattern;
    Il2CppString* TimeSeparator;
    Il2CppString* MonthDayPattern;
    Il2CppString* DateTimeOffsetPattern;
    Il2CppObject* Calendar;
    uint32_t FirstDayOfWeek;
    uint32_t CalendarWeekRule;
    Il2CppString* FullDateTimePattern;
    Il2CppArray* AbbreviatedDayNames;
    Il2CppArray* ShortDayNames;
    Il2CppArray* DayNames;
    Il2CppArray* AbbreviatedMonthNames;
    Il2CppArray* MonthNames;
    Il2CppArray* GenitiveMonthNames;
    Il2CppArray* GenitiveAbbreviatedMonthNames;
    Il2CppArray* LeapYearMonthNames;
    Il2CppString* LongDatePattern;
    Il2CppString* ShortDatePattern;
    Il2CppString* YearMonthPattern;
    Il2CppString* LongTimePattern;
    Il2CppString* ShortTimePattern;
    Il2CppArray* YearMonthPatterns;
    Il2CppArray* ShortDatePatterns;
    Il2CppArray* LongDatePatterns;
    Il2CppArray* ShortTimePatterns;
    Il2CppArray* LongTimePatterns;
    Il2CppArray* EraNames;
    Il2CppArray* AbbrevEraNames;
    Il2CppArray* AbbrevEnglishEraNames;
    Il2CppArray* OptionalCalendars;
    uint8_t readOnly;
    int32_t FormatFlags;
    int32_t CultureID;
    uint8_t UseUserOverride;
    uint8_t UseCalendarInfo;
    int32_t DataItem;
    uint8_t IsDefaultCalendar;
    Il2CppArray* DateWords;
    Il2CppString* FullTimeSpanPositivePattern;
    Il2CppString* FullTimeSpanNegativePattern;
    Il2CppArray* dtfiTokenHash;
} Il2CppDateTimeFormatInfo;
typedef struct Il2CppNumberFormatInfo
{
    Il2CppObject obj;
    Il2CppArray* numberGroupSizes;
    Il2CppArray* currencyGroupSizes;
    Il2CppArray* percentGroupSizes;
    Il2CppString* positiveSign;
    Il2CppString* negativeSign;
    Il2CppString* numberDecimalSeparator;
    Il2CppString* numberGroupSeparator;
    Il2CppString* currencyGroupSeparator;
    Il2CppString* currencyDecimalSeparator;
    Il2CppString* currencySymbol;
    Il2CppString* ansiCurrencySymbol;
    Il2CppString* naNSymbol;
    Il2CppString* positiveInfinitySymbol;
    Il2CppString* negativeInfinitySymbol;
    Il2CppString* percentDecimalSeparator;
    Il2CppString* percentGroupSeparator;
    Il2CppString* percentSymbol;
    Il2CppString* perMilleSymbol;
    Il2CppArray* nativeDigits;
    int dataItem;
    int numberDecimalDigits;
    int currencyDecimalDigits;
    int currencyPositivePattern;
    int currencyNegativePattern;
    int numberNegativePattern;
    int percentPositivePattern;
    int percentNegativePattern;
    int percentDecimalDigits;
    int digitSubstitution;
    uint8_t readOnly;
    uint8_t useUserOverride;
    uint8_t isInvariant;
    uint8_t validForParseAsNumber;
    uint8_t validForParseAsCurrency;
} Il2CppNumberFormatInfo;
typedef struct Il2CppCultureData
{
    Il2CppObject obj;
    Il2CppString *AMDesignator;
    Il2CppString *PMDesignator;
    Il2CppString *TimeSeparator;
    Il2CppArray *LongTimePatterns;
    Il2CppArray *ShortTimePatterns;
    uint32_t FirstDayOfWeek;
    uint32_t CalendarWeekRule;
} Il2CppCultureData;
typedef struct Il2CppCalendarData
{
    Il2CppObject obj;
    Il2CppString *NativeName;
    Il2CppArray *ShortDatePatterns;
    Il2CppArray *YearMonthPatterns;
    Il2CppArray *LongDatePatterns;
    Il2CppString *MonthDayPattern;
    Il2CppArray *EraNames;
    Il2CppArray *AbbreviatedEraNames;
    Il2CppArray *AbbreviatedEnglishEraNames;
    Il2CppArray *DayNames;
    Il2CppArray *AbbreviatedDayNames;
    Il2CppArray *SuperShortDayNames;
    Il2CppArray *MonthNames;
    Il2CppArray *AbbreviatedMonthNames;
    Il2CppArray *GenitiveMonthNames;
    Il2CppArray *GenitiveAbbreviatedMonthNames;
} Il2CppCalendarData;
typedef struct Il2CppCultureInfo
{
    Il2CppObject obj;
    uint8_t is_read_only;
    int32_t lcid;
    int32_t parent_lcid;
    int32_t datetime_index;
    int32_t number_index;
    int32_t default_calendar_type;
    uint8_t use_user_override;
    Il2CppNumberFormatInfo* number_format;
    Il2CppDateTimeFormatInfo* datetime_format;
    Il2CppObject* textinfo;
    Il2CppString* name;
    Il2CppString* englishname;
    Il2CppString* nativename;
    Il2CppString* iso3lang;
    Il2CppString* iso2lang;
    Il2CppString* win3lang;
    Il2CppString* territory;
    Il2CppArray* native_calendar_names;
    Il2CppString* compareinfo;
    const void* text_info_data;
    int dataItem;
    Il2CppObject* calendar;
    Il2CppObject* parent_culture;
    uint8_t constructed;
    Il2CppArray* cached_serialized_form;
    Il2CppObject* cultureData;
    uint8_t isInherited;
} Il2CppCultureInfo;
typedef struct Il2CppRegionInfo
{
    Il2CppObject obj;
    int32_t geo_id;
    Il2CppString* iso2name;
    Il2CppString* iso3name;
    Il2CppString* win3name;
    Il2CppString* english_name;
    Il2CppString* native_name;
    Il2CppString* currency_symbol;
    Il2CppString* iso_currency_symbol;
    Il2CppString* currency_english_name;
    Il2CppString* currency_native_name;
} Il2CppRegionInfo;
typedef struct Il2CppSafeHandle
{
    Il2CppObject base;
    void* handle;
    int state;
    uint8_t owns_handle;
    uint8_t fullyInitialized;
} Il2CppSafeHandle;
typedef struct Il2CppStringBuilder Il2CppStringBuilder;
typedef struct Il2CppStringBuilder
{
    Il2CppObject object;
    Il2CppArray* chunkChars;
    struct Il2CppStringBuilder* chunkPrevious;
    int chunkLength;
    int chunkOffset;
    int maxCapacity;
} Il2CppStringBuilder;
typedef struct Il2CppSocketAddress
{
    Il2CppObject base;
    int m_Size;
    Il2CppArray* data;
    uint8_t m_changed;
    int m_hash;
} Il2CppSocketAddress;
typedef struct Il2CppSortKey
{
    Il2CppObject base;
    Il2CppString *str;
    Il2CppArray *key;
    int32_t options;
    int32_t lcid;
} Il2CppSortKey;
typedef struct Il2CppErrorWrapper
{
    Il2CppObject base;
    int32_t errorCode;
} Il2CppErrorWrapper;
typedef struct Il2CppAsyncResult
{
    Il2CppObject base;
    Il2CppObject *async_state;
    Il2CppWaitHandle *handle;
    Il2CppDelegate *async_delegate;
    void* data;
    Il2CppAsyncCall *object_data;
    uint8_t sync_completed;
    uint8_t completed;
    uint8_t endinvoke_called;
    Il2CppObject *async_callback;
    Il2CppObject *execution_context;
    Il2CppObject *original_context;
} Il2CppAsyncResult;
typedef struct Il2CppAsyncCall
{
    Il2CppObject base;
    Il2CppMethodMessage *msg;
    MethodInfo *cb_method;
    Il2CppDelegate *cb_target;
    Il2CppObject *state;
    Il2CppObject *res;
    Il2CppArray *out_args;
} Il2CppAsyncCall;
typedef struct Il2CppExceptionWrapper Il2CppExceptionWrapper;
typedef struct Il2CppExceptionWrapper
{
    Il2CppException* ex;
} Il2CppExceptionWrapper;
typedef struct Il2CppIOAsyncResult
{
    Il2CppObject base;
    Il2CppDelegate* callback;
    Il2CppObject* state;
    Il2CppWaitHandle* wait_handle;
    uint8_t completed_synchronously;
    uint8_t completed;
} Il2CppIOAsyncResult;
typedef struct Il2CppSocketAsyncResult
{
    Il2CppIOAsyncResult base;
    Il2CppObject* socket;
    int32_t operation;
    Il2CppException* delayedException;
    Il2CppObject* endPoint;
    Il2CppArray* buffer;
    int32_t offset;
    int32_t size;
    int32_t socket_flags;
    Il2CppObject* acceptSocket;
    Il2CppArray* addresses;
    int32_t port;
    Il2CppObject* buffers;
    uint8_t reuseSocket;
    int32_t currentAddress;
    Il2CppObject* acceptedSocket;
    int32_t total;
    int32_t error;
    int32_t endCalled;
} Il2CppSocketAsyncResult;
typedef enum Il2CppResourceLocation
{
    IL2CPP_RESOURCE_LOCATION_EMBEDDED = 1,
    IL2CPP_RESOURCE_LOCATION_ANOTHER_ASSEMBLY = 2,
    IL2CPP_RESOURCE_LOCATION_IN_MANIFEST = 4
} Il2CppResourceLocation;
typedef struct Il2CppManifestResourceInfo
{
    Il2CppObject object;
    Il2CppReflectionAssembly* assembly;
    Il2CppString* filename;
    uint32_t location;
} Il2CppManifestResourceInfo;
typedef struct Il2CppAppContext
{
    Il2CppObject obj;
    int32_t domain_id;
    int32_t context_id;
    void* static_data;
} Il2CppAppContext;
typedef struct Il2CppDecimal
{
    uint16_t reserved;
    union
    {
        struct
        {
            uint8_t scale;
            uint8_t sign;
        } u;
        uint16_t signscale;
    } u;
    uint32_t Hi32;
    union
    {
        struct
        {
            uint32_t Lo32;
            uint32_t Mid32;
        } v;
        uint64_t Lo64;
    } v;
} Il2CppDecimal;
typedef struct Il2CppDouble
{
    uint32_t mantLo : 32;
    uint32_t mantHi : 20;
    uint32_t exp : 11;
    uint32_t sign : 1;
} Il2CppDouble;
typedef union Il2CppDouble_double
{
    Il2CppDouble s;
    double d;
} Il2CppDouble_double;
typedef enum Il2CppDecimalCompareResult
{
    IL2CPP_DECIMAL_CMP_LT = -1,
    IL2CPP_DECIMAL_CMP_EQ,
    IL2CPP_DECIMAL_CMP_GT
} Il2CppDecimalCompareResult;
typedef struct Il2CppSingle
{
    uint32_t mant : 23;
    uint32_t exp : 8;
    uint32_t sign : 1;
} Il2CppSingle;
typedef union Il2CppSingle_float
{
    Il2CppSingle s;
    float f;
} Il2CppSingle_float;

#pragma warning(disable : 4369)
#pragma warning(disable : 4309)
#pragma warning(disable : 4359)
#if !defined(_GHIDRA_) && !defined(_IDA_)
namespace app {
#endif

// ******************************************************************************
// * Application types from method calls
// ******************************************************************************

struct Object {
    struct Object__Class *klass;
    MonitorData *monitor;
};

struct Locale {
    struct Locale__Class *klass;
    MonitorData *monitor;
};

struct ValueType {
    struct ValueType__Class *klass;
    MonitorData *monitor;
};

struct Boolean {
    bool m_value;
};

struct Boolean__Boxed {
    struct Boolean__Class *klass;
    MonitorData *monitor;
    bool fields;
};

struct Void {
};

struct Void__Boxed {
    struct Void__Class *klass;
    MonitorData *monitor;
    struct Void fields;
};

struct Int32 {
    int32_t m_value;
};

struct Int32__Boxed {
    struct Int32__Class *klass;
    MonitorData *monitor;
    int32_t fields;
};

struct Char {
    uint16_t m_value;
};

struct Char__Boxed {
    struct Char__Class *klass;
    MonitorData *monitor;
    uint16_t fields;
};

struct __declspec(align(8)) String__Fields {
    int32_t m_stringLength;
    uint16_t m_firstChar;
};

struct String {
    struct String__Class *klass;
    MonitorData *monitor;
    struct String__Fields fields;
};

struct Byte {
    uint8_t m_value;
};

struct Byte__Boxed {
    struct Byte__Class *klass;
    MonitorData *monitor;
    uint8_t fields;
};

struct IFormatProvider {
    struct IFormatProvider__Class *klass;
    MonitorData *monitor;
};

struct Enum {
};

struct Enum__Boxed {
    struct Enum__Class *klass;
    MonitorData *monitor;
    struct Enum fields;
};

#if defined(_CPLUSPLUS_)
enum TypeCode__Enum : int32_t {
    TypeCode__Enum_Empty = 0x00000000,
    TypeCode__Enum_Object = 0x00000001,
    TypeCode__Enum_DBNull = 0x00000002,
    TypeCode__Enum_Boolean = 0x00000003,
    TypeCode__Enum_Char = 0x00000004,
    TypeCode__Enum_SByte = 0x00000005,
    TypeCode__Enum_Byte = 0x00000006,
    TypeCode__Enum_Int16 = 0x00000007,
    TypeCode__Enum_UInt16 = 0x00000008,
    TypeCode__Enum_Int32 = 0x00000009,
    TypeCode__Enum_UInt32 = 0x0000000a,
    TypeCode__Enum_Int64 = 0x0000000b,
    TypeCode__Enum_UInt64 = 0x0000000c,
    TypeCode__Enum_Single = 0x0000000d,
    TypeCode__Enum_Double = 0x0000000e,
    TypeCode__Enum_Decimal = 0x0000000f,
    TypeCode__Enum_DateTime = 0x00000010,
    TypeCode__Enum_String = 0x00000012,
};

#else
enum TypeCode__Enum {
    TypeCode__Enum_Empty = 0x00000000,
    TypeCode__Enum_Object = 0x00000001,
    TypeCode__Enum_DBNull = 0x00000002,
    TypeCode__Enum_Boolean = 0x00000003,
    TypeCode__Enum_Char = 0x00000004,
    TypeCode__Enum_SByte = 0x00000005,
    TypeCode__Enum_Byte = 0x00000006,
    TypeCode__Enum_Int16 = 0x00000007,
    TypeCode__Enum_UInt16 = 0x00000008,
    TypeCode__Enum_Int32 = 0x00000009,
    TypeCode__Enum_UInt32 = 0x0000000a,
    TypeCode__Enum_Int64 = 0x0000000b,
    TypeCode__Enum_UInt64 = 0x0000000c,
    TypeCode__Enum_Single = 0x0000000d,
    TypeCode__Enum_Double = 0x0000000e,
    TypeCode__Enum_Decimal = 0x0000000f,
    TypeCode__Enum_DateTime = 0x00000010,
    TypeCode__Enum_String = 0x00000012,
};

#endif
struct TypeCode__Enum__Boxed {
    struct TypeCode__Enum__Class *klass;
    MonitorData *monitor;
    #if defined(_CPLUSPLUS_)
    enum TypeCode__Enum value;
    #else
    uint32_t value;
    #endif
};

struct Array {
    struct Array__Class *klass;
    MonitorData *monitor;
};

struct Char__Array {
    struct Char__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    uint16_t vector[32];
};

struct IEnumerator {
    struct IEnumerator__Class *klass;
    MonitorData *monitor;
};

struct IComparer {
    struct IComparer__Class *klass;
    MonitorData *monitor;
};

struct IEqualityComparer {
    struct IEqualityComparer__Class *klass;
    MonitorData *monitor;
};

struct SByte {
    int8_t m_value;
};

struct SByte__Boxed {
    struct SByte__Class *klass;
    MonitorData *monitor;
    int8_t fields;
};

struct Int16 {
    int16_t m_value;
};

struct Int16__Boxed {
    struct Int16__Class *klass;
    MonitorData *monitor;
    int16_t fields;
};

struct UInt16 {
    uint16_t m_value;
};

struct UInt16__Boxed {
    struct UInt16__Class *klass;
    MonitorData *monitor;
    uint16_t fields;
};

struct UInt32 {
    uint32_t m_value;
};

struct UInt32__Boxed {
    struct UInt32__Class *klass;
    MonitorData *monitor;
    uint32_t fields;
};

struct Int64 {
    int64_t m_value;
};

struct Int64__Boxed {
    struct Int64__Class *klass;
    MonitorData *monitor;
    int64_t fields;
};

struct UInt64 {
    uint64_t m_value;
};

struct UInt64__Boxed {
    struct UInt64__Class *klass;
    MonitorData *monitor;
    uint64_t fields;
};

struct Single {
    float m_value;
};

struct Single__Boxed {
    struct Single__Class *klass;
    MonitorData *monitor;
    float fields;
};

struct Double {
    double m_value;
};

struct Double__Boxed {
    struct Double__Class *klass;
    MonitorData *monitor;
    double fields;
};

struct Decimal {
    int32_t flags;
    int32_t hi;
    int32_t lo;
    int32_t mid;
};

struct Decimal__Boxed {
    struct Decimal__Class *klass;
    MonitorData *monitor;
    struct Decimal fields;
};

struct UInt32__Array {
    struct UInt32__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    uint32_t vector[32];
};

struct DateTime {
    uint64_t dateData;
};

struct DateTime__Boxed {
    struct DateTime__Class *klass;
    MonitorData *monitor;
    struct DateTime fields;
};

struct Int32__Array {
    struct Int32__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    int32_t vector[32];
};

struct MemberInfo_1 {
    struct MemberInfo_1__Class *klass;
    MonitorData *monitor;
};

struct IntPtr {
    struct Void *m_value;
};

struct IntPtr__Boxed {
    struct IntPtr__Class *klass;
    MonitorData *monitor;
    void *fields;
};

struct RuntimeTypeHandle {
    void *value;
};

struct RuntimeTypeHandle__Boxed {
    struct RuntimeTypeHandle__Class *klass;
    MonitorData *monitor;
    struct RuntimeTypeHandle fields;
};

struct __declspec(align(8)) Type__Fields {
    struct RuntimeTypeHandle _impl;
};

struct Type {
    struct Type__Class *klass;
    MonitorData *monitor;
    struct Type__Fields fields;
};

struct Object__Array {
    struct Object__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct Object *vector[32];
};

#if defined(_CPLUSPLUS_)
enum MemberTypes__Enum : int32_t {
    MemberTypes__Enum_Constructor = 0x00000001,
    MemberTypes__Enum_Event = 0x00000002,
    MemberTypes__Enum_Field = 0x00000004,
    MemberTypes__Enum_Method = 0x00000008,
    MemberTypes__Enum_Property = 0x00000010,
    MemberTypes__Enum_TypeInfo = 0x00000020,
    MemberTypes__Enum_Custom = 0x00000040,
    MemberTypes__Enum_NestedType = 0x00000080,
    MemberTypes__Enum_All = 0x000000bf,
};

#else
enum MemberTypes__Enum {
    MemberTypes__Enum_Constructor = 0x00000001,
    MemberTypes__Enum_Event = 0x00000002,
    MemberTypes__Enum_Field = 0x00000004,
    MemberTypes__Enum_Method = 0x00000008,
    MemberTypes__Enum_Property = 0x00000010,
    MemberTypes__Enum_TypeInfo = 0x00000020,
    MemberTypes__Enum_Custom = 0x00000040,
    MemberTypes__Enum_NestedType = 0x00000080,
    MemberTypes__Enum_All = 0x000000bf,
};

#endif
struct MemberTypes__Enum__Boxed {
    struct MemberTypes__Enum__Class *klass;
    MonitorData *monitor;
    #if defined(_CPLUSPLUS_)
    enum MemberTypes__Enum value;
    #else
    uint32_t value;
    #endif
};

struct Guid {
    int32_t _a;
    int16_t _b;
    int16_t _c;
    uint8_t _d;
    uint8_t _e;
    uint8_t _f;
    uint8_t _g;
    uint8_t _h;
    uint8_t _i;
    uint8_t _j;
    uint8_t _k;
};

struct Guid__Boxed {
    struct Guid__Class *klass;
    MonitorData *monitor;
    struct Guid fields;
};

struct RandomNumberGenerator {
    struct RandomNumberGenerator__Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) RNGCryptoServiceProvider__Fields {
    void *_handle;
};

struct RNGCryptoServiceProvider {
    struct RNGCryptoServiceProvider__Class *klass;
    MonitorData *monitor;
    struct RNGCryptoServiceProvider__Fields fields;
};

struct VoidPtr {
    struct VoidPtr__Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) SerializationInfo__Fields {
    struct String__Array *m_members;
    struct Object__Array *m_data;
    struct Type__Array *m_types;
    struct Dictionary_2_System_String_System_Int32_ *m_nameToIndex;
    int32_t m_currMember;
    struct IFormatterConverter *m_converter;
    struct String *m_fullTypeName;
    struct String *m_assemName;
    struct Type *objectType;
    bool isFullTypeNameSetExplicit;
    bool isAssemblyNameSetExplicit;
    bool requireSameTokenInPartialTrust;
};

struct SerializationInfo {
    struct SerializationInfo__Class *klass;
    MonitorData *monitor;
    struct SerializationInfo__Fields fields;
};

struct String__Array {
    struct String__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct String *vector[32];
};

struct Type__Array {
    struct Type__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct Type *vector[32];
};

struct __declspec(align(8)) Dictionary_2_System_String_System_Int32___Fields {
    struct Int32__Array *buckets;
    struct Dictionary_2_TKey_TValue_Entry_System_String_System_Int32___Array *entries;
    int32_t count;
    int32_t version;
    int32_t freeList;
    int32_t freeCount;
    struct IEqualityComparer_1_System_String_ *comparer;
    struct Dictionary_2_TKey_TValue_KeyCollection_System_String_System_Int32_ *keys;
    struct Dictionary_2_TKey_TValue_ValueCollection_System_String_System_Int32_ *values;
    struct Object *_syncRoot;
};

struct Dictionary_2_System_String_System_Int32_ {
    struct Dictionary_2_System_String_System_Int32___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_System_String_System_Int32___Fields fields;
};

struct Dictionary_2_TKey_TValue_Entry_System_String_System_Int32_ {
    int32_t hashCode;
    int32_t next;
    struct String *key;
    int32_t value;
};

struct Dictionary_2_TKey_TValue_Entry_System_String_System_Int32___Boxed {
    struct Dictionary_2_TKey_TValue_Entry_System_String_System_Int32___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_Entry_System_String_System_Int32_ fields;
};

struct Dictionary_2_TKey_TValue_Entry_System_String_System_Int32___Array {
    struct Dictionary_2_TKey_TValue_Entry_System_String_System_Int32___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct Dictionary_2_TKey_TValue_Entry_System_String_System_Int32_ vector[32];
};

struct IEqualityComparer_1_System_String_ {
    struct IEqualityComparer_1_System_String___Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_System_String_System_Int32___Fields {
    struct Dictionary_2_System_String_System_Int32_ *dictionary;
};

struct Dictionary_2_TKey_TValue_KeyCollection_System_String_System_Int32_ {
    struct Dictionary_2_TKey_TValue_KeyCollection_System_String_System_Int32___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_KeyCollection_System_String_System_Int32___Fields fields;
};

struct IEnumerator_1_System_String_ {
    struct IEnumerator_1_System_String___Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_System_String_System_Int32___Fields {
    struct Dictionary_2_System_String_System_Int32_ *dictionary;
};

struct Dictionary_2_TKey_TValue_ValueCollection_System_String_System_Int32_ {
    struct Dictionary_2_TKey_TValue_ValueCollection_System_String_System_Int32___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_ValueCollection_System_String_System_Int32___Fields fields;
};

struct IEnumerator_1_System_Int32_ {
    struct IEnumerator_1_System_Int32___Class *klass;
    MonitorData *monitor;
};

struct ICollection_1_System_String_ {
    struct ICollection_1_System_String___Class *klass;
    MonitorData *monitor;
};

struct ICollection_1_System_Int32_ {
    struct ICollection_1_System_Int32___Class *klass;
    MonitorData *monitor;
};

struct KeyValuePair_2_System_String_System_Int32_ {
    struct String *key;
    int32_t value;
};

struct KeyValuePair_2_System_String_System_Int32___Boxed {
    struct KeyValuePair_2_System_String_System_Int32___Class *klass;
    MonitorData *monitor;
    struct KeyValuePair_2_System_String_System_Int32_ fields;
};

struct KeyValuePair_2_System_String_System_Int32___Array {
    struct KeyValuePair_2_System_String_System_Int32___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct KeyValuePair_2_System_String_System_Int32_ vector[32];
};

struct IEnumerator_1_KeyValuePair_2_System_String_System_Int32_ {
    struct IEnumerator_1_KeyValuePair_2_System_String_System_Int32___Class *klass;
    MonitorData *monitor;
};

struct ICollection {
    struct ICollection__Class *klass;
    MonitorData *monitor;
};

struct IDictionaryEnumerator {
    struct IDictionaryEnumerator__Class *klass;
    MonitorData *monitor;
};

struct IEnumerable_1_System_String_ {
    struct IEnumerable_1_System_String___Class *klass;
    MonitorData *monitor;
};

struct IEnumerable_1_System_Int32_ {
    struct IEnumerable_1_System_Int32___Class *klass;
    MonitorData *monitor;
};

#if defined(_CPLUSPLUS_)
enum StreamingContextStates__Enum : int32_t {
    StreamingContextStates__Enum_CrossProcess = 0x00000001,
    StreamingContextStates__Enum_CrossMachine = 0x00000002,
    StreamingContextStates__Enum_File = 0x00000004,
    StreamingContextStates__Enum_Persistence = 0x00000008,
    StreamingContextStates__Enum_Remoting = 0x00000010,
    StreamingContextStates__Enum_Other = 0x00000020,
    StreamingContextStates__Enum_Clone = 0x00000040,
    StreamingContextStates__Enum_CrossAppDomain = 0x00000080,
    StreamingContextStates__Enum_All = 0x000000ff,
};

#else
enum StreamingContextStates__Enum {
    StreamingContextStates__Enum_CrossProcess = 0x00000001,
    StreamingContextStates__Enum_CrossMachine = 0x00000002,
    StreamingContextStates__Enum_File = 0x00000004,
    StreamingContextStates__Enum_Persistence = 0x00000008,
    StreamingContextStates__Enum_Remoting = 0x00000010,
    StreamingContextStates__Enum_Other = 0x00000020,
    StreamingContextStates__Enum_Clone = 0x00000040,
    StreamingContextStates__Enum_CrossAppDomain = 0x00000080,
    StreamingContextStates__Enum_All = 0x000000ff,
};

#endif
struct StreamingContextStates__Enum__Boxed {
    struct StreamingContextStates__Enum__Class *klass;
    MonitorData *monitor;
    #if defined(_CPLUSPLUS_)
    enum StreamingContextStates__Enum value;
    #else
    uint32_t value;
    #endif
};

struct StreamingContext {
    struct Object *m_additionalContext;
    #if defined(_CPLUSPLUS_)
    enum StreamingContextStates__Enum m_state;
    #else
    uint32_t m_state;
    #endif
};

struct StreamingContext__Boxed {
    struct StreamingContext__Class *klass;
    MonitorData *monitor;
    struct StreamingContext fields;
};

struct IFormatterConverter {
    struct IFormatterConverter__Class *klass;
    MonitorData *monitor;
};

struct TypeInfo__Fields {
    struct Type__Fields _;
};

struct TypeInfo {
    struct TypeInfo__Class *klass;
    MonitorData *monitor;
    struct TypeInfo__Fields fields;
};

struct RuntimeType__Fields {
    struct TypeInfo__Fields _;
    struct MonoTypeInfo *type_info;
    struct Object *GenericCache;
    struct RuntimeConstructorInfo *m_serializationCtor;
};

struct RuntimeType {
    struct RuntimeType__Class *klass;
    MonitorData *monitor;
    struct RuntimeType__Fields fields;
};

struct IEnumerable_1_System_Reflection_CustomAttributeData_ {
    struct IEnumerable_1_System_Reflection_CustomAttributeData___Class *klass;
    MonitorData *monitor;
};

struct IList_1_System_Reflection_CustomAttributeData_ {
    struct IList_1_System_Reflection_CustomAttributeData___Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) Module__Fields {
    void *_impl;
    struct Assembly *assembly;
    struct String *fqname;
    struct String *name;
    struct String *scopename;
    bool is_resource;
    int32_t token;
};

struct Module {
    struct Module__Class *klass;
    MonitorData *monitor;
    struct Module__Fields fields;
};

struct __declspec(align(8)) Delegate__Fields {
    void *method_ptr;
    void *invoke_impl;
    struct Object *m_target;
    void *method;
    void *delegate_trampoline;
    void *extra_arg;
    void *method_code;
    struct MethodInfo_1 *method_info;
    struct MethodInfo_1 *original_method_info;
    struct DelegateData *data;
    bool method_is_virtual;
};

struct Delegate {
    struct Delegate__Class *klass;
    MonitorData *monitor;
    struct Delegate__Fields fields;
};

struct MulticastDelegate__Fields {
    struct Delegate__Fields _;
    struct Delegate__Array *delegates;
};

struct MulticastDelegate {
    struct MulticastDelegate__Class *klass;
    MonitorData *monitor;
    struct MulticastDelegate__Fields fields;
};

struct TypeFilter__Fields {
    struct MulticastDelegate__Fields _;
};

struct TypeFilter {
    struct TypeFilter__Class *klass;
    MonitorData *monitor;
    struct TypeFilter__Fields fields;
};

struct MethodBase {
    struct MethodBase__Class *klass;
    MonitorData *monitor;
};

struct MethodInfo_1 {
    struct MethodInfo_1__Class *klass;
    MonitorData *monitor;
};

struct RuntimeMethodInfo {
    struct RuntimeMethodInfo__Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) MonoMethod__Fields {
    void *mhandle;
    struct String *name;
    struct Type *reftype;
};

struct MonoMethod {
    struct MonoMethod__Class *klass;
    MonitorData *monitor;
    struct MonoMethod__Fields fields;
};

#if defined(_CPLUSPLUS_)
enum MethodImplAttributes__Enum : int32_t {
    MethodImplAttributes__Enum_CodeTypeMask = 0x00000003,
    MethodImplAttributes__Enum_IL = 0x00000000,
    MethodImplAttributes__Enum_Native = 0x00000001,
    MethodImplAttributes__Enum_OPTIL = 0x00000002,
    MethodImplAttributes__Enum_Runtime = 0x00000003,
    MethodImplAttributes__Enum_ManagedMask = 0x00000004,
    MethodImplAttributes__Enum_Unmanaged = 0x00000004,
    MethodImplAttributes__Enum_Managed = 0x00000000,
    MethodImplAttributes__Enum_ForwardRef = 0x00000010,
    MethodImplAttributes__Enum_PreserveSig = 0x00000080,
    MethodImplAttributes__Enum_InternalCall = 0x00001000,
    MethodImplAttributes__Enum_Synchronized = 0x00000020,
    MethodImplAttributes__Enum_NoInlining = 0x00000008,
    MethodImplAttributes__Enum_AggressiveInlining = 0x00000100,
    MethodImplAttributes__Enum_NoOptimization = 0x00000040,
    MethodImplAttributes__Enum_MaxMethodImplVal = 0x0000ffff,
};

#else
enum MethodImplAttributes__Enum {
    MethodImplAttributes__Enum_CodeTypeMask = 0x00000003,
    MethodImplAttributes__Enum_IL = 0x00000000,
    MethodImplAttributes__Enum_Native = 0x00000001,
    MethodImplAttributes__Enum_OPTIL = 0x00000002,
    MethodImplAttributes__Enum_Runtime = 0x00000003,
    MethodImplAttributes__Enum_ManagedMask = 0x00000004,
    MethodImplAttributes__Enum_Unmanaged = 0x00000004,
    MethodImplAttributes__Enum_Managed = 0x00000000,
    MethodImplAttributes__Enum_ForwardRef = 0x00000010,
    MethodImplAttributes__Enum_PreserveSig = 0x00000080,
    MethodImplAttributes__Enum_InternalCall = 0x00001000,
    MethodImplAttributes__Enum_Synchronized = 0x00000020,
    MethodImplAttributes__Enum_NoInlining = 0x00000008,
    MethodImplAttributes__Enum_AggressiveInlining = 0x00000100,
    MethodImplAttributes__Enum_NoOptimization = 0x00000040,
    MethodImplAttributes__Enum_MaxMethodImplVal = 0x0000ffff,
};

#endif
struct MethodImplAttributes__Enum__Boxed {
    struct MethodImplAttributes__Enum__Class *klass;
    MonitorData *monitor;
    #if defined(_CPLUSPLUS_)
    enum MethodImplAttributes__Enum value;
    #else
    uint32_t value;
    #endif
};

#if defined(_CPLUSPLUS_)
enum ParameterAttributes__Enum : int32_t {
    ParameterAttributes__Enum_None = 0x00000000,
    ParameterAttributes__Enum_In = 0x00000001,
    ParameterAttributes__Enum_Out = 0x00000002,
    ParameterAttributes__Enum_Lcid = 0x00000004,
    ParameterAttributes__Enum_Retval = 0x00000008,
    ParameterAttributes__Enum_Optional = 0x00000010,
    ParameterAttributes__Enum_ReservedMask = 0x0000f000,
    ParameterAttributes__Enum_HasDefault = 0x00001000,
    ParameterAttributes__Enum_HasFieldMarshal = 0x00002000,
    ParameterAttributes__Enum_Reserved3 = 0x00004000,
    ParameterAttributes__Enum_Reserved4 = 0x00008000,
};

#else
enum ParameterAttributes__Enum {
    ParameterAttributes__Enum_None = 0x00000000,
    ParameterAttributes__Enum_In = 0x00000001,
    ParameterAttributes__Enum_Out = 0x00000002,
    ParameterAttributes__Enum_Lcid = 0x00000004,
    ParameterAttributes__Enum_Retval = 0x00000008,
    ParameterAttributes__Enum_Optional = 0x00000010,
    ParameterAttributes__Enum_ReservedMask = 0x0000f000,
    ParameterAttributes__Enum_HasDefault = 0x00001000,
    ParameterAttributes__Enum_HasFieldMarshal = 0x00002000,
    ParameterAttributes__Enum_Reserved3 = 0x00004000,
    ParameterAttributes__Enum_Reserved4 = 0x00008000,
};

#endif
struct ParameterAttributes__Enum__Boxed {
    struct ParameterAttributes__Enum__Class *klass;
    MonitorData *monitor;
    #if defined(_CPLUSPLUS_)
    enum ParameterAttributes__Enum value;
    #else
    uint32_t value;
    #endif
};

struct __declspec(align(8)) ParameterInfo_1__Fields {
    struct Type *ClassImpl;
    struct Object *DefaultValueImpl;
    struct MemberInfo_1 *MemberImpl;
    struct String *NameImpl;
    int32_t PositionImpl;
    #if defined(_CPLUSPLUS_)
    enum ParameterAttributes__Enum AttrsImpl;
    #else
    uint32_t AttrsImpl;
    #endif
    struct MarshalAsAttribute *marshalAs;
};

struct ParameterInfo_1 {
    struct ParameterInfo_1__Class *klass;
    MonitorData *monitor;
    struct ParameterInfo_1__Fields fields;
};

struct Attribute {
    struct Attribute__Class *klass;
    MonitorData *monitor;
};

#if defined(_CPLUSPLUS_)
enum UnmanagedType__Enum : int32_t {
    UnmanagedType__Enum_Bool = 0x00000002,
    UnmanagedType__Enum_I1 = 0x00000003,
    UnmanagedType__Enum_U1 = 0x00000004,
    UnmanagedType__Enum_I2 = 0x00000005,
    UnmanagedType__Enum_U2 = 0x00000006,
    UnmanagedType__Enum_I4 = 0x00000007,
    UnmanagedType__Enum_U4 = 0x00000008,
    UnmanagedType__Enum_I8 = 0x00000009,
    UnmanagedType__Enum_U8 = 0x0000000a,
    UnmanagedType__Enum_R4 = 0x0000000b,
    UnmanagedType__Enum_R8 = 0x0000000c,
    UnmanagedType__Enum_Currency = 0x0000000f,
    UnmanagedType__Enum_BStr = 0x00000013,
    UnmanagedType__Enum_LPStr = 0x00000014,
    UnmanagedType__Enum_LPWStr = 0x00000015,
    UnmanagedType__Enum_LPTStr = 0x00000016,
    UnmanagedType__Enum_ByValTStr = 0x00000017,
    UnmanagedType__Enum_IUnknown = 0x00000019,
    UnmanagedType__Enum_IDispatch = 0x0000001a,
    UnmanagedType__Enum_Struct = 0x0000001b,
    UnmanagedType__Enum_Interface = 0x0000001c,
    UnmanagedType__Enum_SafeArray = 0x0000001d,
    UnmanagedType__Enum_ByValArray = 0x0000001e,
    UnmanagedType__Enum_SysInt = 0x0000001f,
    UnmanagedType__Enum_SysUInt = 0x00000020,
    UnmanagedType__Enum_VBByRefStr = 0x00000022,
    UnmanagedType__Enum_AnsiBStr = 0x00000023,
    UnmanagedType__Enum_TBStr = 0x00000024,
    UnmanagedType__Enum_VariantBool = 0x00000025,
    UnmanagedType__Enum_FunctionPtr = 0x00000026,
    UnmanagedType__Enum_AsAny = 0x00000028,
    UnmanagedType__Enum_LPArray = 0x0000002a,
    UnmanagedType__Enum_LPStruct = 0x0000002b,
    UnmanagedType__Enum_CustomMarshaler = 0x0000002c,
    UnmanagedType__Enum_Error = 0x0000002d,
    UnmanagedType__Enum_IInspectable = 0x0000002e,
    UnmanagedType__Enum_HString = 0x0000002f,
    UnmanagedType__Enum_LPUTF8Str = 0x00000030,
};

#else
enum UnmanagedType__Enum {
    UnmanagedType__Enum_Bool = 0x00000002,
    UnmanagedType__Enum_I1 = 0x00000003,
    UnmanagedType__Enum_U1 = 0x00000004,
    UnmanagedType__Enum_I2 = 0x00000005,
    UnmanagedType__Enum_U2 = 0x00000006,
    UnmanagedType__Enum_I4 = 0x00000007,
    UnmanagedType__Enum_U4 = 0x00000008,
    UnmanagedType__Enum_I8 = 0x00000009,
    UnmanagedType__Enum_U8 = 0x0000000a,
    UnmanagedType__Enum_R4 = 0x0000000b,
    UnmanagedType__Enum_R8 = 0x0000000c,
    UnmanagedType__Enum_Currency = 0x0000000f,
    UnmanagedType__Enum_BStr = 0x00000013,
    UnmanagedType__Enum_LPStr = 0x00000014,
    UnmanagedType__Enum_LPWStr = 0x00000015,
    UnmanagedType__Enum_LPTStr = 0x00000016,
    UnmanagedType__Enum_ByValTStr = 0x00000017,
    UnmanagedType__Enum_IUnknown = 0x00000019,
    UnmanagedType__Enum_IDispatch = 0x0000001a,
    UnmanagedType__Enum_Struct = 0x0000001b,
    UnmanagedType__Enum_Interface = 0x0000001c,
    UnmanagedType__Enum_SafeArray = 0x0000001d,
    UnmanagedType__Enum_ByValArray = 0x0000001e,
    UnmanagedType__Enum_SysInt = 0x0000001f,
    UnmanagedType__Enum_SysUInt = 0x00000020,
    UnmanagedType__Enum_VBByRefStr = 0x00000022,
    UnmanagedType__Enum_AnsiBStr = 0x00000023,
    UnmanagedType__Enum_TBStr = 0x00000024,
    UnmanagedType__Enum_VariantBool = 0x00000025,
    UnmanagedType__Enum_FunctionPtr = 0x00000026,
    UnmanagedType__Enum_AsAny = 0x00000028,
    UnmanagedType__Enum_LPArray = 0x0000002a,
    UnmanagedType__Enum_LPStruct = 0x0000002b,
    UnmanagedType__Enum_CustomMarshaler = 0x0000002c,
    UnmanagedType__Enum_Error = 0x0000002d,
    UnmanagedType__Enum_IInspectable = 0x0000002e,
    UnmanagedType__Enum_HString = 0x0000002f,
    UnmanagedType__Enum_LPUTF8Str = 0x00000030,
};

#endif
struct UnmanagedType__Enum__Boxed {
    struct UnmanagedType__Enum__Class *klass;
    MonitorData *monitor;
    #if defined(_CPLUSPLUS_)
    enum UnmanagedType__Enum value;
    #else
    uint32_t value;
    #endif
};

#if defined(_CPLUSPLUS_)
enum VarEnum__Enum : int32_t {
    VarEnum__Enum_VT_EMPTY = 0x00000000,
    VarEnum__Enum_VT_NULL = 0x00000001,
    VarEnum__Enum_VT_I2 = 0x00000002,
    VarEnum__Enum_VT_I4 = 0x00000003,
    VarEnum__Enum_VT_R4 = 0x00000004,
    VarEnum__Enum_VT_R8 = 0x00000005,
    VarEnum__Enum_VT_CY = 0x00000006,
    VarEnum__Enum_VT_DATE = 0x00000007,
    VarEnum__Enum_VT_BSTR = 0x00000008,
    VarEnum__Enum_VT_DISPATCH = 0x00000009,
    VarEnum__Enum_VT_ERROR = 0x0000000a,
    VarEnum__Enum_VT_BOOL = 0x0000000b,
    VarEnum__Enum_VT_VARIANT = 0x0000000c,
    VarEnum__Enum_VT_UNKNOWN = 0x0000000d,
    VarEnum__Enum_VT_DECIMAL = 0x0000000e,
    VarEnum__Enum_VT_I1 = 0x00000010,
    VarEnum__Enum_VT_UI1 = 0x00000011,
    VarEnum__Enum_VT_UI2 = 0x00000012,
    VarEnum__Enum_VT_UI4 = 0x00000013,
    VarEnum__Enum_VT_I8 = 0x00000014,
    VarEnum__Enum_VT_UI8 = 0x00000015,
    VarEnum__Enum_VT_INT = 0x00000016,
    VarEnum__Enum_VT_UINT = 0x00000017,
    VarEnum__Enum_VT_VOID = 0x00000018,
    VarEnum__Enum_VT_HRESULT = 0x00000019,
    VarEnum__Enum_VT_PTR = 0x0000001a,
    VarEnum__Enum_VT_SAFEARRAY = 0x0000001b,
    VarEnum__Enum_VT_CARRAY = 0x0000001c,
    VarEnum__Enum_VT_USERDEFINED = 0x0000001d,
    VarEnum__Enum_VT_LPSTR = 0x0000001e,
    VarEnum__Enum_VT_LPWSTR = 0x0000001f,
    VarEnum__Enum_VT_RECORD = 0x00000024,
    VarEnum__Enum_VT_FILETIME = 0x00000040,
    VarEnum__Enum_VT_BLOB = 0x00000041,
    VarEnum__Enum_VT_STREAM = 0x00000042,
    VarEnum__Enum_VT_STORAGE = 0x00000043,
    VarEnum__Enum_VT_STREAMED_OBJECT = 0x00000044,
    VarEnum__Enum_VT_STORED_OBJECT = 0x00000045,
    VarEnum__Enum_VT_BLOB_OBJECT = 0x00000046,
    VarEnum__Enum_VT_CF = 0x00000047,
    VarEnum__Enum_VT_CLSID = 0x00000048,
    VarEnum__Enum_VT_VECTOR = 0x00001000,
    VarEnum__Enum_VT_ARRAY = 0x00002000,
    VarEnum__Enum_VT_BYREF = 0x00004000,
};

#else
enum VarEnum__Enum {
    VarEnum__Enum_VT_EMPTY = 0x00000000,
    VarEnum__Enum_VT_NULL = 0x00000001,
    VarEnum__Enum_VT_I2 = 0x00000002,
    VarEnum__Enum_VT_I4 = 0x00000003,
    VarEnum__Enum_VT_R4 = 0x00000004,
    VarEnum__Enum_VT_R8 = 0x00000005,
    VarEnum__Enum_VT_CY = 0x00000006,
    VarEnum__Enum_VT_DATE = 0x00000007,
    VarEnum__Enum_VT_BSTR = 0x00000008,
    VarEnum__Enum_VT_DISPATCH = 0x00000009,
    VarEnum__Enum_VT_ERROR = 0x0000000a,
    VarEnum__Enum_VT_BOOL = 0x0000000b,
    VarEnum__Enum_VT_VARIANT = 0x0000000c,
    VarEnum__Enum_VT_UNKNOWN = 0x0000000d,
    VarEnum__Enum_VT_DECIMAL = 0x0000000e,
    VarEnum__Enum_VT_I1 = 0x00000010,
    VarEnum__Enum_VT_UI1 = 0x00000011,
    VarEnum__Enum_VT_UI2 = 0x00000012,
    VarEnum__Enum_VT_UI4 = 0x00000013,
    VarEnum__Enum_VT_I8 = 0x00000014,
    VarEnum__Enum_VT_UI8 = 0x00000015,
    VarEnum__Enum_VT_INT = 0x00000016,
    VarEnum__Enum_VT_UINT = 0x00000017,
    VarEnum__Enum_VT_VOID = 0x00000018,
    VarEnum__Enum_VT_HRESULT = 0x00000019,
    VarEnum__Enum_VT_PTR = 0x0000001a,
    VarEnum__Enum_VT_SAFEARRAY = 0x0000001b,
    VarEnum__Enum_VT_CARRAY = 0x0000001c,
    VarEnum__Enum_VT_USERDEFINED = 0x0000001d,
    VarEnum__Enum_VT_LPSTR = 0x0000001e,
    VarEnum__Enum_VT_LPWSTR = 0x0000001f,
    VarEnum__Enum_VT_RECORD = 0x00000024,
    VarEnum__Enum_VT_FILETIME = 0x00000040,
    VarEnum__Enum_VT_BLOB = 0x00000041,
    VarEnum__Enum_VT_STREAM = 0x00000042,
    VarEnum__Enum_VT_STORAGE = 0x00000043,
    VarEnum__Enum_VT_STREAMED_OBJECT = 0x00000044,
    VarEnum__Enum_VT_STORED_OBJECT = 0x00000045,
    VarEnum__Enum_VT_BLOB_OBJECT = 0x00000046,
    VarEnum__Enum_VT_CF = 0x00000047,
    VarEnum__Enum_VT_CLSID = 0x00000048,
    VarEnum__Enum_VT_VECTOR = 0x00001000,
    VarEnum__Enum_VT_ARRAY = 0x00002000,
    VarEnum__Enum_VT_BYREF = 0x00004000,
};

#endif
struct VarEnum__Enum__Boxed {
    struct VarEnum__Enum__Class *klass;
    MonitorData *monitor;
    #if defined(_CPLUSPLUS_)
    enum VarEnum__Enum value;
    #else
    uint32_t value;
    #endif
};

struct __declspec(align(8)) MarshalAsAttribute__Fields {
    struct String *MarshalCookie;
    struct String *MarshalType;
    struct Type *MarshalTypeRef;
    struct Type *SafeArrayUserDefinedSubType;
    #if defined(_CPLUSPLUS_)
    enum UnmanagedType__Enum utype;
    #else
    uint32_t utype;
    #endif
    #if defined(_CPLUSPLUS_)
    enum UnmanagedType__Enum ArraySubType;
    #else
    uint32_t ArraySubType;
    #endif
    #if defined(_CPLUSPLUS_)
    enum VarEnum__Enum SafeArraySubType;
    #else
    uint32_t SafeArraySubType;
    #endif
    int32_t SizeConst;
    int32_t IidParameterIndex;
    int16_t SizeParamIndex;
};

struct MarshalAsAttribute {
    struct MarshalAsAttribute__Class *klass;
    MonitorData *monitor;
    struct MarshalAsAttribute__Fields fields;
};

struct ParameterInfo_1__Array {
    struct ParameterInfo_1__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct ParameterInfo_1 *vector[32];
};

#if defined(_CPLUSPLUS_)
enum BindingFlags__Enum : int32_t {
    BindingFlags__Enum_Default = 0x00000000,
    BindingFlags__Enum_IgnoreCase = 0x00000001,
    BindingFlags__Enum_DeclaredOnly = 0x00000002,
    BindingFlags__Enum_Instance = 0x00000004,
    BindingFlags__Enum_Static = 0x00000008,
    BindingFlags__Enum_Public = 0x00000010,
    BindingFlags__Enum_NonPublic = 0x00000020,
    BindingFlags__Enum_FlattenHierarchy = 0x00000040,
    BindingFlags__Enum_InvokeMethod = 0x00000100,
    BindingFlags__Enum_CreateInstance = 0x00000200,
    BindingFlags__Enum_GetField = 0x00000400,
    BindingFlags__Enum_SetField = 0x00000800,
    BindingFlags__Enum_GetProperty = 0x00001000,
    BindingFlags__Enum_SetProperty = 0x00002000,
    BindingFlags__Enum_PutDispProperty = 0x00004000,
    BindingFlags__Enum_PutRefDispProperty = 0x00008000,
    BindingFlags__Enum_ExactBinding = 0x00010000,
    BindingFlags__Enum_SuppressChangeType = 0x00020000,
    BindingFlags__Enum_OptionalParamBinding = 0x00040000,
    BindingFlags__Enum_IgnoreReturn = 0x01000000,
};

#else
enum BindingFlags__Enum {
    BindingFlags__Enum_Default = 0x00000000,
    BindingFlags__Enum_IgnoreCase = 0x00000001,
    BindingFlags__Enum_DeclaredOnly = 0x00000002,
    BindingFlags__Enum_Instance = 0x00000004,
    BindingFlags__Enum_Static = 0x00000008,
    BindingFlags__Enum_Public = 0x00000010,
    BindingFlags__Enum_NonPublic = 0x00000020,
    BindingFlags__Enum_FlattenHierarchy = 0x00000040,
    BindingFlags__Enum_InvokeMethod = 0x00000100,
    BindingFlags__Enum_CreateInstance = 0x00000200,
    BindingFlags__Enum_GetField = 0x00000400,
    BindingFlags__Enum_SetField = 0x00000800,
    BindingFlags__Enum_GetProperty = 0x00001000,
    BindingFlags__Enum_SetProperty = 0x00002000,
    BindingFlags__Enum_PutDispProperty = 0x00004000,
    BindingFlags__Enum_PutRefDispProperty = 0x00008000,
    BindingFlags__Enum_ExactBinding = 0x00010000,
    BindingFlags__Enum_SuppressChangeType = 0x00020000,
    BindingFlags__Enum_OptionalParamBinding = 0x00040000,
    BindingFlags__Enum_IgnoreReturn = 0x01000000,
};

#endif
struct BindingFlags__Enum__Boxed {
    struct BindingFlags__Enum__Class *klass;
    MonitorData *monitor;
    #if defined(_CPLUSPLUS_)
    enum BindingFlags__Enum value;
    #else
    uint32_t value;
    #endif
};

struct Binder {
    struct Binder__Class *klass;
    MonitorData *monitor;
};

struct DefaultBinder {
    struct DefaultBinder__Class *klass;
    MonitorData *monitor;
};

struct MethodBase__Array {
    struct MethodBase__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct MethodBase *vector[32];
};

struct ParameterModifier {
    struct Boolean__Array *_byRef;
};

struct ParameterModifier__Boxed {
    struct ParameterModifier__Class *klass;
    MonitorData *monitor;
    struct ParameterModifier fields;
};

struct Boolean__Array {
    struct Boolean__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    bool vector[32];
};

struct ParameterModifier__Array {
    struct ParameterModifier__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct ParameterModifier vector[32];
};

struct __declspec(align(8)) CultureInfo__Fields {
    bool m_isReadOnly;
    int32_t cultureID;
    int32_t parent_lcid;
    int32_t datetime_index;
    int32_t number_index;
    int32_t default_calendar_type;
    bool m_useUserOverride;
    struct NumberFormatInfo *numInfo;
    struct DateTimeFormatInfo *dateTimeInfo;
    struct TextInfo *textInfo;
    struct String *m_name;
    struct String *englishname;
    struct String *nativename;
    struct String *iso3lang;
    struct String *iso2lang;
    struct String *win3lang;
    struct String *territory;
    struct String__Array *native_calendar_names;
    struct CompareInfo *compareInfo;
    struct Void *textinfo_data;
    int32_t m_dataItem;
    struct Calendar *calendar;
    struct CultureInfo *parent_culture;
    bool constructed;
    struct Byte__Array *cached_serialized_form;
    struct CultureData *m_cultureData;
    bool m_isInherited;
};

struct CultureInfo {
    struct CultureInfo__Class *klass;
    MonitorData *monitor;
    struct CultureInfo__Fields fields;
};

struct __declspec(align(8)) NumberFormatInfo__Fields {
    struct Int32__Array *numberGroupSizes;
    struct Int32__Array *currencyGroupSizes;
    struct Int32__Array *percentGroupSizes;
    struct String *positiveSign;
    struct String *negativeSign;
    struct String *numberDecimalSeparator;
    struct String *numberGroupSeparator;
    struct String *currencyGroupSeparator;
    struct String *currencyDecimalSeparator;
    struct String *currencySymbol;
    struct String *ansiCurrencySymbol;
    struct String *nanSymbol;
    struct String *positiveInfinitySymbol;
    struct String *negativeInfinitySymbol;
    struct String *percentDecimalSeparator;
    struct String *percentGroupSeparator;
    struct String *percentSymbol;
    struct String *perMilleSymbol;
    struct String__Array *nativeDigits;
    int32_t m_dataItem;
    int32_t numberDecimalDigits;
    int32_t currencyDecimalDigits;
    int32_t currencyPositivePattern;
    int32_t currencyNegativePattern;
    int32_t numberNegativePattern;
    int32_t percentPositivePattern;
    int32_t percentNegativePattern;
    int32_t percentDecimalDigits;
    int32_t digitSubstitution;
    bool isReadOnly;
    bool m_useUserOverride;
    bool m_isInvariant;
    bool validForParseAsNumber;
    bool validForParseAsCurrency;
};

struct NumberFormatInfo {
    struct NumberFormatInfo__Class *klass;
    MonitorData *monitor;
    struct NumberFormatInfo__Fields fields;
};

#if defined(_CPLUSPLUS_)
enum NumberStyles__Enum : int32_t {
    NumberStyles__Enum_None = 0x00000000,
    NumberStyles__Enum_AllowLeadingWhite = 0x00000001,
    NumberStyles__Enum_AllowTrailingWhite = 0x00000002,
    NumberStyles__Enum_AllowLeadingSign = 0x00000004,
    NumberStyles__Enum_AllowTrailingSign = 0x00000008,
    NumberStyles__Enum_AllowParentheses = 0x00000010,
    NumberStyles__Enum_AllowDecimalPoint = 0x00000020,
    NumberStyles__Enum_AllowThousands = 0x00000040,
    NumberStyles__Enum_AllowExponent = 0x00000080,
    NumberStyles__Enum_AllowCurrencySymbol = 0x00000100,
    NumberStyles__Enum_AllowHexSpecifier = 0x00000200,
    NumberStyles__Enum_Integer = 0x00000007,
    NumberStyles__Enum_HexNumber = 0x00000203,
    NumberStyles__Enum_Number = 0x0000006f,
    NumberStyles__Enum_Float = 0x000000a7,
    NumberStyles__Enum_Currency = 0x0000017f,
    NumberStyles__Enum_Any = 0x000001ff,
};

#else
enum NumberStyles__Enum {
    NumberStyles__Enum_None = 0x00000000,
    NumberStyles__Enum_AllowLeadingWhite = 0x00000001,
    NumberStyles__Enum_AllowTrailingWhite = 0x00000002,
    NumberStyles__Enum_AllowLeadingSign = 0x00000004,
    NumberStyles__Enum_AllowTrailingSign = 0x00000008,
    NumberStyles__Enum_AllowParentheses = 0x00000010,
    NumberStyles__Enum_AllowDecimalPoint = 0x00000020,
    NumberStyles__Enum_AllowThousands = 0x00000040,
    NumberStyles__Enum_AllowExponent = 0x00000080,
    NumberStyles__Enum_AllowCurrencySymbol = 0x00000100,
    NumberStyles__Enum_AllowHexSpecifier = 0x00000200,
    NumberStyles__Enum_Integer = 0x00000007,
    NumberStyles__Enum_HexNumber = 0x00000203,
    NumberStyles__Enum_Number = 0x0000006f,
    NumberStyles__Enum_Float = 0x000000a7,
    NumberStyles__Enum_Currency = 0x0000017f,
    NumberStyles__Enum_Any = 0x000001ff,
};

#endif
struct NumberStyles__Enum__Boxed {
    struct NumberStyles__Enum__Class *klass;
    MonitorData *monitor;
    #if defined(_CPLUSPLUS_)
    enum NumberStyles__Enum value;
    #else
    uint32_t value;
    #endif
};

#if defined(_CPLUSPLUS_)
enum DateTimeFormatFlags__Enum : int32_t {
    DateTimeFormatFlags__Enum_None = 0x00000000,
    DateTimeFormatFlags__Enum_UseGenitiveMonth = 0x00000001,
    DateTimeFormatFlags__Enum_UseLeapYearMonth = 0x00000002,
    DateTimeFormatFlags__Enum_UseSpacesInMonthNames = 0x00000004,
    DateTimeFormatFlags__Enum_UseHebrewRule = 0x00000008,
    DateTimeFormatFlags__Enum_UseSpacesInDayNames = 0x00000010,
    DateTimeFormatFlags__Enum_UseDigitPrefixInTokens = 0x00000020,
    DateTimeFormatFlags__Enum_NotInitialized = 0xffffffff,
};

#else
enum DateTimeFormatFlags__Enum {
    DateTimeFormatFlags__Enum_None = 0x00000000,
    DateTimeFormatFlags__Enum_UseGenitiveMonth = 0x00000001,
    DateTimeFormatFlags__Enum_UseLeapYearMonth = 0x00000002,
    DateTimeFormatFlags__Enum_UseSpacesInMonthNames = 0x00000004,
    DateTimeFormatFlags__Enum_UseHebrewRule = 0x00000008,
    DateTimeFormatFlags__Enum_UseSpacesInDayNames = 0x00000010,
    DateTimeFormatFlags__Enum_UseDigitPrefixInTokens = 0x00000020,
    DateTimeFormatFlags__Enum_NotInitialized = 0xffffffff,
};

#endif
struct DateTimeFormatFlags__Enum__Boxed {
    struct DateTimeFormatFlags__Enum__Class *klass;
    MonitorData *monitor;
    #if defined(_CPLUSPLUS_)
    enum DateTimeFormatFlags__Enum value;
    #else
    uint32_t value;
    #endif
};

struct __declspec(align(8)) DateTimeFormatInfo__Fields {
    struct CultureData *m_cultureData;
    struct String *m_name;
    struct String *m_langName;
    struct CompareInfo *m_compareInfo;
    struct CultureInfo *m_cultureInfo;
    struct String *amDesignator;
    struct String *pmDesignator;
    struct String *dateSeparator;
    struct String *generalShortTimePattern;
    struct String *generalLongTimePattern;
    struct String *timeSeparator;
    struct String *monthDayPattern;
    struct String *dateTimeOffsetPattern;
    struct Calendar *calendar;
    int32_t firstDayOfWeek;
    int32_t calendarWeekRule;
    struct String *fullDateTimePattern;
    struct String__Array *abbreviatedDayNames;
    struct String__Array *m_superShortDayNames;
    struct String__Array *dayNames;
    struct String__Array *abbreviatedMonthNames;
    struct String__Array *monthNames;
    struct String__Array *genitiveMonthNames;
    struct String__Array *m_genitiveAbbreviatedMonthNames;
    struct String__Array *leapYearMonthNames;
    struct String *longDatePattern;
    struct String *shortDatePattern;
    struct String *yearMonthPattern;
    struct String *longTimePattern;
    struct String *shortTimePattern;
    struct String__Array *allYearMonthPatterns;
    struct String__Array *allShortDatePatterns;
    struct String__Array *allLongDatePatterns;
    struct String__Array *allShortTimePatterns;
    struct String__Array *allLongTimePatterns;
    struct String__Array *m_eraNames;
    struct String__Array *m_abbrevEraNames;
    struct String__Array *m_abbrevEnglishEraNames;
    struct Int32__Array *optionalCalendars;
    bool m_isReadOnly;
    #if defined(_CPLUSPLUS_)
    enum DateTimeFormatFlags__Enum formatFlags;
    #else
    uint32_t formatFlags;
    #endif
    int32_t CultureID;
    bool m_useUserOverride;
    bool bUseCalendarInfo;
    int32_t nDataItem;
    bool m_isDefaultCalendar;
    struct String__Array *m_dateWords;
    struct String *m_fullTimeSpanPositivePattern;
    struct String *m_fullTimeSpanNegativePattern;
    struct TokenHashValue__Array *m_dtfiTokenHash;
};

struct DateTimeFormatInfo {
    struct DateTimeFormatInfo__Class *klass;
    MonitorData *monitor;
    struct DateTimeFormatInfo__Fields fields;
};

struct __declspec(align(8)) CultureData__Fields {
    struct String *sAM1159;
    struct String *sPM2359;
    struct String *sTimeSeparator;
    struct String__Array *saLongTimes;
    struct String__Array *saShortTimes;
    int32_t iFirstDayOfWeek;
    int32_t iFirstWeekOfYear;
    struct Int32__Array *waCalendars;
    struct CalendarData__Array *calendars;
    struct String *sISO639Language;
    struct String *sRealName;
    bool bUseOverrides;
    int32_t calendarId;
    int32_t numberIndex;
    int32_t iDefaultAnsiCodePage;
    int32_t iDefaultOemCodePage;
    int32_t iDefaultMacCodePage;
    int32_t iDefaultEbcdicCodePage;
    bool isRightToLeft;
    struct String *sListSeparator;
};

struct CultureData {
    struct CultureData__Class *klass;
    MonitorData *monitor;
    struct CultureData__Fields fields;
};

struct __declspec(align(8)) CalendarData__Fields {
    struct String *sNativeName;
    struct String__Array *saShortDates;
    struct String__Array *saYearMonths;
    struct String__Array *saLongDates;
    struct String *sMonthDay;
    struct String__Array *saEraNames;
    struct String__Array *saAbbrevEraNames;
    struct String__Array *saAbbrevEnglishEraNames;
    struct String__Array *saDayNames;
    struct String__Array *saAbbrevDayNames;
    struct String__Array *saSuperShortDayNames;
    struct String__Array *saMonthNames;
    struct String__Array *saAbbrevMonthNames;
    struct String__Array *saMonthGenitiveNames;
    struct String__Array *saAbbrevMonthGenitiveNames;
    struct String__Array *saLeapYearMonthNames;
    int32_t iTwoDigitYearMax;
    int32_t iCurrentEra;
    bool bUseUserOverrides;
};

struct CalendarData {
    struct CalendarData__Class *klass;
    MonitorData *monitor;
    struct CalendarData__Fields fields;
};

struct CalendarData__Array {
    struct CalendarData__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct CalendarData *vector[32];
};

struct __declspec(align(8)) CompareInfo__Fields {
    struct String *m_name;
    struct String *m_sortName;
    int32_t win32LCID;
    int32_t culture;
    struct SortVersion *m_SortVersion;
    struct SimpleCollator *collator;
};

struct CompareInfo {
    struct CompareInfo__Class *klass;
    MonitorData *monitor;
    struct CompareInfo__Fields fields;
};

#if defined(_CPLUSPLUS_)
enum CompareOptions__Enum : int32_t {
    CompareOptions__Enum_None = 0x00000000,
    CompareOptions__Enum_IgnoreCase = 0x00000001,
    CompareOptions__Enum_IgnoreNonSpace = 0x00000002,
    CompareOptions__Enum_IgnoreSymbols = 0x00000004,
    CompareOptions__Enum_IgnoreKanaType = 0x00000008,
    CompareOptions__Enum_IgnoreWidth = 0x00000010,
    CompareOptions__Enum_OrdinalIgnoreCase = 0x10000000,
    CompareOptions__Enum_StringSort = 0x20000000,
    CompareOptions__Enum_Ordinal = 0x40000000,
};

#else
enum CompareOptions__Enum {
    CompareOptions__Enum_None = 0x00000000,
    CompareOptions__Enum_IgnoreCase = 0x00000001,
    CompareOptions__Enum_IgnoreNonSpace = 0x00000002,
    CompareOptions__Enum_IgnoreSymbols = 0x00000004,
    CompareOptions__Enum_IgnoreKanaType = 0x00000008,
    CompareOptions__Enum_IgnoreWidth = 0x00000010,
    CompareOptions__Enum_OrdinalIgnoreCase = 0x10000000,
    CompareOptions__Enum_StringSort = 0x20000000,
    CompareOptions__Enum_Ordinal = 0x40000000,
};

#endif
struct CompareOptions__Enum__Boxed {
    struct CompareOptions__Enum__Class *klass;
    MonitorData *monitor;
    #if defined(_CPLUSPLUS_)
    enum CompareOptions__Enum value;
    #else
    uint32_t value;
    #endif
};

struct __declspec(align(8)) SortVersion__Fields {
    int32_t m_NlsVersion;
    struct Guid m_SortId;
};

struct SortVersion {
    struct SortVersion__Class *klass;
    MonitorData *monitor;
    struct SortVersion__Fields fields;
};

struct __declspec(align(8)) SimpleCollator__Fields {
    struct TextInfo *textInfo;
    struct CodePointIndexer *cjkIndexer;
    struct Contraction__Array *contractions;
    struct Level2Map__Array *level2Maps;
    struct Byte__Array *unsafeFlags;
    uint8_t *cjkCatTable;
    uint8_t *cjkLv1Table;
    uint8_t *cjkLv2Table;
    struct CodePointIndexer *cjkLv2Indexer;
    int32_t lcid;
    bool frenchSort;
};

struct SimpleCollator {
    struct SimpleCollator__Class *klass;
    MonitorData *monitor;
    struct SimpleCollator__Fields fields;
};

struct Nullable_1_Boolean_ {
    bool value;
    bool has_value;
};

struct Nullable_1_Boolean___Boxed {
    struct Nullable_1_Boolean___Class *klass;
    MonitorData *monitor;
    struct Nullable_1_Boolean_ fields;
};

struct __declspec(align(8)) TextInfo__Fields {
    struct String *m_listSeparator;
    bool m_isReadOnly;
    struct String *m_cultureName;
    struct CultureData *m_cultureData;
    struct String *m_textInfoName;
    struct Nullable_1_Boolean_ m_IsAsciiCasingSameAsInvariant;
    struct String *customCultureName;
    int32_t m_nDataItem;
    bool m_useUserOverride;
    int32_t m_win32LangID;
};

struct TextInfo {
    struct TextInfo__Class *klass;
    MonitorData *monitor;
    struct TextInfo__Fields fields;
};

struct __declspec(align(8)) CodePointIndexer__Fields {
    struct CodePointIndexer_TableRange__Array *ranges;
    int32_t TotalCount;
    int32_t defaultIndex;
    int32_t defaultCP;
};

struct CodePointIndexer {
    struct CodePointIndexer__Class *klass;
    MonitorData *monitor;
    struct CodePointIndexer__Fields fields;
};

struct CodePointIndexer_TableRange {
    int32_t Start;
    int32_t End;
    int32_t Count;
    int32_t IndexStart;
    int32_t IndexEnd;
};

struct CodePointIndexer_TableRange__Boxed {
    struct CodePointIndexer_TableRange__Class *klass;
    MonitorData *monitor;
    struct CodePointIndexer_TableRange fields;
};

struct CodePointIndexer_TableRange__Array {
    struct CodePointIndexer_TableRange__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct CodePointIndexer_TableRange vector[32];
};

struct __declspec(align(8)) Contraction__Fields {
    int32_t Index;
    struct Char__Array *Source;
    struct String *Replacement;
    struct Byte__Array *SortKey;
};

struct Contraction {
    struct Contraction__Class *klass;
    MonitorData *monitor;
    struct Contraction__Fields fields;
};

struct Contraction__Array {
    struct Contraction__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct Contraction *vector[32];
};

struct __declspec(align(8)) Level2Map__Fields {
    uint8_t Source;
    uint8_t Replace;
};

struct Level2Map {
    struct Level2Map__Class *klass;
    MonitorData *monitor;
    struct Level2Map__Fields fields;
};

struct Level2Map__Array {
    struct Level2Map__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct Level2Map *vector[32];
};

struct BytePtr {
    struct BytePtr__Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) Dictionary_2_System_String_Mono_Globalization_Unicode_SimpleCollator___Fields {
    struct Int32__Array *buckets;
    struct Dictionary_2_TKey_TValue_Entry_System_String_Mono_Globalization_Unicode_SimpleCollator___Array *entries;
    int32_t count;
    int32_t version;
    int32_t freeList;
    int32_t freeCount;
    struct IEqualityComparer_1_System_String_ *comparer;
    struct Dictionary_2_TKey_TValue_KeyCollection_System_String_Mono_Globalization_Unicode_SimpleCollator_ *keys;
    struct Dictionary_2_TKey_TValue_ValueCollection_System_String_Mono_Globalization_Unicode_SimpleCollator_ *values;
    struct Object *_syncRoot;
};

struct Dictionary_2_System_String_Mono_Globalization_Unicode_SimpleCollator_ {
    struct Dictionary_2_System_String_Mono_Globalization_Unicode_SimpleCollator___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_System_String_Mono_Globalization_Unicode_SimpleCollator___Fields fields;
};

struct Dictionary_2_TKey_TValue_Entry_System_String_Mono_Globalization_Unicode_SimpleCollator_ {
    int32_t hashCode;
    int32_t next;
    struct String *key;
    struct SimpleCollator *value;
};

struct Dictionary_2_TKey_TValue_Entry_System_String_Mono_Globalization_Unicode_SimpleCollator___Boxed {
    struct Dictionary_2_TKey_TValue_Entry_System_String_Mono_Globalization_Unicode_SimpleCollator___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_Entry_System_String_Mono_Globalization_Unicode_SimpleCollator_ fields;
};

struct Dictionary_2_TKey_TValue_Entry_System_String_Mono_Globalization_Unicode_SimpleCollator___Array {
    struct Dictionary_2_TKey_TValue_Entry_System_String_Mono_Globalization_Unicode_SimpleCollator___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct Dictionary_2_TKey_TValue_Entry_System_String_Mono_Globalization_Unicode_SimpleCollator_ vector[32];
};

struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_System_String_Mono_Globalization_Unicode_SimpleCollator___Fields {
    struct Dictionary_2_System_String_Mono_Globalization_Unicode_SimpleCollator_ *dictionary;
};

struct Dictionary_2_TKey_TValue_KeyCollection_System_String_Mono_Globalization_Unicode_SimpleCollator_ {
    struct Dictionary_2_TKey_TValue_KeyCollection_System_String_Mono_Globalization_Unicode_SimpleCollator___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_KeyCollection_System_String_Mono_Globalization_Unicode_SimpleCollator___Fields fields;
};

struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_System_String_Mono_Globalization_Unicode_SimpleCollator___Fields {
    struct Dictionary_2_System_String_Mono_Globalization_Unicode_SimpleCollator_ *dictionary;
};

struct Dictionary_2_TKey_TValue_ValueCollection_System_String_Mono_Globalization_Unicode_SimpleCollator_ {
    struct Dictionary_2_TKey_TValue_ValueCollection_System_String_Mono_Globalization_Unicode_SimpleCollator___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_ValueCollection_System_String_Mono_Globalization_Unicode_SimpleCollator___Fields fields;
};

struct SimpleCollator__Array {
    struct SimpleCollator__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct SimpleCollator *vector[32];
};

struct IEnumerator_1_Mono_Globalization_Unicode_SimpleCollator_ {
    struct IEnumerator_1_Mono_Globalization_Unicode_SimpleCollator___Class *klass;
    MonitorData *monitor;
};

struct ICollection_1_Mono_Globalization_Unicode_SimpleCollator_ {
    struct ICollection_1_Mono_Globalization_Unicode_SimpleCollator___Class *klass;
    MonitorData *monitor;
};

struct KeyValuePair_2_System_String_Mono_Globalization_Unicode_SimpleCollator_ {
    struct String *key;
    struct SimpleCollator *value;
};

struct KeyValuePair_2_System_String_Mono_Globalization_Unicode_SimpleCollator___Boxed {
    struct KeyValuePair_2_System_String_Mono_Globalization_Unicode_SimpleCollator___Class *klass;
    MonitorData *monitor;
    struct KeyValuePair_2_System_String_Mono_Globalization_Unicode_SimpleCollator_ fields;
};

struct KeyValuePair_2_System_String_Mono_Globalization_Unicode_SimpleCollator___Array {
    struct KeyValuePair_2_System_String_Mono_Globalization_Unicode_SimpleCollator___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct KeyValuePair_2_System_String_Mono_Globalization_Unicode_SimpleCollator_ vector[32];
};

struct IEnumerator_1_KeyValuePair_2_System_String_Mono_Globalization_Unicode_SimpleCollator_ {
    struct IEnumerator_1_KeyValuePair_2_System_String_Mono_Globalization_Unicode_SimpleCollator___Class *klass;
    MonitorData *monitor;
};

struct IEnumerable_1_Mono_Globalization_Unicode_SimpleCollator_ {
    struct IEnumerable_1_Mono_Globalization_Unicode_SimpleCollator___Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) SortKey__Fields {
    struct String *source;
    struct Byte__Array *key;
    #if defined(_CPLUSPLUS_)
    enum CompareOptions__Enum options;
    #else
    uint32_t options;
    #endif
    int32_t lcid;
};

struct SortKey {
    struct SortKey__Class *klass;
    MonitorData *monitor;
    struct SortKey__Fields fields;
};

struct __declspec(align(8)) Calendar__Fields {
    int32_t m_currentEraValue;
    bool m_isReadOnly;
    int32_t twoDigitYearMax;
};

struct Calendar {
    struct Calendar__Class *klass;
    MonitorData *monitor;
    struct Calendar__Fields fields;
};

#if defined(_CPLUSPLUS_)
enum CalendarAlgorithmType__Enum : int32_t {
    CalendarAlgorithmType__Enum_Unknown = 0x00000000,
    CalendarAlgorithmType__Enum_SolarCalendar = 0x00000001,
    CalendarAlgorithmType__Enum_LunarCalendar = 0x00000002,
    CalendarAlgorithmType__Enum_LunisolarCalendar = 0x00000003,
};

#else
enum CalendarAlgorithmType__Enum {
    CalendarAlgorithmType__Enum_Unknown = 0x00000000,
    CalendarAlgorithmType__Enum_SolarCalendar = 0x00000001,
    CalendarAlgorithmType__Enum_LunarCalendar = 0x00000002,
    CalendarAlgorithmType__Enum_LunisolarCalendar = 0x00000003,
};

#endif
struct CalendarAlgorithmType__Enum__Boxed {
    struct CalendarAlgorithmType__Enum__Class *klass;
    MonitorData *monitor;
    #if defined(_CPLUSPLUS_)
    enum CalendarAlgorithmType__Enum value;
    #else
    uint32_t value;
    #endif
};

struct PersianCalendar__Fields {
    struct Calendar__Fields _;
};

struct PersianCalendar {
    struct PersianCalendar__Class *klass;
    MonitorData *monitor;
    struct PersianCalendar__Fields fields;
};

#if defined(_CPLUSPLUS_)
enum DayOfWeek__Enum : int32_t {
    DayOfWeek__Enum_Sunday = 0x00000000,
    DayOfWeek__Enum_Monday = 0x00000001,
    DayOfWeek__Enum_Tuesday = 0x00000002,
    DayOfWeek__Enum_Wednesday = 0x00000003,
    DayOfWeek__Enum_Thursday = 0x00000004,
    DayOfWeek__Enum_Friday = 0x00000005,
    DayOfWeek__Enum_Saturday = 0x00000006,
};

#else
enum DayOfWeek__Enum {
    DayOfWeek__Enum_Sunday = 0x00000000,
    DayOfWeek__Enum_Monday = 0x00000001,
    DayOfWeek__Enum_Tuesday = 0x00000002,
    DayOfWeek__Enum_Wednesday = 0x00000003,
    DayOfWeek__Enum_Thursday = 0x00000004,
    DayOfWeek__Enum_Friday = 0x00000005,
    DayOfWeek__Enum_Saturday = 0x00000006,
};

#endif
struct DayOfWeek__Enum__Boxed {
    struct DayOfWeek__Enum__Class *klass;
    MonitorData *monitor;
    #if defined(_CPLUSPLUS_)
    enum DayOfWeek__Enum value;
    #else
    uint32_t value;
    #endif
};

#if defined(_CPLUSPLUS_)
enum CalendarWeekRule__Enum : int32_t {
    CalendarWeekRule__Enum_FirstDay = 0x00000000,
    CalendarWeekRule__Enum_FirstFullWeek = 0x00000001,
    CalendarWeekRule__Enum_FirstFourDayWeek = 0x00000002,
};

#else
enum CalendarWeekRule__Enum {
    CalendarWeekRule__Enum_FirstDay = 0x00000000,
    CalendarWeekRule__Enum_FirstFullWeek = 0x00000001,
    CalendarWeekRule__Enum_FirstFourDayWeek = 0x00000002,
};

#endif
struct CalendarWeekRule__Enum__Boxed {
    struct CalendarWeekRule__Enum__Class *klass;
    MonitorData *monitor;
    #if defined(_CPLUSPLUS_)
    enum CalendarWeekRule__Enum value;
    #else
    uint32_t value;
    #endif
};

struct __declspec(align(8)) Hashtable__Fields {
    struct Hashtable_bucket__Array *buckets;
    int32_t count;
    int32_t occupancy;
    int32_t loadsize;
    float loadFactor;
    int32_t version;
    bool isWriterInProgress;
    struct ICollection *keys;
    struct ICollection *values;
    struct IEqualityComparer *_keycomparer;
    struct Object *_syncRoot;
};

struct Hashtable {
    struct Hashtable__Class *klass;
    MonitorData *monitor;
    struct Hashtable__Fields fields;
};

struct Hashtable_bucket {
    struct Object *key;
    struct Object *val;
    int32_t hash_coll;
};

struct Hashtable_bucket__Boxed {
    struct Hashtable_bucket__Class *klass;
    MonitorData *monitor;
    struct Hashtable_bucket fields;
};

struct Hashtable_bucket__Array {
    struct Hashtable_bucket__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct Hashtable_bucket vector[32];
};

struct __declspec(align(8)) KeyValuePairs__Fields {
    struct Object *key;
    struct Object *value;
};

struct KeyValuePairs {
    struct KeyValuePairs__Class *klass;
    MonitorData *monitor;
    struct KeyValuePairs__Fields fields;
};

struct KeyValuePairs__Array {
    struct KeyValuePairs__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct KeyValuePairs *vector[32];
};

#if defined(_CPLUSPLUS_)
enum DateTimeStyles__Enum : int32_t {
    DateTimeStyles__Enum_None = 0x00000000,
    DateTimeStyles__Enum_AllowLeadingWhite = 0x00000001,
    DateTimeStyles__Enum_AllowTrailingWhite = 0x00000002,
    DateTimeStyles__Enum_AllowInnerWhite = 0x00000004,
    DateTimeStyles__Enum_AllowWhiteSpaces = 0x00000007,
    DateTimeStyles__Enum_NoCurrentDateDefault = 0x00000008,
    DateTimeStyles__Enum_AdjustToUniversal = 0x00000010,
    DateTimeStyles__Enum_AssumeLocal = 0x00000020,
    DateTimeStyles__Enum_AssumeUniversal = 0x00000040,
    DateTimeStyles__Enum_RoundtripKind = 0x00000080,
};

#else
enum DateTimeStyles__Enum {
    DateTimeStyles__Enum_None = 0x00000000,
    DateTimeStyles__Enum_AllowLeadingWhite = 0x00000001,
    DateTimeStyles__Enum_AllowTrailingWhite = 0x00000002,
    DateTimeStyles__Enum_AllowInnerWhite = 0x00000004,
    DateTimeStyles__Enum_AllowWhiteSpaces = 0x00000007,
    DateTimeStyles__Enum_NoCurrentDateDefault = 0x00000008,
    DateTimeStyles__Enum_AdjustToUniversal = 0x00000010,
    DateTimeStyles__Enum_AssumeLocal = 0x00000020,
    DateTimeStyles__Enum_AssumeUniversal = 0x00000040,
    DateTimeStyles__Enum_RoundtripKind = 0x00000080,
};

#endif
struct DateTimeStyles__Enum__Boxed {
    struct DateTimeStyles__Enum__Class *klass;
    MonitorData *monitor;
    #if defined(_CPLUSPLUS_)
    enum DateTimeStyles__Enum value;
    #else
    uint32_t value;
    #endif
};

#if defined(_CPLUSPLUS_)
enum TokenType__Enum : int32_t {
    TokenType__Enum_NumberToken = 0x00000001,
    TokenType__Enum_YearNumberToken = 0x00000002,
    TokenType__Enum_Am = 0x00000003,
    TokenType__Enum_Pm = 0x00000004,
    TokenType__Enum_MonthToken = 0x00000005,
    TokenType__Enum_EndOfString = 0x00000006,
    TokenType__Enum_DayOfWeekToken = 0x00000007,
    TokenType__Enum_TimeZoneToken = 0x00000008,
    TokenType__Enum_EraToken = 0x00000009,
    TokenType__Enum_DateWordToken = 0x0000000a,
    TokenType__Enum_UnknownToken = 0x0000000b,
    TokenType__Enum_HebrewNumber = 0x0000000c,
    TokenType__Enum_JapaneseEraToken = 0x0000000d,
    TokenType__Enum_TEraToken = 0x0000000e,
    TokenType__Enum_IgnorableSymbol = 0x0000000f,
    TokenType__Enum_SEP_Unk = 0x00000100,
    TokenType__Enum_SEP_End = 0x00000200,
    TokenType__Enum_SEP_Space = 0x00000300,
    TokenType__Enum_SEP_Am = 0x00000400,
    TokenType__Enum_SEP_Pm = 0x00000500,
    TokenType__Enum_SEP_Date = 0x00000600,
    TokenType__Enum_SEP_Time = 0x00000700,
    TokenType__Enum_SEP_YearSuff = 0x00000800,
    TokenType__Enum_SEP_MonthSuff = 0x00000900,
    TokenType__Enum_SEP_DaySuff = 0x00000a00,
    TokenType__Enum_SEP_HourSuff = 0x00000b00,
    TokenType__Enum_SEP_MinuteSuff = 0x00000c00,
    TokenType__Enum_SEP_SecondSuff = 0x00000d00,
    TokenType__Enum_SEP_LocalTimeMark = 0x00000e00,
    TokenType__Enum_SEP_DateOrOffset = 0x00000f00,
    TokenType__Enum_RegularTokenMask = 0x000000ff,
    TokenType__Enum_SeparatorTokenMask = 0x0000ff00,
};

#else
enum TokenType__Enum {
    TokenType__Enum_NumberToken = 0x00000001,
    TokenType__Enum_YearNumberToken = 0x00000002,
    TokenType__Enum_Am = 0x00000003,
    TokenType__Enum_Pm = 0x00000004,
    TokenType__Enum_MonthToken = 0x00000005,
    TokenType__Enum_EndOfString = 0x00000006,
    TokenType__Enum_DayOfWeekToken = 0x00000007,
    TokenType__Enum_TimeZoneToken = 0x00000008,
    TokenType__Enum_EraToken = 0x00000009,
    TokenType__Enum_DateWordToken = 0x0000000a,
    TokenType__Enum_UnknownToken = 0x0000000b,
    TokenType__Enum_HebrewNumber = 0x0000000c,
    TokenType__Enum_JapaneseEraToken = 0x0000000d,
    TokenType__Enum_TEraToken = 0x0000000e,
    TokenType__Enum_IgnorableSymbol = 0x0000000f,
    TokenType__Enum_SEP_Unk = 0x00000100,
    TokenType__Enum_SEP_End = 0x00000200,
    TokenType__Enum_SEP_Space = 0x00000300,
    TokenType__Enum_SEP_Am = 0x00000400,
    TokenType__Enum_SEP_Pm = 0x00000500,
    TokenType__Enum_SEP_Date = 0x00000600,
    TokenType__Enum_SEP_Time = 0x00000700,
    TokenType__Enum_SEP_YearSuff = 0x00000800,
    TokenType__Enum_SEP_MonthSuff = 0x00000900,
    TokenType__Enum_SEP_DaySuff = 0x00000a00,
    TokenType__Enum_SEP_HourSuff = 0x00000b00,
    TokenType__Enum_SEP_MinuteSuff = 0x00000c00,
    TokenType__Enum_SEP_SecondSuff = 0x00000d00,
    TokenType__Enum_SEP_LocalTimeMark = 0x00000e00,
    TokenType__Enum_SEP_DateOrOffset = 0x00000f00,
    TokenType__Enum_RegularTokenMask = 0x000000ff,
    TokenType__Enum_SeparatorTokenMask = 0x0000ff00,
};

#endif
struct TokenType__Enum__Boxed {
    struct TokenType__Enum__Class *klass;
    MonitorData *monitor;
    #if defined(_CPLUSPLUS_)
    enum TokenType__Enum value;
    #else
    uint32_t value;
    #endif
};

struct __declspec(align(8)) TokenHashValue__Fields {
    struct String *tokenString;
    #if defined(_CPLUSPLUS_)
    enum TokenType__Enum tokenType;
    #else
    uint32_t tokenType;
    #endif
    int32_t tokenValue;
};

struct TokenHashValue {
    struct TokenHashValue__Class *klass;
    MonitorData *monitor;
    struct TokenHashValue__Fields fields;
};

struct TokenHashValue__Array {
    struct TokenHashValue__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct TokenHashValue *vector[32];
};

struct __declspec(align(8)) Dictionary_2_System_Int32_System_Globalization_CultureInfo___Fields {
    struct Int32__Array *buckets;
    struct Dictionary_2_TKey_TValue_Entry_System_Int32_System_Globalization_CultureInfo___Array *entries;
    int32_t count;
    int32_t version;
    int32_t freeList;
    int32_t freeCount;
    struct IEqualityComparer_1_System_Int32_ *comparer;
    struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_System_Globalization_CultureInfo_ *keys;
    struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_System_Globalization_CultureInfo_ *values;
    struct Object *_syncRoot;
};

struct Dictionary_2_System_Int32_System_Globalization_CultureInfo_ {
    struct Dictionary_2_System_Int32_System_Globalization_CultureInfo___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_System_Int32_System_Globalization_CultureInfo___Fields fields;
};

struct Dictionary_2_TKey_TValue_Entry_System_Int32_System_Globalization_CultureInfo_ {
    int32_t hashCode;
    int32_t next;
    int32_t key;
    struct CultureInfo *value;
};

struct Dictionary_2_TKey_TValue_Entry_System_Int32_System_Globalization_CultureInfo___Boxed {
    struct Dictionary_2_TKey_TValue_Entry_System_Int32_System_Globalization_CultureInfo___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_Entry_System_Int32_System_Globalization_CultureInfo_ fields;
};

struct Dictionary_2_TKey_TValue_Entry_System_Int32_System_Globalization_CultureInfo___Array {
    struct Dictionary_2_TKey_TValue_Entry_System_Int32_System_Globalization_CultureInfo___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct Dictionary_2_TKey_TValue_Entry_System_Int32_System_Globalization_CultureInfo_ vector[32];
};

struct IEqualityComparer_1_System_Int32_ {
    struct IEqualityComparer_1_System_Int32___Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_System_Int32_System_Globalization_CultureInfo___Fields {
    struct Dictionary_2_System_Int32_System_Globalization_CultureInfo_ *dictionary;
};

struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_System_Globalization_CultureInfo_ {
    struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_System_Globalization_CultureInfo___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_System_Globalization_CultureInfo___Fields fields;
};

struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_System_Int32_System_Globalization_CultureInfo___Fields {
    struct Dictionary_2_System_Int32_System_Globalization_CultureInfo_ *dictionary;
};

struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_System_Globalization_CultureInfo_ {
    struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_System_Globalization_CultureInfo___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_System_Globalization_CultureInfo___Fields fields;
};

struct CultureInfo__Array {
    struct CultureInfo__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct CultureInfo *vector[32];
};

struct IEnumerator_1_System_Globalization_CultureInfo_ {
    struct IEnumerator_1_System_Globalization_CultureInfo___Class *klass;
    MonitorData *monitor;
};

struct ICollection_1_System_Globalization_CultureInfo_ {
    struct ICollection_1_System_Globalization_CultureInfo___Class *klass;
    MonitorData *monitor;
};

struct KeyValuePair_2_System_Int32_System_Globalization_CultureInfo_ {
    int32_t key;
    struct CultureInfo *value;
};

struct KeyValuePair_2_System_Int32_System_Globalization_CultureInfo___Boxed {
    struct KeyValuePair_2_System_Int32_System_Globalization_CultureInfo___Class *klass;
    MonitorData *monitor;
    struct KeyValuePair_2_System_Int32_System_Globalization_CultureInfo_ fields;
};

struct KeyValuePair_2_System_Int32_System_Globalization_CultureInfo___Array {
    struct KeyValuePair_2_System_Int32_System_Globalization_CultureInfo___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct KeyValuePair_2_System_Int32_System_Globalization_CultureInfo_ vector[32];
};

struct IEnumerator_1_KeyValuePair_2_System_Int32_System_Globalization_CultureInfo_ {
    struct IEnumerator_1_KeyValuePair_2_System_Int32_System_Globalization_CultureInfo___Class *klass;
    MonitorData *monitor;
};

struct IEnumerable_1_System_Globalization_CultureInfo_ {
    struct IEnumerable_1_System_Globalization_CultureInfo___Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) Dictionary_2_System_String_System_Globalization_CultureInfo___Fields {
    struct Int32__Array *buckets;
    struct Dictionary_2_TKey_TValue_Entry_System_String_System_Globalization_CultureInfo___Array *entries;
    int32_t count;
    int32_t version;
    int32_t freeList;
    int32_t freeCount;
    struct IEqualityComparer_1_System_String_ *comparer;
    struct Dictionary_2_TKey_TValue_KeyCollection_System_String_System_Globalization_CultureInfo_ *keys;
    struct Dictionary_2_TKey_TValue_ValueCollection_System_String_System_Globalization_CultureInfo_ *values;
    struct Object *_syncRoot;
};

struct Dictionary_2_System_String_System_Globalization_CultureInfo_ {
    struct Dictionary_2_System_String_System_Globalization_CultureInfo___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_System_String_System_Globalization_CultureInfo___Fields fields;
};

struct Dictionary_2_TKey_TValue_Entry_System_String_System_Globalization_CultureInfo_ {
    int32_t hashCode;
    int32_t next;
    struct String *key;
    struct CultureInfo *value;
};

struct Dictionary_2_TKey_TValue_Entry_System_String_System_Globalization_CultureInfo___Boxed {
    struct Dictionary_2_TKey_TValue_Entry_System_String_System_Globalization_CultureInfo___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_Entry_System_String_System_Globalization_CultureInfo_ fields;
};

struct Dictionary_2_TKey_TValue_Entry_System_String_System_Globalization_CultureInfo___Array {
    struct Dictionary_2_TKey_TValue_Entry_System_String_System_Globalization_CultureInfo___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct Dictionary_2_TKey_TValue_Entry_System_String_System_Globalization_CultureInfo_ vector[32];
};

struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_System_String_System_Globalization_CultureInfo___Fields {
    struct Dictionary_2_System_String_System_Globalization_CultureInfo_ *dictionary;
};

struct Dictionary_2_TKey_TValue_KeyCollection_System_String_System_Globalization_CultureInfo_ {
    struct Dictionary_2_TKey_TValue_KeyCollection_System_String_System_Globalization_CultureInfo___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_KeyCollection_System_String_System_Globalization_CultureInfo___Fields fields;
};

struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_System_String_System_Globalization_CultureInfo___Fields {
    struct Dictionary_2_System_String_System_Globalization_CultureInfo_ *dictionary;
};

struct Dictionary_2_TKey_TValue_ValueCollection_System_String_System_Globalization_CultureInfo_ {
    struct Dictionary_2_TKey_TValue_ValueCollection_System_String_System_Globalization_CultureInfo___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_ValueCollection_System_String_System_Globalization_CultureInfo___Fields fields;
};

struct KeyValuePair_2_System_String_System_Globalization_CultureInfo_ {
    struct String *key;
    struct CultureInfo *value;
};

struct KeyValuePair_2_System_String_System_Globalization_CultureInfo___Boxed {
    struct KeyValuePair_2_System_String_System_Globalization_CultureInfo___Class *klass;
    MonitorData *monitor;
    struct KeyValuePair_2_System_String_System_Globalization_CultureInfo_ fields;
};

struct KeyValuePair_2_System_String_System_Globalization_CultureInfo___Array {
    struct KeyValuePair_2_System_String_System_Globalization_CultureInfo___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct KeyValuePair_2_System_String_System_Globalization_CultureInfo_ vector[32];
};

struct IEnumerator_1_KeyValuePair_2_System_String_System_Globalization_CultureInfo_ {
    struct IEnumerator_1_KeyValuePair_2_System_String_System_Globalization_CultureInfo___Class *klass;
    MonitorData *monitor;
};

struct Calendar__Array {
    struct Calendar__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct Calendar *vector[32];
};

struct FieldInfo_1 {
    struct FieldInfo_1__Class *klass;
    MonitorData *monitor;
};

struct RuntimeFieldInfo {
    struct RuntimeFieldInfo__Class *klass;
    MonitorData *monitor;
};

struct RtFieldInfo {
    struct RtFieldInfo__Class *klass;
    MonitorData *monitor;
};

struct RuntimeFieldHandle {
    void *value;
};

struct RuntimeFieldHandle__Boxed {
    struct RuntimeFieldHandle__Class *klass;
    MonitorData *monitor;
    struct RuntimeFieldHandle fields;
};

#if defined(_CPLUSPLUS_)
enum FieldAttributes__Enum : int32_t {
    FieldAttributes__Enum_FieldAccessMask = 0x00000007,
    FieldAttributes__Enum_PrivateScope = 0x00000000,
    FieldAttributes__Enum_Private = 0x00000001,
    FieldAttributes__Enum_FamANDAssem = 0x00000002,
    FieldAttributes__Enum_Assembly = 0x00000003,
    FieldAttributes__Enum_Family = 0x00000004,
    FieldAttributes__Enum_FamORAssem = 0x00000005,
    FieldAttributes__Enum_Public = 0x00000006,
    FieldAttributes__Enum_Static = 0x00000010,
    FieldAttributes__Enum_InitOnly = 0x00000020,
    FieldAttributes__Enum_Literal = 0x00000040,
    FieldAttributes__Enum_NotSerialized = 0x00000080,
    FieldAttributes__Enum_SpecialName = 0x00000200,
    FieldAttributes__Enum_PinvokeImpl = 0x00002000,
    FieldAttributes__Enum_ReservedMask = 0x00009500,
    FieldAttributes__Enum_RTSpecialName = 0x00000400,
    FieldAttributes__Enum_HasFieldMarshal = 0x00001000,
    FieldAttributes__Enum_HasDefault = 0x00008000,
    FieldAttributes__Enum_HasFieldRVA = 0x00000100,
};

#else
enum FieldAttributes__Enum {
    FieldAttributes__Enum_FieldAccessMask = 0x00000007,
    FieldAttributes__Enum_PrivateScope = 0x00000000,
    FieldAttributes__Enum_Private = 0x00000001,
    FieldAttributes__Enum_FamANDAssem = 0x00000002,
    FieldAttributes__Enum_Assembly = 0x00000003,
    FieldAttributes__Enum_Family = 0x00000004,
    FieldAttributes__Enum_FamORAssem = 0x00000005,
    FieldAttributes__Enum_Public = 0x00000006,
    FieldAttributes__Enum_Static = 0x00000010,
    FieldAttributes__Enum_InitOnly = 0x00000020,
    FieldAttributes__Enum_Literal = 0x00000040,
    FieldAttributes__Enum_NotSerialized = 0x00000080,
    FieldAttributes__Enum_SpecialName = 0x00000200,
    FieldAttributes__Enum_PinvokeImpl = 0x00002000,
    FieldAttributes__Enum_ReservedMask = 0x00009500,
    FieldAttributes__Enum_RTSpecialName = 0x00000400,
    FieldAttributes__Enum_HasFieldMarshal = 0x00001000,
    FieldAttributes__Enum_HasDefault = 0x00008000,
    FieldAttributes__Enum_HasFieldRVA = 0x00000100,
};

#endif
struct FieldAttributes__Enum__Boxed {
    struct FieldAttributes__Enum__Class *klass;
    MonitorData *monitor;
    #if defined(_CPLUSPLUS_)
    enum FieldAttributes__Enum value;
    #else
    uint32_t value;
    #endif
};

struct __declspec(align(8)) MonoField__Fields {
    void *klass;
    struct RuntimeFieldHandle fhandle;
    struct String *name;
    struct Type *type;
    #if defined(_CPLUSPLUS_)
    enum FieldAttributes__Enum attrs;
    #else
    uint32_t attrs;
    #endif
};

struct MonoField {
    struct MonoField__Class *klass;
    MonitorData *monitor;
    struct MonoField__Fields fields;
};

struct TypedReference {
    struct RuntimeTypeHandle type;
    void *Value;
    void *Type;
};

struct TypedReference__Boxed {
    struct TypedReference__Class *klass;
    MonitorData *monitor;
    struct TypedReference fields;
};

struct FieldInfo_1__Array {
    struct FieldInfo_1__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct FieldInfo_1 *vector[32];
};

struct PropertyInfo_1 {
    struct PropertyInfo_1__Class *klass;
    MonitorData *monitor;
};

struct RuntimePropertyInfo {
    struct RuntimePropertyInfo__Class *klass;
    MonitorData *monitor;
};

#if defined(_CPLUSPLUS_)
enum PropertyAttributes__Enum : int32_t {
    PropertyAttributes__Enum_None = 0x00000000,
    PropertyAttributes__Enum_SpecialName = 0x00000200,
    PropertyAttributes__Enum_ReservedMask = 0x0000f400,
    PropertyAttributes__Enum_RTSpecialName = 0x00000400,
    PropertyAttributes__Enum_HasDefault = 0x00001000,
    PropertyAttributes__Enum_Reserved2 = 0x00002000,
    PropertyAttributes__Enum_Reserved3 = 0x00004000,
    PropertyAttributes__Enum_Reserved4 = 0x00008000,
};

#else
enum PropertyAttributes__Enum {
    PropertyAttributes__Enum_None = 0x00000000,
    PropertyAttributes__Enum_SpecialName = 0x00000200,
    PropertyAttributes__Enum_ReservedMask = 0x0000f400,
    PropertyAttributes__Enum_RTSpecialName = 0x00000400,
    PropertyAttributes__Enum_HasDefault = 0x00001000,
    PropertyAttributes__Enum_Reserved2 = 0x00002000,
    PropertyAttributes__Enum_Reserved3 = 0x00004000,
    PropertyAttributes__Enum_Reserved4 = 0x00008000,
};

#endif
struct PropertyAttributes__Enum__Boxed {
    struct PropertyAttributes__Enum__Class *klass;
    MonitorData *monitor;
    #if defined(_CPLUSPLUS_)
    enum PropertyAttributes__Enum value;
    #else
    uint32_t value;
    #endif
};

struct MonoPropertyInfo {
    struct Type *parent;
    struct Type *declaring_type;
    struct String *name;
    struct MethodInfo_1 *get_method;
    struct MethodInfo_1 *set_method;
    #if defined(_CPLUSPLUS_)
    enum PropertyAttributes__Enum attrs;
    #else
    uint32_t attrs;
    #endif
};

struct MonoPropertyInfo__Boxed {
    struct MonoPropertyInfo__Class *klass;
    MonitorData *monitor;
    struct MonoPropertyInfo fields;
};

#if defined(_CPLUSPLUS_)
enum PInfo__Enum : int32_t {
    PInfo__Enum_Attributes = 0x00000001,
    PInfo__Enum_GetMethod = 0x00000002,
    PInfo__Enum_SetMethod = 0x00000004,
    PInfo__Enum_ReflectedType = 0x00000008,
    PInfo__Enum_DeclaringType = 0x00000010,
    PInfo__Enum_Name = 0x00000020,
};

#else
enum PInfo__Enum {
    PInfo__Enum_Attributes = 0x00000001,
    PInfo__Enum_GetMethod = 0x00000002,
    PInfo__Enum_SetMethod = 0x00000004,
    PInfo__Enum_ReflectedType = 0x00000008,
    PInfo__Enum_DeclaringType = 0x00000010,
    PInfo__Enum_Name = 0x00000020,
};

#endif
struct PInfo__Enum__Boxed {
    struct PInfo__Enum__Class *klass;
    MonitorData *monitor;
    #if defined(_CPLUSPLUS_)
    enum PInfo__Enum value;
    #else
    uint32_t value;
    #endif
};

struct __declspec(align(8)) MonoProperty__Fields {
    void *klass;
    void *prop;
    struct MonoPropertyInfo info;
    #if defined(_CPLUSPLUS_)
    enum PInfo__Enum cached;
    #else
    uint32_t cached;
    #endif
    struct MonoProperty_GetterAdapter *cached_getter;
};

struct MonoProperty {
    struct MonoProperty__Class *klass;
    MonitorData *monitor;
    struct MonoProperty__Fields fields;
};

struct MethodInfo_1__Array {
    struct MethodInfo_1__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct MethodInfo_1 *vector[32];
};

struct MonoProperty_GetterAdapter__Fields {
    struct MulticastDelegate__Fields _;
};

struct MonoProperty_GetterAdapter {
    struct MonoProperty_GetterAdapter__Class *klass;
    MonitorData *monitor;
    struct MonoProperty_GetterAdapter__Fields fields;
};

struct Delegate__Array {
    struct Delegate__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct Delegate *vector[32];
};

struct IAsyncResult {
    struct IAsyncResult__Class *klass;
    MonitorData *monitor;
};

struct AsyncCallback__Fields {
    struct MulticastDelegate__Fields _;
};

struct AsyncCallback {
    struct AsyncCallback__Class *klass;
    MonitorData *monitor;
    struct AsyncCallback__Fields fields;
};

struct PropertyInfo_1__Array {
    struct PropertyInfo_1__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct PropertyInfo_1 *vector[32];
};

#if defined(_CPLUSPLUS_)
enum MethodAttributes__Enum : int32_t {
    MethodAttributes__Enum_MemberAccessMask = 0x00000007,
    MethodAttributes__Enum_PrivateScope = 0x00000000,
    MethodAttributes__Enum_Private = 0x00000001,
    MethodAttributes__Enum_FamANDAssem = 0x00000002,
    MethodAttributes__Enum_Assembly = 0x00000003,
    MethodAttributes__Enum_Family = 0x00000004,
    MethodAttributes__Enum_FamORAssem = 0x00000005,
    MethodAttributes__Enum_Public = 0x00000006,
    MethodAttributes__Enum_Static = 0x00000010,
    MethodAttributes__Enum_Final = 0x00000020,
    MethodAttributes__Enum_Virtual = 0x00000040,
    MethodAttributes__Enum_HideBySig = 0x00000080,
    MethodAttributes__Enum_CheckAccessOnOverride = 0x00000200,
    MethodAttributes__Enum_VtableLayoutMask = 0x00000100,
    MethodAttributes__Enum_ReuseSlot = 0x00000000,
    MethodAttributes__Enum_NewSlot = 0x00000100,
    MethodAttributes__Enum_Abstract = 0x00000400,
    MethodAttributes__Enum_SpecialName = 0x00000800,
    MethodAttributes__Enum_PinvokeImpl = 0x00002000,
    MethodAttributes__Enum_UnmanagedExport = 0x00000008,
    MethodAttributes__Enum_RTSpecialName = 0x00001000,
    MethodAttributes__Enum_ReservedMask = 0x0000d000,
    MethodAttributes__Enum_HasSecurity = 0x00004000,
    MethodAttributes__Enum_RequireSecObject = 0x00008000,
};

#else
enum MethodAttributes__Enum {
    MethodAttributes__Enum_MemberAccessMask = 0x00000007,
    MethodAttributes__Enum_PrivateScope = 0x00000000,
    MethodAttributes__Enum_Private = 0x00000001,
    MethodAttributes__Enum_FamANDAssem = 0x00000002,
    MethodAttributes__Enum_Assembly = 0x00000003,
    MethodAttributes__Enum_Family = 0x00000004,
    MethodAttributes__Enum_FamORAssem = 0x00000005,
    MethodAttributes__Enum_Public = 0x00000006,
    MethodAttributes__Enum_Static = 0x00000010,
    MethodAttributes__Enum_Final = 0x00000020,
    MethodAttributes__Enum_Virtual = 0x00000040,
    MethodAttributes__Enum_HideBySig = 0x00000080,
    MethodAttributes__Enum_CheckAccessOnOverride = 0x00000200,
    MethodAttributes__Enum_VtableLayoutMask = 0x00000100,
    MethodAttributes__Enum_ReuseSlot = 0x00000000,
    MethodAttributes__Enum_NewSlot = 0x00000100,
    MethodAttributes__Enum_Abstract = 0x00000400,
    MethodAttributes__Enum_SpecialName = 0x00000800,
    MethodAttributes__Enum_PinvokeImpl = 0x00002000,
    MethodAttributes__Enum_UnmanagedExport = 0x00000008,
    MethodAttributes__Enum_RTSpecialName = 0x00001000,
    MethodAttributes__Enum_ReservedMask = 0x0000d000,
    MethodAttributes__Enum_HasSecurity = 0x00004000,
    MethodAttributes__Enum_RequireSecObject = 0x00008000,
};

#endif
struct MethodAttributes__Enum__Boxed {
    struct MethodAttributes__Enum__Class *klass;
    MonitorData *monitor;
    #if defined(_CPLUSPLUS_)
    enum MethodAttributes__Enum value;
    #else
    uint32_t value;
    #endif
};

#if defined(_CPLUSPLUS_)
enum CallingConventions__Enum : int32_t {
    CallingConventions__Enum_Standard = 0x00000001,
    CallingConventions__Enum_VarArgs = 0x00000002,
    CallingConventions__Enum_Any = 0x00000003,
    CallingConventions__Enum_HasThis = 0x00000020,
    CallingConventions__Enum_ExplicitThis = 0x00000040,
};

#else
enum CallingConventions__Enum {
    CallingConventions__Enum_Standard = 0x00000001,
    CallingConventions__Enum_VarArgs = 0x00000002,
    CallingConventions__Enum_Any = 0x00000003,
    CallingConventions__Enum_HasThis = 0x00000020,
    CallingConventions__Enum_ExplicitThis = 0x00000040,
};

#endif
struct CallingConventions__Enum__Boxed {
    struct CallingConventions__Enum__Class *klass;
    MonitorData *monitor;
    #if defined(_CPLUSPLUS_)
    enum CallingConventions__Enum value;
    #else
    uint32_t value;
    #endif
};

struct RuntimeMethodHandle {
    void *value;
};

struct RuntimeMethodHandle__Boxed {
    struct RuntimeMethodHandle__Class *klass;
    MonitorData *monitor;
    struct RuntimeMethodHandle fields;
};

struct __declspec(align(8)) MethodBody__Fields {
    struct ExceptionHandlingClause__Array *clauses;
    struct LocalVariableInfo__Array *locals;
    struct Byte__Array *il;
    bool init_locals;
    int32_t sig_token;
    int32_t max_stack;
};

struct MethodBody {
    struct MethodBody__Class *klass;
    MonitorData *monitor;
    struct MethodBody__Fields fields;
};

#if defined(_CPLUSPLUS_)
enum ExceptionHandlingClauseOptions__Enum : int32_t {
    ExceptionHandlingClauseOptions__Enum_Clause = 0x00000000,
    ExceptionHandlingClauseOptions__Enum_Filter = 0x00000001,
    ExceptionHandlingClauseOptions__Enum_Finally = 0x00000002,
    ExceptionHandlingClauseOptions__Enum_Fault = 0x00000004,
};

#else
enum ExceptionHandlingClauseOptions__Enum {
    ExceptionHandlingClauseOptions__Enum_Clause = 0x00000000,
    ExceptionHandlingClauseOptions__Enum_Filter = 0x00000001,
    ExceptionHandlingClauseOptions__Enum_Finally = 0x00000002,
    ExceptionHandlingClauseOptions__Enum_Fault = 0x00000004,
};

#endif
struct ExceptionHandlingClauseOptions__Enum__Boxed {
    struct ExceptionHandlingClauseOptions__Enum__Class *klass;
    MonitorData *monitor;
    #if defined(_CPLUSPLUS_)
    enum ExceptionHandlingClauseOptions__Enum value;
    #else
    uint32_t value;
    #endif
};

struct __declspec(align(8)) ExceptionHandlingClause__Fields {
    struct Type *catch_type;
    int32_t filter_offset;
    #if defined(_CPLUSPLUS_)
    enum ExceptionHandlingClauseOptions__Enum flags;
    #else
    uint32_t flags;
    #endif
    int32_t try_offset;
    int32_t try_length;
    int32_t handler_offset;
    int32_t handler_length;
};

struct ExceptionHandlingClause {
    struct ExceptionHandlingClause__Class *klass;
    MonitorData *monitor;
    struct ExceptionHandlingClause__Fields fields;
};

struct ExceptionHandlingClause__Array {
    struct ExceptionHandlingClause__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct ExceptionHandlingClause *vector[32];
};

struct __declspec(align(8)) LocalVariableInfo__Fields {
    struct Type *type;
    bool is_pinned;
    uint16_t position;
};

struct LocalVariableInfo {
    struct LocalVariableInfo__Class *klass;
    MonitorData *monitor;
    struct LocalVariableInfo__Fields fields;
};

struct LocalVariableInfo__Array {
    struct LocalVariableInfo__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct LocalVariableInfo *vector[32];
};

struct IList_1_System_Reflection_ExceptionHandlingClause_ {
    struct IList_1_System_Reflection_ExceptionHandlingClause___Class *klass;
    MonitorData *monitor;
};

struct IList_1_System_Reflection_LocalVariableInfo_ {
    struct IList_1_System_Reflection_LocalVariableInfo___Class *klass;
    MonitorData *monitor;
};

struct ICustomAttributeProvider {
    struct ICustomAttributeProvider__Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) DelegateData__Fields {
    struct Type *target_type;
    struct String *method_name;
    bool curried_first_arg;
};

struct DelegateData {
    struct DelegateData__Class *klass;
    MonitorData *monitor;
    struct DelegateData__Fields fields;
};

struct __declspec(align(8)) Assembly__Fields {
    void *_mono_assembly;
    struct Assembly_ResolveEventHolder *resolve_event_holder;
    struct Object *_evidence;
    struct Object *_minimum;
    struct Object *_optional;
    struct Object *_refuse;
    struct Object *_granted;
    struct Object *_denied;
    bool fromByteArray;
    struct String *assemblyName;
};

struct Assembly {
    struct Assembly__Class *klass;
    MonitorData *monitor;
    struct Assembly__Fields fields;
};

struct __declspec(align(8)) Assembly_ResolveEventHolder__Fields {
    struct ModuleResolveEventHandler *ModuleResolve;
};

struct Assembly_ResolveEventHolder {
    struct Assembly_ResolveEventHolder__Class *klass;
    MonitorData *monitor;
    struct Assembly_ResolveEventHolder__Fields fields;
};

struct ModuleResolveEventHandler__Fields {
    struct MulticastDelegate__Fields _;
};

struct ModuleResolveEventHandler {
    struct ModuleResolveEventHandler__Class *klass;
    MonitorData *monitor;
    struct ModuleResolveEventHandler__Fields fields;
};

struct EventArgs {
    struct EventArgs__Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) ResolveEventArgs__Fields {
    struct String *m_Name;
    struct Assembly *m_Requesting;
};

struct ResolveEventArgs {
    struct ResolveEventArgs__Class *klass;
    MonitorData *monitor;
    struct ResolveEventArgs__Fields fields;
};

#if defined(_CPLUSPLUS_)
enum AssemblyNameFlags__Enum : int32_t {
    AssemblyNameFlags__Enum_None = 0x00000000,
    AssemblyNameFlags__Enum_PublicKey = 0x00000001,
    AssemblyNameFlags__Enum_EnableJITcompileOptimizer = 0x00004000,
    AssemblyNameFlags__Enum_EnableJITcompileTracking = 0x00008000,
    AssemblyNameFlags__Enum_Retargetable = 0x00000100,
};

#else
enum AssemblyNameFlags__Enum {
    AssemblyNameFlags__Enum_None = 0x00000000,
    AssemblyNameFlags__Enum_PublicKey = 0x00000001,
    AssemblyNameFlags__Enum_EnableJITcompileOptimizer = 0x00004000,
    AssemblyNameFlags__Enum_EnableJITcompileTracking = 0x00008000,
    AssemblyNameFlags__Enum_Retargetable = 0x00000100,
};

#endif
struct AssemblyNameFlags__Enum__Boxed {
    struct AssemblyNameFlags__Enum__Class *klass;
    MonitorData *monitor;
    #if defined(_CPLUSPLUS_)
    enum AssemblyNameFlags__Enum value;
    #else
    uint32_t value;
    #endif
};

#if defined(_CPLUSPLUS_)
enum AssemblyHashAlgorithm__Enum : int32_t {
    AssemblyHashAlgorithm__Enum_None = 0x00000000,
    AssemblyHashAlgorithm__Enum_MD5 = 0x00008003,
    AssemblyHashAlgorithm__Enum_SHA1 = 0x00008004,
    AssemblyHashAlgorithm__Enum_SHA256 = 0x0000800c,
    AssemblyHashAlgorithm__Enum_SHA384 = 0x0000800d,
    AssemblyHashAlgorithm__Enum_SHA512 = 0x0000800e,
};

#else
enum AssemblyHashAlgorithm__Enum {
    AssemblyHashAlgorithm__Enum_None = 0x00000000,
    AssemblyHashAlgorithm__Enum_MD5 = 0x00008003,
    AssemblyHashAlgorithm__Enum_SHA1 = 0x00008004,
    AssemblyHashAlgorithm__Enum_SHA256 = 0x0000800c,
    AssemblyHashAlgorithm__Enum_SHA384 = 0x0000800d,
    AssemblyHashAlgorithm__Enum_SHA512 = 0x0000800e,
};

#endif
struct AssemblyHashAlgorithm__Enum__Boxed {
    struct AssemblyHashAlgorithm__Enum__Class *klass;
    MonitorData *monitor;
    #if defined(_CPLUSPLUS_)
    enum AssemblyHashAlgorithm__Enum value;
    #else
    uint32_t value;
    #endif
};

#if defined(_CPLUSPLUS_)
enum AssemblyVersionCompatibility__Enum : int32_t {
    AssemblyVersionCompatibility__Enum_SameMachine = 0x00000001,
    AssemblyVersionCompatibility__Enum_SameProcess = 0x00000002,
    AssemblyVersionCompatibility__Enum_SameDomain = 0x00000003,
};

#else
enum AssemblyVersionCompatibility__Enum {
    AssemblyVersionCompatibility__Enum_SameMachine = 0x00000001,
    AssemblyVersionCompatibility__Enum_SameProcess = 0x00000002,
    AssemblyVersionCompatibility__Enum_SameDomain = 0x00000003,
};

#endif
struct AssemblyVersionCompatibility__Enum__Boxed {
    struct AssemblyVersionCompatibility__Enum__Class *klass;
    MonitorData *monitor;
    #if defined(_CPLUSPLUS_)
    enum AssemblyVersionCompatibility__Enum value;
    #else
    uint32_t value;
    #endif
};

#if defined(_CPLUSPLUS_)
enum ProcessorArchitecture__Enum : int32_t {
    ProcessorArchitecture__Enum_None = 0x00000000,
    ProcessorArchitecture__Enum_MSIL = 0x00000001,
    ProcessorArchitecture__Enum_X86 = 0x00000002,
    ProcessorArchitecture__Enum_IA64 = 0x00000003,
    ProcessorArchitecture__Enum_Amd64 = 0x00000004,
    ProcessorArchitecture__Enum_Arm = 0x00000005,
};

#else
enum ProcessorArchitecture__Enum {
    ProcessorArchitecture__Enum_None = 0x00000000,
    ProcessorArchitecture__Enum_MSIL = 0x00000001,
    ProcessorArchitecture__Enum_X86 = 0x00000002,
    ProcessorArchitecture__Enum_IA64 = 0x00000003,
    ProcessorArchitecture__Enum_Amd64 = 0x00000004,
    ProcessorArchitecture__Enum_Arm = 0x00000005,
};

#endif
struct ProcessorArchitecture__Enum__Boxed {
    struct ProcessorArchitecture__Enum__Class *klass;
    MonitorData *monitor;
    #if defined(_CPLUSPLUS_)
    enum ProcessorArchitecture__Enum value;
    #else
    uint32_t value;
    #endif
};

#if defined(_CPLUSPLUS_)
enum AssemblyContentType__Enum : int32_t {
    AssemblyContentType__Enum_Default = 0x00000000,
    AssemblyContentType__Enum_WindowsRuntime = 0x00000001,
};

#else
enum AssemblyContentType__Enum {
    AssemblyContentType__Enum_Default = 0x00000000,
    AssemblyContentType__Enum_WindowsRuntime = 0x00000001,
};

#endif
struct AssemblyContentType__Enum__Boxed {
    struct AssemblyContentType__Enum__Class *klass;
    MonitorData *monitor;
    #if defined(_CPLUSPLUS_)
    enum AssemblyContentType__Enum value;
    #else
    uint32_t value;
    #endif
};

struct __declspec(align(8)) AssemblyName__Fields {
    struct String *name;
    struct String *codebase;
    int32_t major;
    int32_t minor;
    int32_t build;
    int32_t revision;
    struct CultureInfo *cultureinfo;
    #if defined(_CPLUSPLUS_)
    enum AssemblyNameFlags__Enum flags;
    #else
    uint32_t flags;
    #endif
    #if defined(_CPLUSPLUS_)
    enum AssemblyHashAlgorithm__Enum hashalg;
    #else
    uint32_t hashalg;
    #endif
    struct StrongNameKeyPair *keypair;
    struct Byte__Array *publicKey;
    struct Byte__Array *keyToken;
    #if defined(_CPLUSPLUS_)
    enum AssemblyVersionCompatibility__Enum versioncompat;
    #else
    uint32_t versioncompat;
    #endif
    struct Version *version;
    #if defined(_CPLUSPLUS_)
    enum ProcessorArchitecture__Enum processor_architecture;
    #else
    uint32_t processor_architecture;
    #endif
    #if defined(_CPLUSPLUS_)
    enum AssemblyContentType__Enum contentType;
    #else
    uint32_t contentType;
    #endif
};

struct AssemblyName {
    struct AssemblyName__Class *klass;
    MonitorData *monitor;
    struct AssemblyName__Fields fields;
};

struct __declspec(align(8)) StrongNameKeyPair__Fields {
    struct Byte__Array *_publicKey;
    struct String *_keyPairContainer;
    bool _keyPairExported;
    struct Byte__Array *_keyPairArray;
    struct RSA *_rsa;
};

struct StrongNameKeyPair {
    struct StrongNameKeyPair__Class *klass;
    MonitorData *monitor;
    struct StrongNameKeyPair__Fields fields;
};

struct __declspec(align(8)) AsymmetricAlgorithm__Fields {
    int32_t KeySizeValue;
    struct KeySizes__Array *LegalKeySizesValue;
};

struct AsymmetricAlgorithm {
    struct AsymmetricAlgorithm__Class *klass;
    MonitorData *monitor;
    struct AsymmetricAlgorithm__Fields fields;
};

struct RSA__Fields {
    struct AsymmetricAlgorithm__Fields _;
};

struct RSA {
    struct RSA__Class *klass;
    MonitorData *monitor;
    struct RSA__Fields fields;
};

struct __declspec(align(8)) KeySizes__Fields {
    int32_t m_minSize;
    int32_t m_maxSize;
    int32_t m_skipSize;
};

struct KeySizes {
    struct KeySizes__Class *klass;
    MonitorData *monitor;
    struct KeySizes__Fields fields;
};

struct KeySizes__Array {
    struct KeySizes__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct KeySizes *vector[32];
};

#if defined(_CPLUSPLUS_)
enum RSAEncryptionPaddingMode__Enum : int32_t {
    RSAEncryptionPaddingMode__Enum_Pkcs1 = 0x00000000,
    RSAEncryptionPaddingMode__Enum_Oaep = 0x00000001,
};

#else
enum RSAEncryptionPaddingMode__Enum {
    RSAEncryptionPaddingMode__Enum_Pkcs1 = 0x00000000,
    RSAEncryptionPaddingMode__Enum_Oaep = 0x00000001,
};

#endif
struct RSAEncryptionPaddingMode__Enum__Boxed {
    struct RSAEncryptionPaddingMode__Enum__Class *klass;
    MonitorData *monitor;
    #if defined(_CPLUSPLUS_)
    enum RSAEncryptionPaddingMode__Enum value;
    #else
    uint32_t value;
    #endif
};

struct HashAlgorithmName {
    struct String *_name;
};

struct HashAlgorithmName__Boxed {
    struct HashAlgorithmName__Class *klass;
    MonitorData *monitor;
    struct HashAlgorithmName fields;
};

struct __declspec(align(8)) RSAEncryptionPadding__Fields {
    #if defined(_CPLUSPLUS_)
    enum RSAEncryptionPaddingMode__Enum _mode;
    #else
    uint32_t _mode;
    #endif
    struct HashAlgorithmName _oaepHashAlgorithm;
};

struct RSAEncryptionPadding {
    struct RSAEncryptionPadding__Class *klass;
    MonitorData *monitor;
    struct RSAEncryptionPadding__Fields fields;
};

#if defined(_CPLUSPLUS_)
enum RSASignaturePaddingMode__Enum : int32_t {
    RSASignaturePaddingMode__Enum_Pkcs1 = 0x00000000,
    RSASignaturePaddingMode__Enum_Pss = 0x00000001,
};

#else
enum RSASignaturePaddingMode__Enum {
    RSASignaturePaddingMode__Enum_Pkcs1 = 0x00000000,
    RSASignaturePaddingMode__Enum_Pss = 0x00000001,
};

#endif
struct RSASignaturePaddingMode__Enum__Boxed {
    struct RSASignaturePaddingMode__Enum__Class *klass;
    MonitorData *monitor;
    #if defined(_CPLUSPLUS_)
    enum RSASignaturePaddingMode__Enum value;
    #else
    uint32_t value;
    #endif
};

struct __declspec(align(8)) RSASignaturePadding__Fields {
    #if defined(_CPLUSPLUS_)
    enum RSASignaturePaddingMode__Enum _mode;
    #else
    uint32_t _mode;
    #endif
};

struct RSASignaturePadding {
    struct RSASignaturePadding__Class *klass;
    MonitorData *monitor;
    struct RSASignaturePadding__Fields fields;
};

struct __declspec(align(8)) MarshalByRefObject__Fields {
    struct Object *_identity;
};

struct MarshalByRefObject {
    struct MarshalByRefObject__Class *klass;
    MonitorData *monitor;
    struct MarshalByRefObject__Fields fields;
};

struct Stream__Fields {
    struct MarshalByRefObject__Fields _;
    struct Stream_ReadWriteTask *_activeReadWriteTask;
    struct SemaphoreSlim *_asyncActiveSemaphore;
};

struct Stream {
    struct Stream__Class *klass;
    MonitorData *monitor;
    struct Stream__Fields fields;
};

struct __declspec(align(8)) ObjRef__Fields {
    struct IChannelInfo *channel_info;
    struct String *uri;
    struct IRemotingTypeInfo *typeInfo;
    struct IEnvoyInfo *envoyInfo;
    int32_t flags;
    struct Type *_serverType;
};

struct ObjRef {
    struct ObjRef__Class *klass;
    MonitorData *monitor;
    struct ObjRef__Fields fields;
};

struct IChannelInfo {
    struct IChannelInfo__Class *klass;
    MonitorData *monitor;
};

struct IRemotingTypeInfo {
    struct IRemotingTypeInfo__Class *klass;
    MonitorData *monitor;
};

struct IEnvoyInfo {
    struct IEnvoyInfo__Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) Task__Fields {
    int32_t m_taskId;
    struct Object *m_action;
    struct Object *m_stateObject;
    struct TaskScheduler *m_taskScheduler;
    struct Task *m_parent;
    int32_t m_stateFlags;
    struct Object *m_continuationObject;
    struct Task_ContingentProperties *m_contingentProperties;
};

struct Task {
    struct Task__Class *klass;
    MonitorData *monitor;
    struct Task__Fields fields;
};

struct Task_1_System_Int32___Fields {
    struct Task__Fields _;
    int32_t m_result;
};

struct Task_1_System_Int32_ {
    struct Task_1_System_Int32___Class *klass;
    MonitorData *monitor;
    struct Task_1_System_Int32___Fields fields;
};

struct Stream_ReadWriteTask__Fields {
    struct Task_1_System_Int32___Fields _;
    bool _isRead;
    struct Stream *_stream;
    struct Byte__Array *_buffer;
    int32_t _offset;
    int32_t _count;
    struct AsyncCallback *_callback;
    struct ExecutionContext *_context;
};

struct Stream_ReadWriteTask {
    struct Stream_ReadWriteTask__Class *klass;
    MonitorData *monitor;
    struct Stream_ReadWriteTask__Fields fields;
};

struct __declspec(align(8)) StackGuard__Fields {
    int32_t m_inliningDepth;
};

struct StackGuard {
    struct StackGuard__Class *klass;
    MonitorData *monitor;
    struct StackGuard__Fields fields;
};

struct CancellationToken {
    struct CancellationTokenSource *m_source;
};

struct CancellationToken__Boxed {
    struct CancellationToken__Class *klass;
    MonitorData *monitor;
    struct CancellationToken fields;
};

#if defined(_CPLUSPLUS_)
enum TaskCreationOptions__Enum : int32_t {
    TaskCreationOptions__Enum_None = 0x00000000,
    TaskCreationOptions__Enum_PreferFairness = 0x00000001,
    TaskCreationOptions__Enum_LongRunning = 0x00000002,
    TaskCreationOptions__Enum_AttachedToParent = 0x00000004,
    TaskCreationOptions__Enum_DenyChildAttach = 0x00000008,
    TaskCreationOptions__Enum_HideScheduler = 0x00000010,
    TaskCreationOptions__Enum_RunContinuationsAsynchronously = 0x00000040,
};

#else
enum TaskCreationOptions__Enum {
    TaskCreationOptions__Enum_None = 0x00000000,
    TaskCreationOptions__Enum_PreferFairness = 0x00000001,
    TaskCreationOptions__Enum_LongRunning = 0x00000002,
    TaskCreationOptions__Enum_AttachedToParent = 0x00000004,
    TaskCreationOptions__Enum_DenyChildAttach = 0x00000008,
    TaskCreationOptions__Enum_HideScheduler = 0x00000010,
    TaskCreationOptions__Enum_RunContinuationsAsynchronously = 0x00000040,
};

#endif
struct TaskCreationOptions__Enum__Boxed {
    struct TaskCreationOptions__Enum__Class *klass;
    MonitorData *monitor;
    #if defined(_CPLUSPLUS_)
    enum TaskCreationOptions__Enum value;
    #else
    uint32_t value;
    #endif
};

#if defined(_CPLUSPLUS_)
enum TaskContinuationOptions__Enum : int32_t {
    TaskContinuationOptions__Enum_None = 0x00000000,
    TaskContinuationOptions__Enum_PreferFairness = 0x00000001,
    TaskContinuationOptions__Enum_LongRunning = 0x00000002,
    TaskContinuationOptions__Enum_AttachedToParent = 0x00000004,
    TaskContinuationOptions__Enum_DenyChildAttach = 0x00000008,
    TaskContinuationOptions__Enum_HideScheduler = 0x00000010,
    TaskContinuationOptions__Enum_LazyCancellation = 0x00000020,
    TaskContinuationOptions__Enum_RunContinuationsAsynchronously = 0x00000040,
    TaskContinuationOptions__Enum_NotOnRanToCompletion = 0x00010000,
    TaskContinuationOptions__Enum_NotOnFaulted = 0x00020000,
    TaskContinuationOptions__Enum_NotOnCanceled = 0x00040000,
    TaskContinuationOptions__Enum_OnlyOnRanToCompletion = 0x00060000,
    TaskContinuationOptions__Enum_OnlyOnFaulted = 0x00050000,
    TaskContinuationOptions__Enum_OnlyOnCanceled = 0x00030000,
    TaskContinuationOptions__Enum_ExecuteSynchronously = 0x00080000,
};

#else
enum TaskContinuationOptions__Enum {
    TaskContinuationOptions__Enum_None = 0x00000000,
    TaskContinuationOptions__Enum_PreferFairness = 0x00000001,
    TaskContinuationOptions__Enum_LongRunning = 0x00000002,
    TaskContinuationOptions__Enum_AttachedToParent = 0x00000004,
    TaskContinuationOptions__Enum_DenyChildAttach = 0x00000008,
    TaskContinuationOptions__Enum_HideScheduler = 0x00000010,
    TaskContinuationOptions__Enum_LazyCancellation = 0x00000020,
    TaskContinuationOptions__Enum_RunContinuationsAsynchronously = 0x00000040,
    TaskContinuationOptions__Enum_NotOnRanToCompletion = 0x00010000,
    TaskContinuationOptions__Enum_NotOnFaulted = 0x00020000,
    TaskContinuationOptions__Enum_NotOnCanceled = 0x00040000,
    TaskContinuationOptions__Enum_OnlyOnRanToCompletion = 0x00060000,
    TaskContinuationOptions__Enum_OnlyOnFaulted = 0x00050000,
    TaskContinuationOptions__Enum_OnlyOnCanceled = 0x00030000,
    TaskContinuationOptions__Enum_ExecuteSynchronously = 0x00080000,
};

#endif
struct TaskContinuationOptions__Enum__Boxed {
    struct TaskContinuationOptions__Enum__Class *klass;
    MonitorData *monitor;
    #if defined(_CPLUSPLUS_)
    enum TaskContinuationOptions__Enum value;
    #else
    uint32_t value;
    #endif
};

struct __declspec(align(8)) TaskFactory__Fields {
    struct CancellationToken m_defaultCancellationToken;
    struct TaskScheduler *m_defaultScheduler;
    #if defined(_CPLUSPLUS_)
    enum TaskCreationOptions__Enum m_defaultCreationOptions;
    #else
    uint32_t m_defaultCreationOptions;
    #endif
    #if defined(_CPLUSPLUS_)
    enum TaskContinuationOptions__Enum m_defaultContinuationOptions;
    #else
    uint32_t m_defaultContinuationOptions;
    #endif
};

struct TaskFactory {
    struct TaskFactory__Class *klass;
    MonitorData *monitor;
    struct TaskFactory__Fields fields;
};

struct __declspec(align(8)) CancellationTokenSource__Fields {
    struct ManualResetEvent *m_kernelEvent;
    struct SparselyPopulatedArray_1_CancellationCallbackInfo___Array *m_registeredCallbacksLists;
    int32_t m_state;
    int32_t m_threadIDExecutingCallbacks;
    bool m_disposed;
    struct CancellationTokenRegistration__Array *m_linkingRegistrations;
    struct CancellationCallbackInfo *m_executingCallback;
    struct Timer *m_timer;
};

struct CancellationTokenSource {
    struct CancellationTokenSource__Class *klass;
    MonitorData *monitor;
    struct CancellationTokenSource__Fields fields;
};

struct WaitHandle__Fields {
    struct MarshalByRefObject__Fields _;
    void *waitHandle;
    struct SafeWaitHandle *safeWaitHandle;
    bool hasThreadAffinity;
};

struct WaitHandle {
    struct WaitHandle__Class *klass;
    MonitorData *monitor;
    struct WaitHandle__Fields fields;
};

struct EventWaitHandle__Fields {
    struct WaitHandle__Fields _;
};

struct EventWaitHandle {
    struct EventWaitHandle__Class *klass;
    MonitorData *monitor;
    struct EventWaitHandle__Fields fields;
};

struct ManualResetEvent__Fields {
    struct EventWaitHandle__Fields _;
};

struct ManualResetEvent {
    struct ManualResetEvent__Class *klass;
    MonitorData *monitor;
    struct ManualResetEvent__Fields fields;
};

struct CriticalFinalizerObject {
    struct CriticalFinalizerObject__Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) SafeHandle__Fields {
    void *handle;
    int32_t _state;
    bool _ownsHandle;
    bool _fullyInitialized;
};

struct SafeHandle {
    struct SafeHandle__Class *klass;
    MonitorData *monitor;
    struct SafeHandle__Fields fields;
};

struct SafeHandleZeroOrMinusOneIsInvalid__Fields {
    struct SafeHandle__Fields _;
};

struct SafeHandleZeroOrMinusOneIsInvalid {
    struct SafeHandleZeroOrMinusOneIsInvalid__Class *klass;
    MonitorData *monitor;
    struct SafeHandleZeroOrMinusOneIsInvalid__Fields fields;
};

struct SafeWaitHandle__Fields {
    struct SafeHandleZeroOrMinusOneIsInvalid__Fields _;
};

struct SafeWaitHandle {
    struct SafeWaitHandle__Class *klass;
    MonitorData *monitor;
    struct SafeWaitHandle__Fields fields;
};

struct SafeFileHandle__Fields {
    struct SafeHandleZeroOrMinusOneIsInvalid__Fields _;
};

struct SafeFileHandle {
    struct SafeFileHandle__Class *klass;
    MonitorData *monitor;
    struct SafeFileHandle__Fields fields;
};

struct TimeSpan {
    int64_t _ticks;
};

struct TimeSpan__Boxed {
    struct TimeSpan__Class *klass;
    MonitorData *monitor;
    struct TimeSpan fields;
};

struct __declspec(align(8)) SparselyPopulatedArray_1_CancellationCallbackInfo___Fields {
    struct SparselyPopulatedArrayFragment_1_CancellationCallbackInfo_ *m_tail;
};

struct SparselyPopulatedArray_1_CancellationCallbackInfo_ {
    struct SparselyPopulatedArray_1_CancellationCallbackInfo___Class *klass;
    MonitorData *monitor;
    struct SparselyPopulatedArray_1_CancellationCallbackInfo___Fields fields;
};

struct __declspec(align(8)) SparselyPopulatedArrayFragment_1_CancellationCallbackInfo___Fields {
    struct CancellationCallbackInfo__Array *m_elements;
    int32_t m_freeCount;
    struct SparselyPopulatedArrayFragment_1_CancellationCallbackInfo_ *m_next;
    struct SparselyPopulatedArrayFragment_1_CancellationCallbackInfo_ *m_prev;
};

struct SparselyPopulatedArrayFragment_1_CancellationCallbackInfo_ {
    struct SparselyPopulatedArrayFragment_1_CancellationCallbackInfo___Class *klass;
    MonitorData *monitor;
    struct SparselyPopulatedArrayFragment_1_CancellationCallbackInfo___Fields fields;
};

struct __declspec(align(8)) CancellationCallbackInfo__Fields {
    struct Action_1_Object_ *Callback;
    struct Object *StateForCallback;
    struct SynchronizationContext *TargetSyncContext;
    struct ExecutionContext *TargetExecutionContext;
    struct CancellationTokenSource *CancellationTokenSource;
};

struct CancellationCallbackInfo {
    struct CancellationCallbackInfo__Class *klass;
    MonitorData *monitor;
    struct CancellationCallbackInfo__Fields fields;
};

struct Action_1_Object___Fields {
    struct MulticastDelegate__Fields _;
};

struct Action_1_Object_ {
    struct Action_1_Object___Class *klass;
    MonitorData *monitor;
    struct Action_1_Object___Fields fields;
};

#if defined(_CPLUSPLUS_)
enum SynchronizationContextProperties__Enum : int32_t {
    SynchronizationContextProperties__Enum_None = 0x00000000,
    SynchronizationContextProperties__Enum_RequireWaitNotification = 0x00000001,
};

#else
enum SynchronizationContextProperties__Enum {
    SynchronizationContextProperties__Enum_None = 0x00000000,
    SynchronizationContextProperties__Enum_RequireWaitNotification = 0x00000001,
};

#endif
struct SynchronizationContextProperties__Enum__Boxed {
    struct SynchronizationContextProperties__Enum__Class *klass;
    MonitorData *monitor;
    #if defined(_CPLUSPLUS_)
    enum SynchronizationContextProperties__Enum value;
    #else
    uint32_t value;
    #endif
};

struct __declspec(align(8)) SynchronizationContext__Fields {
    #if defined(_CPLUSPLUS_)
    enum SynchronizationContextProperties__Enum _props;
    #else
    uint32_t _props;
    #endif
};

struct SynchronizationContext {
    struct SynchronizationContext__Class *klass;
    MonitorData *monitor;
    struct SynchronizationContext__Fields fields;
};

struct SendOrPostCallback__Fields {
    struct MulticastDelegate__Fields _;
};

struct SendOrPostCallback {
    struct SendOrPostCallback__Class *klass;
    MonitorData *monitor;
    struct SendOrPostCallback__Fields fields;
};

struct IntPtr__Array {
    struct IntPtr__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    void *vector[32];
};

#if defined(_CPLUSPLUS_)
enum ExecutionContext_Flags__Enum : int32_t {
    ExecutionContext_Flags__Enum_None = 0x00000000,
    ExecutionContext_Flags__Enum_IsNewCapture = 0x00000001,
    ExecutionContext_Flags__Enum_IsFlowSuppressed = 0x00000002,
    ExecutionContext_Flags__Enum_IsPreAllocatedDefault = 0x00000004,
};

#else
enum ExecutionContext_Flags__Enum {
    ExecutionContext_Flags__Enum_None = 0x00000000,
    ExecutionContext_Flags__Enum_IsNewCapture = 0x00000001,
    ExecutionContext_Flags__Enum_IsFlowSuppressed = 0x00000002,
    ExecutionContext_Flags__Enum_IsPreAllocatedDefault = 0x00000004,
};

#endif
struct ExecutionContext_Flags__Enum__Boxed {
    struct ExecutionContext_Flags__Enum__Class *klass;
    MonitorData *monitor;
    #if defined(_CPLUSPLUS_)
    enum ExecutionContext_Flags__Enum value;
    #else
    uint32_t value;
    #endif
};

struct __declspec(align(8)) ExecutionContext__Fields {
    struct SynchronizationContext *_syncContext;
    struct SynchronizationContext *_syncContextNoFlow;
    struct LogicalCallContext *_logicalCallContext;
    struct IllogicalCallContext *_illogicalCallContext;
    #if defined(_CPLUSPLUS_)
    enum ExecutionContext_Flags__Enum _flags;
    #else
    uint32_t _flags;
    #endif
    struct Dictionary_2_System_Threading_IAsyncLocal_System_Object_ *_localValues;
    struct List_1_System_Threading_IAsyncLocal_ *_localChangeNotifications;
};

struct ExecutionContext {
    struct ExecutionContext__Class *klass;
    MonitorData *monitor;
    struct ExecutionContext__Fields fields;
};

struct __declspec(align(8)) LogicalCallContext__Fields {
    struct Hashtable *m_Datastore;
    struct CallContextRemotingData *m_RemotingData;
    struct CallContextSecurityData *m_SecurityData;
    struct Object *m_HostContext;
    bool m_IsCorrelationMgr;
    struct Header__Array *_sendHeaders;
    struct Header__Array *_recvHeaders;
};

struct LogicalCallContext {
    struct LogicalCallContext__Class *klass;
    MonitorData *monitor;
    struct LogicalCallContext__Fields fields;
};

struct __declspec(align(8)) CallContextRemotingData__Fields {
    struct String *_logicalCallID;
};

struct CallContextRemotingData {
    struct CallContextRemotingData__Class *klass;
    MonitorData *monitor;
    struct CallContextRemotingData__Fields fields;
};

struct __declspec(align(8)) CallContextSecurityData__Fields {
    struct IPrincipal *_principal;
};

struct CallContextSecurityData {
    struct CallContextSecurityData__Class *klass;
    MonitorData *monitor;
    struct CallContextSecurityData__Fields fields;
};

struct IPrincipal {
    struct IPrincipal__Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) Header__Fields {
    struct String *HeaderNamespace;
    bool MustUnderstand;
    struct String *Name;
    struct Object *Value;
};

struct Header {
    struct Header__Class *klass;
    MonitorData *monitor;
    struct Header__Fields fields;
};

struct Header__Array {
    struct Header__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct Header *vector[32];
};

struct __declspec(align(8)) IllogicalCallContext__Fields {
    struct Hashtable *m_Datastore;
    struct Object *m_HostContext;
};

struct IllogicalCallContext {
    struct IllogicalCallContext__Class *klass;
    MonitorData *monitor;
    struct IllogicalCallContext__Fields fields;
};

struct __declspec(align(8)) Dictionary_2_System_Threading_IAsyncLocal_System_Object___Fields {
    struct Int32__Array *buckets;
    struct Dictionary_2_TKey_TValue_Entry_System_Threading_IAsyncLocal_System_Object___Array *entries;
    int32_t count;
    int32_t version;
    int32_t freeList;
    int32_t freeCount;
    struct IEqualityComparer_1_System_Threading_IAsyncLocal_ *comparer;
    struct Dictionary_2_TKey_TValue_KeyCollection_System_Threading_IAsyncLocal_System_Object_ *keys;
    struct Dictionary_2_TKey_TValue_ValueCollection_System_Threading_IAsyncLocal_System_Object_ *values;
    struct Object *_syncRoot;
};

struct Dictionary_2_System_Threading_IAsyncLocal_System_Object_ {
    struct Dictionary_2_System_Threading_IAsyncLocal_System_Object___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_System_Threading_IAsyncLocal_System_Object___Fields fields;
};

struct Dictionary_2_TKey_TValue_Entry_System_Threading_IAsyncLocal_System_Object_ {
    int32_t hashCode;
    int32_t next;
    struct IAsyncLocal *key;
    struct Object *value;
};

struct Dictionary_2_TKey_TValue_Entry_System_Threading_IAsyncLocal_System_Object___Boxed {
    struct Dictionary_2_TKey_TValue_Entry_System_Threading_IAsyncLocal_System_Object___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_Entry_System_Threading_IAsyncLocal_System_Object_ fields;
};

struct IAsyncLocal {
    struct IAsyncLocal__Class *klass;
    MonitorData *monitor;
};

struct Dictionary_2_TKey_TValue_Entry_System_Threading_IAsyncLocal_System_Object___Array {
    struct Dictionary_2_TKey_TValue_Entry_System_Threading_IAsyncLocal_System_Object___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct Dictionary_2_TKey_TValue_Entry_System_Threading_IAsyncLocal_System_Object_ vector[32];
};

struct IEqualityComparer_1_System_Threading_IAsyncLocal_ {
    struct IEqualityComparer_1_System_Threading_IAsyncLocal___Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_System_Threading_IAsyncLocal_System_Object___Fields {
    struct Dictionary_2_System_Threading_IAsyncLocal_System_Object_ *dictionary;
};

struct Dictionary_2_TKey_TValue_KeyCollection_System_Threading_IAsyncLocal_System_Object_ {
    struct Dictionary_2_TKey_TValue_KeyCollection_System_Threading_IAsyncLocal_System_Object___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_KeyCollection_System_Threading_IAsyncLocal_System_Object___Fields fields;
};

struct IAsyncLocal__Array {
    struct IAsyncLocal__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct IAsyncLocal *vector[32];
};

struct IEnumerator_1_System_Threading_IAsyncLocal_ {
    struct IEnumerator_1_System_Threading_IAsyncLocal___Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_System_Threading_IAsyncLocal_System_Object___Fields {
    struct Dictionary_2_System_Threading_IAsyncLocal_System_Object_ *dictionary;
};

struct Dictionary_2_TKey_TValue_ValueCollection_System_Threading_IAsyncLocal_System_Object_ {
    struct Dictionary_2_TKey_TValue_ValueCollection_System_Threading_IAsyncLocal_System_Object___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_ValueCollection_System_Threading_IAsyncLocal_System_Object___Fields fields;
};

struct IEnumerator_1_System_Object_ {
    struct IEnumerator_1_System_Object___Class *klass;
    MonitorData *monitor;
};

struct ICollection_1_System_Threading_IAsyncLocal_ {
    struct ICollection_1_System_Threading_IAsyncLocal___Class *klass;
    MonitorData *monitor;
};

struct ICollection_1_System_Object_ {
    struct ICollection_1_System_Object___Class *klass;
    MonitorData *monitor;
};

struct KeyValuePair_2_System_Threading_IAsyncLocal_System_Object_ {
    struct IAsyncLocal *key;
    struct Object *value;
};

struct KeyValuePair_2_System_Threading_IAsyncLocal_System_Object___Boxed {
    struct KeyValuePair_2_System_Threading_IAsyncLocal_System_Object___Class *klass;
    MonitorData *monitor;
    struct KeyValuePair_2_System_Threading_IAsyncLocal_System_Object_ fields;
};

struct KeyValuePair_2_System_Threading_IAsyncLocal_System_Object___Array {
    struct KeyValuePair_2_System_Threading_IAsyncLocal_System_Object___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct KeyValuePair_2_System_Threading_IAsyncLocal_System_Object_ vector[32];
};

struct IEnumerator_1_KeyValuePair_2_System_Threading_IAsyncLocal_System_Object_ {
    struct IEnumerator_1_KeyValuePair_2_System_Threading_IAsyncLocal_System_Object___Class *klass;
    MonitorData *monitor;
};

struct IEnumerable_1_System_Threading_IAsyncLocal_ {
    struct IEnumerable_1_System_Threading_IAsyncLocal___Class *klass;
    MonitorData *monitor;
};

struct IEnumerable_1_System_Object_ {
    struct IEnumerable_1_System_Object___Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) List_1_System_Threading_IAsyncLocal___Fields {
    struct IAsyncLocal__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_System_Threading_IAsyncLocal_ {
    struct List_1_System_Threading_IAsyncLocal___Class *klass;
    MonitorData *monitor;
    struct List_1_System_Threading_IAsyncLocal___Fields fields;
};

struct ContextCallback__Fields {
    struct MulticastDelegate__Fields _;
};

struct ContextCallback {
    struct ContextCallback__Class *klass;
    MonitorData *monitor;
    struct ContextCallback__Fields fields;
};

struct CancellationCallbackInfo__Array {
    struct CancellationCallbackInfo__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct CancellationCallbackInfo *vector[32];
};

struct SparselyPopulatedArray_1_CancellationCallbackInfo___Array {
    struct SparselyPopulatedArray_1_CancellationCallbackInfo___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct SparselyPopulatedArray_1_CancellationCallbackInfo_ *vector[32];
};

struct SparselyPopulatedArrayAddInfo_1_CancellationCallbackInfo_ {
    struct SparselyPopulatedArrayFragment_1_CancellationCallbackInfo_ *m_source;
    int32_t m_index;
};

struct SparselyPopulatedArrayAddInfo_1_CancellationCallbackInfo___Boxed {
    struct SparselyPopulatedArrayAddInfo_1_CancellationCallbackInfo___Class *klass;
    MonitorData *monitor;
    struct SparselyPopulatedArrayAddInfo_1_CancellationCallbackInfo_ fields;
};

struct CancellationTokenRegistration {
    struct CancellationCallbackInfo *m_callbackInfo;
    struct SparselyPopulatedArrayAddInfo_1_CancellationCallbackInfo_ m_registrationInfo;
};

struct CancellationTokenRegistration__Boxed {
    struct CancellationTokenRegistration__Class *klass;
    MonitorData *monitor;
    struct CancellationTokenRegistration fields;
};

struct CancellationTokenRegistration__Array {
    struct CancellationTokenRegistration__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct CancellationTokenRegistration vector[32];
};

struct Timer__Fields {
    struct MarshalByRefObject__Fields _;
    struct TimerCallback *callback;
    struct Object *state;
    int64_t due_time_ms;
    int64_t period_ms;
    int64_t next_run;
    bool disposed;
};

struct Timer {
    struct Timer__Class *klass;
    MonitorData *monitor;
    struct Timer__Fields fields;
};

struct __declspec(align(8)) Timer_Scheduler__Fields {
    struct SortedList *list;
    struct ManualResetEvent *changed;
};

struct Timer_Scheduler {
    struct Timer_Scheduler__Class *klass;
    MonitorData *monitor;
    struct Timer_Scheduler__Fields fields;
};

struct __declspec(align(8)) SortedList__Fields {
    struct Object__Array *keys;
    struct Object__Array *values;
    int32_t _size;
    int32_t version;
    struct IComparer *comparer;
    struct SortedList_KeyList *keyList;
    struct SortedList_ValueList *valueList;
    struct Object *_syncRoot;
};

struct SortedList {
    struct SortedList__Class *klass;
    MonitorData *monitor;
    struct SortedList__Fields fields;
};

struct __declspec(align(8)) SortedList_KeyList__Fields {
    struct SortedList *sortedList;
};

struct SortedList_KeyList {
    struct SortedList_KeyList__Class *klass;
    MonitorData *monitor;
    struct SortedList_KeyList__Fields fields;
};

struct __declspec(align(8)) SortedList_ValueList__Fields {
    struct SortedList *sortedList;
};

struct SortedList_ValueList {
    struct SortedList_ValueList__Class *klass;
    MonitorData *monitor;
    struct SortedList_ValueList__Fields fields;
};

struct IList {
    struct IList__Class *klass;
    MonitorData *monitor;
};

struct TimerCallback__Fields {
    struct MulticastDelegate__Fields _;
};

struct TimerCallback {
    struct TimerCallback__Class *klass;
    MonitorData *monitor;
    struct TimerCallback__Fields fields;
};

struct __declspec(align(8)) TaskScheduler__Fields {
    int32_t m_taskSchedulerId;
};

struct TaskScheduler {
    struct TaskScheduler__Class *klass;
    MonitorData *monitor;
    struct TaskScheduler__Fields fields;
};

struct __declspec(align(8)) ConditionalWeakTable_2_System_Threading_Tasks_TaskScheduler_System_Object___Fields {
    struct Ephemeron__Array *data;
    struct Object *_lock;
    int32_t size;
};

struct ConditionalWeakTable_2_System_Threading_Tasks_TaskScheduler_System_Object_ {
    struct ConditionalWeakTable_2_System_Threading_Tasks_TaskScheduler_System_Object___Class *klass;
    MonitorData *monitor;
    struct ConditionalWeakTable_2_System_Threading_Tasks_TaskScheduler_System_Object___Fields fields;
};

struct Ephemeron {
    struct Object *key;
    struct Object *value;
};

struct Ephemeron__Boxed {
    struct Ephemeron__Class *klass;
    MonitorData *monitor;
    struct Ephemeron fields;
};

struct Ephemeron__Array {
    struct Ephemeron__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct Ephemeron vector[32];
};

struct EventHandler_1_System_Threading_Tasks_UnobservedTaskExceptionEventArgs___Fields {
    struct MulticastDelegate__Fields _;
};

struct EventHandler_1_System_Threading_Tasks_UnobservedTaskExceptionEventArgs_ {
    struct EventHandler_1_System_Threading_Tasks_UnobservedTaskExceptionEventArgs___Class *klass;
    MonitorData *monitor;
    struct EventHandler_1_System_Threading_Tasks_UnobservedTaskExceptionEventArgs___Fields fields;
};

struct __declspec(align(8)) UnobservedTaskExceptionEventArgs__Fields {
    struct AggregateException *m_exception;
    bool m_observed;
};

struct UnobservedTaskExceptionEventArgs {
    struct UnobservedTaskExceptionEventArgs__Class *klass;
    MonitorData *monitor;
    struct UnobservedTaskExceptionEventArgs__Fields fields;
};

struct __declspec(align(8)) Exception__Fields {
    struct String *_className;
    struct String *_message;
    struct IDictionary *_data;
    struct Exception *_innerException;
    struct String *_helpURL;
    struct Object *_stackTrace;
    struct String *_stackTraceString;
    struct String *_remoteStackTraceString;
    int32_t _remoteStackIndex;
    struct Object *_dynamicMethods;
    int32_t _HResult;
    struct String *_source;
    struct SafeSerializationManager *_safeSerializationManager;
    struct StackTrace__Array *captured_traces;
    struct IntPtr__Array *native_trace_ips;
};

struct Exception {
    struct Exception__Class *klass;
    MonitorData *monitor;
    struct Exception__Fields fields;
};

struct AggregateException__Fields {
    struct Exception__Fields _;
    struct ReadOnlyCollection_1_System_Exception_ *m_innerExceptions;
};

struct AggregateException {
    struct AggregateException__Class *klass;
    MonitorData *monitor;
    struct AggregateException__Fields fields;
};

struct IDictionary {
    struct IDictionary__Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) SafeSerializationManager__Fields {
    struct IList_1_System_Object_ *m_serializedStates;
    struct SerializationInfo *m_savedSerializationInfo;
    struct Object *m_realObject;
    struct RuntimeType *m_realType;
    struct EventHandler_1_System_Runtime_Serialization_SafeSerializationEventArgs_ *SerializeObjectState;
};

struct SafeSerializationManager {
    struct SafeSerializationManager__Class *klass;
    MonitorData *monitor;
    struct SafeSerializationManager__Fields fields;
};

struct IList_1_System_Object_ {
    struct IList_1_System_Object___Class *klass;
    MonitorData *monitor;
};

struct EventHandler_1_System_Runtime_Serialization_SafeSerializationEventArgs___Fields {
    struct MulticastDelegate__Fields _;
};

struct EventHandler_1_System_Runtime_Serialization_SafeSerializationEventArgs_ {
    struct EventHandler_1_System_Runtime_Serialization_SafeSerializationEventArgs___Class *klass;
    MonitorData *monitor;
    struct EventHandler_1_System_Runtime_Serialization_SafeSerializationEventArgs___Fields fields;
};

struct __declspec(align(8)) SafeSerializationEventArgs__Fields {
    struct StreamingContext m_streamingContext;
    struct List_1_System_Object_ *m_serializedStates;
};

struct SafeSerializationEventArgs {
    struct SafeSerializationEventArgs__Class *klass;
    MonitorData *monitor;
    struct SafeSerializationEventArgs__Fields fields;
};

struct __declspec(align(8)) List_1_System_Object___Fields {
    struct Object__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_System_Object_ {
    struct List_1_System_Object___Class *klass;
    MonitorData *monitor;
    struct List_1_System_Object___Fields fields;
};

struct __declspec(align(8)) StackTrace__Fields {
    struct StackFrame__Array *frames;
    struct StackTrace__Array *captured_traces;
    bool debug_info;
};

struct StackTrace {
    struct StackTrace__Class *klass;
    MonitorData *monitor;
    struct StackTrace__Fields fields;
};

struct __declspec(align(8)) StackFrame__Fields {
    int32_t ilOffset;
    int32_t nativeOffset;
    int64_t methodAddress;
    uint32_t methodIndex;
    struct MethodBase *methodBase;
    struct String *fileName;
    int32_t lineNumber;
    int32_t columnNumber;
    struct String *internalMethodName;
};

struct StackFrame {
    struct StackFrame__Class *klass;
    MonitorData *monitor;
    struct StackFrame__Fields fields;
};

struct StackFrame__Array {
    struct StackFrame__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct StackFrame *vector[32];
};

struct StackTrace__Array {
    struct StackTrace__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct StackTrace *vector[32];
};

struct __declspec(align(8)) ReadOnlyCollection_1_System_Exception___Fields {
    struct IList_1_System_Exception_ *list;
    struct Object *_syncRoot;
};

struct ReadOnlyCollection_1_System_Exception_ {
    struct ReadOnlyCollection_1_System_Exception___Class *klass;
    MonitorData *monitor;
    struct ReadOnlyCollection_1_System_Exception___Fields fields;
};

struct IList_1_System_Exception_ {
    struct IList_1_System_Exception___Class *klass;
    MonitorData *monitor;
};

struct Exception__Array {
    struct Exception__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct Exception *vector[32];
};

struct IEnumerator_1_System_Exception_ {
    struct IEnumerator_1_System_Exception___Class *klass;
    MonitorData *monitor;
};

#if defined(_CPLUSPLUS_)
enum ConcurrentExclusiveSchedulerPair_ProcessingMode__Enum : uint8_t {
    ConcurrentExclusiveSchedulerPair_ProcessingMode__Enum_NotCurrentlyProcessing = 0x00000000,
    ConcurrentExclusiveSchedulerPair_ProcessingMode__Enum_ProcessingExclusiveTask = 0x00000001,
    ConcurrentExclusiveSchedulerPair_ProcessingMode__Enum_ProcessingConcurrentTasks = 0x00000002,
    ConcurrentExclusiveSchedulerPair_ProcessingMode__Enum_Completing = 0x00000004,
    ConcurrentExclusiveSchedulerPair_ProcessingMode__Enum_Completed = 0x00000008,
};

#else
enum ConcurrentExclusiveSchedulerPair_ProcessingMode__Enum {
    ConcurrentExclusiveSchedulerPair_ProcessingMode__Enum_NotCurrentlyProcessing = 0x00000000,
    ConcurrentExclusiveSchedulerPair_ProcessingMode__Enum_ProcessingExclusiveTask = 0x00000001,
    ConcurrentExclusiveSchedulerPair_ProcessingMode__Enum_ProcessingConcurrentTasks = 0x00000002,
    ConcurrentExclusiveSchedulerPair_ProcessingMode__Enum_Completing = 0x00000004,
    ConcurrentExclusiveSchedulerPair_ProcessingMode__Enum_Completed = 0x00000008,
};

#endif
struct ConcurrentExclusiveSchedulerPair_ProcessingMode__Enum__Boxed {
    struct ConcurrentExclusiveSchedulerPair_ProcessingMode__Enum__Class *klass;
    MonitorData *monitor;
    #if defined(_CPLUSPLUS_)
    enum ConcurrentExclusiveSchedulerPair_ProcessingMode__Enum value;
    #else
    uint8_t value;
    #endif
};

struct ConcurrentExclusiveSchedulerPair_ConcurrentExclusiveTaskScheduler__Fields {
    struct TaskScheduler__Fields _;
    struct ConcurrentExclusiveSchedulerPair *m_pair;
    int32_t m_maxConcurrencyLevel;
    #if defined(_CPLUSPLUS_)
    enum ConcurrentExclusiveSchedulerPair_ProcessingMode__Enum m_processingMode;
    #else
    uint8_t m_processingMode;
    #endif
    struct IProducerConsumerQueue_1_Task_ *m_tasks;
};

struct ConcurrentExclusiveSchedulerPair_ConcurrentExclusiveTaskScheduler {
    struct ConcurrentExclusiveSchedulerPair_ConcurrentExclusiveTaskScheduler__Class *klass;
    MonitorData *monitor;
    struct ConcurrentExclusiveSchedulerPair_ConcurrentExclusiveTaskScheduler__Fields fields;
};

struct Func_2_Object_Boolean___Fields {
    struct MulticastDelegate__Fields _;
};

struct Func_2_Object_Boolean_ {
    struct Func_2_Object_Boolean___Class *klass;
    MonitorData *monitor;
    struct Func_2_Object_Boolean___Fields fields;
};

struct __declspec(align(8)) ConcurrentExclusiveSchedulerPair__Fields {
    struct ConcurrentDictionary_2_System_Int32_System_Threading_Tasks_ConcurrentExclusiveSchedulerPair_ProcessingMode_ *m_threadProcessingMapping;
    struct ConcurrentExclusiveSchedulerPair_ConcurrentExclusiveTaskScheduler *m_concurrentTaskScheduler;
    struct ConcurrentExclusiveSchedulerPair_ConcurrentExclusiveTaskScheduler *m_exclusiveTaskScheduler;
    struct TaskScheduler *m_underlyingTaskScheduler;
    int32_t m_maxConcurrencyLevel;
    int32_t m_maxItemsPerTask;
    int32_t m_processingCount;
    struct ConcurrentExclusiveSchedulerPair_CompletionState *m_completionState;
};

struct ConcurrentExclusiveSchedulerPair {
    struct ConcurrentExclusiveSchedulerPair__Class *klass;
    MonitorData *monitor;
    struct ConcurrentExclusiveSchedulerPair__Fields fields;
};

struct __declspec(align(8)) ConcurrentDictionary_2_System_Int32_System_Threading_Tasks_ConcurrentExclusiveSchedulerPair_ProcessingMode___Fields {
    struct ConcurrentDictionary_2_TKey_TValue_Tables_System_Int32_System_Threading_Tasks_ConcurrentExclusiveSchedulerPair_ProcessingMode_ *_tables;
    struct IEqualityComparer_1_System_Int32_ *_comparer;
    bool _growLockArray;
    int32_t _budget;
};

struct ConcurrentDictionary_2_System_Int32_System_Threading_Tasks_ConcurrentExclusiveSchedulerPair_ProcessingMode_ {
    struct ConcurrentDictionary_2_System_Int32_System_Threading_Tasks_ConcurrentExclusiveSchedulerPair_ProcessingMode___Class *klass;
    MonitorData *monitor;
    struct ConcurrentDictionary_2_System_Int32_System_Threading_Tasks_ConcurrentExclusiveSchedulerPair_ProcessingMode___Fields fields;
};

struct __declspec(align(8)) ConcurrentDictionary_2_TKey_TValue_Tables_System_Int32_System_Threading_Tasks_ConcurrentExclusiveSchedulerPair_ProcessingMode___Fields {
    struct ConcurrentDictionary_2_TKey_TValue_Node_System_Int32_System_Threading_Tasks_ConcurrentExclusiveSchedulerPair_ProcessingMode___Array *_buckets;
    struct Object__Array *_locks;
    struct Int32__Array *_countPerLock;
};

struct ConcurrentDictionary_2_TKey_TValue_Tables_System_Int32_System_Threading_Tasks_ConcurrentExclusiveSchedulerPair_ProcessingMode_ {
    struct ConcurrentDictionary_2_TKey_TValue_Tables_System_Int32_System_Threading_Tasks_ConcurrentExclusiveSchedulerPair_ProcessingMode___Class *klass;
    MonitorData *monitor;
    struct ConcurrentDictionary_2_TKey_TValue_Tables_System_Int32_System_Threading_Tasks_ConcurrentExclusiveSchedulerPair_ProcessingMode___Fields fields;
};

struct __declspec(align(8)) ConcurrentDictionary_2_TKey_TValue_Node_System_Int32_System_Threading_Tasks_ConcurrentExclusiveSchedulerPair_ProcessingMode___Fields {
    int32_t _key;
    #if defined(_CPLUSPLUS_)
    enum ConcurrentExclusiveSchedulerPair_ProcessingMode__Enum _value;
    #else
    uint8_t _value;
    #endif
    struct ConcurrentDictionary_2_TKey_TValue_Node_System_Int32_System_Threading_Tasks_ConcurrentExclusiveSchedulerPair_ProcessingMode_ *_next;
    int32_t _hashcode;
};

struct ConcurrentDictionary_2_TKey_TValue_Node_System_Int32_System_Threading_Tasks_ConcurrentExclusiveSchedulerPair_ProcessingMode_ {
    struct ConcurrentDictionary_2_TKey_TValue_Node_System_Int32_System_Threading_Tasks_ConcurrentExclusiveSchedulerPair_ProcessingMode___Class *klass;
    MonitorData *monitor;
    struct ConcurrentDictionary_2_TKey_TValue_Node_System_Int32_System_Threading_Tasks_ConcurrentExclusiveSchedulerPair_ProcessingMode___Fields fields;
};

struct ConcurrentDictionary_2_TKey_TValue_Node_System_Int32_System_Threading_Tasks_ConcurrentExclusiveSchedulerPair_ProcessingMode___Array {
    struct ConcurrentDictionary_2_TKey_TValue_Node_System_Int32_System_Threading_Tasks_ConcurrentExclusiveSchedulerPair_ProcessingMode___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct ConcurrentDictionary_2_TKey_TValue_Node_System_Int32_System_Threading_Tasks_ConcurrentExclusiveSchedulerPair_ProcessingMode_ *vector[32];
};

struct ICollection_1_System_Threading_Tasks_ConcurrentExclusiveSchedulerPair_ProcessingMode_ {
    struct ICollection_1_System_Threading_Tasks_ConcurrentExclusiveSchedulerPair_ProcessingMode___Class *klass;
    MonitorData *monitor;
};

struct KeyValuePair_2_System_Int32_System_Threading_Tasks_ConcurrentExclusiveSchedulerPair_ProcessingMode_ {
    int32_t key;
    #if defined(_CPLUSPLUS_)
    enum ConcurrentExclusiveSchedulerPair_ProcessingMode__Enum value;
    #else
    uint8_t value;
    #endif
};

struct KeyValuePair_2_System_Int32_System_Threading_Tasks_ConcurrentExclusiveSchedulerPair_ProcessingMode___Boxed {
    struct KeyValuePair_2_System_Int32_System_Threading_Tasks_ConcurrentExclusiveSchedulerPair_ProcessingMode___Class *klass;
    MonitorData *monitor;
    struct KeyValuePair_2_System_Int32_System_Threading_Tasks_ConcurrentExclusiveSchedulerPair_ProcessingMode_ fields;
};

struct KeyValuePair_2_System_Int32_System_Threading_Tasks_ConcurrentExclusiveSchedulerPair_ProcessingMode___Array {
    struct KeyValuePair_2_System_Int32_System_Threading_Tasks_ConcurrentExclusiveSchedulerPair_ProcessingMode___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct KeyValuePair_2_System_Int32_System_Threading_Tasks_ConcurrentExclusiveSchedulerPair_ProcessingMode_ vector[32];
};

struct IEnumerator_1_KeyValuePair_2_System_Int32_System_Threading_Tasks_ConcurrentExclusiveSchedulerPair_ProcessingMode_ {
    struct IEnumerator_1_KeyValuePair_2_System_Int32_System_Threading_Tasks_ConcurrentExclusiveSchedulerPair_ProcessingMode___Class *klass;
    MonitorData *monitor;
};

struct IEnumerable_1_System_Threading_Tasks_ConcurrentExclusiveSchedulerPair_ProcessingMode_ {
    struct IEnumerable_1_System_Threading_Tasks_ConcurrentExclusiveSchedulerPair_ProcessingMode___Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) TaskCompletionSource_1_VoidTaskResult___Fields {
    struct Task_1_VoidTaskResult_ *m_task;
};

struct TaskCompletionSource_1_VoidTaskResult_ {
    struct TaskCompletionSource_1_VoidTaskResult___Class *klass;
    MonitorData *monitor;
    struct TaskCompletionSource_1_VoidTaskResult___Fields fields;
};

struct ConcurrentExclusiveSchedulerPair_CompletionState__Fields {
    struct TaskCompletionSource_1_VoidTaskResult___Fields _;
    bool m_completionRequested;
    bool m_completionQueued;
    struct List_1_System_Exception_ *m_exceptions;
};

struct ConcurrentExclusiveSchedulerPair_CompletionState {
    struct ConcurrentExclusiveSchedulerPair_CompletionState__Class *klass;
    MonitorData *monitor;
    struct ConcurrentExclusiveSchedulerPair_CompletionState__Fields fields;
};

struct VoidTaskResult {
};

struct VoidTaskResult__Boxed {
    struct VoidTaskResult__Class *klass;
    MonitorData *monitor;
    struct VoidTaskResult fields;
};

struct Task_1_VoidTaskResult___Fields {
    struct Task__Fields _;
    struct VoidTaskResult m_result;
};

struct Task_1_VoidTaskResult_ {
    struct Task_1_VoidTaskResult___Class *klass;
    MonitorData *monitor;
    struct Task_1_VoidTaskResult___Fields fields;
};

struct __declspec(align(8)) TaskFactory_1_VoidTaskResult___Fields {
    struct CancellationToken m_defaultCancellationToken;
    struct TaskScheduler *m_defaultScheduler;
    #if defined(_CPLUSPLUS_)
    enum TaskCreationOptions__Enum m_defaultCreationOptions;
    #else
    uint32_t m_defaultCreationOptions;
    #endif
    #if defined(_CPLUSPLUS_)
    enum TaskContinuationOptions__Enum m_defaultContinuationOptions;
    #else
    uint32_t m_defaultContinuationOptions;
    #endif
};

struct TaskFactory_1_VoidTaskResult_ {
    struct TaskFactory_1_VoidTaskResult___Class *klass;
    MonitorData *monitor;
    struct TaskFactory_1_VoidTaskResult___Fields fields;
};

struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1___Fields {
    struct MulticastDelegate__Fields _;
};

struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1_ {
    struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1___Class *klass;
    MonitorData *monitor;
    struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1___Fields fields;
};

struct Task_1_Task___Fields {
    struct Task__Fields _;
    struct Task *m_result;
};

struct Task_1_Task_ {
    struct Task_1_Task___Class *klass;
    MonitorData *monitor;
    struct Task_1_Task___Fields fields;
};

struct __declspec(align(8)) TaskFactory_1_Task___Fields {
    struct CancellationToken m_defaultCancellationToken;
    struct TaskScheduler *m_defaultScheduler;
    #if defined(_CPLUSPLUS_)
    enum TaskCreationOptions__Enum m_defaultCreationOptions;
    #else
    uint32_t m_defaultCreationOptions;
    #endif
    #if defined(_CPLUSPLUS_)
    enum TaskContinuationOptions__Enum m_defaultContinuationOptions;
    #else
    uint32_t m_defaultContinuationOptions;
    #endif
};

struct TaskFactory_1_Task_ {
    struct TaskFactory_1_Task___Class *klass;
    MonitorData *monitor;
    struct TaskFactory_1_Task___Fields fields;
};

struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__1__Fields {
    struct MulticastDelegate__Fields _;
};

struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__1 {
    struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__1__Class *klass;
    MonitorData *monitor;
    struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__1__Fields fields;
};

struct SystemException__Fields {
    struct Exception__Fields _;
};

struct SystemException {
    struct SystemException__Class *klass;
    MonitorData *monitor;
    struct SystemException__Fields fields;
};

struct ThreadAbortException__Fields {
    struct SystemException__Fields _;
};

struct ThreadAbortException {
    struct ThreadAbortException__Class *klass;
    MonitorData *monitor;
    struct ThreadAbortException__Fields fields;
};

#if defined(_CPLUSPLUS_)
enum InternalTaskOptions__Enum : int32_t {
    InternalTaskOptions__Enum_None = 0x00000000,
    InternalTaskOptions__Enum_InternalOptionsMask = 0x0000ff00,
    InternalTaskOptions__Enum_ChildReplica = 0x00000100,
    InternalTaskOptions__Enum_ContinuationTask = 0x00000200,
    InternalTaskOptions__Enum_PromiseTask = 0x00000400,
    InternalTaskOptions__Enum_SelfReplicating = 0x00000800,
    InternalTaskOptions__Enum_LazyCancellation = 0x00001000,
    InternalTaskOptions__Enum_QueuedByRuntime = 0x00002000,
    InternalTaskOptions__Enum_DoNotDispose = 0x00004000,
};

#else
enum InternalTaskOptions__Enum {
    InternalTaskOptions__Enum_None = 0x00000000,
    InternalTaskOptions__Enum_InternalOptionsMask = 0x0000ff00,
    InternalTaskOptions__Enum_ChildReplica = 0x00000100,
    InternalTaskOptions__Enum_ContinuationTask = 0x00000200,
    InternalTaskOptions__Enum_PromiseTask = 0x00000400,
    InternalTaskOptions__Enum_SelfReplicating = 0x00000800,
    InternalTaskOptions__Enum_LazyCancellation = 0x00001000,
    InternalTaskOptions__Enum_QueuedByRuntime = 0x00002000,
    InternalTaskOptions__Enum_DoNotDispose = 0x00004000,
};

#endif
struct InternalTaskOptions__Enum__Boxed {
    struct InternalTaskOptions__Enum__Class *klass;
    MonitorData *monitor;
    #if defined(_CPLUSPLUS_)
    enum InternalTaskOptions__Enum value;
    #else
    uint32_t value;
    #endif
};

struct __declspec(align(8)) List_1_System_Exception___Fields {
    struct Exception__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_System_Exception_ {
    struct List_1_System_Exception___Class *klass;
    MonitorData *monitor;
    struct List_1_System_Exception___Fields fields;
};

struct IProducerConsumerQueue_1_Task_ {
    struct IProducerConsumerQueue_1_Task___Class *klass;
    MonitorData *monitor;
};

struct IEnumerable_1_System_Threading_Tasks_Task_ {
    struct IEnumerable_1_System_Threading_Tasks_Task___Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) Dictionary_2_System_Int32_System_Threading_Tasks_Task___Fields {
    struct Int32__Array *buckets;
    struct Dictionary_2_TKey_TValue_Entry_System_Int32_System_Threading_Tasks_Task___Array *entries;
    int32_t count;
    int32_t version;
    int32_t freeList;
    int32_t freeCount;
    struct IEqualityComparer_1_System_Int32_ *comparer;
    struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_System_Threading_Tasks_Task_ *keys;
    struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_System_Threading_Tasks_Task_ *values;
    struct Object *_syncRoot;
};

struct Dictionary_2_System_Int32_System_Threading_Tasks_Task_ {
    struct Dictionary_2_System_Int32_System_Threading_Tasks_Task___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_System_Int32_System_Threading_Tasks_Task___Fields fields;
};

struct Dictionary_2_TKey_TValue_Entry_System_Int32_System_Threading_Tasks_Task_ {
    int32_t hashCode;
    int32_t next;
    int32_t key;
    struct Task *value;
};

struct Dictionary_2_TKey_TValue_Entry_System_Int32_System_Threading_Tasks_Task___Boxed {
    struct Dictionary_2_TKey_TValue_Entry_System_Int32_System_Threading_Tasks_Task___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_Entry_System_Int32_System_Threading_Tasks_Task_ fields;
};

struct Dictionary_2_TKey_TValue_Entry_System_Int32_System_Threading_Tasks_Task___Array {
    struct Dictionary_2_TKey_TValue_Entry_System_Int32_System_Threading_Tasks_Task___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct Dictionary_2_TKey_TValue_Entry_System_Int32_System_Threading_Tasks_Task_ vector[32];
};

struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_System_Int32_System_Threading_Tasks_Task___Fields {
    struct Dictionary_2_System_Int32_System_Threading_Tasks_Task_ *dictionary;
};

struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_System_Threading_Tasks_Task_ {
    struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_System_Threading_Tasks_Task___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_System_Threading_Tasks_Task___Fields fields;
};

struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_System_Int32_System_Threading_Tasks_Task___Fields {
    struct Dictionary_2_System_Int32_System_Threading_Tasks_Task_ *dictionary;
};

struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_System_Threading_Tasks_Task_ {
    struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_System_Threading_Tasks_Task___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_System_Threading_Tasks_Task___Fields fields;
};

struct Task__Array {
    struct Task__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct Task *vector[32];
};

struct IEnumerator_1_System_Threading_Tasks_Task_ {
    struct IEnumerator_1_System_Threading_Tasks_Task___Class *klass;
    MonitorData *monitor;
};

struct ICollection_1_System_Threading_Tasks_Task_ {
    struct ICollection_1_System_Threading_Tasks_Task___Class *klass;
    MonitorData *monitor;
};

struct KeyValuePair_2_System_Int32_System_Threading_Tasks_Task_ {
    int32_t key;
    struct Task *value;
};

struct KeyValuePair_2_System_Int32_System_Threading_Tasks_Task___Boxed {
    struct KeyValuePair_2_System_Int32_System_Threading_Tasks_Task___Class *klass;
    MonitorData *monitor;
    struct KeyValuePair_2_System_Int32_System_Threading_Tasks_Task_ fields;
};

struct KeyValuePair_2_System_Int32_System_Threading_Tasks_Task___Array {
    struct KeyValuePair_2_System_Int32_System_Threading_Tasks_Task___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct KeyValuePair_2_System_Int32_System_Threading_Tasks_Task_ vector[32];
};

struct IEnumerator_1_KeyValuePair_2_System_Int32_System_Threading_Tasks_Task_ {
    struct IEnumerator_1_KeyValuePair_2_System_Int32_System_Threading_Tasks_Task___Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) Task_ContingentProperties__Fields {
    struct ExecutionContext *m_capturedContext;
    struct ManualResetEventSlim *m_completionEvent;
    struct TaskExceptionHolder *m_exceptionsHolder;
    struct CancellationToken m_cancellationToken;
    struct Shared_1_System_Threading_CancellationTokenRegistration_ *m_cancellationRegistration;
    int32_t m_internalCancellationRequested;
    int32_t m_completionCountdown;
    struct List_1_System_Threading_Tasks_Task_ *m_exceptionalChildren;
};

struct Task_ContingentProperties {
    struct Task_ContingentProperties__Class *klass;
    MonitorData *monitor;
    struct Task_ContingentProperties__Fields fields;
};

struct __declspec(align(8)) ManualResetEventSlim__Fields {
    struct Object *m_lock;
    struct ManualResetEvent *m_eventObj;
    int32_t m_combinedState;
};

struct ManualResetEventSlim {
    struct ManualResetEventSlim__Class *klass;
    MonitorData *monitor;
    struct ManualResetEventSlim__Fields fields;
};

struct __declspec(align(8)) TaskExceptionHolder__Fields {
    struct Task *m_task;
    struct List_1_System_Runtime_ExceptionServices_ExceptionDispatchInfo_ *m_faultExceptions;
    struct ExceptionDispatchInfo *m_cancellationException;
    bool m_isHandled;
};

struct TaskExceptionHolder {
    struct TaskExceptionHolder__Class *klass;
    MonitorData *monitor;
    struct TaskExceptionHolder__Fields fields;
};

struct EventHandler__Fields {
    struct MulticastDelegate__Fields _;
};

struct EventHandler {
    struct EventHandler__Class *klass;
    MonitorData *monitor;
    struct EventHandler__Fields fields;
};

struct __declspec(align(8)) List_1_System_Runtime_ExceptionServices_ExceptionDispatchInfo___Fields {
    struct ExceptionDispatchInfo__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_System_Runtime_ExceptionServices_ExceptionDispatchInfo_ {
    struct List_1_System_Runtime_ExceptionServices_ExceptionDispatchInfo___Class *klass;
    MonitorData *monitor;
    struct List_1_System_Runtime_ExceptionServices_ExceptionDispatchInfo___Fields fields;
};

struct __declspec(align(8)) ExceptionDispatchInfo__Fields {
    struct Exception *m_Exception;
    struct Object *m_stackTrace;
};

struct ExceptionDispatchInfo {
    struct ExceptionDispatchInfo__Class *klass;
    MonitorData *monitor;
    struct ExceptionDispatchInfo__Fields fields;
};

struct ExceptionDispatchInfo__Array {
    struct ExceptionDispatchInfo__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct ExceptionDispatchInfo *vector[32];
};

struct IEnumerator_1_System_Runtime_ExceptionServices_ExceptionDispatchInfo_ {
    struct IEnumerator_1_System_Runtime_ExceptionServices_ExceptionDispatchInfo___Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) Shared_1_System_Threading_CancellationTokenRegistration___Fields {
    struct CancellationTokenRegistration Value;
};

struct Shared_1_System_Threading_CancellationTokenRegistration_ {
    struct Shared_1_System_Threading_CancellationTokenRegistration___Class *klass;
    MonitorData *monitor;
    struct Shared_1_System_Threading_CancellationTokenRegistration___Fields fields;
};

struct __declspec(align(8)) List_1_System_Threading_Tasks_Task___Fields {
    struct Task__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_System_Threading_Tasks_Task_ {
    struct List_1_System_Threading_Tasks_Task___Class *klass;
    MonitorData *monitor;
    struct List_1_System_Threading_Tasks_Task___Fields fields;
};

struct Func_1_System_Threading_Tasks_Task_ContingentProperties___Fields {
    struct MulticastDelegate__Fields _;
};

struct Func_1_System_Threading_Tasks_Task_ContingentProperties_ {
    struct Func_1_System_Threading_Tasks_Task_ContingentProperties___Class *klass;
    MonitorData *monitor;
    struct Func_1_System_Threading_Tasks_Task_ContingentProperties___Fields fields;
};

struct Predicate_1_System_Threading_Tasks_Task___Fields {
    struct MulticastDelegate__Fields _;
};

struct Predicate_1_System_Threading_Tasks_Task_ {
    struct Predicate_1_System_Threading_Tasks_Task___Class *klass;
    MonitorData *monitor;
    struct Predicate_1_System_Threading_Tasks_Task___Fields fields;
};

struct Predicate_1_Object___Fields {
    struct MulticastDelegate__Fields _;
};

struct Predicate_1_Object_ {
    struct Predicate_1_Object___Class *klass;
    MonitorData *monitor;
    struct Predicate_1_Object___Fields fields;
};

struct __declspec(align(8)) TaskFactory_1_System_Int32___Fields {
    struct CancellationToken m_defaultCancellationToken;
    struct TaskScheduler *m_defaultScheduler;
    #if defined(_CPLUSPLUS_)
    enum TaskCreationOptions__Enum m_defaultCreationOptions;
    #else
    uint32_t m_defaultCreationOptions;
    #endif
    #if defined(_CPLUSPLUS_)
    enum TaskContinuationOptions__Enum m_defaultContinuationOptions;
    #else
    uint32_t m_defaultContinuationOptions;
    #endif
};

struct TaskFactory_1_System_Int32_ {
    struct TaskFactory_1_System_Int32___Class *klass;
    MonitorData *monitor;
    struct TaskFactory_1_System_Int32___Fields fields;
};

struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__2__Fields {
    struct MulticastDelegate__Fields _;
};

struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__2 {
    struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__2__Class *klass;
    MonitorData *monitor;
    struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__2__Fields fields;
};

struct __declspec(align(8)) SemaphoreSlim__Fields {
    int32_t m_currentCount;
    int32_t m_maxCount;
    int32_t m_waitCount;
    struct Object *m_lockObj;
    struct ManualResetEvent *m_waitHandle;
    struct SemaphoreSlim_TaskNode *m_asyncHead;
    struct SemaphoreSlim_TaskNode *m_asyncTail;
};

struct SemaphoreSlim {
    struct SemaphoreSlim__Class *klass;
    MonitorData *monitor;
    struct SemaphoreSlim__Fields fields;
};

struct Task_1_System_Boolean___Fields {
    struct Task__Fields _;
    bool m_result;
};

struct Task_1_System_Boolean_ {
    struct Task_1_System_Boolean___Class *klass;
    MonitorData *monitor;
    struct Task_1_System_Boolean___Fields fields;
};

struct SemaphoreSlim_TaskNode__Fields {
    struct Task_1_System_Boolean___Fields _;
    struct SemaphoreSlim_TaskNode *Prev;
    struct SemaphoreSlim_TaskNode *Next;
};

struct SemaphoreSlim_TaskNode {
    struct SemaphoreSlim_TaskNode__Class *klass;
    MonitorData *monitor;
    struct SemaphoreSlim_TaskNode__Fields fields;
};

struct __declspec(align(8)) TaskFactory_1_System_Boolean___Fields {
    struct CancellationToken m_defaultCancellationToken;
    struct TaskScheduler *m_defaultScheduler;
    #if defined(_CPLUSPLUS_)
    enum TaskCreationOptions__Enum m_defaultCreationOptions;
    #else
    uint32_t m_defaultCreationOptions;
    #endif
    #if defined(_CPLUSPLUS_)
    enum TaskContinuationOptions__Enum m_defaultContinuationOptions;
    #else
    uint32_t m_defaultContinuationOptions;
    #endif
};

struct TaskFactory_1_System_Boolean_ {
    struct TaskFactory_1_System_Boolean___Class *klass;
    MonitorData *monitor;
    struct TaskFactory_1_System_Boolean___Fields fields;
};

struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__3__Fields {
    struct MulticastDelegate__Fields _;
};

struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__3 {
    struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__3__Class *klass;
    MonitorData *monitor;
    struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__3__Fields fields;
};

#if defined(_CPLUSPLUS_)
enum FileAccess__Enum : int32_t {
    FileAccess__Enum_Read = 0x00000001,
    FileAccess__Enum_Write = 0x00000002,
    FileAccess__Enum_ReadWrite = 0x00000003,
};

#else
enum FileAccess__Enum {
    FileAccess__Enum_Read = 0x00000001,
    FileAccess__Enum_Write = 0x00000002,
    FileAccess__Enum_ReadWrite = 0x00000003,
};

#endif
struct FileAccess__Enum__Boxed {
    struct FileAccess__Enum__Class *klass;
    MonitorData *monitor;
    #if defined(_CPLUSPLUS_)
    enum FileAccess__Enum value;
    #else
    uint32_t value;
    #endif
};

struct UnmanagedMemoryStream__Fields {
    struct Stream__Fields _;
    struct SafeBuffer *_buffer;
    uint8_t *_mem;
    int64_t _length;
    int64_t _capacity;
    int64_t _position;
    int64_t _offset;
    #if defined(_CPLUSPLUS_)
    enum FileAccess__Enum _access;
    #else
    uint32_t _access;
    #endif
    bool _isOpen;
    struct Task_1_System_Int32_ *_lastReadTask;
};

struct UnmanagedMemoryStream {
    struct UnmanagedMemoryStream__Class *klass;
    MonitorData *monitor;
    struct UnmanagedMemoryStream__Fields fields;
};

struct SafeBuffer__Fields {
    struct SafeHandleZeroOrMinusOneIsInvalid__Fields _;
    uint64_t byte_length;
    uint8_t *last_byte;
    bool inited;
};

struct SafeBuffer {
    struct SafeBuffer__Class *klass;
    MonitorData *monitor;
    struct SafeBuffer__Fields fields;
};

#if defined(_CPLUSPLUS_)
enum SeekOrigin__Enum : int32_t {
    SeekOrigin__Enum_Begin = 0x00000000,
    SeekOrigin__Enum_Current = 0x00000001,
    SeekOrigin__Enum_End = 0x00000002,
};

#else
enum SeekOrigin__Enum {
    SeekOrigin__Enum_Begin = 0x00000000,
    SeekOrigin__Enum_Current = 0x00000001,
    SeekOrigin__Enum_End = 0x00000002,
};

#endif
struct SeekOrigin__Enum__Boxed {
    struct SeekOrigin__Enum__Class *klass;
    MonitorData *monitor;
    #if defined(_CPLUSPLUS_)
    enum SeekOrigin__Enum value;
    #else
    uint32_t value;
    #endif
};

struct Span_1_Byte_ {
    struct Pinnable_1_Byte_ *_pinnable;
    void *_byteOffset;
    int32_t _length;
};

struct Span_1_Byte___Boxed {
    struct Span_1_Byte___Class *klass;
    MonitorData *monitor;
    struct Span_1_Byte_ fields;
};

struct __declspec(align(8)) Pinnable_1_Byte___Fields {
    uint8_t Data;
};

struct Pinnable_1_Byte_ {
    struct Pinnable_1_Byte___Class *klass;
    MonitorData *monitor;
    struct Pinnable_1_Byte___Fields fields;
};

struct ReadOnlySpan_1_Byte_ {
    struct Pinnable_1_Byte_ *_pinnable;
    void *_byteOffset;
    int32_t _length;
};

struct ReadOnlySpan_1_Byte___Boxed {
    struct ReadOnlySpan_1_Byte___Class *klass;
    MonitorData *monitor;
    struct ReadOnlySpan_1_Byte_ fields;
};

struct ValueTask_1_System_Int32_ {
    struct Task_1_System_Int32_ *_task;
    int32_t _result;
};

struct ValueTask_1_System_Int32___Boxed {
    struct ValueTask_1_System_Int32___Class *klass;
    MonitorData *monitor;
    struct ValueTask_1_System_Int32_ fields;
};

struct Memory_1_Byte_ {
    struct Object *_arrayOrOwnedMemory;
    int32_t _index;
    int32_t _length;
};

struct Memory_1_Byte___Boxed {
    struct Memory_1_Byte___Class *klass;
    MonitorData *monitor;
    struct Memory_1_Byte_ fields;
};

struct ReadOnlyMemory_1_Byte_ {
    struct Object *_arrayOrOwnedMemory;
    int32_t _index;
    int32_t _length;
};

struct ReadOnlyMemory_1_Byte___Boxed {
    struct ReadOnlyMemory_1_Byte___Class *klass;
    MonitorData *monitor;
    struct ReadOnlyMemory_1_Byte_ fields;
};

struct RSAManaged__Fields {
    struct RSA__Fields _;
    bool isCRTpossible;
    bool keyBlinding;
    bool keypairGenerated;
    bool m_disposed;
    struct BigInteger *d;
    struct BigInteger *p;
    struct BigInteger *q;
    struct BigInteger *dp;
    struct BigInteger *dq;
    struct BigInteger *qInv;
    struct BigInteger *n;
    struct BigInteger *e;
    struct RSAManaged_KeyGeneratedEventHandler *KeyGenerated;
};

struct RSAManaged {
    struct RSAManaged__Class *klass;
    MonitorData *monitor;
    struct RSAManaged__Fields fields;
};

struct __declspec(align(8)) BigInteger__Fields {
    uint32_t length;
    struct UInt32__Array *data;
};

struct BigInteger {
    struct BigInteger__Class *klass;
    MonitorData *monitor;
    struct BigInteger__Fields fields;
};

struct RSAManaged_KeyGeneratedEventHandler__Fields {
    struct MulticastDelegate__Fields _;
};

struct RSAManaged_KeyGeneratedEventHandler {
    struct RSAManaged_KeyGeneratedEventHandler__Class *klass;
    MonitorData *monitor;
    struct RSAManaged_KeyGeneratedEventHandler__Fields fields;
};

struct RSAParameters {
    struct Byte__Array *Exponent;
    struct Byte__Array *Modulus;
    struct Byte__Array *P;
    struct Byte__Array *Q;
    struct Byte__Array *DP;
    struct Byte__Array *DQ;
    struct Byte__Array *InverseQ;
    struct Byte__Array *D;
};

struct RSAParameters__Boxed {
    struct RSAParameters__Class *klass;
    MonitorData *monitor;
    struct RSAParameters fields;
};

struct __declspec(align(8)) Version__Fields {
    int32_t _Major;
    int32_t _Minor;
    int32_t _Build;
    int32_t _Revision;
};

struct Version {
    struct Version__Class *klass;
    MonitorData *monitor;
    struct Version__Fields fields;
};

struct FileStream__Fields {
    struct Stream__Fields _;
    struct Byte__Array *buf;
    struct String *name;
    struct SafeFileHandle *safeHandle;
    bool isExposed;
    int64_t append_startpos;
    #if defined(_CPLUSPLUS_)
    enum FileAccess__Enum access;
    #else
    uint32_t access;
    #endif
    bool owner;
    bool async;
    bool canseek;
    bool anonymous;
    bool buf_dirty;
    int32_t buf_size;
    int32_t buf_length;
    int32_t buf_offset;
    int64_t buf_start;
};

struct FileStream {
    struct FileStream__Class *klass;
    MonitorData *monitor;
    struct FileStream__Fields fields;
};

struct FileStream__Array {
    struct FileStream__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct FileStream *vector[32];
};

#if defined(_CPLUSPLUS_)
enum ResourceLocation__Enum : int32_t {
    ResourceLocation__Enum_Embedded = 0x00000001,
    ResourceLocation__Enum_ContainedInAnotherAssembly = 0x00000002,
    ResourceLocation__Enum_ContainedInManifestFile = 0x00000004,
};

#else
enum ResourceLocation__Enum {
    ResourceLocation__Enum_Embedded = 0x00000001,
    ResourceLocation__Enum_ContainedInAnotherAssembly = 0x00000002,
    ResourceLocation__Enum_ContainedInManifestFile = 0x00000004,
};

#endif
struct ResourceLocation__Enum__Boxed {
    struct ResourceLocation__Enum__Class *klass;
    MonitorData *monitor;
    #if defined(_CPLUSPLUS_)
    enum ResourceLocation__Enum value;
    #else
    uint32_t value;
    #endif
};

struct __declspec(align(8)) ManifestResourceInfo__Fields {
    struct Assembly *_containingAssembly;
    struct String *_containingFileName;
    #if defined(_CPLUSPLUS_)
    enum ResourceLocation__Enum _resourceLocation;
    #else
    uint32_t _resourceLocation;
    #endif
};

struct ManifestResourceInfo {
    struct ManifestResourceInfo__Class *klass;
    MonitorData *monitor;
    struct ManifestResourceInfo__Fields fields;
};

struct Module__Array {
    struct Module__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct Module *vector[32];
};

struct AssemblyName__Array {
    struct AssemblyName__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct AssemblyName *vector[32];
};

struct __declspec(align(8)) Evidence__Fields {
    bool _locked;
    struct ArrayList *hostEvidenceList;
    struct ArrayList *assemblyEvidenceList;
};

struct Evidence {
    struct Evidence__Class *klass;
    MonitorData *monitor;
    struct Evidence__Fields fields;
};

struct __declspec(align(8)) ArrayList__Fields {
    struct Object__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct ArrayList {
    struct ArrayList__Class *klass;
    MonitorData *monitor;
    struct ArrayList__Fields fields;
};

#if defined(_CPLUSPLUS_)
enum SecurityRuleSet__Enum : uint8_t {
    SecurityRuleSet__Enum_None = 0x00000000,
    SecurityRuleSet__Enum_Level1 = 0x00000001,
    SecurityRuleSet__Enum_Level2 = 0x00000002,
};

#else
enum SecurityRuleSet__Enum {
    SecurityRuleSet__Enum_None = 0x00000000,
    SecurityRuleSet__Enum_Level1 = 0x00000001,
    SecurityRuleSet__Enum_Level2 = 0x00000002,
};

#endif
struct SecurityRuleSet__Enum__Boxed {
    struct SecurityRuleSet__Enum__Class *klass;
    MonitorData *monitor;
    #if defined(_CPLUSPLUS_)
    enum SecurityRuleSet__Enum value;
    #else
    uint8_t value;
    #endif
};

struct IEnumerable_1_System_Reflection_TypeInfo_ {
    struct IEnumerable_1_System_Reflection_TypeInfo___Class *klass;
    MonitorData *monitor;
};

struct IEnumerable_1_System_Type_ {
    struct IEnumerable_1_System_Type___Class *klass;
    MonitorData *monitor;
};

struct IEnumerable_1_System_Reflection_Module_ {
    struct IEnumerable_1_System_Reflection_Module___Class *klass;
    MonitorData *monitor;
};

#if defined(_CPLUSPLUS_)
enum PermissionState__Enum : int32_t {
    PermissionState__Enum_Unrestricted = 0x00000001,
    PermissionState__Enum_None = 0x00000000,
};

#else
enum PermissionState__Enum {
    PermissionState__Enum_Unrestricted = 0x00000001,
    PermissionState__Enum_None = 0x00000000,
};

#endif
struct PermissionState__Enum__Boxed {
    struct PermissionState__Enum__Class *klass;
    MonitorData *monitor;
    #if defined(_CPLUSPLUS_)
    enum PermissionState__Enum value;
    #else
    uint32_t value;
    #endif
};

struct __declspec(align(8)) PermissionSet__Fields {
    #if defined(_CPLUSPLUS_)
    enum PermissionState__Enum state;
    #else
    uint32_t state;
    #endif
    struct ArrayList *list;
    struct PolicyLevel *_policyLevel;
    bool _declsec;
    bool _readOnly;
    struct Boolean__Array *_ignored;
};

struct PermissionSet {
    struct PermissionSet__Class *klass;
    MonitorData *monitor;
    struct PermissionSet__Fields fields;
};

#if defined(_CPLUSPLUS_)
enum PolicyLevelType__Enum : int32_t {
    PolicyLevelType__Enum_User = 0x00000000,
    PolicyLevelType__Enum_Machine = 0x00000001,
    PolicyLevelType__Enum_Enterprise = 0x00000002,
    PolicyLevelType__Enum_AppDomain = 0x00000003,
};

#else
enum PolicyLevelType__Enum {
    PolicyLevelType__Enum_User = 0x00000000,
    PolicyLevelType__Enum_Machine = 0x00000001,
    PolicyLevelType__Enum_Enterprise = 0x00000002,
    PolicyLevelType__Enum_AppDomain = 0x00000003,
};

#endif
struct PolicyLevelType__Enum__Boxed {
    struct PolicyLevelType__Enum__Class *klass;
    MonitorData *monitor;
    #if defined(_CPLUSPLUS_)
    enum PolicyLevelType__Enum value;
    #else
    uint32_t value;
    #endif
};

struct __declspec(align(8)) PolicyLevel__Fields {
    struct String *label;
    struct CodeGroup *root_code_group;
    struct ArrayList *full_trust_assemblies;
    struct ArrayList *named_permission_sets;
    struct String *_location;
    #if defined(_CPLUSPLUS_)
    enum PolicyLevelType__Enum _type;
    #else
    uint32_t _type;
    #endif
    struct Hashtable *fullNames;
    struct SecurityElement *xml;
};

struct PolicyLevel {
    struct PolicyLevel__Class *klass;
    MonitorData *monitor;
    struct PolicyLevel__Fields fields;
};

struct __declspec(align(8)) CodeGroup__Fields {
    struct PolicyStatement *m_policy;
    struct IMembershipCondition *m_membershipCondition;
    struct String *m_description;
    struct String *m_name;
    struct ArrayList *m_children;
};

struct CodeGroup {
    struct CodeGroup__Class *klass;
    MonitorData *monitor;
    struct CodeGroup__Fields fields;
};

#if defined(_CPLUSPLUS_)
enum PolicyStatementAttribute__Enum : int32_t {
    PolicyStatementAttribute__Enum_Nothing = 0x00000000,
    PolicyStatementAttribute__Enum_Exclusive = 0x00000001,
    PolicyStatementAttribute__Enum_LevelFinal = 0x00000002,
    PolicyStatementAttribute__Enum_All = 0x00000003,
};

#else
enum PolicyStatementAttribute__Enum {
    PolicyStatementAttribute__Enum_Nothing = 0x00000000,
    PolicyStatementAttribute__Enum_Exclusive = 0x00000001,
    PolicyStatementAttribute__Enum_LevelFinal = 0x00000002,
    PolicyStatementAttribute__Enum_All = 0x00000003,
};

#endif
struct PolicyStatementAttribute__Enum__Boxed {
    struct PolicyStatementAttribute__Enum__Class *klass;
    MonitorData *monitor;
    #if defined(_CPLUSPLUS_)
    enum PolicyStatementAttribute__Enum value;
    #else
    uint32_t value;
    #endif
};

struct __declspec(align(8)) PolicyStatement__Fields {
    struct PermissionSet *perms;
    #if defined(_CPLUSPLUS_)
    enum PolicyStatementAttribute__Enum attrs;
    #else
    uint32_t attrs;
    #endif
};

struct PolicyStatement {
    struct PolicyStatement__Class *klass;
    MonitorData *monitor;
    struct PolicyStatement__Fields fields;
};

struct __declspec(align(8)) SecurityElement__Fields {
    struct String *text;
    struct String *tag;
    struct ArrayList *attributes;
    struct ArrayList *children;
};

struct SecurityElement {
    struct SecurityElement__Class *klass;
    MonitorData *monitor;
    struct SecurityElement__Fields fields;
};

struct IMembershipCondition {
    struct IMembershipCondition__Class *klass;
    MonitorData *monitor;
};

#if defined(_CPLUSPLUS_)
enum FileIOPermissionAccess__Enum : int32_t {
    FileIOPermissionAccess__Enum_NoAccess = 0x00000000,
    FileIOPermissionAccess__Enum_Read = 0x00000001,
    FileIOPermissionAccess__Enum_Write = 0x00000002,
    FileIOPermissionAccess__Enum_Append = 0x00000004,
    FileIOPermissionAccess__Enum_PathDiscovery = 0x00000008,
    FileIOPermissionAccess__Enum_AllAccess = 0x0000000f,
};

#else
enum FileIOPermissionAccess__Enum {
    FileIOPermissionAccess__Enum_NoAccess = 0x00000000,
    FileIOPermissionAccess__Enum_Read = 0x00000001,
    FileIOPermissionAccess__Enum_Write = 0x00000002,
    FileIOPermissionAccess__Enum_Append = 0x00000004,
    FileIOPermissionAccess__Enum_PathDiscovery = 0x00000008,
    FileIOPermissionAccess__Enum_AllAccess = 0x0000000f,
};

#endif
struct FileIOPermissionAccess__Enum__Boxed {
    struct FileIOPermissionAccess__Enum__Class *klass;
    MonitorData *monitor;
    #if defined(_CPLUSPLUS_)
    enum FileIOPermissionAccess__Enum value;
    #else
    uint32_t value;
    #endif
};

struct FileCodeGroup__Fields {
    struct CodeGroup__Fields _;
    #if defined(_CPLUSPLUS_)
    enum FileIOPermissionAccess__Enum m_access;
    #else
    uint32_t m_access;
    #endif
};

struct FileCodeGroup {
    struct FileCodeGroup__Class *klass;
    MonitorData *monitor;
    struct FileCodeGroup__Fields fields;
};

struct IPermission {
    struct IPermission__Class *klass;
    MonitorData *monitor;
};

#if defined(_CPLUSPLUS_)
enum PortableExecutableKinds__Enum : int32_t {
    PortableExecutableKinds__Enum_NotAPortableExecutableImage = 0x00000000,
    PortableExecutableKinds__Enum_ILOnly = 0x00000001,
    PortableExecutableKinds__Enum_Required32Bit = 0x00000002,
    PortableExecutableKinds__Enum_PE32Plus = 0x00000004,
    PortableExecutableKinds__Enum_Unmanaged32Bit = 0x00000008,
    PortableExecutableKinds__Enum_Preferred32Bit = 0x00000010,
};

#else
enum PortableExecutableKinds__Enum {
    PortableExecutableKinds__Enum_NotAPortableExecutableImage = 0x00000000,
    PortableExecutableKinds__Enum_ILOnly = 0x00000001,
    PortableExecutableKinds__Enum_Required32Bit = 0x00000002,
    PortableExecutableKinds__Enum_PE32Plus = 0x00000004,
    PortableExecutableKinds__Enum_Unmanaged32Bit = 0x00000008,
    PortableExecutableKinds__Enum_Preferred32Bit = 0x00000010,
};

#endif
struct PortableExecutableKinds__Enum__Boxed {
    struct PortableExecutableKinds__Enum__Class *klass;
    MonitorData *monitor;
    #if defined(_CPLUSPLUS_)
    enum PortableExecutableKinds__Enum value;
    #else
    uint32_t value;
    #endif
};

#if defined(_CPLUSPLUS_)
enum ImageFileMachine__Enum : int32_t {
    ImageFileMachine__Enum_I386 = 0x0000014c,
    ImageFileMachine__Enum_IA64 = 0x00000200,
    ImageFileMachine__Enum_AMD64 = 0x00008664,
    ImageFileMachine__Enum_ARM = 0x000001c4,
};

#else
enum ImageFileMachine__Enum {
    ImageFileMachine__Enum_I386 = 0x0000014c,
    ImageFileMachine__Enum_IA64 = 0x00000200,
    ImageFileMachine__Enum_AMD64 = 0x00008664,
    ImageFileMachine__Enum_ARM = 0x000001c4,
};

#endif
struct ImageFileMachine__Enum__Boxed {
    struct ImageFileMachine__Enum__Class *klass;
    MonitorData *monitor;
    #if defined(_CPLUSPLUS_)
    enum ImageFileMachine__Enum value;
    #else
    uint32_t value;
    #endif
};

struct __declspec(align(8)) X509Certificate__Fields {
    struct X509CertificateImpl *impl;
    bool hideDates;
    struct String *issuer_name;
    struct String *subject_name;
};

struct X509Certificate {
    struct X509Certificate__Class *klass;
    MonitorData *monitor;
    struct X509Certificate__Fields fields;
};

struct __declspec(align(8)) X509CertificateImpl__Fields {
    struct Byte__Array *cachedCertificateHash;
};

struct X509CertificateImpl {
    struct X509CertificateImpl__Class *klass;
    MonitorData *monitor;
    struct X509CertificateImpl__Fields fields;
};

struct X509CertificateImplMono__Fields {
    struct X509CertificateImpl__Fields _;
    struct X509Certificate_1 *x509;
};

struct X509CertificateImplMono {
    struct X509CertificateImplMono__Class *klass;
    MonitorData *monitor;
    struct X509CertificateImplMono__Fields fields;
};

struct __declspec(align(8)) X509Certificate_1__Fields {
    struct ASN1 *decoder;
    struct Byte__Array *m_encodedcert;
    struct DateTime m_from;
    struct DateTime m_until;
    struct ASN1 *issuer;
    struct String *m_issuername;
    struct String *m_keyalgo;
    struct Byte__Array *m_keyalgoparams;
    struct ASN1 *subject;
    struct String *m_subject;
    struct Byte__Array *m_publickey;
    struct Byte__Array *signature;
    struct String *m_signaturealgo;
    struct Byte__Array *m_signaturealgoparams;
    struct Byte__Array *certhash;
    struct RSA *_rsa;
    struct DSA *_dsa;
    int32_t version;
    struct Byte__Array *serialnumber;
    struct Byte__Array *issuerUniqueID;
    struct Byte__Array *subjectUniqueID;
    struct X509ExtensionCollection *extensions;
};

struct X509Certificate_1 {
    struct X509Certificate_1__Class *klass;
    MonitorData *monitor;
    struct X509Certificate_1__Fields fields;
};

struct __declspec(align(8)) ASN1__Fields {
    uint8_t m_nTag;
    struct Byte__Array *m_aValue;
    struct ArrayList *elist;
};

struct ASN1 {
    struct ASN1__Class *klass;
    MonitorData *monitor;
    struct ASN1__Fields fields;
};

struct DSA__Fields {
    struct AsymmetricAlgorithm__Fields _;
};

struct DSA {
    struct DSA__Class *klass;
    MonitorData *monitor;
    struct DSA__Fields fields;
};

struct DSAManaged__Fields {
    struct DSA__Fields _;
    bool keypairGenerated;
    bool m_disposed;
    struct BigInteger *p;
    struct BigInteger *q;
    struct BigInteger *g;
    struct BigInteger *x;
    struct BigInteger *y;
    struct BigInteger *j;
    struct BigInteger *seed;
    int32_t counter;
    bool j_missing;
    struct RandomNumberGenerator *rng;
    struct DSAManaged_KeyGeneratedEventHandler *KeyGenerated;
};

struct DSAManaged {
    struct DSAManaged__Class *klass;
    MonitorData *monitor;
    struct DSAManaged__Fields fields;
};

struct DSAManaged_KeyGeneratedEventHandler__Fields {
    struct MulticastDelegate__Fields _;
};

struct DSAManaged_KeyGeneratedEventHandler {
    struct DSAManaged_KeyGeneratedEventHandler__Class *klass;
    MonitorData *monitor;
    struct DSAManaged_KeyGeneratedEventHandler__Fields fields;
};

struct DSAParameters {
    struct Byte__Array *P;
    struct Byte__Array *Q;
    struct Byte__Array *G;
    struct Byte__Array *Y;
    struct Byte__Array *J;
    struct Byte__Array *X;
    struct Byte__Array *Seed;
    int32_t Counter;
};

struct DSAParameters__Boxed {
    struct DSAParameters__Class *klass;
    MonitorData *monitor;
    struct DSAParameters fields;
};

struct __declspec(align(8)) CollectionBase__Fields {
    struct ArrayList *list;
};

struct CollectionBase {
    struct CollectionBase__Class *klass;
    MonitorData *monitor;
    struct CollectionBase__Fields fields;
};

struct X509ExtensionCollection__Fields {
    struct CollectionBase__Fields _;
    bool readOnly;
};

struct X509ExtensionCollection {
    struct X509ExtensionCollection__Class *klass;
    MonitorData *monitor;
    struct X509ExtensionCollection__Fields fields;
};

#if defined(_CPLUSPLUS_)
enum X509ContentType__Enum : int32_t {
    X509ContentType__Enum_Unknown = 0x00000000,
    X509ContentType__Enum_Cert = 0x00000001,
    X509ContentType__Enum_SerializedCert = 0x00000002,
    X509ContentType__Enum_Pfx = 0x00000003,
    X509ContentType__Enum_Pkcs12 = 0x00000003,
    X509ContentType__Enum_SerializedStore = 0x00000004,
    X509ContentType__Enum_Pkcs7 = 0x00000005,
    X509ContentType__Enum_Authenticode = 0x00000006,
};

#else
enum X509ContentType__Enum {
    X509ContentType__Enum_Unknown = 0x00000000,
    X509ContentType__Enum_Cert = 0x00000001,
    X509ContentType__Enum_SerializedCert = 0x00000002,
    X509ContentType__Enum_Pfx = 0x00000003,
    X509ContentType__Enum_Pkcs12 = 0x00000003,
    X509ContentType__Enum_SerializedStore = 0x00000004,
    X509ContentType__Enum_Pkcs7 = 0x00000005,
    X509ContentType__Enum_Authenticode = 0x00000006,
};

#endif
struct X509ContentType__Enum__Boxed {
    struct X509ContentType__Enum__Class *klass;
    MonitorData *monitor;
    #if defined(_CPLUSPLUS_)
    enum X509ContentType__Enum value;
    #else
    uint32_t value;
    #endif
};

struct __declspec(align(8)) SecureString__Fields {
    int32_t length;
    bool disposed;
    bool read_only;
    struct Byte__Array *data;
};

struct SecureString {
    struct SecureString__Class *klass;
    MonitorData *monitor;
    struct SecureString__Fields fields;
};

#if defined(_CPLUSPLUS_)
enum X509KeyStorageFlags__Enum : int32_t {
    X509KeyStorageFlags__Enum_DefaultKeySet = 0x00000000,
    X509KeyStorageFlags__Enum_UserKeySet = 0x00000001,
    X509KeyStorageFlags__Enum_MachineKeySet = 0x00000002,
    X509KeyStorageFlags__Enum_Exportable = 0x00000004,
    X509KeyStorageFlags__Enum_UserProtected = 0x00000008,
    X509KeyStorageFlags__Enum_PersistKeySet = 0x00000010,
    X509KeyStorageFlags__Enum_EphemeralKeySet = 0x00000020,
};

#else
enum X509KeyStorageFlags__Enum {
    X509KeyStorageFlags__Enum_DefaultKeySet = 0x00000000,
    X509KeyStorageFlags__Enum_UserKeySet = 0x00000001,
    X509KeyStorageFlags__Enum_MachineKeySet = 0x00000002,
    X509KeyStorageFlags__Enum_Exportable = 0x00000004,
    X509KeyStorageFlags__Enum_UserProtected = 0x00000008,
    X509KeyStorageFlags__Enum_PersistKeySet = 0x00000010,
    X509KeyStorageFlags__Enum_EphemeralKeySet = 0x00000020,
};

#endif
struct X509KeyStorageFlags__Enum__Boxed {
    struct X509KeyStorageFlags__Enum__Class *klass;
    MonitorData *monitor;
    #if defined(_CPLUSPLUS_)
    enum X509KeyStorageFlags__Enum value;
    #else
    uint32_t value;
    #endif
};

struct MemberInfo_1__Array {
    struct MemberInfo_1__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct MemberInfo_1 *vector[32];
};

struct MemberFilter__Fields {
    struct MulticastDelegate__Fields _;
};

struct MemberFilter {
    struct MemberFilter__Class *klass;
    MonitorData *monitor;
    struct MemberFilter__Fields fields;
};

struct ConstructorInfo {
    struct ConstructorInfo__Class *klass;
    MonitorData *monitor;
};

struct RuntimeConstructorInfo {
    struct RuntimeConstructorInfo__Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) MonoCMethod__Fields {
    void *mhandle;
    struct String *name;
    struct Type *reftype;
};

struct MonoCMethod {
    struct MonoCMethod__Class *klass;
    MonitorData *monitor;
    struct MonoCMethod__Fields fields;
};

struct ConstructorInfo__Array {
    struct ConstructorInfo__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct ConstructorInfo *vector[32];
};

struct __declspec(align(8)) EventInfo_1__Fields {
    struct EventInfo_AddEventAdapter *cached_add_event;
};

struct EventInfo_1 {
    struct EventInfo_1__Class *klass;
    MonitorData *monitor;
    struct EventInfo_1__Fields fields;
};

struct EventInfo_AddEventAdapter__Fields {
    struct MulticastDelegate__Fields _;
};

struct EventInfo_AddEventAdapter {
    struct EventInfo_AddEventAdapter__Class *klass;
    MonitorData *monitor;
    struct EventInfo_AddEventAdapter__Fields fields;
};

struct RuntimeEventInfo__Fields {
    struct EventInfo_1__Fields _;
};

struct RuntimeEventInfo {
    struct RuntimeEventInfo__Class *klass;
    MonitorData *monitor;
    struct RuntimeEventInfo__Fields fields;
};

struct MonoEvent__Fields {
    struct RuntimeEventInfo__Fields _;
    void *klass;
    void *handle;
};

struct MonoEvent {
    struct MonoEvent__Class *klass;
    MonitorData *monitor;
    struct MonoEvent__Fields fields;
};

#if defined(_CPLUSPLUS_)
enum EventAttributes__Enum : int32_t {
    EventAttributes__Enum_None = 0x00000000,
    EventAttributes__Enum_SpecialName = 0x00000200,
    EventAttributes__Enum_ReservedMask = 0x00000400,
    EventAttributes__Enum_RTSpecialName = 0x00000400,
};

#else
enum EventAttributes__Enum {
    EventAttributes__Enum_None = 0x00000000,
    EventAttributes__Enum_SpecialName = 0x00000200,
    EventAttributes__Enum_ReservedMask = 0x00000400,
    EventAttributes__Enum_RTSpecialName = 0x00000400,
};

#endif
struct EventAttributes__Enum__Boxed {
    struct EventAttributes__Enum__Class *klass;
    MonitorData *monitor;
    #if defined(_CPLUSPLUS_)
    enum EventAttributes__Enum value;
    #else
    uint32_t value;
    #endif
};

struct EventInfo_1__Array {
    struct EventInfo_1__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct EventInfo_1 *vector[32];
};

struct InterfaceMapping {
    struct Type *TargetType;
    struct Type *InterfaceType;
    struct MethodInfo_1__Array *TargetMethods;
    struct MethodInfo_1__Array *InterfaceMethods;
};

struct InterfaceMapping__Boxed {
    struct InterfaceMapping__Class *klass;
    MonitorData *monitor;
    struct InterfaceMapping fields;
};

#if defined(_CPLUSPLUS_)
enum TypeAttributes__Enum : int32_t {
    TypeAttributes__Enum_VisibilityMask = 0x00000007,
    TypeAttributes__Enum_NotPublic = 0x00000000,
    TypeAttributes__Enum_Public = 0x00000001,
    TypeAttributes__Enum_NestedPublic = 0x00000002,
    TypeAttributes__Enum_NestedPrivate = 0x00000003,
    TypeAttributes__Enum_NestedFamily = 0x00000004,
    TypeAttributes__Enum_NestedAssembly = 0x00000005,
    TypeAttributes__Enum_NestedFamANDAssem = 0x00000006,
    TypeAttributes__Enum_NestedFamORAssem = 0x00000007,
    TypeAttributes__Enum_LayoutMask = 0x00000018,
    TypeAttributes__Enum_AutoLayout = 0x00000000,
    TypeAttributes__Enum_SequentialLayout = 0x00000008,
    TypeAttributes__Enum_ExplicitLayout = 0x00000010,
    TypeAttributes__Enum_ClassSemanticsMask = 0x00000020,
    TypeAttributes__Enum_Class = 0x00000000,
    TypeAttributes__Enum_Interface = 0x00000020,
    TypeAttributes__Enum_Abstract = 0x00000080,
    TypeAttributes__Enum_Sealed = 0x00000100,
    TypeAttributes__Enum_SpecialName = 0x00000400,
    TypeAttributes__Enum_Import = 0x00001000,
    TypeAttributes__Enum_Serializable = 0x00002000,
    TypeAttributes__Enum_WindowsRuntime = 0x00004000,
    TypeAttributes__Enum_StringFormatMask = 0x00030000,
    TypeAttributes__Enum_AnsiClass = 0x00000000,
    TypeAttributes__Enum_UnicodeClass = 0x00010000,
    TypeAttributes__Enum_AutoClass = 0x00020000,
    TypeAttributes__Enum_CustomFormatClass = 0x00030000,
    TypeAttributes__Enum_CustomFormatMask = 0x00c00000,
    TypeAttributes__Enum_BeforeFieldInit = 0x00100000,
    TypeAttributes__Enum_ReservedMask = 0x00040800,
    TypeAttributes__Enum_RTSpecialName = 0x00000800,
    TypeAttributes__Enum_HasSecurity = 0x00040000,
};

#else
enum TypeAttributes__Enum {
    TypeAttributes__Enum_VisibilityMask = 0x00000007,
    TypeAttributes__Enum_NotPublic = 0x00000000,
    TypeAttributes__Enum_Public = 0x00000001,
    TypeAttributes__Enum_NestedPublic = 0x00000002,
    TypeAttributes__Enum_NestedPrivate = 0x00000003,
    TypeAttributes__Enum_NestedFamily = 0x00000004,
    TypeAttributes__Enum_NestedAssembly = 0x00000005,
    TypeAttributes__Enum_NestedFamANDAssem = 0x00000006,
    TypeAttributes__Enum_NestedFamORAssem = 0x00000007,
    TypeAttributes__Enum_LayoutMask = 0x00000018,
    TypeAttributes__Enum_AutoLayout = 0x00000000,
    TypeAttributes__Enum_SequentialLayout = 0x00000008,
    TypeAttributes__Enum_ExplicitLayout = 0x00000010,
    TypeAttributes__Enum_ClassSemanticsMask = 0x00000020,
    TypeAttributes__Enum_Class = 0x00000000,
    TypeAttributes__Enum_Interface = 0x00000020,
    TypeAttributes__Enum_Abstract = 0x00000080,
    TypeAttributes__Enum_Sealed = 0x00000100,
    TypeAttributes__Enum_SpecialName = 0x00000400,
    TypeAttributes__Enum_Import = 0x00001000,
    TypeAttributes__Enum_Serializable = 0x00002000,
    TypeAttributes__Enum_WindowsRuntime = 0x00004000,
    TypeAttributes__Enum_StringFormatMask = 0x00030000,
    TypeAttributes__Enum_AnsiClass = 0x00000000,
    TypeAttributes__Enum_UnicodeClass = 0x00010000,
    TypeAttributes__Enum_AutoClass = 0x00020000,
    TypeAttributes__Enum_CustomFormatClass = 0x00030000,
    TypeAttributes__Enum_CustomFormatMask = 0x00c00000,
    TypeAttributes__Enum_BeforeFieldInit = 0x00100000,
    TypeAttributes__Enum_ReservedMask = 0x00040800,
    TypeAttributes__Enum_RTSpecialName = 0x00000800,
    TypeAttributes__Enum_HasSecurity = 0x00040000,
};

#endif
struct TypeAttributes__Enum__Boxed {
    struct TypeAttributes__Enum__Class *klass;
    MonitorData *monitor;
    #if defined(_CPLUSPLUS_)
    enum TypeAttributes__Enum value;
    #else
    uint32_t value;
    #endif
};

#if defined(_CPLUSPLUS_)
enum LayoutKind__Enum : int32_t {
    LayoutKind__Enum_Sequential = 0x00000000,
    LayoutKind__Enum_Explicit = 0x00000002,
    LayoutKind__Enum_Auto = 0x00000003,
};

#else
enum LayoutKind__Enum {
    LayoutKind__Enum_Sequential = 0x00000000,
    LayoutKind__Enum_Explicit = 0x00000002,
    LayoutKind__Enum_Auto = 0x00000003,
};

#endif
struct LayoutKind__Enum__Boxed {
    struct LayoutKind__Enum__Class *klass;
    MonitorData *monitor;
    #if defined(_CPLUSPLUS_)
    enum LayoutKind__Enum value;
    #else
    uint32_t value;
    #endif
};

#if defined(_CPLUSPLUS_)
enum CharSet__Enum : int32_t {
    CharSet__Enum_None = 0x00000001,
    CharSet__Enum_Ansi = 0x00000002,
    CharSet__Enum_Unicode = 0x00000003,
    CharSet__Enum_Auto = 0x00000004,
};

#else
enum CharSet__Enum {
    CharSet__Enum_None = 0x00000001,
    CharSet__Enum_Ansi = 0x00000002,
    CharSet__Enum_Unicode = 0x00000003,
    CharSet__Enum_Auto = 0x00000004,
};

#endif
struct CharSet__Enum__Boxed {
    struct CharSet__Enum__Class *klass;
    MonitorData *monitor;
    #if defined(_CPLUSPLUS_)
    enum CharSet__Enum value;
    #else
    uint32_t value;
    #endif
};

struct __declspec(align(8)) StructLayoutAttribute__Fields {
    #if defined(_CPLUSPLUS_)
    enum LayoutKind__Enum _val;
    #else
    uint32_t _val;
    #endif
    int32_t Pack;
    int32_t Size;
    #if defined(_CPLUSPLUS_)
    enum CharSet__Enum CharSet;
    #else
    uint32_t CharSet;
    #endif
};

struct StructLayoutAttribute {
    struct StructLayoutAttribute__Class *klass;
    MonitorData *monitor;
    struct StructLayoutAttribute__Fields fields;
};

#if defined(_CPLUSPLUS_)
enum GenericParameterAttributes__Enum : int32_t {
    GenericParameterAttributes__Enum_None = 0x00000000,
    GenericParameterAttributes__Enum_VarianceMask = 0x00000003,
    GenericParameterAttributes__Enum_Covariant = 0x00000001,
    GenericParameterAttributes__Enum_Contravariant = 0x00000002,
    GenericParameterAttributes__Enum_SpecialConstraintMask = 0x0000001c,
    GenericParameterAttributes__Enum_ReferenceTypeConstraint = 0x00000004,
    GenericParameterAttributes__Enum_NotNullableValueTypeConstraint = 0x00000008,
    GenericParameterAttributes__Enum_DefaultConstructorConstraint = 0x00000010,
};

#else
enum GenericParameterAttributes__Enum {
    GenericParameterAttributes__Enum_None = 0x00000000,
    GenericParameterAttributes__Enum_VarianceMask = 0x00000003,
    GenericParameterAttributes__Enum_Covariant = 0x00000001,
    GenericParameterAttributes__Enum_Contravariant = 0x00000002,
    GenericParameterAttributes__Enum_SpecialConstraintMask = 0x0000001c,
    GenericParameterAttributes__Enum_ReferenceTypeConstraint = 0x00000004,
    GenericParameterAttributes__Enum_NotNullableValueTypeConstraint = 0x00000008,
    GenericParameterAttributes__Enum_DefaultConstructorConstraint = 0x00000010,
};

#endif
struct GenericParameterAttributes__Enum__Boxed {
    struct GenericParameterAttributes__Enum__Class *klass;
    MonitorData *monitor;
    #if defined(_CPLUSPLUS_)
    enum GenericParameterAttributes__Enum value;
    #else
    uint32_t value;
    #endif
};

struct IEnumerable_1_System_Reflection_MethodInfo_ {
    struct IEnumerable_1_System_Reflection_MethodInfo___Class *klass;
    MonitorData *monitor;
};

struct IEnumerable_1_System_Reflection_ConstructorInfo_ {
    struct IEnumerable_1_System_Reflection_ConstructorInfo___Class *klass;
    MonitorData *monitor;
};

struct IEnumerable_1_System_Reflection_EventInfo_ {
    struct IEnumerable_1_System_Reflection_EventInfo___Class *klass;
    MonitorData *monitor;
};

struct IEnumerable_1_System_Reflection_FieldInfo_ {
    struct IEnumerable_1_System_Reflection_FieldInfo___Class *klass;
    MonitorData *monitor;
};

struct IEnumerable_1_System_Reflection_MemberInfo_ {
    struct IEnumerable_1_System_Reflection_MemberInfo___Class *klass;
    MonitorData *monitor;
};

struct IEnumerable_1_System_Reflection_PropertyInfo_ {
    struct IEnumerable_1_System_Reflection_PropertyInfo___Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) MonoTypeInfo__Fields {
    struct String *full_name;
    struct MonoCMethod *default_ctor;
};

struct MonoTypeInfo {
    struct MonoTypeInfo__Class *klass;
    MonitorData *monitor;
    struct MonoTypeInfo__Fields fields;
};

struct Byte__Array {
    struct Byte__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    uint8_t vector[32];
};

struct IEnumerator_1_System_Char_ {
    struct IEnumerator_1_System_Char___Class *klass;
    MonitorData *monitor;
};

struct IFormatProvider__VTable {
    VirtualInvokeData GetFormat;
};

struct IFormatProvider__StaticFields {
};

struct IFormatProvider__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IFormatProvider__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IFormatProvider__VTable vtable;
};

struct IEnumerator__VTable {
    VirtualInvokeData MoveNext;
    VirtualInvokeData get_Current;
    VirtualInvokeData Reset;
};

struct IEnumerator__StaticFields {
};

struct IEnumerator__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator__VTable vtable;
};

struct IComparer__VTable {
    VirtualInvokeData Compare;
};

struct IComparer__StaticFields {
};

struct IComparer__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IComparer__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IComparer__VTable vtable;
};

struct IEqualityComparer__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData GetHashCode;
};

struct IEqualityComparer__StaticFields {
};

struct IEqualityComparer__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEqualityComparer__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEqualityComparer__VTable vtable;
};

struct Array__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData CopyTo;
    VirtualInvokeData System_Collections_ICollection_get_Count;
    VirtualInvokeData get_SyncRoot;
    VirtualInvokeData get_IsSynchronized;
    VirtualInvokeData GetEnumerator;
    VirtualInvokeData System_Collections_IList_get_Item;
    VirtualInvokeData System_Collections_IList_set_Item;
    VirtualInvokeData System_Collections_IList_Add;
    VirtualInvokeData System_Collections_IList_Contains;
    VirtualInvokeData System_Collections_IList_Clear;
    VirtualInvokeData System_Collections_IList_get_IsReadOnly;
    VirtualInvokeData get_IsFixedSize;
    VirtualInvokeData System_Collections_IList_IndexOf;
    VirtualInvokeData System_Collections_IList_Insert;
    VirtualInvokeData System_Collections_IList_Remove;
    VirtualInvokeData System_Collections_IList_RemoveAt;
    VirtualInvokeData System_Collections_IStructuralComparable_CompareTo;
    VirtualInvokeData System_Collections_IStructuralEquatable_Equals;
    VirtualInvokeData System_Collections_IStructuralEquatable_GetHashCode;
    VirtualInvokeData Clone;
    VirtualInvokeData get_IsReadOnly;
};

struct Array__StaticFields {
};

struct Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Array__VTable vtable;
};

struct Char__Array__VTable {
};

struct Char__Array__StaticFields {
};

struct Char__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Char__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Char__Array__VTable vtable;
};

struct UInt32__Array__VTable {
};

struct UInt32__Array__StaticFields {
};

struct UInt32__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct UInt32__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct UInt32__Array__VTable vtable;
};

struct Int32__Array__VTable {
};

struct Int32__Array__StaticFields {
};

struct Int32__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Int32__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Int32__Array__VTable vtable;
};

struct Object__Array__VTable {
};

struct Object__Array__StaticFields {
};

struct Object__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Object__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Object__Array__VTable vtable;
};

struct MemberTypes__Enum__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData CompareTo;
    VirtualInvokeData ToString_1;
    VirtualInvokeData GetTypeCode;
    VirtualInvokeData System_IConvertible_ToBoolean;
    VirtualInvokeData System_IConvertible_ToChar;
    VirtualInvokeData System_IConvertible_ToSByte;
    VirtualInvokeData System_IConvertible_ToByte;
    VirtualInvokeData System_IConvertible_ToInt16;
    VirtualInvokeData System_IConvertible_ToUInt16;
    VirtualInvokeData System_IConvertible_ToInt32;
    VirtualInvokeData System_IConvertible_ToUInt32;
    VirtualInvokeData System_IConvertible_ToInt64;
    VirtualInvokeData System_IConvertible_ToUInt64;
    VirtualInvokeData System_IConvertible_ToSingle;
    VirtualInvokeData System_IConvertible_ToDouble;
    VirtualInvokeData System_IConvertible_ToDecimal;
    VirtualInvokeData System_IConvertible_ToDateTime;
    VirtualInvokeData ToString_2;
    VirtualInvokeData System_IConvertible_ToType;
};

struct MemberTypes__Enum__StaticFields {
};

struct MemberTypes__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MemberTypes__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MemberTypes__Enum__VTable vtable;
};

struct VoidPtr__VTable {
};

struct VoidPtr__StaticFields {
};

struct VoidPtr__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct VoidPtr__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct VoidPtr__VTable vtable;
};

struct String__Array__VTable {
};

struct String__Array__StaticFields {
};

struct String__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct String__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct String__Array__VTable vtable;
};

struct Type__Array__VTable {
};

struct Type__Array__StaticFields {
};

struct Type__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Type__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Type__Array__VTable vtable;
};

struct Dictionary_2_TKey_TValue_Entry_System_String_System_Int32___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct Dictionary_2_TKey_TValue_Entry_System_String_System_Int32___StaticFields {
};

struct Dictionary_2_TKey_TValue_Entry_System_String_System_Int32___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Dictionary_2_TKey_TValue_Entry_System_String_System_Int32___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Dictionary_2_TKey_TValue_Entry_System_String_System_Int32___VTable vtable;
};

struct Dictionary_2_TKey_TValue_Entry_System_String_System_Int32___Array__VTable {
};

struct Dictionary_2_TKey_TValue_Entry_System_String_System_Int32___Array__StaticFields {
};

struct Dictionary_2_TKey_TValue_Entry_System_String_System_Int32___Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Dictionary_2_TKey_TValue_Entry_System_String_System_Int32___Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Dictionary_2_TKey_TValue_Entry_System_String_System_Int32___Array__VTable vtable;
};

struct IEqualityComparer_1_System_String___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData GetHashCode;
};

struct IEqualityComparer_1_System_String___StaticFields {
};

struct IEqualityComparer_1_System_String___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEqualityComparer_1_System_String___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEqualityComparer_1_System_String___VTable vtable;
};

struct IEnumerator_1_System_String___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_System_String___StaticFields {
};

struct IEnumerator_1_System_String___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_System_String___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_System_String___VTable vtable;
};

struct Dictionary_2_TKey_TValue_KeyCollection_System_String_System_Int32___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_Count;
    VirtualInvokeData System_Collections_Generic_ICollection_TKey__get_IsReadOnly;
    VirtualInvokeData System_Collections_Generic_ICollection_TKey__Add;
    VirtualInvokeData System_Collections_Generic_ICollection_TKey__Clear;
    VirtualInvokeData System_Collections_Generic_ICollection_TKey__Contains;
    VirtualInvokeData CopyTo;
    VirtualInvokeData System_Collections_Generic_ICollection_TKey__Remove;
    VirtualInvokeData System_Collections_Generic_IEnumerable_TKey__GetEnumerator;
    VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
    VirtualInvokeData System_Collections_ICollection_CopyTo;
    VirtualInvokeData get_Count_1;
    VirtualInvokeData System_Collections_ICollection_get_SyncRoot;
    VirtualInvokeData System_Collections_ICollection_get_IsSynchronized;
    VirtualInvokeData get_Count_2;
};

struct Dictionary_2_TKey_TValue_KeyCollection_System_String_System_Int32___StaticFields {
};

struct Dictionary_2_TKey_TValue_KeyCollection_System_String_System_Int32___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Dictionary_2_TKey_TValue_KeyCollection_System_String_System_Int32___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Dictionary_2_TKey_TValue_KeyCollection_System_String_System_Int32___VTable vtable;
};

struct IEnumerator_1_System_Int32___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_System_Int32___StaticFields {
};

struct IEnumerator_1_System_Int32___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_System_Int32___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_System_Int32___VTable vtable;
};

struct Dictionary_2_TKey_TValue_ValueCollection_System_String_System_Int32___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_Count;
    VirtualInvokeData System_Collections_Generic_ICollection_TValue__get_IsReadOnly;
    VirtualInvokeData System_Collections_Generic_ICollection_TValue__Add;
    VirtualInvokeData System_Collections_Generic_ICollection_TValue__Clear;
    VirtualInvokeData System_Collections_Generic_ICollection_TValue__Contains;
    VirtualInvokeData CopyTo;
    VirtualInvokeData System_Collections_Generic_ICollection_TValue__Remove;
    VirtualInvokeData System_Collections_Generic_IEnumerable_TValue__GetEnumerator;
    VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
    VirtualInvokeData System_Collections_ICollection_CopyTo;
    VirtualInvokeData get_Count_1;
    VirtualInvokeData System_Collections_ICollection_get_SyncRoot;
    VirtualInvokeData System_Collections_ICollection_get_IsSynchronized;
    VirtualInvokeData get_Count_2;
};

struct Dictionary_2_TKey_TValue_ValueCollection_System_String_System_Int32___StaticFields {
};

struct Dictionary_2_TKey_TValue_ValueCollection_System_String_System_Int32___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Dictionary_2_TKey_TValue_ValueCollection_System_String_System_Int32___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Dictionary_2_TKey_TValue_ValueCollection_System_String_System_Int32___VTable vtable;
};

struct ICollection_1_System_String___VTable {
    VirtualInvokeData get_Count;
    VirtualInvokeData get_IsReadOnly;
    VirtualInvokeData Add;
    VirtualInvokeData Clear;
    VirtualInvokeData Contains;
    VirtualInvokeData CopyTo;
    VirtualInvokeData Remove;
};

struct ICollection_1_System_String___StaticFields {
};

struct ICollection_1_System_String___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ICollection_1_System_String___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ICollection_1_System_String___VTable vtable;
};

struct ICollection_1_System_Int32___VTable {
    VirtualInvokeData get_Count;
    VirtualInvokeData get_IsReadOnly;
    VirtualInvokeData Add;
    VirtualInvokeData Clear;
    VirtualInvokeData Contains;
    VirtualInvokeData CopyTo;
    VirtualInvokeData Remove;
};

struct ICollection_1_System_Int32___StaticFields {
};

struct ICollection_1_System_Int32___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ICollection_1_System_Int32___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ICollection_1_System_Int32___VTable vtable;
};

struct Int32___VTable {
};

struct Int32___StaticFields {
};

struct Int32___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Int32___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Int32___VTable vtable;
};

struct KeyValuePair_2_System_String_System_Int32___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct KeyValuePair_2_System_String_System_Int32___StaticFields {
};

struct KeyValuePair_2_System_String_System_Int32___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct KeyValuePair_2_System_String_System_Int32___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct KeyValuePair_2_System_String_System_Int32___VTable vtable;
};

struct KeyValuePair_2_System_String_System_Int32___Array__VTable {
};

struct KeyValuePair_2_System_String_System_Int32___Array__StaticFields {
};

struct KeyValuePair_2_System_String_System_Int32___Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct KeyValuePair_2_System_String_System_Int32___Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct KeyValuePair_2_System_String_System_Int32___Array__VTable vtable;
};

struct IEnumerator_1_KeyValuePair_2_System_String_System_Int32___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_KeyValuePair_2_System_String_System_Int32___StaticFields {
};

struct IEnumerator_1_KeyValuePair_2_System_String_System_Int32___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_KeyValuePair_2_System_String_System_Int32___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_KeyValuePair_2_System_String_System_Int32___VTable vtable;
};

struct ICollection__VTable {
    VirtualInvokeData CopyTo;
    VirtualInvokeData get_Count;
    VirtualInvokeData get_SyncRoot;
    VirtualInvokeData get_IsSynchronized;
};

struct ICollection__StaticFields {
};

struct ICollection__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ICollection__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ICollection__VTable vtable;
};

struct IDictionaryEnumerator__VTable {
    VirtualInvokeData get_Key;
    VirtualInvokeData get_Value;
    VirtualInvokeData get_Entry;
};

struct IDictionaryEnumerator__StaticFields {
};

struct IDictionaryEnumerator__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IDictionaryEnumerator__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IDictionaryEnumerator__VTable vtable;
};

struct IEnumerable_1_System_String___VTable {
    VirtualInvokeData GetEnumerator;
};

struct IEnumerable_1_System_String___StaticFields {
};

struct IEnumerable_1_System_String___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerable_1_System_String___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerable_1_System_String___VTable vtable;
};

struct IEnumerable_1_System_Int32___VTable {
    VirtualInvokeData GetEnumerator;
};

struct IEnumerable_1_System_Int32___StaticFields {
};

struct IEnumerable_1_System_Int32___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerable_1_System_Int32___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerable_1_System_Int32___VTable vtable;
};

struct StreamingContextStates__Enum__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData CompareTo;
    VirtualInvokeData ToString_1;
    VirtualInvokeData GetTypeCode;
    VirtualInvokeData System_IConvertible_ToBoolean;
    VirtualInvokeData System_IConvertible_ToChar;
    VirtualInvokeData System_IConvertible_ToSByte;
    VirtualInvokeData System_IConvertible_ToByte;
    VirtualInvokeData System_IConvertible_ToInt16;
    VirtualInvokeData System_IConvertible_ToUInt16;
    VirtualInvokeData System_IConvertible_ToInt32;
    VirtualInvokeData System_IConvertible_ToUInt32;
    VirtualInvokeData System_IConvertible_ToInt64;
    VirtualInvokeData System_IConvertible_ToUInt64;
    VirtualInvokeData System_IConvertible_ToSingle;
    VirtualInvokeData System_IConvertible_ToDouble;
    VirtualInvokeData System_IConvertible_ToDecimal;
    VirtualInvokeData System_IConvertible_ToDateTime;
    VirtualInvokeData ToString_2;
    VirtualInvokeData System_IConvertible_ToType;
};

struct StreamingContextStates__Enum__StaticFields {
};

struct StreamingContextStates__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct StreamingContextStates__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct StreamingContextStates__Enum__VTable vtable;
};

struct StreamingContext__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct StreamingContext__StaticFields {
};

struct StreamingContext__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct StreamingContext__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct StreamingContext__VTable vtable;
};

struct Dictionary_2_System_String_System_Int32___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_Item;
    VirtualInvokeData set_Item;
    VirtualInvokeData System_Collections_Generic_IDictionary_TKey_TValue__get_Keys;
    VirtualInvokeData System_Collections_Generic_IDictionary_TKey_TValue__get_Values;
    VirtualInvokeData ContainsKey;
    VirtualInvokeData Add;
    VirtualInvokeData Remove;
    VirtualInvokeData TryGetValue;
    VirtualInvokeData get_Count;
    VirtualInvokeData System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___get_IsReadOnly;
    VirtualInvokeData System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Add;
    VirtualInvokeData Clear;
    VirtualInvokeData System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Contains;
    VirtualInvokeData System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___CopyTo;
    VirtualInvokeData System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Remove;
    VirtualInvokeData System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_TKey_TValue___GetEnumerator;
    VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
    VirtualInvokeData System_Collections_IDictionary_get_Item;
    VirtualInvokeData System_Collections_IDictionary_set_Item;
    VirtualInvokeData System_Collections_IDictionary_get_Keys;
    VirtualInvokeData System_Collections_IDictionary_get_Values;
    VirtualInvokeData System_Collections_IDictionary_Contains;
    VirtualInvokeData System_Collections_IDictionary_Add;
    VirtualInvokeData Clear_1;
    VirtualInvokeData System_Collections_IDictionary_get_IsReadOnly;
    VirtualInvokeData System_Collections_IDictionary_get_IsFixedSize;
    VirtualInvokeData System_Collections_IDictionary_GetEnumerator;
    VirtualInvokeData System_Collections_IDictionary_Remove;
    VirtualInvokeData System_Collections_ICollection_CopyTo;
    VirtualInvokeData get_Count_1;
    VirtualInvokeData System_Collections_ICollection_get_SyncRoot;
    VirtualInvokeData System_Collections_ICollection_get_IsSynchronized;
    VirtualInvokeData ContainsKey_1;
    VirtualInvokeData TryGetValue_1;
    VirtualInvokeData get_Item_1;
    VirtualInvokeData System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Keys;
    VirtualInvokeData System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Values;
    VirtualInvokeData get_Count_2;
    VirtualInvokeData GetObjectData;
    VirtualInvokeData OnDeserialization;
    VirtualInvokeData GetObjectData_1;
    VirtualInvokeData OnDeserialization_1;
};

struct Dictionary_2_System_String_System_Int32___StaticFields {
};

struct Dictionary_2_System_String_System_Int32___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Dictionary_2_System_String_System_Int32___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Dictionary_2_System_String_System_Int32___VTable vtable;
};

struct IFormatterConverter__VTable {
    VirtualInvokeData Convert;
    VirtualInvokeData Convert_1;
    VirtualInvokeData ToBoolean;
    VirtualInvokeData ToChar;
    VirtualInvokeData ToSByte;
    VirtualInvokeData ToByte;
    VirtualInvokeData ToInt16;
    VirtualInvokeData ToUInt16;
    VirtualInvokeData ToInt32;
    VirtualInvokeData ToUInt32;
    VirtualInvokeData ToInt64;
    VirtualInvokeData ToUInt64;
    VirtualInvokeData ToSingle;
    VirtualInvokeData ToDouble;
    VirtualInvokeData ToDecimal;
    VirtualInvokeData ToDateTime;
    VirtualInvokeData ToString;
};

struct IFormatterConverter__StaticFields {
};

struct IFormatterConverter__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IFormatterConverter__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IFormatterConverter__VTable vtable;
};

struct SerializationInfo__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct SerializationInfo__StaticFields {
};

struct SerializationInfo__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SerializationInfo__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SerializationInfo__VTable vtable;
};

struct IntPtr__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData System_Runtime_Serialization_ISerializable_GetObjectData;
};

struct IntPtr__StaticFields {
    void *Zero;
};

struct IntPtr__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IntPtr__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IntPtr__VTable vtable;
};

struct RNGCryptoServiceProvider__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Dispose;
    VirtualInvokeData Dispose_1;
    VirtualInvokeData GetBytes;
    VirtualInvokeData GetBytes_1;
    VirtualInvokeData GetNonZeroBytes;
};

struct RNGCryptoServiceProvider__StaticFields {
    struct Object *_lock;
};

struct RNGCryptoServiceProvider__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct RNGCryptoServiceProvider__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct RNGCryptoServiceProvider__VTable vtable;
};

struct RandomNumberGenerator__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Dispose;
    VirtualInvokeData Dispose_1;
    VirtualInvokeData __unknown;
    VirtualInvokeData GetBytes;
    VirtualInvokeData GetNonZeroBytes;
};

struct RandomNumberGenerator__StaticFields {
};

struct RandomNumberGenerator__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct RandomNumberGenerator__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct RandomNumberGenerator__VTable vtable;
};

struct Guid__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData ToString_1;
    VirtualInvokeData CompareTo;
    VirtualInvokeData CompareTo_1;
    VirtualInvokeData Equals_1;
};

struct Guid__StaticFields {
    struct Guid Empty;
    struct Object *_rngAccess;
    struct RandomNumberGenerator *_rng;
    struct RandomNumberGenerator *_fastRng;
};

struct Guid__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Guid__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Guid__VTable vtable;
};

struct Guid___VTable {
};

struct Guid___StaticFields {
};

struct Guid___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Guid___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Guid___VTable vtable;
};

struct UInt32___VTable {
};

struct UInt32___StaticFields {
};

struct UInt32___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct UInt32___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct UInt32___VTable vtable;
};

struct IEnumerable_1_System_Reflection_CustomAttributeData___VTable {
    VirtualInvokeData GetEnumerator;
};

struct IEnumerable_1_System_Reflection_CustomAttributeData___StaticFields {
};

struct IEnumerable_1_System_Reflection_CustomAttributeData___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerable_1_System_Reflection_CustomAttributeData___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerable_1_System_Reflection_CustomAttributeData___VTable vtable;
};

struct IList_1_System_Reflection_CustomAttributeData___VTable {
    VirtualInvokeData get_Item;
    VirtualInvokeData set_Item;
    VirtualInvokeData IndexOf;
    VirtualInvokeData Insert;
    VirtualInvokeData RemoveAt;
};

struct IList_1_System_Reflection_CustomAttributeData___StaticFields {
};

struct IList_1_System_Reflection_CustomAttributeData___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IList_1_System_Reflection_CustomAttributeData___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IList_1_System_Reflection_CustomAttributeData___VTable vtable;
};

struct MethodImplAttributes__Enum__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData CompareTo;
    VirtualInvokeData ToString_1;
    VirtualInvokeData GetTypeCode;
    VirtualInvokeData System_IConvertible_ToBoolean;
    VirtualInvokeData System_IConvertible_ToChar;
    VirtualInvokeData System_IConvertible_ToSByte;
    VirtualInvokeData System_IConvertible_ToByte;
    VirtualInvokeData System_IConvertible_ToInt16;
    VirtualInvokeData System_IConvertible_ToUInt16;
    VirtualInvokeData System_IConvertible_ToInt32;
    VirtualInvokeData System_IConvertible_ToUInt32;
    VirtualInvokeData System_IConvertible_ToInt64;
    VirtualInvokeData System_IConvertible_ToUInt64;
    VirtualInvokeData System_IConvertible_ToSingle;
    VirtualInvokeData System_IConvertible_ToDouble;
    VirtualInvokeData System_IConvertible_ToDecimal;
    VirtualInvokeData System_IConvertible_ToDateTime;
    VirtualInvokeData ToString_2;
    VirtualInvokeData System_IConvertible_ToType;
};

struct MethodImplAttributes__Enum__StaticFields {
};

struct MethodImplAttributes__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MethodImplAttributes__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MethodImplAttributes__Enum__VTable vtable;
};

struct ParameterAttributes__Enum__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData CompareTo;
    VirtualInvokeData ToString_1;
    VirtualInvokeData GetTypeCode;
    VirtualInvokeData System_IConvertible_ToBoolean;
    VirtualInvokeData System_IConvertible_ToChar;
    VirtualInvokeData System_IConvertible_ToSByte;
    VirtualInvokeData System_IConvertible_ToByte;
    VirtualInvokeData System_IConvertible_ToInt16;
    VirtualInvokeData System_IConvertible_ToUInt16;
    VirtualInvokeData System_IConvertible_ToInt32;
    VirtualInvokeData System_IConvertible_ToUInt32;
    VirtualInvokeData System_IConvertible_ToInt64;
    VirtualInvokeData System_IConvertible_ToUInt64;
    VirtualInvokeData System_IConvertible_ToSingle;
    VirtualInvokeData System_IConvertible_ToDouble;
    VirtualInvokeData System_IConvertible_ToDecimal;
    VirtualInvokeData System_IConvertible_ToDateTime;
    VirtualInvokeData ToString_2;
    VirtualInvokeData System_IConvertible_ToType;
};

struct ParameterAttributes__Enum__StaticFields {
};

struct ParameterAttributes__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ParameterAttributes__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ParameterAttributes__Enum__VTable vtable;
};

struct Attribute__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData System_Runtime_InteropServices__Attribute_GetIDsOfNames;
    VirtualInvokeData System_Runtime_InteropServices__Attribute_GetTypeInfo;
    VirtualInvokeData System_Runtime_InteropServices__Attribute_GetTypeInfoCount;
    VirtualInvokeData System_Runtime_InteropServices__Attribute_Invoke;
    VirtualInvokeData get_TypeId;
    VirtualInvokeData Match;
    VirtualInvokeData IsDefaultAttribute;
};

struct Attribute__StaticFields {
};

struct Attribute__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Attribute__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Attribute__VTable vtable;
};

struct UnmanagedType__Enum__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData CompareTo;
    VirtualInvokeData ToString_1;
    VirtualInvokeData GetTypeCode;
    VirtualInvokeData System_IConvertible_ToBoolean;
    VirtualInvokeData System_IConvertible_ToChar;
    VirtualInvokeData System_IConvertible_ToSByte;
    VirtualInvokeData System_IConvertible_ToByte;
    VirtualInvokeData System_IConvertible_ToInt16;
    VirtualInvokeData System_IConvertible_ToUInt16;
    VirtualInvokeData System_IConvertible_ToInt32;
    VirtualInvokeData System_IConvertible_ToUInt32;
    VirtualInvokeData System_IConvertible_ToInt64;
    VirtualInvokeData System_IConvertible_ToUInt64;
    VirtualInvokeData System_IConvertible_ToSingle;
    VirtualInvokeData System_IConvertible_ToDouble;
    VirtualInvokeData System_IConvertible_ToDecimal;
    VirtualInvokeData System_IConvertible_ToDateTime;
    VirtualInvokeData ToString_2;
    VirtualInvokeData System_IConvertible_ToType;
};

struct UnmanagedType__Enum__StaticFields {
};

struct UnmanagedType__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct UnmanagedType__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct UnmanagedType__Enum__VTable vtable;
};

struct VarEnum__Enum__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData CompareTo;
    VirtualInvokeData ToString_1;
    VirtualInvokeData GetTypeCode;
    VirtualInvokeData System_IConvertible_ToBoolean;
    VirtualInvokeData System_IConvertible_ToChar;
    VirtualInvokeData System_IConvertible_ToSByte;
    VirtualInvokeData System_IConvertible_ToByte;
    VirtualInvokeData System_IConvertible_ToInt16;
    VirtualInvokeData System_IConvertible_ToUInt16;
    VirtualInvokeData System_IConvertible_ToInt32;
    VirtualInvokeData System_IConvertible_ToUInt32;
    VirtualInvokeData System_IConvertible_ToInt64;
    VirtualInvokeData System_IConvertible_ToUInt64;
    VirtualInvokeData System_IConvertible_ToSingle;
    VirtualInvokeData System_IConvertible_ToDouble;
    VirtualInvokeData System_IConvertible_ToDecimal;
    VirtualInvokeData System_IConvertible_ToDateTime;
    VirtualInvokeData ToString_2;
    VirtualInvokeData System_IConvertible_ToType;
};

struct VarEnum__Enum__StaticFields {
};

struct VarEnum__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct VarEnum__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct VarEnum__Enum__VTable vtable;
};

struct MarshalAsAttribute__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData System_Runtime_InteropServices__Attribute_GetIDsOfNames;
    VirtualInvokeData System_Runtime_InteropServices__Attribute_GetTypeInfo;
    VirtualInvokeData System_Runtime_InteropServices__Attribute_GetTypeInfoCount;
    VirtualInvokeData System_Runtime_InteropServices__Attribute_Invoke;
    VirtualInvokeData get_TypeId;
    VirtualInvokeData Match;
    VirtualInvokeData IsDefaultAttribute;
};

struct MarshalAsAttribute__StaticFields {
};

struct MarshalAsAttribute__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MarshalAsAttribute__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MarshalAsAttribute__VTable vtable;
};

struct ParameterInfo_1__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData GetCustomAttributes;
    VirtualInvokeData GetCustomAttributes_1;
    VirtualInvokeData IsDefined;
    VirtualInvokeData GetRealObject;
    VirtualInvokeData System_Runtime_InteropServices__ParameterInfo_GetIDsOfNames;
    VirtualInvokeData System_Runtime_InteropServices__ParameterInfo_GetTypeInfo;
    VirtualInvokeData System_Runtime_InteropServices__ParameterInfo_GetTypeInfoCount;
    VirtualInvokeData System_Runtime_InteropServices__ParameterInfo_Invoke;
    VirtualInvokeData get_ParameterType;
    VirtualInvokeData get_Attributes;
    VirtualInvokeData get_Member;
    VirtualInvokeData get_Name;
    VirtualInvokeData get_Position;
    VirtualInvokeData get_CustomAttributes;
    VirtualInvokeData get_HasDefaultValue;
    VirtualInvokeData get_DefaultValue;
    VirtualInvokeData get_RawDefaultValue;
    VirtualInvokeData get_MetadataToken;
    VirtualInvokeData GetCustomAttributes_2;
    VirtualInvokeData GetCustomAttributes_3;
    VirtualInvokeData IsDefined_1;
    VirtualInvokeData GetRequiredCustomModifiers;
    VirtualInvokeData GetOptionalCustomModifiers;
    VirtualInvokeData GetCustomAttributesData;
};

struct ParameterInfo_1__StaticFields {
};

struct ParameterInfo_1__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ParameterInfo_1__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ParameterInfo_1__VTable vtable;
};

struct ParameterInfo_1__Array__VTable {
};

struct ParameterInfo_1__Array__StaticFields {
};

struct ParameterInfo_1__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ParameterInfo_1__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ParameterInfo_1__Array__VTable vtable;
};

struct BindingFlags__Enum__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData CompareTo;
    VirtualInvokeData ToString_1;
    VirtualInvokeData GetTypeCode;
    VirtualInvokeData System_IConvertible_ToBoolean;
    VirtualInvokeData System_IConvertible_ToChar;
    VirtualInvokeData System_IConvertible_ToSByte;
    VirtualInvokeData System_IConvertible_ToByte;
    VirtualInvokeData System_IConvertible_ToInt16;
    VirtualInvokeData System_IConvertible_ToUInt16;
    VirtualInvokeData System_IConvertible_ToInt32;
    VirtualInvokeData System_IConvertible_ToUInt32;
    VirtualInvokeData System_IConvertible_ToInt64;
    VirtualInvokeData System_IConvertible_ToUInt64;
    VirtualInvokeData System_IConvertible_ToSingle;
    VirtualInvokeData System_IConvertible_ToDouble;
    VirtualInvokeData System_IConvertible_ToDecimal;
    VirtualInvokeData System_IConvertible_ToDateTime;
    VirtualInvokeData ToString_2;
    VirtualInvokeData System_IConvertible_ToType;
};

struct BindingFlags__Enum__StaticFields {
};

struct BindingFlags__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct BindingFlags__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct BindingFlags__Enum__VTable vtable;
};

struct MethodBase__Array__VTable {
};

struct MethodBase__Array__StaticFields {
};

struct MethodBase__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MethodBase__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MethodBase__Array__VTable vtable;
};

struct Object___VTable {
};

struct Object___StaticFields {
};

struct Object___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Object___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Object___VTable vtable;
};

struct Boolean__Array__VTable {
};

struct Boolean__Array__StaticFields {
};

struct Boolean__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Boolean__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Boolean__Array__VTable vtable;
};

struct ParameterModifier__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct ParameterModifier__StaticFields {
};

struct ParameterModifier__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ParameterModifier__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ParameterModifier__VTable vtable;
};

struct ParameterModifier__Array__VTable {
};

struct ParameterModifier__Array__StaticFields {
};

struct ParameterModifier__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ParameterModifier__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ParameterModifier__Array__VTable vtable;
};

struct NumberStyles__Enum__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData CompareTo;
    VirtualInvokeData ToString_1;
    VirtualInvokeData GetTypeCode;
    VirtualInvokeData System_IConvertible_ToBoolean;
    VirtualInvokeData System_IConvertible_ToChar;
    VirtualInvokeData System_IConvertible_ToSByte;
    VirtualInvokeData System_IConvertible_ToByte;
    VirtualInvokeData System_IConvertible_ToInt16;
    VirtualInvokeData System_IConvertible_ToUInt16;
    VirtualInvokeData System_IConvertible_ToInt32;
    VirtualInvokeData System_IConvertible_ToUInt32;
    VirtualInvokeData System_IConvertible_ToInt64;
    VirtualInvokeData System_IConvertible_ToUInt64;
    VirtualInvokeData System_IConvertible_ToSingle;
    VirtualInvokeData System_IConvertible_ToDouble;
    VirtualInvokeData System_IConvertible_ToDecimal;
    VirtualInvokeData System_IConvertible_ToDateTime;
    VirtualInvokeData ToString_2;
    VirtualInvokeData System_IConvertible_ToType;
};

struct NumberStyles__Enum__StaticFields {
};

struct NumberStyles__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct NumberStyles__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct NumberStyles__Enum__VTable vtable;
};

struct NumberFormatInfo__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Clone;
    VirtualInvokeData GetFormat;
};

struct NumberFormatInfo__StaticFields {
    struct NumberFormatInfo *invariantInfo;
};

struct NumberFormatInfo__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct NumberFormatInfo__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct NumberFormatInfo__VTable vtable;
};

struct CalendarData__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct CalendarData__StaticFields {
    struct CalendarData *Invariant;
};

struct CalendarData__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct CalendarData__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct CalendarData__VTable vtable;
};

struct CalendarData__Array__VTable {
};

struct CalendarData__Array__StaticFields {
};

struct CalendarData__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct CalendarData__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct CalendarData__Array__VTable vtable;
};

struct CultureData__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct CultureData__StaticFields {
    struct CultureData *s_Invariant;
};

struct CultureData__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct CultureData__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct CultureData__VTable vtable;
};

struct CompareOptions__Enum__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData CompareTo;
    VirtualInvokeData ToString_1;
    VirtualInvokeData GetTypeCode;
    VirtualInvokeData System_IConvertible_ToBoolean;
    VirtualInvokeData System_IConvertible_ToChar;
    VirtualInvokeData System_IConvertible_ToSByte;
    VirtualInvokeData System_IConvertible_ToByte;
    VirtualInvokeData System_IConvertible_ToInt16;
    VirtualInvokeData System_IConvertible_ToUInt16;
    VirtualInvokeData System_IConvertible_ToInt32;
    VirtualInvokeData System_IConvertible_ToUInt32;
    VirtualInvokeData System_IConvertible_ToInt64;
    VirtualInvokeData System_IConvertible_ToUInt64;
    VirtualInvokeData System_IConvertible_ToSingle;
    VirtualInvokeData System_IConvertible_ToDouble;
    VirtualInvokeData System_IConvertible_ToDecimal;
    VirtualInvokeData System_IConvertible_ToDateTime;
    VirtualInvokeData ToString_2;
    VirtualInvokeData System_IConvertible_ToType;
};

struct CompareOptions__Enum__StaticFields {
};

struct CompareOptions__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct CompareOptions__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct CompareOptions__Enum__VTable vtable;
};

struct SortVersion__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Equals_1;
};

struct SortVersion__StaticFields {
};

struct SortVersion__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SortVersion__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SortVersion__VTable vtable;
};

struct Nullable_1_Boolean___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct Nullable_1_Boolean___StaticFields {
};

struct Nullable_1_Boolean___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Nullable_1_Boolean___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Nullable_1_Boolean___VTable vtable;
};

struct TextInfo__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Clone;
    VirtualInvokeData System_Runtime_Serialization_IDeserializationCallback_OnDeserialization;
    VirtualInvokeData get_ANSICodePage;
    VirtualInvokeData get_OEMCodePage;
    VirtualInvokeData get_MacCodePage;
    VirtualInvokeData get_EBCDICCodePage;
    VirtualInvokeData Clone_1;
    VirtualInvokeData get_ListSeparator;
    VirtualInvokeData set_ListSeparator;
    VirtualInvokeData ToLower;
    VirtualInvokeData ToLower_1;
    VirtualInvokeData ToUpper;
    VirtualInvokeData ToUpper_1;
};

struct TextInfo__StaticFields {
    struct TextInfo *s_Invariant;
};

struct TextInfo__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct TextInfo__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct TextInfo__VTable vtable;
};

struct CodePointIndexer_TableRange__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct CodePointIndexer_TableRange__StaticFields {
};

struct CodePointIndexer_TableRange__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct CodePointIndexer_TableRange__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct CodePointIndexer_TableRange__VTable vtable;
};

struct CodePointIndexer_TableRange__Array__VTable {
};

struct CodePointIndexer_TableRange__Array__StaticFields {
};

struct CodePointIndexer_TableRange__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct CodePointIndexer_TableRange__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct CodePointIndexer_TableRange__Array__VTable vtable;
};

struct CodePointIndexer__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct CodePointIndexer__StaticFields {
};

struct CodePointIndexer__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct CodePointIndexer__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct CodePointIndexer__VTable vtable;
};

struct Contraction__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct Contraction__StaticFields {
};

struct Contraction__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Contraction__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Contraction__VTable vtable;
};

struct Contraction__Array__VTable {
};

struct Contraction__Array__StaticFields {
};

struct Contraction__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Contraction__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Contraction__Array__VTable vtable;
};

struct Level2Map__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct Level2Map__StaticFields {
};

struct Level2Map__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Level2Map__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Level2Map__VTable vtable;
};

struct Level2Map__Array__VTable {
};

struct Level2Map__Array__StaticFields {
};

struct Level2Map__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Level2Map__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Level2Map__Array__VTable vtable;
};

struct BytePtr__VTable {
};

struct BytePtr__StaticFields {
};

struct BytePtr__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct BytePtr__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct BytePtr__VTable vtable;
};

struct SimpleCollator__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct SimpleCollator__StaticFields {
    bool QuickCheckDisabled;
    struct SimpleCollator *invariant;
};

struct SimpleCollator__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SimpleCollator__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SimpleCollator__VTable vtable;
};

struct Dictionary_2_TKey_TValue_Entry_System_String_Mono_Globalization_Unicode_SimpleCollator___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct Dictionary_2_TKey_TValue_Entry_System_String_Mono_Globalization_Unicode_SimpleCollator___StaticFields {
};

struct Dictionary_2_TKey_TValue_Entry_System_String_Mono_Globalization_Unicode_SimpleCollator___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Dictionary_2_TKey_TValue_Entry_System_String_Mono_Globalization_Unicode_SimpleCollator___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Dictionary_2_TKey_TValue_Entry_System_String_Mono_Globalization_Unicode_SimpleCollator___VTable vtable;
};

struct Dictionary_2_TKey_TValue_Entry_System_String_Mono_Globalization_Unicode_SimpleCollator___Array__VTable {
};

struct Dictionary_2_TKey_TValue_Entry_System_String_Mono_Globalization_Unicode_SimpleCollator___Array__StaticFields {
};

struct Dictionary_2_TKey_TValue_Entry_System_String_Mono_Globalization_Unicode_SimpleCollator___Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Dictionary_2_TKey_TValue_Entry_System_String_Mono_Globalization_Unicode_SimpleCollator___Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Dictionary_2_TKey_TValue_Entry_System_String_Mono_Globalization_Unicode_SimpleCollator___Array__VTable vtable;
};

struct Dictionary_2_TKey_TValue_KeyCollection_System_String_Mono_Globalization_Unicode_SimpleCollator___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_Count;
    VirtualInvokeData System_Collections_Generic_ICollection_TKey__get_IsReadOnly;
    VirtualInvokeData System_Collections_Generic_ICollection_TKey__Add;
    VirtualInvokeData System_Collections_Generic_ICollection_TKey__Clear;
    VirtualInvokeData System_Collections_Generic_ICollection_TKey__Contains;
    VirtualInvokeData CopyTo;
    VirtualInvokeData System_Collections_Generic_ICollection_TKey__Remove;
    VirtualInvokeData System_Collections_Generic_IEnumerable_TKey__GetEnumerator;
    VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
    VirtualInvokeData System_Collections_ICollection_CopyTo;
    VirtualInvokeData get_Count_1;
    VirtualInvokeData System_Collections_ICollection_get_SyncRoot;
    VirtualInvokeData System_Collections_ICollection_get_IsSynchronized;
    VirtualInvokeData get_Count_2;
};

struct Dictionary_2_TKey_TValue_KeyCollection_System_String_Mono_Globalization_Unicode_SimpleCollator___StaticFields {
};

struct Dictionary_2_TKey_TValue_KeyCollection_System_String_Mono_Globalization_Unicode_SimpleCollator___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Dictionary_2_TKey_TValue_KeyCollection_System_String_Mono_Globalization_Unicode_SimpleCollator___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Dictionary_2_TKey_TValue_KeyCollection_System_String_Mono_Globalization_Unicode_SimpleCollator___VTable vtable;
};

struct SimpleCollator__Array__VTable {
};

struct SimpleCollator__Array__StaticFields {
};

struct SimpleCollator__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SimpleCollator__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SimpleCollator__Array__VTable vtable;
};

struct IEnumerator_1_Mono_Globalization_Unicode_SimpleCollator___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_Mono_Globalization_Unicode_SimpleCollator___StaticFields {
};

struct IEnumerator_1_Mono_Globalization_Unicode_SimpleCollator___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_Mono_Globalization_Unicode_SimpleCollator___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_Mono_Globalization_Unicode_SimpleCollator___VTable vtable;
};

struct Dictionary_2_TKey_TValue_ValueCollection_System_String_Mono_Globalization_Unicode_SimpleCollator___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_Count;
    VirtualInvokeData System_Collections_Generic_ICollection_TValue__get_IsReadOnly;
    VirtualInvokeData System_Collections_Generic_ICollection_TValue__Add;
    VirtualInvokeData System_Collections_Generic_ICollection_TValue__Clear;
    VirtualInvokeData System_Collections_Generic_ICollection_TValue__Contains;
    VirtualInvokeData CopyTo;
    VirtualInvokeData System_Collections_Generic_ICollection_TValue__Remove;
    VirtualInvokeData System_Collections_Generic_IEnumerable_TValue__GetEnumerator;
    VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
    VirtualInvokeData System_Collections_ICollection_CopyTo;
    VirtualInvokeData get_Count_1;
    VirtualInvokeData System_Collections_ICollection_get_SyncRoot;
    VirtualInvokeData System_Collections_ICollection_get_IsSynchronized;
    VirtualInvokeData get_Count_2;
};

struct Dictionary_2_TKey_TValue_ValueCollection_System_String_Mono_Globalization_Unicode_SimpleCollator___StaticFields {
};

struct Dictionary_2_TKey_TValue_ValueCollection_System_String_Mono_Globalization_Unicode_SimpleCollator___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Dictionary_2_TKey_TValue_ValueCollection_System_String_Mono_Globalization_Unicode_SimpleCollator___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Dictionary_2_TKey_TValue_ValueCollection_System_String_Mono_Globalization_Unicode_SimpleCollator___VTable vtable;
};

struct ICollection_1_Mono_Globalization_Unicode_SimpleCollator___VTable {
    VirtualInvokeData get_Count;
    VirtualInvokeData get_IsReadOnly;
    VirtualInvokeData Add;
    VirtualInvokeData Clear;
    VirtualInvokeData Contains;
    VirtualInvokeData CopyTo;
    VirtualInvokeData Remove;
};

struct ICollection_1_Mono_Globalization_Unicode_SimpleCollator___StaticFields {
};

struct ICollection_1_Mono_Globalization_Unicode_SimpleCollator___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ICollection_1_Mono_Globalization_Unicode_SimpleCollator___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ICollection_1_Mono_Globalization_Unicode_SimpleCollator___VTable vtable;
};

struct SimpleCollator___VTable {
};

struct SimpleCollator___StaticFields {
};

struct SimpleCollator___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SimpleCollator___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SimpleCollator___VTable vtable;
};

struct KeyValuePair_2_System_String_Mono_Globalization_Unicode_SimpleCollator___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct KeyValuePair_2_System_String_Mono_Globalization_Unicode_SimpleCollator___StaticFields {
};

struct KeyValuePair_2_System_String_Mono_Globalization_Unicode_SimpleCollator___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct KeyValuePair_2_System_String_Mono_Globalization_Unicode_SimpleCollator___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct KeyValuePair_2_System_String_Mono_Globalization_Unicode_SimpleCollator___VTable vtable;
};

struct KeyValuePair_2_System_String_Mono_Globalization_Unicode_SimpleCollator___Array__VTable {
};

struct KeyValuePair_2_System_String_Mono_Globalization_Unicode_SimpleCollator___Array__StaticFields {
};

struct KeyValuePair_2_System_String_Mono_Globalization_Unicode_SimpleCollator___Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct KeyValuePair_2_System_String_Mono_Globalization_Unicode_SimpleCollator___Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct KeyValuePair_2_System_String_Mono_Globalization_Unicode_SimpleCollator___Array__VTable vtable;
};

struct IEnumerator_1_KeyValuePair_2_System_String_Mono_Globalization_Unicode_SimpleCollator___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_KeyValuePair_2_System_String_Mono_Globalization_Unicode_SimpleCollator___StaticFields {
};

struct IEnumerator_1_KeyValuePair_2_System_String_Mono_Globalization_Unicode_SimpleCollator___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_KeyValuePair_2_System_String_Mono_Globalization_Unicode_SimpleCollator___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_KeyValuePair_2_System_String_Mono_Globalization_Unicode_SimpleCollator___VTable vtable;
};

struct IEnumerable_1_Mono_Globalization_Unicode_SimpleCollator___VTable {
    VirtualInvokeData GetEnumerator;
};

struct IEnumerable_1_Mono_Globalization_Unicode_SimpleCollator___StaticFields {
};

struct IEnumerable_1_Mono_Globalization_Unicode_SimpleCollator___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerable_1_Mono_Globalization_Unicode_SimpleCollator___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerable_1_Mono_Globalization_Unicode_SimpleCollator___VTable vtable;
};

struct Dictionary_2_System_String_Mono_Globalization_Unicode_SimpleCollator___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_Item;
    VirtualInvokeData set_Item;
    VirtualInvokeData System_Collections_Generic_IDictionary_TKey_TValue__get_Keys;
    VirtualInvokeData System_Collections_Generic_IDictionary_TKey_TValue__get_Values;
    VirtualInvokeData ContainsKey;
    VirtualInvokeData Add;
    VirtualInvokeData Remove;
    VirtualInvokeData TryGetValue;
    VirtualInvokeData get_Count;
    VirtualInvokeData System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___get_IsReadOnly;
    VirtualInvokeData System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Add;
    VirtualInvokeData Clear;
    VirtualInvokeData System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Contains;
    VirtualInvokeData System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___CopyTo;
    VirtualInvokeData System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Remove;
    VirtualInvokeData System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_TKey_TValue___GetEnumerator;
    VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
    VirtualInvokeData System_Collections_IDictionary_get_Item;
    VirtualInvokeData System_Collections_IDictionary_set_Item;
    VirtualInvokeData System_Collections_IDictionary_get_Keys;
    VirtualInvokeData System_Collections_IDictionary_get_Values;
    VirtualInvokeData System_Collections_IDictionary_Contains;
    VirtualInvokeData System_Collections_IDictionary_Add;
    VirtualInvokeData Clear_1;
    VirtualInvokeData System_Collections_IDictionary_get_IsReadOnly;
    VirtualInvokeData System_Collections_IDictionary_get_IsFixedSize;
    VirtualInvokeData System_Collections_IDictionary_GetEnumerator;
    VirtualInvokeData System_Collections_IDictionary_Remove;
    VirtualInvokeData System_Collections_ICollection_CopyTo;
    VirtualInvokeData get_Count_1;
    VirtualInvokeData System_Collections_ICollection_get_SyncRoot;
    VirtualInvokeData System_Collections_ICollection_get_IsSynchronized;
    VirtualInvokeData ContainsKey_1;
    VirtualInvokeData TryGetValue_1;
    VirtualInvokeData get_Item_1;
    VirtualInvokeData System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Keys;
    VirtualInvokeData System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Values;
    VirtualInvokeData get_Count_2;
    VirtualInvokeData GetObjectData;
    VirtualInvokeData OnDeserialization;
    VirtualInvokeData GetObjectData_1;
    VirtualInvokeData OnDeserialization_1;
};

struct Dictionary_2_System_String_Mono_Globalization_Unicode_SimpleCollator___StaticFields {
};

struct Dictionary_2_System_String_Mono_Globalization_Unicode_SimpleCollator___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Dictionary_2_System_String_Mono_Globalization_Unicode_SimpleCollator___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Dictionary_2_System_String_Mono_Globalization_Unicode_SimpleCollator___VTable vtable;
};

struct SortKey__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_OriginalString;
    VirtualInvokeData get_KeyData;
};

struct SortKey__StaticFields {
};

struct SortKey__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SortKey__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SortKey__VTable vtable;
};

struct CompareInfo__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData System_Runtime_Serialization_IDeserializationCallback_OnDeserialization;
    VirtualInvokeData get_Name;
    VirtualInvokeData Compare;
    VirtualInvokeData Compare_1;
    VirtualInvokeData Compare_2;
    VirtualInvokeData Compare_3;
    VirtualInvokeData Compare_4;
    VirtualInvokeData Compare_5;
    VirtualInvokeData IsPrefix;
    VirtualInvokeData IsPrefix_1;
    VirtualInvokeData IsSuffix;
    VirtualInvokeData IsSuffix_1;
    VirtualInvokeData IndexOf;
    VirtualInvokeData IndexOf_1;
    VirtualInvokeData IndexOf_2;
    VirtualInvokeData IndexOf_3;
    VirtualInvokeData IndexOf_4;
    VirtualInvokeData IndexOf_5;
    VirtualInvokeData IndexOf_6;
    VirtualInvokeData IndexOf_7;
    VirtualInvokeData IndexOf_8;
    VirtualInvokeData IndexOf_9;
    VirtualInvokeData IndexOf_10;
    VirtualInvokeData IndexOf_11;
    VirtualInvokeData LastIndexOf;
    VirtualInvokeData LastIndexOf_1;
    VirtualInvokeData LastIndexOf_2;
    VirtualInvokeData LastIndexOf_3;
    VirtualInvokeData LastIndexOf_4;
    VirtualInvokeData LastIndexOf_5;
    VirtualInvokeData LastIndexOf_6;
    VirtualInvokeData LastIndexOf_7;
    VirtualInvokeData LastIndexOf_8;
    VirtualInvokeData LastIndexOf_9;
    VirtualInvokeData LastIndexOf_10;
    VirtualInvokeData LastIndexOf_11;
    VirtualInvokeData GetSortKey;
    VirtualInvokeData GetSortKey_1;
    VirtualInvokeData GetHashCode_1;
};

struct CompareInfo__StaticFields {
    struct Dictionary_2_System_String_Mono_Globalization_Unicode_SimpleCollator_ *collators;
    bool managedCollation;
    bool managedCollationChecked;
};

struct CompareInfo__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct CompareInfo__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct CompareInfo__VTable vtable;
};

struct CalendarAlgorithmType__Enum__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData CompareTo;
    VirtualInvokeData ToString_1;
    VirtualInvokeData GetTypeCode;
    VirtualInvokeData System_IConvertible_ToBoolean;
    VirtualInvokeData System_IConvertible_ToChar;
    VirtualInvokeData System_IConvertible_ToSByte;
    VirtualInvokeData System_IConvertible_ToByte;
    VirtualInvokeData System_IConvertible_ToInt16;
    VirtualInvokeData System_IConvertible_ToUInt16;
    VirtualInvokeData System_IConvertible_ToInt32;
    VirtualInvokeData System_IConvertible_ToUInt32;
    VirtualInvokeData System_IConvertible_ToInt64;
    VirtualInvokeData System_IConvertible_ToUInt64;
    VirtualInvokeData System_IConvertible_ToSingle;
    VirtualInvokeData System_IConvertible_ToDouble;
    VirtualInvokeData System_IConvertible_ToDecimal;
    VirtualInvokeData System_IConvertible_ToDateTime;
    VirtualInvokeData ToString_2;
    VirtualInvokeData System_IConvertible_ToType;
};

struct CalendarAlgorithmType__Enum__StaticFields {
};

struct CalendarAlgorithmType__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct CalendarAlgorithmType__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct CalendarAlgorithmType__Enum__VTable vtable;
};

struct DayOfWeek__Enum__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData CompareTo;
    VirtualInvokeData ToString_1;
    VirtualInvokeData GetTypeCode;
    VirtualInvokeData System_IConvertible_ToBoolean;
    VirtualInvokeData System_IConvertible_ToChar;
    VirtualInvokeData System_IConvertible_ToSByte;
    VirtualInvokeData System_IConvertible_ToByte;
    VirtualInvokeData System_IConvertible_ToInt16;
    VirtualInvokeData System_IConvertible_ToUInt16;
    VirtualInvokeData System_IConvertible_ToInt32;
    VirtualInvokeData System_IConvertible_ToUInt32;
    VirtualInvokeData System_IConvertible_ToInt64;
    VirtualInvokeData System_IConvertible_ToUInt64;
    VirtualInvokeData System_IConvertible_ToSingle;
    VirtualInvokeData System_IConvertible_ToDouble;
    VirtualInvokeData System_IConvertible_ToDecimal;
    VirtualInvokeData System_IConvertible_ToDateTime;
    VirtualInvokeData ToString_2;
    VirtualInvokeData System_IConvertible_ToType;
};

struct DayOfWeek__Enum__StaticFields {
};

struct DayOfWeek__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct DayOfWeek__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct DayOfWeek__Enum__VTable vtable;
};

struct CalendarWeekRule__Enum__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData CompareTo;
    VirtualInvokeData ToString_1;
    VirtualInvokeData GetTypeCode;
    VirtualInvokeData System_IConvertible_ToBoolean;
    VirtualInvokeData System_IConvertible_ToChar;
    VirtualInvokeData System_IConvertible_ToSByte;
    VirtualInvokeData System_IConvertible_ToByte;
    VirtualInvokeData System_IConvertible_ToInt16;
    VirtualInvokeData System_IConvertible_ToUInt16;
    VirtualInvokeData System_IConvertible_ToInt32;
    VirtualInvokeData System_IConvertible_ToUInt32;
    VirtualInvokeData System_IConvertible_ToInt64;
    VirtualInvokeData System_IConvertible_ToUInt64;
    VirtualInvokeData System_IConvertible_ToSingle;
    VirtualInvokeData System_IConvertible_ToDouble;
    VirtualInvokeData System_IConvertible_ToDecimal;
    VirtualInvokeData System_IConvertible_ToDateTime;
    VirtualInvokeData ToString_2;
    VirtualInvokeData System_IConvertible_ToType;
};

struct CalendarWeekRule__Enum__StaticFields {
};

struct CalendarWeekRule__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct CalendarWeekRule__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct CalendarWeekRule__Enum__VTable vtable;
};

struct DateTime___VTable {
};

struct DateTime___StaticFields {
};

struct DateTime___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct DateTime___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct DateTime___VTable vtable;
};

struct PersianCalendar__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Clone;
    VirtualInvokeData get_MinSupportedDateTime;
    VirtualInvokeData get_MaxSupportedDateTime;
    VirtualInvokeData get_ID;
    VirtualInvokeData get_BaseCalendarID;
    VirtualInvokeData get_AlgorithmType;
    VirtualInvokeData Clone_1;
    VirtualInvokeData get_CurrentEraValue;
    VirtualInvokeData AddMilliseconds;
    VirtualInvokeData AddDays;
    VirtualInvokeData AddHours;
    VirtualInvokeData AddMinutes;
    VirtualInvokeData AddMonths;
    VirtualInvokeData AddSeconds;
    VirtualInvokeData AddWeeks;
    VirtualInvokeData AddYears;
    VirtualInvokeData GetDayOfMonth;
    VirtualInvokeData GetDayOfWeek;
    VirtualInvokeData GetDayOfYear;
    VirtualInvokeData GetDaysInMonth;
    VirtualInvokeData GetDaysInMonth_1;
    VirtualInvokeData GetDaysInYear;
    VirtualInvokeData GetDaysInYear_1;
    VirtualInvokeData GetEra;
    VirtualInvokeData get_Eras;
    VirtualInvokeData GetHour;
    VirtualInvokeData GetMilliseconds;
    VirtualInvokeData GetMinute;
    VirtualInvokeData GetMonth;
    VirtualInvokeData GetMonthsInYear;
    VirtualInvokeData GetMonthsInYear_1;
    VirtualInvokeData GetSecond;
    VirtualInvokeData get_DaysInYearBeforeMinSupportedYear;
    VirtualInvokeData GetWeekOfYear;
    VirtualInvokeData GetYear;
    VirtualInvokeData IsLeapDay;
    VirtualInvokeData IsLeapDay_1;
    VirtualInvokeData IsLeapMonth;
    VirtualInvokeData IsLeapMonth_1;
    VirtualInvokeData GetLeapMonth;
    VirtualInvokeData GetLeapMonth_1;
    VirtualInvokeData IsLeapYear;
    VirtualInvokeData IsLeapYear_1;
    VirtualInvokeData ToDateTime;
    VirtualInvokeData ToDateTime_1;
    VirtualInvokeData TryToDateTime;
    VirtualInvokeData IsValidYear;
    VirtualInvokeData IsValidMonth;
    VirtualInvokeData IsValidDay;
    VirtualInvokeData get_TwoDigitYearMax;
    VirtualInvokeData set_TwoDigitYearMax;
    VirtualInvokeData ToFourDigitYear;
};

struct PersianCalendar__StaticFields {
    int32_t PersianEra;
    int64_t PersianEpoch;
    struct Int32__Array *DaysToMonth;
    struct DateTime minDate;
    struct DateTime maxDate;
};

struct PersianCalendar__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct PersianCalendar__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct PersianCalendar__VTable vtable;
};

struct Calendar__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Clone;
    VirtualInvokeData get_MinSupportedDateTime;
    VirtualInvokeData get_MaxSupportedDateTime;
    VirtualInvokeData get_ID;
    VirtualInvokeData get_BaseCalendarID;
    VirtualInvokeData get_AlgorithmType;
    VirtualInvokeData Clone_1;
    VirtualInvokeData get_CurrentEraValue;
    VirtualInvokeData AddMilliseconds;
    VirtualInvokeData AddDays;
    VirtualInvokeData AddHours;
    VirtualInvokeData AddMinutes;
    VirtualInvokeData __unknown;
    VirtualInvokeData AddSeconds;
    VirtualInvokeData AddWeeks;
    VirtualInvokeData __unknown_1;
    VirtualInvokeData __unknown_2;
    VirtualInvokeData __unknown_3;
    VirtualInvokeData __unknown_4;
    VirtualInvokeData GetDaysInMonth;
    VirtualInvokeData __unknown_5;
    VirtualInvokeData GetDaysInYear;
    VirtualInvokeData __unknown_6;
    VirtualInvokeData __unknown_7;
    VirtualInvokeData __unknown_8;
    VirtualInvokeData GetHour;
    VirtualInvokeData GetMilliseconds;
    VirtualInvokeData GetMinute;
    VirtualInvokeData __unknown_9;
    VirtualInvokeData GetMonthsInYear;
    VirtualInvokeData __unknown_10;
    VirtualInvokeData GetSecond;
    VirtualInvokeData get_DaysInYearBeforeMinSupportedYear;
    VirtualInvokeData GetWeekOfYear;
    VirtualInvokeData __unknown_11;
    VirtualInvokeData IsLeapDay;
    VirtualInvokeData __unknown_12;
    VirtualInvokeData IsLeapMonth;
    VirtualInvokeData __unknown_13;
    VirtualInvokeData GetLeapMonth;
    VirtualInvokeData GetLeapMonth_1;
    VirtualInvokeData IsLeapYear;
    VirtualInvokeData __unknown_14;
    VirtualInvokeData ToDateTime;
    VirtualInvokeData __unknown_15;
    VirtualInvokeData TryToDateTime;
    VirtualInvokeData IsValidYear;
    VirtualInvokeData IsValidMonth;
    VirtualInvokeData IsValidDay;
    VirtualInvokeData get_TwoDigitYearMax;
    VirtualInvokeData set_TwoDigitYearMax;
    VirtualInvokeData ToFourDigitYear;
};

struct Calendar__StaticFields {
};

struct Calendar__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Calendar__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Calendar__VTable vtable;
};

struct DateTimeFormatFlags__Enum__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData CompareTo;
    VirtualInvokeData ToString_1;
    VirtualInvokeData GetTypeCode;
    VirtualInvokeData System_IConvertible_ToBoolean;
    VirtualInvokeData System_IConvertible_ToChar;
    VirtualInvokeData System_IConvertible_ToSByte;
    VirtualInvokeData System_IConvertible_ToByte;
    VirtualInvokeData System_IConvertible_ToInt16;
    VirtualInvokeData System_IConvertible_ToUInt16;
    VirtualInvokeData System_IConvertible_ToInt32;
    VirtualInvokeData System_IConvertible_ToUInt32;
    VirtualInvokeData System_IConvertible_ToInt64;
    VirtualInvokeData System_IConvertible_ToUInt64;
    VirtualInvokeData System_IConvertible_ToSingle;
    VirtualInvokeData System_IConvertible_ToDouble;
    VirtualInvokeData System_IConvertible_ToDecimal;
    VirtualInvokeData System_IConvertible_ToDateTime;
    VirtualInvokeData ToString_2;
    VirtualInvokeData System_IConvertible_ToType;
};

struct DateTimeFormatFlags__Enum__StaticFields {
};

struct DateTimeFormatFlags__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct DateTimeFormatFlags__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct DateTimeFormatFlags__Enum__VTable vtable;
};

struct Hashtable_bucket__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct Hashtable_bucket__StaticFields {
};

struct Hashtable_bucket__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Hashtable_bucket__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Hashtable_bucket__VTable vtable;
};

struct Hashtable_bucket__Array__VTable {
};

struct Hashtable_bucket__Array__StaticFields {
};

struct Hashtable_bucket__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Hashtable_bucket__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Hashtable_bucket__Array__VTable vtable;
};

struct KeyValuePairs__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct KeyValuePairs__StaticFields {
};

struct KeyValuePairs__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct KeyValuePairs__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct KeyValuePairs__VTable vtable;
};

struct KeyValuePairs__Array__VTable {
};

struct KeyValuePairs__Array__StaticFields {
};

struct KeyValuePairs__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct KeyValuePairs__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct KeyValuePairs__Array__VTable vtable;
};

struct Hashtable__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_Item;
    VirtualInvokeData set_Item;
    VirtualInvokeData get_Keys;
    VirtualInvokeData get_Values;
    VirtualInvokeData Contains;
    VirtualInvokeData Add;
    VirtualInvokeData Clear;
    VirtualInvokeData get_IsReadOnly;
    VirtualInvokeData get_IsFixedSize;
    VirtualInvokeData GetEnumerator;
    VirtualInvokeData Remove;
    VirtualInvokeData CopyTo;
    VirtualInvokeData get_Count;
    VirtualInvokeData get_SyncRoot;
    VirtualInvokeData get_IsSynchronized;
    VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
    VirtualInvokeData GetObjectData;
    VirtualInvokeData OnDeserialization;
    VirtualInvokeData Clone;
    VirtualInvokeData Add_1;
    VirtualInvokeData Clear_1;
    VirtualInvokeData Clone_1;
    VirtualInvokeData Contains_1;
    VirtualInvokeData ContainsKey;
    VirtualInvokeData ContainsValue;
    VirtualInvokeData CopyTo_1;
    VirtualInvokeData ToKeyValuePairsArray;
    VirtualInvokeData get_Item_1;
    VirtualInvokeData set_Item_1;
    VirtualInvokeData GetEnumerator_1;
    VirtualInvokeData GetHash;
    VirtualInvokeData get_IsReadOnly_1;
    VirtualInvokeData get_IsFixedSize_1;
    VirtualInvokeData get_IsSynchronized_1;
    VirtualInvokeData KeyEquals;
    VirtualInvokeData get_Keys_1;
    VirtualInvokeData get_Values_1;
    VirtualInvokeData Remove_1;
    VirtualInvokeData get_SyncRoot_1;
    VirtualInvokeData get_Count_1;
    VirtualInvokeData GetObjectData_1;
    VirtualInvokeData OnDeserialization_1;
};

struct Hashtable__StaticFields {
};

struct Hashtable__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Hashtable__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Hashtable__VTable vtable;
};

struct DateTimeStyles__Enum__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData CompareTo;
    VirtualInvokeData ToString_1;
    VirtualInvokeData GetTypeCode;
    VirtualInvokeData System_IConvertible_ToBoolean;
    VirtualInvokeData System_IConvertible_ToChar;
    VirtualInvokeData System_IConvertible_ToSByte;
    VirtualInvokeData System_IConvertible_ToByte;
    VirtualInvokeData System_IConvertible_ToInt16;
    VirtualInvokeData System_IConvertible_ToUInt16;
    VirtualInvokeData System_IConvertible_ToInt32;
    VirtualInvokeData System_IConvertible_ToUInt32;
    VirtualInvokeData System_IConvertible_ToInt64;
    VirtualInvokeData System_IConvertible_ToUInt64;
    VirtualInvokeData System_IConvertible_ToSingle;
    VirtualInvokeData System_IConvertible_ToDouble;
    VirtualInvokeData System_IConvertible_ToDecimal;
    VirtualInvokeData System_IConvertible_ToDateTime;
    VirtualInvokeData ToString_2;
    VirtualInvokeData System_IConvertible_ToType;
};

struct DateTimeStyles__Enum__StaticFields {
};

struct DateTimeStyles__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct DateTimeStyles__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct DateTimeStyles__Enum__VTable vtable;
};

struct TokenType__Enum__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData CompareTo;
    VirtualInvokeData ToString_1;
    VirtualInvokeData GetTypeCode;
    VirtualInvokeData System_IConvertible_ToBoolean;
    VirtualInvokeData System_IConvertible_ToChar;
    VirtualInvokeData System_IConvertible_ToSByte;
    VirtualInvokeData System_IConvertible_ToByte;
    VirtualInvokeData System_IConvertible_ToInt16;
    VirtualInvokeData System_IConvertible_ToUInt16;
    VirtualInvokeData System_IConvertible_ToInt32;
    VirtualInvokeData System_IConvertible_ToUInt32;
    VirtualInvokeData System_IConvertible_ToInt64;
    VirtualInvokeData System_IConvertible_ToUInt64;
    VirtualInvokeData System_IConvertible_ToSingle;
    VirtualInvokeData System_IConvertible_ToDouble;
    VirtualInvokeData System_IConvertible_ToDecimal;
    VirtualInvokeData System_IConvertible_ToDateTime;
    VirtualInvokeData ToString_2;
    VirtualInvokeData System_IConvertible_ToType;
};

struct TokenType__Enum__StaticFields {
};

struct TokenType__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct TokenType__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct TokenType__Enum__VTable vtable;
};

struct TokenHashValue__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct TokenHashValue__StaticFields {
};

struct TokenHashValue__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct TokenHashValue__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct TokenHashValue__VTable vtable;
};

struct TokenHashValue__Array__VTable {
};

struct TokenHashValue__Array__StaticFields {
};

struct TokenHashValue__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct TokenHashValue__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct TokenHashValue__Array__VTable vtable;
};

struct DateTimeFormatInfo__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Clone;
    VirtualInvokeData GetFormat;
};

struct DateTimeFormatInfo__StaticFields {
    struct DateTimeFormatInfo *invariantInfo;
    bool preferExistingTokens;
    struct Hashtable *s_calendarNativeNames;
    struct DateTimeFormatInfo *s_jajpDTFI;
    struct DateTimeFormatInfo *s_zhtwDTFI;
};

struct DateTimeFormatInfo__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct DateTimeFormatInfo__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct DateTimeFormatInfo__VTable vtable;
};

struct Dictionary_2_TKey_TValue_Entry_System_Int32_System_Globalization_CultureInfo___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct Dictionary_2_TKey_TValue_Entry_System_Int32_System_Globalization_CultureInfo___StaticFields {
};

struct Dictionary_2_TKey_TValue_Entry_System_Int32_System_Globalization_CultureInfo___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Dictionary_2_TKey_TValue_Entry_System_Int32_System_Globalization_CultureInfo___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Dictionary_2_TKey_TValue_Entry_System_Int32_System_Globalization_CultureInfo___VTable vtable;
};

struct Dictionary_2_TKey_TValue_Entry_System_Int32_System_Globalization_CultureInfo___Array__VTable {
};

struct Dictionary_2_TKey_TValue_Entry_System_Int32_System_Globalization_CultureInfo___Array__StaticFields {
};

struct Dictionary_2_TKey_TValue_Entry_System_Int32_System_Globalization_CultureInfo___Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Dictionary_2_TKey_TValue_Entry_System_Int32_System_Globalization_CultureInfo___Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Dictionary_2_TKey_TValue_Entry_System_Int32_System_Globalization_CultureInfo___Array__VTable vtable;
};

struct IEqualityComparer_1_System_Int32___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData GetHashCode;
};

struct IEqualityComparer_1_System_Int32___StaticFields {
};

struct IEqualityComparer_1_System_Int32___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEqualityComparer_1_System_Int32___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEqualityComparer_1_System_Int32___VTable vtable;
};

struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_System_Globalization_CultureInfo___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_Count;
    VirtualInvokeData System_Collections_Generic_ICollection_TKey__get_IsReadOnly;
    VirtualInvokeData System_Collections_Generic_ICollection_TKey__Add;
    VirtualInvokeData System_Collections_Generic_ICollection_TKey__Clear;
    VirtualInvokeData System_Collections_Generic_ICollection_TKey__Contains;
    VirtualInvokeData CopyTo;
    VirtualInvokeData System_Collections_Generic_ICollection_TKey__Remove;
    VirtualInvokeData System_Collections_Generic_IEnumerable_TKey__GetEnumerator;
    VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
    VirtualInvokeData System_Collections_ICollection_CopyTo;
    VirtualInvokeData get_Count_1;
    VirtualInvokeData System_Collections_ICollection_get_SyncRoot;
    VirtualInvokeData System_Collections_ICollection_get_IsSynchronized;
    VirtualInvokeData get_Count_2;
};

struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_System_Globalization_CultureInfo___StaticFields {
};

struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_System_Globalization_CultureInfo___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_System_Globalization_CultureInfo___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_System_Globalization_CultureInfo___VTable vtable;
};

struct CultureInfo__Array__VTable {
};

struct CultureInfo__Array__StaticFields {
};

struct CultureInfo__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct CultureInfo__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct CultureInfo__Array__VTable vtable;
};

struct IEnumerator_1_System_Globalization_CultureInfo___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_System_Globalization_CultureInfo___StaticFields {
};

struct IEnumerator_1_System_Globalization_CultureInfo___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_System_Globalization_CultureInfo___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_System_Globalization_CultureInfo___VTable vtable;
};

struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_System_Globalization_CultureInfo___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_Count;
    VirtualInvokeData System_Collections_Generic_ICollection_TValue__get_IsReadOnly;
    VirtualInvokeData System_Collections_Generic_ICollection_TValue__Add;
    VirtualInvokeData System_Collections_Generic_ICollection_TValue__Clear;
    VirtualInvokeData System_Collections_Generic_ICollection_TValue__Contains;
    VirtualInvokeData CopyTo;
    VirtualInvokeData System_Collections_Generic_ICollection_TValue__Remove;
    VirtualInvokeData System_Collections_Generic_IEnumerable_TValue__GetEnumerator;
    VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
    VirtualInvokeData System_Collections_ICollection_CopyTo;
    VirtualInvokeData get_Count_1;
    VirtualInvokeData System_Collections_ICollection_get_SyncRoot;
    VirtualInvokeData System_Collections_ICollection_get_IsSynchronized;
    VirtualInvokeData get_Count_2;
};

struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_System_Globalization_CultureInfo___StaticFields {
};

struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_System_Globalization_CultureInfo___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_System_Globalization_CultureInfo___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_System_Globalization_CultureInfo___VTable vtable;
};

struct ICollection_1_System_Globalization_CultureInfo___VTable {
    VirtualInvokeData get_Count;
    VirtualInvokeData get_IsReadOnly;
    VirtualInvokeData Add;
    VirtualInvokeData Clear;
    VirtualInvokeData Contains;
    VirtualInvokeData CopyTo;
    VirtualInvokeData Remove;
};

struct ICollection_1_System_Globalization_CultureInfo___StaticFields {
};

struct ICollection_1_System_Globalization_CultureInfo___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ICollection_1_System_Globalization_CultureInfo___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ICollection_1_System_Globalization_CultureInfo___VTable vtable;
};

struct CultureInfo___VTable {
};

struct CultureInfo___StaticFields {
};

struct CultureInfo___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct CultureInfo___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct CultureInfo___VTable vtable;
};

struct KeyValuePair_2_System_Int32_System_Globalization_CultureInfo___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct KeyValuePair_2_System_Int32_System_Globalization_CultureInfo___StaticFields {
};

struct KeyValuePair_2_System_Int32_System_Globalization_CultureInfo___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct KeyValuePair_2_System_Int32_System_Globalization_CultureInfo___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct KeyValuePair_2_System_Int32_System_Globalization_CultureInfo___VTable vtable;
};

struct KeyValuePair_2_System_Int32_System_Globalization_CultureInfo___Array__VTable {
};

struct KeyValuePair_2_System_Int32_System_Globalization_CultureInfo___Array__StaticFields {
};

struct KeyValuePair_2_System_Int32_System_Globalization_CultureInfo___Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct KeyValuePair_2_System_Int32_System_Globalization_CultureInfo___Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct KeyValuePair_2_System_Int32_System_Globalization_CultureInfo___Array__VTable vtable;
};

struct IEnumerator_1_KeyValuePair_2_System_Int32_System_Globalization_CultureInfo___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_KeyValuePair_2_System_Int32_System_Globalization_CultureInfo___StaticFields {
};

struct IEnumerator_1_KeyValuePair_2_System_Int32_System_Globalization_CultureInfo___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_KeyValuePair_2_System_Int32_System_Globalization_CultureInfo___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_KeyValuePair_2_System_Int32_System_Globalization_CultureInfo___VTable vtable;
};

struct IEnumerable_1_System_Globalization_CultureInfo___VTable {
    VirtualInvokeData GetEnumerator;
};

struct IEnumerable_1_System_Globalization_CultureInfo___StaticFields {
};

struct IEnumerable_1_System_Globalization_CultureInfo___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerable_1_System_Globalization_CultureInfo___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerable_1_System_Globalization_CultureInfo___VTable vtable;
};

struct Dictionary_2_System_Int32_System_Globalization_CultureInfo___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_Item;
    VirtualInvokeData set_Item;
    VirtualInvokeData System_Collections_Generic_IDictionary_TKey_TValue__get_Keys;
    VirtualInvokeData System_Collections_Generic_IDictionary_TKey_TValue__get_Values;
    VirtualInvokeData ContainsKey;
    VirtualInvokeData Add;
    VirtualInvokeData Remove;
    VirtualInvokeData TryGetValue;
    VirtualInvokeData get_Count;
    VirtualInvokeData System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___get_IsReadOnly;
    VirtualInvokeData System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Add;
    VirtualInvokeData Clear;
    VirtualInvokeData System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Contains;
    VirtualInvokeData System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___CopyTo;
    VirtualInvokeData System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Remove;
    VirtualInvokeData System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_TKey_TValue___GetEnumerator;
    VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
    VirtualInvokeData System_Collections_IDictionary_get_Item;
    VirtualInvokeData System_Collections_IDictionary_set_Item;
    VirtualInvokeData System_Collections_IDictionary_get_Keys;
    VirtualInvokeData System_Collections_IDictionary_get_Values;
    VirtualInvokeData System_Collections_IDictionary_Contains;
    VirtualInvokeData System_Collections_IDictionary_Add;
    VirtualInvokeData Clear_1;
    VirtualInvokeData System_Collections_IDictionary_get_IsReadOnly;
    VirtualInvokeData System_Collections_IDictionary_get_IsFixedSize;
    VirtualInvokeData System_Collections_IDictionary_GetEnumerator;
    VirtualInvokeData System_Collections_IDictionary_Remove;
    VirtualInvokeData System_Collections_ICollection_CopyTo;
    VirtualInvokeData get_Count_1;
    VirtualInvokeData System_Collections_ICollection_get_SyncRoot;
    VirtualInvokeData System_Collections_ICollection_get_IsSynchronized;
    VirtualInvokeData ContainsKey_1;
    VirtualInvokeData TryGetValue_1;
    VirtualInvokeData get_Item_1;
    VirtualInvokeData System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Keys;
    VirtualInvokeData System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Values;
    VirtualInvokeData get_Count_2;
    VirtualInvokeData GetObjectData;
    VirtualInvokeData OnDeserialization;
    VirtualInvokeData GetObjectData_1;
    VirtualInvokeData OnDeserialization_1;
};

struct Dictionary_2_System_Int32_System_Globalization_CultureInfo___StaticFields {
};

struct Dictionary_2_System_Int32_System_Globalization_CultureInfo___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Dictionary_2_System_Int32_System_Globalization_CultureInfo___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Dictionary_2_System_Int32_System_Globalization_CultureInfo___VTable vtable;
};

struct Dictionary_2_TKey_TValue_Entry_System_String_System_Globalization_CultureInfo___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct Dictionary_2_TKey_TValue_Entry_System_String_System_Globalization_CultureInfo___StaticFields {
};

struct Dictionary_2_TKey_TValue_Entry_System_String_System_Globalization_CultureInfo___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Dictionary_2_TKey_TValue_Entry_System_String_System_Globalization_CultureInfo___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Dictionary_2_TKey_TValue_Entry_System_String_System_Globalization_CultureInfo___VTable vtable;
};

struct Dictionary_2_TKey_TValue_Entry_System_String_System_Globalization_CultureInfo___Array__VTable {
};

struct Dictionary_2_TKey_TValue_Entry_System_String_System_Globalization_CultureInfo___Array__StaticFields {
};

struct Dictionary_2_TKey_TValue_Entry_System_String_System_Globalization_CultureInfo___Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Dictionary_2_TKey_TValue_Entry_System_String_System_Globalization_CultureInfo___Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Dictionary_2_TKey_TValue_Entry_System_String_System_Globalization_CultureInfo___Array__VTable vtable;
};

struct Dictionary_2_TKey_TValue_KeyCollection_System_String_System_Globalization_CultureInfo___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_Count;
    VirtualInvokeData System_Collections_Generic_ICollection_TKey__get_IsReadOnly;
    VirtualInvokeData System_Collections_Generic_ICollection_TKey__Add;
    VirtualInvokeData System_Collections_Generic_ICollection_TKey__Clear;
    VirtualInvokeData System_Collections_Generic_ICollection_TKey__Contains;
    VirtualInvokeData CopyTo;
    VirtualInvokeData System_Collections_Generic_ICollection_TKey__Remove;
    VirtualInvokeData System_Collections_Generic_IEnumerable_TKey__GetEnumerator;
    VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
    VirtualInvokeData System_Collections_ICollection_CopyTo;
    VirtualInvokeData get_Count_1;
    VirtualInvokeData System_Collections_ICollection_get_SyncRoot;
    VirtualInvokeData System_Collections_ICollection_get_IsSynchronized;
    VirtualInvokeData get_Count_2;
};

struct Dictionary_2_TKey_TValue_KeyCollection_System_String_System_Globalization_CultureInfo___StaticFields {
};

struct Dictionary_2_TKey_TValue_KeyCollection_System_String_System_Globalization_CultureInfo___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Dictionary_2_TKey_TValue_KeyCollection_System_String_System_Globalization_CultureInfo___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Dictionary_2_TKey_TValue_KeyCollection_System_String_System_Globalization_CultureInfo___VTable vtable;
};

struct Dictionary_2_TKey_TValue_ValueCollection_System_String_System_Globalization_CultureInfo___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_Count;
    VirtualInvokeData System_Collections_Generic_ICollection_TValue__get_IsReadOnly;
    VirtualInvokeData System_Collections_Generic_ICollection_TValue__Add;
    VirtualInvokeData System_Collections_Generic_ICollection_TValue__Clear;
    VirtualInvokeData System_Collections_Generic_ICollection_TValue__Contains;
    VirtualInvokeData CopyTo;
    VirtualInvokeData System_Collections_Generic_ICollection_TValue__Remove;
    VirtualInvokeData System_Collections_Generic_IEnumerable_TValue__GetEnumerator;
    VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
    VirtualInvokeData System_Collections_ICollection_CopyTo;
    VirtualInvokeData get_Count_1;
    VirtualInvokeData System_Collections_ICollection_get_SyncRoot;
    VirtualInvokeData System_Collections_ICollection_get_IsSynchronized;
    VirtualInvokeData get_Count_2;
};

struct Dictionary_2_TKey_TValue_ValueCollection_System_String_System_Globalization_CultureInfo___StaticFields {
};

struct Dictionary_2_TKey_TValue_ValueCollection_System_String_System_Globalization_CultureInfo___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Dictionary_2_TKey_TValue_ValueCollection_System_String_System_Globalization_CultureInfo___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Dictionary_2_TKey_TValue_ValueCollection_System_String_System_Globalization_CultureInfo___VTable vtable;
};

struct KeyValuePair_2_System_String_System_Globalization_CultureInfo___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct KeyValuePair_2_System_String_System_Globalization_CultureInfo___StaticFields {
};

struct KeyValuePair_2_System_String_System_Globalization_CultureInfo___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct KeyValuePair_2_System_String_System_Globalization_CultureInfo___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct KeyValuePair_2_System_String_System_Globalization_CultureInfo___VTable vtable;
};

struct KeyValuePair_2_System_String_System_Globalization_CultureInfo___Array__VTable {
};

struct KeyValuePair_2_System_String_System_Globalization_CultureInfo___Array__StaticFields {
};

struct KeyValuePair_2_System_String_System_Globalization_CultureInfo___Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct KeyValuePair_2_System_String_System_Globalization_CultureInfo___Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct KeyValuePair_2_System_String_System_Globalization_CultureInfo___Array__VTable vtable;
};

struct IEnumerator_1_KeyValuePair_2_System_String_System_Globalization_CultureInfo___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_KeyValuePair_2_System_String_System_Globalization_CultureInfo___StaticFields {
};

struct IEnumerator_1_KeyValuePair_2_System_String_System_Globalization_CultureInfo___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_KeyValuePair_2_System_String_System_Globalization_CultureInfo___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_KeyValuePair_2_System_String_System_Globalization_CultureInfo___VTable vtable;
};

struct Dictionary_2_System_String_System_Globalization_CultureInfo___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_Item;
    VirtualInvokeData set_Item;
    VirtualInvokeData System_Collections_Generic_IDictionary_TKey_TValue__get_Keys;
    VirtualInvokeData System_Collections_Generic_IDictionary_TKey_TValue__get_Values;
    VirtualInvokeData ContainsKey;
    VirtualInvokeData Add;
    VirtualInvokeData Remove;
    VirtualInvokeData TryGetValue;
    VirtualInvokeData get_Count;
    VirtualInvokeData System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___get_IsReadOnly;
    VirtualInvokeData System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Add;
    VirtualInvokeData Clear;
    VirtualInvokeData System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Contains;
    VirtualInvokeData System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___CopyTo;
    VirtualInvokeData System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Remove;
    VirtualInvokeData System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_TKey_TValue___GetEnumerator;
    VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
    VirtualInvokeData System_Collections_IDictionary_get_Item;
    VirtualInvokeData System_Collections_IDictionary_set_Item;
    VirtualInvokeData System_Collections_IDictionary_get_Keys;
    VirtualInvokeData System_Collections_IDictionary_get_Values;
    VirtualInvokeData System_Collections_IDictionary_Contains;
    VirtualInvokeData System_Collections_IDictionary_Add;
    VirtualInvokeData Clear_1;
    VirtualInvokeData System_Collections_IDictionary_get_IsReadOnly;
    VirtualInvokeData System_Collections_IDictionary_get_IsFixedSize;
    VirtualInvokeData System_Collections_IDictionary_GetEnumerator;
    VirtualInvokeData System_Collections_IDictionary_Remove;
    VirtualInvokeData System_Collections_ICollection_CopyTo;
    VirtualInvokeData get_Count_1;
    VirtualInvokeData System_Collections_ICollection_get_SyncRoot;
    VirtualInvokeData System_Collections_ICollection_get_IsSynchronized;
    VirtualInvokeData ContainsKey_1;
    VirtualInvokeData TryGetValue_1;
    VirtualInvokeData get_Item_1;
    VirtualInvokeData System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Keys;
    VirtualInvokeData System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Values;
    VirtualInvokeData get_Count_2;
    VirtualInvokeData GetObjectData;
    VirtualInvokeData OnDeserialization;
    VirtualInvokeData GetObjectData_1;
    VirtualInvokeData OnDeserialization_1;
};

struct Dictionary_2_System_String_System_Globalization_CultureInfo___StaticFields {
};

struct Dictionary_2_System_String_System_Globalization_CultureInfo___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Dictionary_2_System_String_System_Globalization_CultureInfo___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Dictionary_2_System_String_System_Globalization_CultureInfo___VTable vtable;
};

struct Calendar__Array__VTable {
};

struct Calendar__Array__StaticFields {
};

struct Calendar__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Calendar__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Calendar__Array__VTable vtable;
};

struct CultureInfo__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Clone;
    VirtualInvokeData GetFormat;
    VirtualInvokeData get_KeyboardLayoutId;
    VirtualInvokeData get_LCID;
    VirtualInvokeData get_Name;
    VirtualInvokeData get_NativeName;
    VirtualInvokeData get_Calendar;
    VirtualInvokeData get_OptionalCalendars;
    VirtualInvokeData get_Parent;
    VirtualInvokeData get_TextInfo;
    VirtualInvokeData get_ThreeLetterISOLanguageName;
    VirtualInvokeData get_ThreeLetterWindowsLanguageName;
    VirtualInvokeData get_TwoLetterISOLanguageName;
    VirtualInvokeData Clone_1;
    VirtualInvokeData get_CompareInfo;
    VirtualInvokeData get_IsNeutralCulture;
    VirtualInvokeData get_NumberFormat;
    VirtualInvokeData set_NumberFormat;
    VirtualInvokeData get_DateTimeFormat;
    VirtualInvokeData set_DateTimeFormat;
    VirtualInvokeData get_DisplayName;
    VirtualInvokeData get_EnglishName;
    VirtualInvokeData GetFormat_1;
};

struct CultureInfo__StaticFields {
    struct CultureInfo *invariant_culture_info;
    struct Object *shared_table_lock;
    struct CultureInfo *default_current_culture;
    struct CultureInfo *s_DefaultThreadCurrentUICulture;
    struct CultureInfo *s_DefaultThreadCurrentCulture;
    struct Dictionary_2_System_Int32_System_Globalization_CultureInfo_ *shared_by_number;
    struct Dictionary_2_System_String_System_Globalization_CultureInfo_ *shared_by_name;
    bool IsTaiwanSku;
};

struct CultureInfo__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct CultureInfo__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct CultureInfo__VTable vtable;
};

struct Object__1__VTable {
};

struct Object__1__StaticFields {
};

struct Object__1__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Object__1__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Object__1__VTable vtable;
};

struct RuntimeTypeHandle__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData GetObjectData;
};

struct RuntimeTypeHandle__StaticFields {
};

struct RuntimeTypeHandle__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct RuntimeTypeHandle__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct RuntimeTypeHandle__VTable vtable;
};

struct TypedReference__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct TypedReference__StaticFields {
};

struct TypedReference__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct TypedReference__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct TypedReference__VTable vtable;
};

struct FieldAttributes__Enum__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData CompareTo;
    VirtualInvokeData ToString_1;
    VirtualInvokeData GetTypeCode;
    VirtualInvokeData System_IConvertible_ToBoolean;
    VirtualInvokeData System_IConvertible_ToChar;
    VirtualInvokeData System_IConvertible_ToSByte;
    VirtualInvokeData System_IConvertible_ToByte;
    VirtualInvokeData System_IConvertible_ToInt16;
    VirtualInvokeData System_IConvertible_ToUInt16;
    VirtualInvokeData System_IConvertible_ToInt32;
    VirtualInvokeData System_IConvertible_ToUInt32;
    VirtualInvokeData System_IConvertible_ToInt64;
    VirtualInvokeData System_IConvertible_ToUInt64;
    VirtualInvokeData System_IConvertible_ToSingle;
    VirtualInvokeData System_IConvertible_ToDouble;
    VirtualInvokeData System_IConvertible_ToDecimal;
    VirtualInvokeData System_IConvertible_ToDateTime;
    VirtualInvokeData ToString_2;
    VirtualInvokeData System_IConvertible_ToType;
};

struct FieldAttributes__Enum__StaticFields {
};

struct FieldAttributes__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct FieldAttributes__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct FieldAttributes__Enum__VTable vtable;
};

struct RuntimeFieldHandle__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData GetObjectData;
};

struct RuntimeFieldHandle__StaticFields {
};

struct RuntimeFieldHandle__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct RuntimeFieldHandle__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct RuntimeFieldHandle__VTable vtable;
};

struct RuntimeFieldInfo__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData GetCustomAttributes;
    VirtualInvokeData GetCustomAttributes_1;
    VirtualInvokeData IsDefined;
    VirtualInvokeData Equals_1;
    VirtualInvokeData GetCustomAttributes_2;
    VirtualInvokeData GetCustomAttributes_3;
    VirtualInvokeData GetHashCode_1;
    VirtualInvokeData System_Runtime_InteropServices__MemberInfo_GetType;
    VirtualInvokeData IsDefined_1;
    VirtualInvokeData ToString_1;
    VirtualInvokeData get_DeclaringType;
    VirtualInvokeData get_MemberType;
    VirtualInvokeData get_Name;
    VirtualInvokeData get_ReflectedType;
    VirtualInvokeData System_Runtime_InteropServices__MemberInfo_GetIDsOfNames;
    VirtualInvokeData System_Runtime_InteropServices__MemberInfo_GetTypeInfo;
    VirtualInvokeData System_Runtime_InteropServices__MemberInfo_GetTypeInfoCount;
    VirtualInvokeData System_Runtime_InteropServices__MemberInfo_Invoke;
    VirtualInvokeData CacheEquals;
    VirtualInvokeData get_MemberType_1;
    VirtualInvokeData __unknown;
    VirtualInvokeData __unknown_1;
    VirtualInvokeData __unknown_2;
    VirtualInvokeData get_CustomAttributes;
    VirtualInvokeData __unknown_3;
    VirtualInvokeData __unknown_4;
    VirtualInvokeData __unknown_5;
    VirtualInvokeData GetCustomAttributesData;
    VirtualInvokeData get_MetadataToken;
    VirtualInvokeData get_Module;
    VirtualInvokeData Equals_2;
    VirtualInvokeData GetCustomAttributes_4;
    VirtualInvokeData GetCustomAttributes_5;
    VirtualInvokeData GetHashCode_2;
    VirtualInvokeData System_Runtime_InteropServices__FieldInfo_GetType;
    VirtualInvokeData System_Runtime_InteropServices__FieldInfo_GetIDsOfNames;
    VirtualInvokeData System_Runtime_InteropServices__FieldInfo_GetTypeInfo;
    VirtualInvokeData System_Runtime_InteropServices__FieldInfo_GetTypeInfoCount;
    VirtualInvokeData System_Runtime_InteropServices__FieldInfo_Invoke;
    VirtualInvokeData GetValue;
    VirtualInvokeData GetValueDirect;
    VirtualInvokeData IsDefined_2;
    VirtualInvokeData SetValue;
    VirtualInvokeData SetValue_1;
    VirtualInvokeData SetValueDirect;
    VirtualInvokeData ToString_2;
    VirtualInvokeData get_Attributes;
    VirtualInvokeData get_DeclaringType_1;
    VirtualInvokeData get_FieldHandle;
    VirtualInvokeData get_FieldType;
    VirtualInvokeData get_IsAssembly;
    VirtualInvokeData get_IsFamily;
    VirtualInvokeData get_IsFamilyAndAssembly;
    VirtualInvokeData get_IsFamilyOrAssembly;
    VirtualInvokeData get_IsInitOnly;
    VirtualInvokeData get_IsLiteral;
    VirtualInvokeData get_IsNotSerialized;
    VirtualInvokeData get_IsPinvokeImpl;
    VirtualInvokeData get_IsPrivate;
    VirtualInvokeData get_IsPublic;
    VirtualInvokeData get_IsSpecialName;
    VirtualInvokeData get_IsStatic;
    VirtualInvokeData get_MemberType_2;
    VirtualInvokeData get_Name_1;
    VirtualInvokeData get_ReflectedType_1;
    VirtualInvokeData __unknown_6;
    VirtualInvokeData __unknown_7;
    VirtualInvokeData __unknown_8;
    VirtualInvokeData __unknown_9;
    VirtualInvokeData __unknown_10;
    VirtualInvokeData GetFieldOffset;
    VirtualInvokeData GetValueDirect_1;
    VirtualInvokeData SetValueDirect_1;
    VirtualInvokeData GetOptionalCustomModifiers;
    VirtualInvokeData GetRequiredCustomModifiers;
    VirtualInvokeData GetRawConstantValue;
    VirtualInvokeData get_IsSecurityCritical;
    VirtualInvokeData get_IsSecuritySafeCritical;
    VirtualInvokeData get_IsSecurityTransparent;
    VirtualInvokeData GetObjectData;
};

struct RuntimeFieldInfo__StaticFields {
};

struct RuntimeFieldInfo__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct RuntimeFieldInfo__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct RuntimeFieldInfo__VTable vtable;
};

struct RtFieldInfo__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData GetCustomAttributes;
    VirtualInvokeData GetCustomAttributes_1;
    VirtualInvokeData IsDefined;
    VirtualInvokeData Equals_1;
    VirtualInvokeData GetCustomAttributes_2;
    VirtualInvokeData GetCustomAttributes_3;
    VirtualInvokeData GetHashCode_1;
    VirtualInvokeData System_Runtime_InteropServices__MemberInfo_GetType;
    VirtualInvokeData IsDefined_1;
    VirtualInvokeData ToString_1;
    VirtualInvokeData get_DeclaringType;
    VirtualInvokeData get_MemberType;
    VirtualInvokeData get_Name;
    VirtualInvokeData get_ReflectedType;
    VirtualInvokeData System_Runtime_InteropServices__MemberInfo_GetIDsOfNames;
    VirtualInvokeData System_Runtime_InteropServices__MemberInfo_GetTypeInfo;
    VirtualInvokeData System_Runtime_InteropServices__MemberInfo_GetTypeInfoCount;
    VirtualInvokeData System_Runtime_InteropServices__MemberInfo_Invoke;
    VirtualInvokeData CacheEquals;
    VirtualInvokeData get_MemberType_1;
    VirtualInvokeData __unknown;
    VirtualInvokeData __unknown_1;
    VirtualInvokeData __unknown_2;
    VirtualInvokeData get_CustomAttributes;
    VirtualInvokeData __unknown_3;
    VirtualInvokeData __unknown_4;
    VirtualInvokeData __unknown_5;
    VirtualInvokeData GetCustomAttributesData;
    VirtualInvokeData get_MetadataToken;
    VirtualInvokeData get_Module;
    VirtualInvokeData Equals_2;
    VirtualInvokeData GetCustomAttributes_4;
    VirtualInvokeData GetCustomAttributes_5;
    VirtualInvokeData GetHashCode_2;
    VirtualInvokeData System_Runtime_InteropServices__FieldInfo_GetType;
    VirtualInvokeData System_Runtime_InteropServices__FieldInfo_GetIDsOfNames;
    VirtualInvokeData System_Runtime_InteropServices__FieldInfo_GetTypeInfo;
    VirtualInvokeData System_Runtime_InteropServices__FieldInfo_GetTypeInfoCount;
    VirtualInvokeData System_Runtime_InteropServices__FieldInfo_Invoke;
    VirtualInvokeData GetValue;
    VirtualInvokeData GetValueDirect;
    VirtualInvokeData IsDefined_2;
    VirtualInvokeData SetValue;
    VirtualInvokeData SetValue_1;
    VirtualInvokeData SetValueDirect;
    VirtualInvokeData ToString_2;
    VirtualInvokeData get_Attributes;
    VirtualInvokeData get_DeclaringType_1;
    VirtualInvokeData get_FieldHandle;
    VirtualInvokeData get_FieldType;
    VirtualInvokeData get_IsAssembly;
    VirtualInvokeData get_IsFamily;
    VirtualInvokeData get_IsFamilyAndAssembly;
    VirtualInvokeData get_IsFamilyOrAssembly;
    VirtualInvokeData get_IsInitOnly;
    VirtualInvokeData get_IsLiteral;
    VirtualInvokeData get_IsNotSerialized;
    VirtualInvokeData get_IsPinvokeImpl;
    VirtualInvokeData get_IsPrivate;
    VirtualInvokeData get_IsPublic;
    VirtualInvokeData get_IsSpecialName;
    VirtualInvokeData get_IsStatic;
    VirtualInvokeData get_MemberType_2;
    VirtualInvokeData get_Name_1;
    VirtualInvokeData get_ReflectedType_1;
    VirtualInvokeData __unknown_6;
    VirtualInvokeData __unknown_7;
    VirtualInvokeData __unknown_8;
    VirtualInvokeData __unknown_9;
    VirtualInvokeData __unknown_10;
    VirtualInvokeData GetFieldOffset;
    VirtualInvokeData GetValueDirect_1;
    VirtualInvokeData SetValueDirect_1;
    VirtualInvokeData GetOptionalCustomModifiers;
    VirtualInvokeData GetRequiredCustomModifiers;
    VirtualInvokeData GetRawConstantValue;
    VirtualInvokeData get_IsSecurityCritical;
    VirtualInvokeData get_IsSecuritySafeCritical;
    VirtualInvokeData get_IsSecurityTransparent;
    VirtualInvokeData GetObjectData;
};

struct RtFieldInfo__StaticFields {
};

struct RtFieldInfo__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct RtFieldInfo__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct RtFieldInfo__VTable vtable;
};

struct MonoField__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData GetCustomAttributes;
    VirtualInvokeData GetCustomAttributes_1;
    VirtualInvokeData IsDefined;
    VirtualInvokeData Equals_1;
    VirtualInvokeData GetCustomAttributes_2;
    VirtualInvokeData GetCustomAttributes_3;
    VirtualInvokeData GetHashCode_1;
    VirtualInvokeData System_Runtime_InteropServices__MemberInfo_GetType;
    VirtualInvokeData IsDefined_1;
    VirtualInvokeData ToString_1;
    VirtualInvokeData get_DeclaringType;
    VirtualInvokeData get_MemberType;
    VirtualInvokeData get_Name;
    VirtualInvokeData get_ReflectedType;
    VirtualInvokeData System_Runtime_InteropServices__MemberInfo_GetIDsOfNames;
    VirtualInvokeData System_Runtime_InteropServices__MemberInfo_GetTypeInfo;
    VirtualInvokeData System_Runtime_InteropServices__MemberInfo_GetTypeInfoCount;
    VirtualInvokeData System_Runtime_InteropServices__MemberInfo_Invoke;
    VirtualInvokeData CacheEquals;
    VirtualInvokeData get_MemberType_1;
    VirtualInvokeData get_Name_1;
    VirtualInvokeData get_DeclaringType_1;
    VirtualInvokeData get_ReflectedType_1;
    VirtualInvokeData get_CustomAttributes;
    VirtualInvokeData GetCustomAttributes_4;
    VirtualInvokeData GetCustomAttributes_5;
    VirtualInvokeData IsDefined_2;
    VirtualInvokeData GetCustomAttributesData;
    VirtualInvokeData get_MetadataToken;
    VirtualInvokeData get_Module;
    VirtualInvokeData Equals_2;
    VirtualInvokeData GetCustomAttributes_6;
    VirtualInvokeData GetCustomAttributes_7;
    VirtualInvokeData GetHashCode_2;
    VirtualInvokeData System_Runtime_InteropServices__FieldInfo_GetType;
    VirtualInvokeData System_Runtime_InteropServices__FieldInfo_GetIDsOfNames;
    VirtualInvokeData System_Runtime_InteropServices__FieldInfo_GetTypeInfo;
    VirtualInvokeData System_Runtime_InteropServices__FieldInfo_GetTypeInfoCount;
    VirtualInvokeData System_Runtime_InteropServices__FieldInfo_Invoke;
    VirtualInvokeData GetValue;
    VirtualInvokeData GetValueDirect;
    VirtualInvokeData IsDefined_3;
    VirtualInvokeData SetValue;
    VirtualInvokeData SetValue_1;
    VirtualInvokeData SetValueDirect;
    VirtualInvokeData ToString_2;
    VirtualInvokeData get_Attributes;
    VirtualInvokeData get_DeclaringType_2;
    VirtualInvokeData get_FieldHandle;
    VirtualInvokeData get_FieldType;
    VirtualInvokeData get_IsAssembly;
    VirtualInvokeData get_IsFamily;
    VirtualInvokeData get_IsFamilyAndAssembly;
    VirtualInvokeData get_IsFamilyOrAssembly;
    VirtualInvokeData get_IsInitOnly;
    VirtualInvokeData get_IsLiteral;
    VirtualInvokeData get_IsNotSerialized;
    VirtualInvokeData get_IsPinvokeImpl;
    VirtualInvokeData get_IsPrivate;
    VirtualInvokeData get_IsPublic;
    VirtualInvokeData get_IsSpecialName;
    VirtualInvokeData get_IsStatic;
    VirtualInvokeData get_MemberType_2;
    VirtualInvokeData get_Name_2;
    VirtualInvokeData get_ReflectedType_2;
    VirtualInvokeData get_Attributes_1;
    VirtualInvokeData get_FieldHandle_1;
    VirtualInvokeData get_FieldType_1;
    VirtualInvokeData GetValue_1;
    VirtualInvokeData SetValue_2;
    VirtualInvokeData GetFieldOffset;
    VirtualInvokeData GetValueDirect_1;
    VirtualInvokeData SetValueDirect_1;
    VirtualInvokeData GetOptionalCustomModifiers;
    VirtualInvokeData GetRequiredCustomModifiers;
    VirtualInvokeData GetRawConstantValue;
    VirtualInvokeData get_IsSecurityCritical;
    VirtualInvokeData get_IsSecuritySafeCritical;
    VirtualInvokeData get_IsSecurityTransparent;
    VirtualInvokeData GetObjectData;
};

struct MonoField__StaticFields {
};

struct MonoField__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MonoField__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MonoField__VTable vtable;
};

struct FieldInfo_1__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData GetCustomAttributes;
    VirtualInvokeData GetCustomAttributes_1;
    VirtualInvokeData IsDefined;
    VirtualInvokeData Equals_1;
    VirtualInvokeData GetCustomAttributes_2;
    VirtualInvokeData GetCustomAttributes_3;
    VirtualInvokeData GetHashCode_1;
    VirtualInvokeData System_Runtime_InteropServices__MemberInfo_GetType;
    VirtualInvokeData IsDefined_1;
    VirtualInvokeData ToString_1;
    VirtualInvokeData get_DeclaringType;
    VirtualInvokeData get_MemberType;
    VirtualInvokeData get_Name;
    VirtualInvokeData get_ReflectedType;
    VirtualInvokeData System_Runtime_InteropServices__MemberInfo_GetIDsOfNames;
    VirtualInvokeData System_Runtime_InteropServices__MemberInfo_GetTypeInfo;
    VirtualInvokeData System_Runtime_InteropServices__MemberInfo_GetTypeInfoCount;
    VirtualInvokeData System_Runtime_InteropServices__MemberInfo_Invoke;
    VirtualInvokeData CacheEquals;
    VirtualInvokeData get_MemberType_1;
    VirtualInvokeData __unknown;
    VirtualInvokeData __unknown_1;
    VirtualInvokeData __unknown_2;
    VirtualInvokeData get_CustomAttributes;
    VirtualInvokeData __unknown_3;
    VirtualInvokeData __unknown_4;
    VirtualInvokeData __unknown_5;
    VirtualInvokeData GetCustomAttributesData;
    VirtualInvokeData get_MetadataToken;
    VirtualInvokeData get_Module;
    VirtualInvokeData Equals_2;
    VirtualInvokeData GetCustomAttributes_4;
    VirtualInvokeData GetCustomAttributes_5;
    VirtualInvokeData GetHashCode_2;
    VirtualInvokeData System_Runtime_InteropServices__FieldInfo_GetType;
    VirtualInvokeData System_Runtime_InteropServices__FieldInfo_GetIDsOfNames;
    VirtualInvokeData System_Runtime_InteropServices__FieldInfo_GetTypeInfo;
    VirtualInvokeData System_Runtime_InteropServices__FieldInfo_GetTypeInfoCount;
    VirtualInvokeData System_Runtime_InteropServices__FieldInfo_Invoke;
    VirtualInvokeData GetValue;
    VirtualInvokeData GetValueDirect;
    VirtualInvokeData IsDefined_2;
    VirtualInvokeData SetValue;
    VirtualInvokeData SetValue_1;
    VirtualInvokeData SetValueDirect;
    VirtualInvokeData ToString_2;
    VirtualInvokeData get_Attributes;
    VirtualInvokeData get_DeclaringType_1;
    VirtualInvokeData get_FieldHandle;
    VirtualInvokeData get_FieldType;
    VirtualInvokeData get_IsAssembly;
    VirtualInvokeData get_IsFamily;
    VirtualInvokeData get_IsFamilyAndAssembly;
    VirtualInvokeData get_IsFamilyOrAssembly;
    VirtualInvokeData get_IsInitOnly;
    VirtualInvokeData get_IsLiteral;
    VirtualInvokeData get_IsNotSerialized;
    VirtualInvokeData get_IsPinvokeImpl;
    VirtualInvokeData get_IsPrivate;
    VirtualInvokeData get_IsPublic;
    VirtualInvokeData get_IsSpecialName;
    VirtualInvokeData get_IsStatic;
    VirtualInvokeData get_MemberType_2;
    VirtualInvokeData get_Name_1;
    VirtualInvokeData get_ReflectedType_1;
    VirtualInvokeData __unknown_6;
    VirtualInvokeData __unknown_7;
    VirtualInvokeData __unknown_8;
    VirtualInvokeData __unknown_9;
    VirtualInvokeData __unknown_10;
    VirtualInvokeData GetFieldOffset;
    VirtualInvokeData GetValueDirect_1;
    VirtualInvokeData SetValueDirect_1;
    VirtualInvokeData GetOptionalCustomModifiers;
    VirtualInvokeData GetRequiredCustomModifiers;
    VirtualInvokeData GetRawConstantValue;
    VirtualInvokeData get_IsSecurityCritical;
    VirtualInvokeData get_IsSecuritySafeCritical;
    VirtualInvokeData get_IsSecurityTransparent;
};

struct FieldInfo_1__StaticFields {
};

struct FieldInfo_1__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct FieldInfo_1__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct FieldInfo_1__VTable vtable;
};

struct FieldInfo_1__Array__VTable {
};

struct FieldInfo_1__Array__StaticFields {
};

struct FieldInfo_1__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct FieldInfo_1__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct FieldInfo_1__Array__VTable vtable;
};

struct MethodInfo_1__Array__VTable {
};

struct MethodInfo_1__Array__StaticFields {
};

struct MethodInfo_1__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MethodInfo_1__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MethodInfo_1__Array__VTable vtable;
};

struct PropertyAttributes__Enum__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData CompareTo;
    VirtualInvokeData ToString_1;
    VirtualInvokeData GetTypeCode;
    VirtualInvokeData System_IConvertible_ToBoolean;
    VirtualInvokeData System_IConvertible_ToChar;
    VirtualInvokeData System_IConvertible_ToSByte;
    VirtualInvokeData System_IConvertible_ToByte;
    VirtualInvokeData System_IConvertible_ToInt16;
    VirtualInvokeData System_IConvertible_ToUInt16;
    VirtualInvokeData System_IConvertible_ToInt32;
    VirtualInvokeData System_IConvertible_ToUInt32;
    VirtualInvokeData System_IConvertible_ToInt64;
    VirtualInvokeData System_IConvertible_ToUInt64;
    VirtualInvokeData System_IConvertible_ToSingle;
    VirtualInvokeData System_IConvertible_ToDouble;
    VirtualInvokeData System_IConvertible_ToDecimal;
    VirtualInvokeData System_IConvertible_ToDateTime;
    VirtualInvokeData ToString_2;
    VirtualInvokeData System_IConvertible_ToType;
};

struct PropertyAttributes__Enum__StaticFields {
};

struct PropertyAttributes__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct PropertyAttributes__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct PropertyAttributes__Enum__VTable vtable;
};

struct RuntimePropertyInfo__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData GetCustomAttributes;
    VirtualInvokeData GetCustomAttributes_1;
    VirtualInvokeData IsDefined;
    VirtualInvokeData Equals_1;
    VirtualInvokeData GetCustomAttributes_2;
    VirtualInvokeData GetCustomAttributes_3;
    VirtualInvokeData GetHashCode_1;
    VirtualInvokeData System_Runtime_InteropServices__MemberInfo_GetType;
    VirtualInvokeData IsDefined_1;
    VirtualInvokeData ToString_1;
    VirtualInvokeData get_DeclaringType;
    VirtualInvokeData get_MemberType;
    VirtualInvokeData get_Name;
    VirtualInvokeData get_ReflectedType;
    VirtualInvokeData System_Runtime_InteropServices__MemberInfo_GetIDsOfNames;
    VirtualInvokeData System_Runtime_InteropServices__MemberInfo_GetTypeInfo;
    VirtualInvokeData System_Runtime_InteropServices__MemberInfo_GetTypeInfoCount;
    VirtualInvokeData System_Runtime_InteropServices__MemberInfo_Invoke;
    VirtualInvokeData CacheEquals;
    VirtualInvokeData get_MemberType_1;
    VirtualInvokeData __unknown;
    VirtualInvokeData __unknown_1;
    VirtualInvokeData __unknown_2;
    VirtualInvokeData get_CustomAttributes;
    VirtualInvokeData __unknown_3;
    VirtualInvokeData __unknown_4;
    VirtualInvokeData __unknown_5;
    VirtualInvokeData GetCustomAttributesData;
    VirtualInvokeData get_MetadataToken;
    VirtualInvokeData get_Module;
    VirtualInvokeData Equals_2;
    VirtualInvokeData GetAccessors;
    VirtualInvokeData GetAccessors_1;
    VirtualInvokeData GetCustomAttributes_4;
    VirtualInvokeData GetCustomAttributes_5;
    VirtualInvokeData GetGetMethod;
    VirtualInvokeData GetGetMethod_1;
    VirtualInvokeData GetHashCode_2;
    VirtualInvokeData GetIndexParameters;
    VirtualInvokeData GetSetMethod;
    VirtualInvokeData GetSetMethod_1;
    VirtualInvokeData System_Runtime_InteropServices__PropertyInfo_GetIDsOfNames;
    VirtualInvokeData System_Runtime_InteropServices__PropertyInfo_GetTypeInfo;
    VirtualInvokeData System_Runtime_InteropServices__PropertyInfo_GetTypeInfoCount;
    VirtualInvokeData System_Runtime_InteropServices__PropertyInfo_Invoke;
    VirtualInvokeData System_Runtime_InteropServices__PropertyInfo_GetType;
    VirtualInvokeData GetValue;
    VirtualInvokeData GetValue_1;
    VirtualInvokeData IsDefined_2;
    VirtualInvokeData SetValue;
    VirtualInvokeData SetValue_1;
    VirtualInvokeData ToString_2;
    VirtualInvokeData get_Attributes;
    VirtualInvokeData get_CanRead;
    VirtualInvokeData get_CanWrite;
    VirtualInvokeData get_DeclaringType_1;
    VirtualInvokeData get_IsSpecialName;
    VirtualInvokeData get_MemberType_2;
    VirtualInvokeData get_Name_1;
    VirtualInvokeData get_PropertyType;
    VirtualInvokeData get_ReflectedType_1;
    VirtualInvokeData __unknown_6;
    VirtualInvokeData __unknown_7;
    VirtualInvokeData __unknown_8;
    VirtualInvokeData get_GetMethod;
    VirtualInvokeData get_SetMethod;
    VirtualInvokeData __unknown_9;
    VirtualInvokeData __unknown_10;
    VirtualInvokeData __unknown_11;
    VirtualInvokeData __unknown_12;
    VirtualInvokeData __unknown_13;
    VirtualInvokeData GetValue_2;
    VirtualInvokeData __unknown_14;
    VirtualInvokeData SetValue_2;
    VirtualInvokeData __unknown_15;
    VirtualInvokeData GetOptionalCustomModifiers;
    VirtualInvokeData GetRequiredCustomModifiers;
    VirtualInvokeData GetConstantValue;
    VirtualInvokeData GetRawConstantValue;
    VirtualInvokeData GetObjectData;
};

struct RuntimePropertyInfo__StaticFields {
};

struct RuntimePropertyInfo__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct RuntimePropertyInfo__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct RuntimePropertyInfo__VTable vtable;
};

struct MonoPropertyInfo__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct MonoPropertyInfo__StaticFields {
};

struct MonoPropertyInfo__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MonoPropertyInfo__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MonoPropertyInfo__VTable vtable;
};

struct PInfo__Enum__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData CompareTo;
    VirtualInvokeData ToString_1;
    VirtualInvokeData GetTypeCode;
    VirtualInvokeData System_IConvertible_ToBoolean;
    VirtualInvokeData System_IConvertible_ToChar;
    VirtualInvokeData System_IConvertible_ToSByte;
    VirtualInvokeData System_IConvertible_ToByte;
    VirtualInvokeData System_IConvertible_ToInt16;
    VirtualInvokeData System_IConvertible_ToUInt16;
    VirtualInvokeData System_IConvertible_ToInt32;
    VirtualInvokeData System_IConvertible_ToUInt32;
    VirtualInvokeData System_IConvertible_ToInt64;
    VirtualInvokeData System_IConvertible_ToUInt64;
    VirtualInvokeData System_IConvertible_ToSingle;
    VirtualInvokeData System_IConvertible_ToDouble;
    VirtualInvokeData System_IConvertible_ToDecimal;
    VirtualInvokeData System_IConvertible_ToDateTime;
    VirtualInvokeData ToString_2;
    VirtualInvokeData System_IConvertible_ToType;
};

struct PInfo__Enum__StaticFields {
};

struct PInfo__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct PInfo__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct PInfo__Enum__VTable vtable;
};

struct Delegate__Array__VTable {
};

struct Delegate__Array__StaticFields {
};

struct Delegate__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Delegate__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Delegate__Array__VTable vtable;
};

struct IAsyncResult__VTable {
    VirtualInvokeData get_IsCompleted;
    VirtualInvokeData get_AsyncWaitHandle;
    VirtualInvokeData get_AsyncState;
    VirtualInvokeData get_CompletedSynchronously;
};

struct IAsyncResult__StaticFields {
};

struct IAsyncResult__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IAsyncResult__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IAsyncResult__VTable vtable;
};

struct AsyncCallback__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Clone;
    VirtualInvokeData GetObjectData;
    VirtualInvokeData DynamicInvokeImpl;
    VirtualInvokeData Clone_1;
    VirtualInvokeData GetMethodImpl;
    VirtualInvokeData GetObjectData_1;
    VirtualInvokeData GetInvocationList;
    VirtualInvokeData CombineImpl;
    VirtualInvokeData RemoveImpl;
    VirtualInvokeData Invoke;
    VirtualInvokeData BeginInvoke;
    VirtualInvokeData EndInvoke;
};

struct AsyncCallback__StaticFields {
};

struct AsyncCallback__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct AsyncCallback__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct AsyncCallback__VTable vtable;
};

struct MonoProperty_GetterAdapter__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Clone;
    VirtualInvokeData GetObjectData;
    VirtualInvokeData DynamicInvokeImpl;
    VirtualInvokeData Clone_1;
    VirtualInvokeData GetMethodImpl;
    VirtualInvokeData GetObjectData_1;
    VirtualInvokeData GetInvocationList;
    VirtualInvokeData CombineImpl;
    VirtualInvokeData RemoveImpl;
    VirtualInvokeData Invoke;
    VirtualInvokeData BeginInvoke;
    VirtualInvokeData EndInvoke;
};

struct MonoProperty_GetterAdapter__StaticFields {
};

struct MonoProperty_GetterAdapter__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MonoProperty_GetterAdapter__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MonoProperty_GetterAdapter__VTable vtable;
};

struct MonoProperty__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData GetCustomAttributes;
    VirtualInvokeData GetCustomAttributes_1;
    VirtualInvokeData IsDefined;
    VirtualInvokeData Equals_1;
    VirtualInvokeData GetCustomAttributes_2;
    VirtualInvokeData GetCustomAttributes_3;
    VirtualInvokeData GetHashCode_1;
    VirtualInvokeData System_Runtime_InteropServices__MemberInfo_GetType;
    VirtualInvokeData IsDefined_1;
    VirtualInvokeData ToString_1;
    VirtualInvokeData get_DeclaringType;
    VirtualInvokeData get_MemberType;
    VirtualInvokeData get_Name;
    VirtualInvokeData get_ReflectedType;
    VirtualInvokeData System_Runtime_InteropServices__MemberInfo_GetIDsOfNames;
    VirtualInvokeData System_Runtime_InteropServices__MemberInfo_GetTypeInfo;
    VirtualInvokeData System_Runtime_InteropServices__MemberInfo_GetTypeInfoCount;
    VirtualInvokeData System_Runtime_InteropServices__MemberInfo_Invoke;
    VirtualInvokeData CacheEquals;
    VirtualInvokeData get_MemberType_1;
    VirtualInvokeData get_Name_1;
    VirtualInvokeData get_DeclaringType_1;
    VirtualInvokeData get_ReflectedType_1;
    VirtualInvokeData get_CustomAttributes;
    VirtualInvokeData GetCustomAttributes_4;
    VirtualInvokeData GetCustomAttributes_5;
    VirtualInvokeData IsDefined_2;
    VirtualInvokeData GetCustomAttributesData;
    VirtualInvokeData get_MetadataToken;
    VirtualInvokeData get_Module;
    VirtualInvokeData Equals_2;
    VirtualInvokeData GetAccessors;
    VirtualInvokeData GetAccessors_1;
    VirtualInvokeData GetCustomAttributes_6;
    VirtualInvokeData GetCustomAttributes_7;
    VirtualInvokeData GetGetMethod;
    VirtualInvokeData GetGetMethod_1;
    VirtualInvokeData GetHashCode_2;
    VirtualInvokeData GetIndexParameters;
    VirtualInvokeData GetSetMethod;
    VirtualInvokeData GetSetMethod_1;
    VirtualInvokeData System_Runtime_InteropServices__PropertyInfo_GetIDsOfNames;
    VirtualInvokeData System_Runtime_InteropServices__PropertyInfo_GetTypeInfo;
    VirtualInvokeData System_Runtime_InteropServices__PropertyInfo_GetTypeInfoCount;
    VirtualInvokeData System_Runtime_InteropServices__PropertyInfo_Invoke;
    VirtualInvokeData System_Runtime_InteropServices__PropertyInfo_GetType;
    VirtualInvokeData GetValue;
    VirtualInvokeData GetValue_1;
    VirtualInvokeData IsDefined_3;
    VirtualInvokeData SetValue;
    VirtualInvokeData SetValue_1;
    VirtualInvokeData ToString_2;
    VirtualInvokeData get_Attributes;
    VirtualInvokeData get_CanRead;
    VirtualInvokeData get_CanWrite;
    VirtualInvokeData get_DeclaringType_2;
    VirtualInvokeData get_IsSpecialName;
    VirtualInvokeData get_MemberType_2;
    VirtualInvokeData get_Name_2;
    VirtualInvokeData get_PropertyType;
    VirtualInvokeData get_ReflectedType_2;
    VirtualInvokeData get_Attributes_1;
    VirtualInvokeData get_CanRead_1;
    VirtualInvokeData get_CanWrite_1;
    VirtualInvokeData get_GetMethod;
    VirtualInvokeData get_SetMethod;
    VirtualInvokeData get_PropertyType_1;
    VirtualInvokeData GetAccessors_2;
    VirtualInvokeData GetGetMethod_2;
    VirtualInvokeData GetIndexParameters_1;
    VirtualInvokeData GetSetMethod_2;
    VirtualInvokeData GetValue_2;
    VirtualInvokeData GetValue_3;
    VirtualInvokeData SetValue_2;
    VirtualInvokeData SetValue_3;
    VirtualInvokeData GetOptionalCustomModifiers;
    VirtualInvokeData GetRequiredCustomModifiers;
    VirtualInvokeData GetConstantValue;
    VirtualInvokeData GetRawConstantValue;
    VirtualInvokeData GetObjectData;
};

struct MonoProperty__StaticFields {
};

struct MonoProperty__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MonoProperty__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MonoProperty__VTable vtable;
};

struct PropertyInfo_1__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData GetCustomAttributes;
    VirtualInvokeData GetCustomAttributes_1;
    VirtualInvokeData IsDefined;
    VirtualInvokeData Equals_1;
    VirtualInvokeData GetCustomAttributes_2;
    VirtualInvokeData GetCustomAttributes_3;
    VirtualInvokeData GetHashCode_1;
    VirtualInvokeData System_Runtime_InteropServices__MemberInfo_GetType;
    VirtualInvokeData IsDefined_1;
    VirtualInvokeData ToString_1;
    VirtualInvokeData get_DeclaringType;
    VirtualInvokeData get_MemberType;
    VirtualInvokeData get_Name;
    VirtualInvokeData get_ReflectedType;
    VirtualInvokeData System_Runtime_InteropServices__MemberInfo_GetIDsOfNames;
    VirtualInvokeData System_Runtime_InteropServices__MemberInfo_GetTypeInfo;
    VirtualInvokeData System_Runtime_InteropServices__MemberInfo_GetTypeInfoCount;
    VirtualInvokeData System_Runtime_InteropServices__MemberInfo_Invoke;
    VirtualInvokeData CacheEquals;
    VirtualInvokeData get_MemberType_1;
    VirtualInvokeData __unknown;
    VirtualInvokeData __unknown_1;
    VirtualInvokeData __unknown_2;
    VirtualInvokeData get_CustomAttributes;
    VirtualInvokeData __unknown_3;
    VirtualInvokeData __unknown_4;
    VirtualInvokeData __unknown_5;
    VirtualInvokeData GetCustomAttributesData;
    VirtualInvokeData get_MetadataToken;
    VirtualInvokeData get_Module;
    VirtualInvokeData Equals_2;
    VirtualInvokeData GetAccessors;
    VirtualInvokeData GetAccessors_1;
    VirtualInvokeData GetCustomAttributes_4;
    VirtualInvokeData GetCustomAttributes_5;
    VirtualInvokeData GetGetMethod;
    VirtualInvokeData GetGetMethod_1;
    VirtualInvokeData GetHashCode_2;
    VirtualInvokeData GetIndexParameters;
    VirtualInvokeData GetSetMethod;
    VirtualInvokeData GetSetMethod_1;
    VirtualInvokeData System_Runtime_InteropServices__PropertyInfo_GetIDsOfNames;
    VirtualInvokeData System_Runtime_InteropServices__PropertyInfo_GetTypeInfo;
    VirtualInvokeData System_Runtime_InteropServices__PropertyInfo_GetTypeInfoCount;
    VirtualInvokeData System_Runtime_InteropServices__PropertyInfo_Invoke;
    VirtualInvokeData System_Runtime_InteropServices__PropertyInfo_GetType;
    VirtualInvokeData GetValue;
    VirtualInvokeData GetValue_1;
    VirtualInvokeData IsDefined_2;
    VirtualInvokeData SetValue;
    VirtualInvokeData SetValue_1;
    VirtualInvokeData ToString_2;
    VirtualInvokeData get_Attributes;
    VirtualInvokeData get_CanRead;
    VirtualInvokeData get_CanWrite;
    VirtualInvokeData get_DeclaringType_1;
    VirtualInvokeData get_IsSpecialName;
    VirtualInvokeData get_MemberType_2;
    VirtualInvokeData get_Name_1;
    VirtualInvokeData get_PropertyType;
    VirtualInvokeData get_ReflectedType_1;
    VirtualInvokeData __unknown_6;
    VirtualInvokeData __unknown_7;
    VirtualInvokeData __unknown_8;
    VirtualInvokeData get_GetMethod;
    VirtualInvokeData get_SetMethod;
    VirtualInvokeData __unknown_9;
    VirtualInvokeData __unknown_10;
    VirtualInvokeData __unknown_11;
    VirtualInvokeData __unknown_12;
    VirtualInvokeData __unknown_13;
    VirtualInvokeData GetValue_2;
    VirtualInvokeData __unknown_14;
    VirtualInvokeData SetValue_2;
    VirtualInvokeData __unknown_15;
    VirtualInvokeData GetOptionalCustomModifiers;
    VirtualInvokeData GetRequiredCustomModifiers;
    VirtualInvokeData GetConstantValue;
    VirtualInvokeData GetRawConstantValue;
};

struct PropertyInfo_1__StaticFields {
};

struct PropertyInfo_1__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct PropertyInfo_1__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct PropertyInfo_1__VTable vtable;
};

struct PropertyInfo_1__Array__VTable {
};

struct PropertyInfo_1__Array__StaticFields {
};

struct PropertyInfo_1__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct PropertyInfo_1__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct PropertyInfo_1__Array__VTable vtable;
};

struct DefaultBinder__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData BindToMethod;
    VirtualInvokeData BindToField;
    VirtualInvokeData SelectMethod;
    VirtualInvokeData SelectProperty;
    VirtualInvokeData ChangeType;
    VirtualInvokeData ReorderArgumentArray;
};

struct DefaultBinder__StaticFields {
};

struct DefaultBinder__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct DefaultBinder__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct DefaultBinder__VTable vtable;
};

struct Binder__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData __unknown;
    VirtualInvokeData __unknown_1;
    VirtualInvokeData __unknown_2;
    VirtualInvokeData __unknown_3;
    VirtualInvokeData __unknown_4;
    VirtualInvokeData __unknown_5;
};

struct Binder__StaticFields {
};

struct Binder__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Binder__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Binder__VTable vtable;
};

struct MethodAttributes__Enum__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData CompareTo;
    VirtualInvokeData ToString_1;
    VirtualInvokeData GetTypeCode;
    VirtualInvokeData System_IConvertible_ToBoolean;
    VirtualInvokeData System_IConvertible_ToChar;
    VirtualInvokeData System_IConvertible_ToSByte;
    VirtualInvokeData System_IConvertible_ToByte;
    VirtualInvokeData System_IConvertible_ToInt16;
    VirtualInvokeData System_IConvertible_ToUInt16;
    VirtualInvokeData System_IConvertible_ToInt32;
    VirtualInvokeData System_IConvertible_ToUInt32;
    VirtualInvokeData System_IConvertible_ToInt64;
    VirtualInvokeData System_IConvertible_ToUInt64;
    VirtualInvokeData System_IConvertible_ToSingle;
    VirtualInvokeData System_IConvertible_ToDouble;
    VirtualInvokeData System_IConvertible_ToDecimal;
    VirtualInvokeData System_IConvertible_ToDateTime;
    VirtualInvokeData ToString_2;
    VirtualInvokeData System_IConvertible_ToType;
};

struct MethodAttributes__Enum__StaticFields {
};

struct MethodAttributes__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MethodAttributes__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MethodAttributes__Enum__VTable vtable;
};

struct CallingConventions__Enum__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData CompareTo;
    VirtualInvokeData ToString_1;
    VirtualInvokeData GetTypeCode;
    VirtualInvokeData System_IConvertible_ToBoolean;
    VirtualInvokeData System_IConvertible_ToChar;
    VirtualInvokeData System_IConvertible_ToSByte;
    VirtualInvokeData System_IConvertible_ToByte;
    VirtualInvokeData System_IConvertible_ToInt16;
    VirtualInvokeData System_IConvertible_ToUInt16;
    VirtualInvokeData System_IConvertible_ToInt32;
    VirtualInvokeData System_IConvertible_ToUInt32;
    VirtualInvokeData System_IConvertible_ToInt64;
    VirtualInvokeData System_IConvertible_ToUInt64;
    VirtualInvokeData System_IConvertible_ToSingle;
    VirtualInvokeData System_IConvertible_ToDouble;
    VirtualInvokeData System_IConvertible_ToDecimal;
    VirtualInvokeData System_IConvertible_ToDateTime;
    VirtualInvokeData ToString_2;
    VirtualInvokeData System_IConvertible_ToType;
};

struct CallingConventions__Enum__StaticFields {
};

struct CallingConventions__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct CallingConventions__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct CallingConventions__Enum__VTable vtable;
};

struct RuntimeMethodHandle__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData GetObjectData;
};

struct RuntimeMethodHandle__StaticFields {
};

struct RuntimeMethodHandle__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct RuntimeMethodHandle__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct RuntimeMethodHandle__VTable vtable;
};

struct ExceptionHandlingClauseOptions__Enum__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData CompareTo;
    VirtualInvokeData ToString_1;
    VirtualInvokeData GetTypeCode;
    VirtualInvokeData System_IConvertible_ToBoolean;
    VirtualInvokeData System_IConvertible_ToChar;
    VirtualInvokeData System_IConvertible_ToSByte;
    VirtualInvokeData System_IConvertible_ToByte;
    VirtualInvokeData System_IConvertible_ToInt16;
    VirtualInvokeData System_IConvertible_ToUInt16;
    VirtualInvokeData System_IConvertible_ToInt32;
    VirtualInvokeData System_IConvertible_ToUInt32;
    VirtualInvokeData System_IConvertible_ToInt64;
    VirtualInvokeData System_IConvertible_ToUInt64;
    VirtualInvokeData System_IConvertible_ToSingle;
    VirtualInvokeData System_IConvertible_ToDouble;
    VirtualInvokeData System_IConvertible_ToDecimal;
    VirtualInvokeData System_IConvertible_ToDateTime;
    VirtualInvokeData ToString_2;
    VirtualInvokeData System_IConvertible_ToType;
};

struct ExceptionHandlingClauseOptions__Enum__StaticFields {
};

struct ExceptionHandlingClauseOptions__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ExceptionHandlingClauseOptions__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ExceptionHandlingClauseOptions__Enum__VTable vtable;
};

struct ExceptionHandlingClause__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_CatchType;
    VirtualInvokeData get_FilterOffset;
    VirtualInvokeData get_Flags;
    VirtualInvokeData get_HandlerLength;
    VirtualInvokeData get_HandlerOffset;
    VirtualInvokeData get_TryLength;
    VirtualInvokeData get_TryOffset;
};

struct ExceptionHandlingClause__StaticFields {
};

struct ExceptionHandlingClause__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ExceptionHandlingClause__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ExceptionHandlingClause__VTable vtable;
};

struct ExceptionHandlingClause__Array__VTable {
};

struct ExceptionHandlingClause__Array__StaticFields {
};

struct ExceptionHandlingClause__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ExceptionHandlingClause__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ExceptionHandlingClause__Array__VTable vtable;
};

struct LocalVariableInfo__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_IsPinned;
    VirtualInvokeData get_LocalIndex;
    VirtualInvokeData get_LocalType;
};

struct LocalVariableInfo__StaticFields {
};

struct LocalVariableInfo__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct LocalVariableInfo__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct LocalVariableInfo__VTable vtable;
};

struct LocalVariableInfo__Array__VTable {
};

struct LocalVariableInfo__Array__StaticFields {
};

struct LocalVariableInfo__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct LocalVariableInfo__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct LocalVariableInfo__Array__VTable vtable;
};

struct IList_1_System_Reflection_ExceptionHandlingClause___VTable {
    VirtualInvokeData get_Item;
    VirtualInvokeData set_Item;
    VirtualInvokeData IndexOf;
    VirtualInvokeData Insert;
    VirtualInvokeData RemoveAt;
};

struct IList_1_System_Reflection_ExceptionHandlingClause___StaticFields {
};

struct IList_1_System_Reflection_ExceptionHandlingClause___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IList_1_System_Reflection_ExceptionHandlingClause___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IList_1_System_Reflection_ExceptionHandlingClause___VTable vtable;
};

struct IList_1_System_Reflection_LocalVariableInfo___VTable {
    VirtualInvokeData get_Item;
    VirtualInvokeData set_Item;
    VirtualInvokeData IndexOf;
    VirtualInvokeData Insert;
    VirtualInvokeData RemoveAt;
};

struct IList_1_System_Reflection_LocalVariableInfo___StaticFields {
};

struct IList_1_System_Reflection_LocalVariableInfo___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IList_1_System_Reflection_LocalVariableInfo___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IList_1_System_Reflection_LocalVariableInfo___VTable vtable;
};

struct MethodBody__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_ExceptionHandlingClauses;
    VirtualInvokeData get_LocalVariables;
    VirtualInvokeData get_InitLocals;
    VirtualInvokeData get_LocalSignatureMetadataToken;
    VirtualInvokeData get_MaxStackSize;
    VirtualInvokeData GetILAsByteArray;
};

struct MethodBody__StaticFields {
};

struct MethodBody__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MethodBody__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MethodBody__VTable vtable;
};

struct ICustomAttributeProvider__VTable {
    VirtualInvokeData GetCustomAttributes;
    VirtualInvokeData GetCustomAttributes_1;
    VirtualInvokeData IsDefined;
};

struct ICustomAttributeProvider__StaticFields {
};

struct ICustomAttributeProvider__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ICustomAttributeProvider__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ICustomAttributeProvider__VTable vtable;
};

struct RuntimeMethodInfo__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData GetCustomAttributes;
    VirtualInvokeData GetCustomAttributes_1;
    VirtualInvokeData IsDefined;
    VirtualInvokeData Equals_1;
    VirtualInvokeData GetCustomAttributes_2;
    VirtualInvokeData GetCustomAttributes_3;
    VirtualInvokeData GetHashCode_1;
    VirtualInvokeData System_Runtime_InteropServices__MemberInfo_GetType;
    VirtualInvokeData IsDefined_1;
    VirtualInvokeData ToString_1;
    VirtualInvokeData get_DeclaringType;
    VirtualInvokeData get_MemberType;
    VirtualInvokeData get_Name;
    VirtualInvokeData get_ReflectedType;
    VirtualInvokeData System_Runtime_InteropServices__MemberInfo_GetIDsOfNames;
    VirtualInvokeData System_Runtime_InteropServices__MemberInfo_GetTypeInfo;
    VirtualInvokeData System_Runtime_InteropServices__MemberInfo_GetTypeInfoCount;
    VirtualInvokeData System_Runtime_InteropServices__MemberInfo_Invoke;
    VirtualInvokeData CacheEquals;
    VirtualInvokeData get_MemberType_1;
    VirtualInvokeData __unknown;
    VirtualInvokeData __unknown_1;
    VirtualInvokeData __unknown_2;
    VirtualInvokeData get_CustomAttributes;
    VirtualInvokeData __unknown_3;
    VirtualInvokeData __unknown_4;
    VirtualInvokeData __unknown_5;
    VirtualInvokeData GetCustomAttributesData;
    VirtualInvokeData get_MetadataToken;
    VirtualInvokeData get_Module;
    VirtualInvokeData Equals_2;
    VirtualInvokeData GetCustomAttributes_4;
    VirtualInvokeData GetCustomAttributes_5;
    VirtualInvokeData GetHashCode_2;
    VirtualInvokeData GetMethodImplementationFlags;
    VirtualInvokeData GetParameters;
    VirtualInvokeData System_Runtime_InteropServices__MethodBase_GetIDsOfNames;
    VirtualInvokeData System_Runtime_InteropServices__MethodBase_GetTypeInfo;
    VirtualInvokeData System_Runtime_InteropServices__MethodBase_GetTypeInfoCount;
    VirtualInvokeData System_Runtime_InteropServices__MethodBase_Invoke;
    VirtualInvokeData System_Runtime_InteropServices__MethodBase_GetType;
    VirtualInvokeData Invoke;
    VirtualInvokeData Invoke_1;
    VirtualInvokeData IsDefined_2;
    VirtualInvokeData ToString_2;
    VirtualInvokeData get_Attributes;
    VirtualInvokeData get_CallingConvention;
    VirtualInvokeData get_DeclaringType_1;
    VirtualInvokeData System_Runtime_InteropServices__MethodBase_get_IsAbstract;
    VirtualInvokeData System_Runtime_InteropServices__MethodBase_get_IsAssembly;
    VirtualInvokeData System_Runtime_InteropServices__MethodBase_get_IsConstructor;
    VirtualInvokeData System_Runtime_InteropServices__MethodBase_get_IsFamily;
    VirtualInvokeData System_Runtime_InteropServices__MethodBase_get_IsFamilyAndAssembly;
    VirtualInvokeData System_Runtime_InteropServices__MethodBase_get_IsFamilyOrAssembly;
    VirtualInvokeData System_Runtime_InteropServices__MethodBase_get_IsFinal;
    VirtualInvokeData System_Runtime_InteropServices__MethodBase_get_IsHideBySig;
    VirtualInvokeData System_Runtime_InteropServices__MethodBase_get_IsPrivate;
    VirtualInvokeData System_Runtime_InteropServices__MethodBase_get_IsPublic;
    VirtualInvokeData System_Runtime_InteropServices__MethodBase_get_IsSpecialName;
    VirtualInvokeData System_Runtime_InteropServices__MethodBase_get_IsStatic;
    VirtualInvokeData System_Runtime_InteropServices__MethodBase_get_IsVirtual;
    VirtualInvokeData get_MemberType_2;
    VirtualInvokeData get_MethodHandle;
    VirtualInvokeData get_Name_1;
    VirtualInvokeData get_ReflectedType_1;
    VirtualInvokeData GetParametersNoCopy;
    VirtualInvokeData __unknown_6;
    VirtualInvokeData get_MethodImplementationFlags;
    VirtualInvokeData __unknown_7;
    VirtualInvokeData __unknown_8;
    VirtualInvokeData __unknown_9;
    VirtualInvokeData __unknown_10;
    VirtualInvokeData get_CallingConvention_1;
    VirtualInvokeData GetGenericArguments;
    VirtualInvokeData get_IsGenericMethodDefinition;
    VirtualInvokeData get_ContainsGenericParameters;
    VirtualInvokeData get_IsGenericMethod;
    VirtualInvokeData get_IsSecurityCritical;
    VirtualInvokeData get_IsSecuritySafeCritical;
    VirtualInvokeData get_IsSecurityTransparent;
    VirtualInvokeData get_IsPublic;
    VirtualInvokeData get_IsPrivate;
    VirtualInvokeData get_IsFamily;
    VirtualInvokeData get_IsAssembly;
    VirtualInvokeData get_IsFamilyAndAssembly;
    VirtualInvokeData get_IsFamilyOrAssembly;
    VirtualInvokeData get_IsStatic;
    VirtualInvokeData get_IsFinal;
    VirtualInvokeData get_IsVirtual;
    VirtualInvokeData get_IsHideBySig;
    VirtualInvokeData get_IsAbstract;
    VirtualInvokeData get_IsSpecialName;
    VirtualInvokeData get_IsConstructor;
    VirtualInvokeData GetMethodBody;
    VirtualInvokeData FormatNameAndSig;
    VirtualInvokeData GetParameterTypes;
    VirtualInvokeData GetParametersInternal;
    VirtualInvokeData GetParametersCount;
    VirtualInvokeData GetParameterType;
    VirtualInvokeData get_next_table_index;
    VirtualInvokeData Equals_3;
    VirtualInvokeData GetBaseDefinition;
    VirtualInvokeData GetCustomAttributes_6;
    VirtualInvokeData GetCustomAttributes_7;
    VirtualInvokeData GetHashCode_3;
    VirtualInvokeData GetMethodImplementationFlags_1;
    VirtualInvokeData GetParameters_1;
    VirtualInvokeData System_Runtime_InteropServices__MethodInfo_GetIDsOfNames;
    VirtualInvokeData System_Runtime_InteropServices__MethodInfo_GetTypeInfo;
    VirtualInvokeData System_Runtime_InteropServices__MethodInfo_GetTypeInfoCount;
    VirtualInvokeData System_Runtime_InteropServices__MethodInfo_Invoke;
    VirtualInvokeData System_Runtime_InteropServices__MethodInfo_GetType;
    VirtualInvokeData Invoke_2;
    VirtualInvokeData Invoke_3;
    VirtualInvokeData IsDefined_3;
    VirtualInvokeData ToString_3;
    VirtualInvokeData get_Attributes_1;
    VirtualInvokeData get_CallingConvention_2;
    VirtualInvokeData get_DeclaringType_2;
    VirtualInvokeData get_IsAbstract_1;
    VirtualInvokeData get_IsAssembly_1;
    VirtualInvokeData get_IsConstructor_1;
    VirtualInvokeData get_IsFamily_1;
    VirtualInvokeData get_IsFamilyAndAssembly_1;
    VirtualInvokeData get_IsFamilyOrAssembly_1;
    VirtualInvokeData get_IsFinal_1;
    VirtualInvokeData get_IsHideBySig_1;
    VirtualInvokeData get_IsPrivate_1;
    VirtualInvokeData get_IsPublic_1;
    VirtualInvokeData get_IsSpecialName_1;
    VirtualInvokeData get_IsStatic_1;
    VirtualInvokeData get_IsVirtual_1;
    VirtualInvokeData get_MemberType_3;
    VirtualInvokeData get_MethodHandle_1;
    VirtualInvokeData get_Name_2;
    VirtualInvokeData get_ReflectedType_2;
    VirtualInvokeData get_ReturnType;
    VirtualInvokeData get_ReturnTypeCustomAttributes;
    VirtualInvokeData get_ReturnType_1;
    VirtualInvokeData get_ReturnParameter;
    VirtualInvokeData __unknown_11;
    VirtualInvokeData __unknown_12;
    VirtualInvokeData GetGenericMethodDefinition;
    VirtualInvokeData MakeGenericMethod;
    VirtualInvokeData CreateDelegate;
    VirtualInvokeData CreateDelegate_1;
    VirtualInvokeData GetBaseMethod;
    VirtualInvokeData GetObjectData;
};

struct RuntimeMethodInfo__StaticFields {
};

struct RuntimeMethodInfo__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct RuntimeMethodInfo__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct RuntimeMethodInfo__VTable vtable;
};

struct MonoMethod__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData GetCustomAttributes;
    VirtualInvokeData GetCustomAttributes_1;
    VirtualInvokeData IsDefined;
    VirtualInvokeData Equals_1;
    VirtualInvokeData GetCustomAttributes_2;
    VirtualInvokeData GetCustomAttributes_3;
    VirtualInvokeData GetHashCode_1;
    VirtualInvokeData System_Runtime_InteropServices__MemberInfo_GetType;
    VirtualInvokeData IsDefined_1;
    VirtualInvokeData ToString_1;
    VirtualInvokeData get_DeclaringType;
    VirtualInvokeData get_MemberType;
    VirtualInvokeData get_Name;
    VirtualInvokeData get_ReflectedType;
    VirtualInvokeData System_Runtime_InteropServices__MemberInfo_GetIDsOfNames;
    VirtualInvokeData System_Runtime_InteropServices__MemberInfo_GetTypeInfo;
    VirtualInvokeData System_Runtime_InteropServices__MemberInfo_GetTypeInfoCount;
    VirtualInvokeData System_Runtime_InteropServices__MemberInfo_Invoke;
    VirtualInvokeData CacheEquals;
    VirtualInvokeData get_MemberType_1;
    VirtualInvokeData get_Name_1;
    VirtualInvokeData get_DeclaringType_1;
    VirtualInvokeData get_ReflectedType_1;
    VirtualInvokeData get_CustomAttributes;
    VirtualInvokeData GetCustomAttributes_4;
    VirtualInvokeData GetCustomAttributes_5;
    VirtualInvokeData IsDefined_2;
    VirtualInvokeData GetCustomAttributesData;
    VirtualInvokeData get_MetadataToken;
    VirtualInvokeData get_Module;
    VirtualInvokeData Equals_2;
    VirtualInvokeData GetCustomAttributes_6;
    VirtualInvokeData GetCustomAttributes_7;
    VirtualInvokeData GetHashCode_2;
    VirtualInvokeData GetMethodImplementationFlags;
    VirtualInvokeData GetParameters;
    VirtualInvokeData System_Runtime_InteropServices__MethodBase_GetIDsOfNames;
    VirtualInvokeData System_Runtime_InteropServices__MethodBase_GetTypeInfo;
    VirtualInvokeData System_Runtime_InteropServices__MethodBase_GetTypeInfoCount;
    VirtualInvokeData System_Runtime_InteropServices__MethodBase_Invoke;
    VirtualInvokeData System_Runtime_InteropServices__MethodBase_GetType;
    VirtualInvokeData Invoke;
    VirtualInvokeData Invoke_1;
    VirtualInvokeData IsDefined_3;
    VirtualInvokeData ToString_2;
    VirtualInvokeData get_Attributes;
    VirtualInvokeData get_CallingConvention;
    VirtualInvokeData get_DeclaringType_2;
    VirtualInvokeData System_Runtime_InteropServices__MethodBase_get_IsAbstract;
    VirtualInvokeData System_Runtime_InteropServices__MethodBase_get_IsAssembly;
    VirtualInvokeData System_Runtime_InteropServices__MethodBase_get_IsConstructor;
    VirtualInvokeData System_Runtime_InteropServices__MethodBase_get_IsFamily;
    VirtualInvokeData System_Runtime_InteropServices__MethodBase_get_IsFamilyAndAssembly;
    VirtualInvokeData System_Runtime_InteropServices__MethodBase_get_IsFamilyOrAssembly;
    VirtualInvokeData System_Runtime_InteropServices__MethodBase_get_IsFinal;
    VirtualInvokeData System_Runtime_InteropServices__MethodBase_get_IsHideBySig;
    VirtualInvokeData System_Runtime_InteropServices__MethodBase_get_IsPrivate;
    VirtualInvokeData System_Runtime_InteropServices__MethodBase_get_IsPublic;
    VirtualInvokeData System_Runtime_InteropServices__MethodBase_get_IsSpecialName;
    VirtualInvokeData System_Runtime_InteropServices__MethodBase_get_IsStatic;
    VirtualInvokeData System_Runtime_InteropServices__MethodBase_get_IsVirtual;
    VirtualInvokeData get_MemberType_2;
    VirtualInvokeData get_MethodHandle;
    VirtualInvokeData get_Name_2;
    VirtualInvokeData get_ReflectedType_2;
    VirtualInvokeData GetParametersNoCopy;
    VirtualInvokeData GetParameters_1;
    VirtualInvokeData get_MethodImplementationFlags;
    VirtualInvokeData GetMethodImplementationFlags_1;
    VirtualInvokeData get_MethodHandle_1;
    VirtualInvokeData get_Attributes_1;
    VirtualInvokeData Invoke_2;
    VirtualInvokeData get_CallingConvention_1;
    VirtualInvokeData GetGenericArguments;
    VirtualInvokeData get_IsGenericMethodDefinition;
    VirtualInvokeData get_ContainsGenericParameters;
    VirtualInvokeData get_IsGenericMethod;
    VirtualInvokeData get_IsSecurityCritical;
    VirtualInvokeData get_IsSecuritySafeCritical;
    VirtualInvokeData get_IsSecurityTransparent;
    VirtualInvokeData get_IsPublic;
    VirtualInvokeData get_IsPrivate;
    VirtualInvokeData get_IsFamily;
    VirtualInvokeData get_IsAssembly;
    VirtualInvokeData get_IsFamilyAndAssembly;
    VirtualInvokeData get_IsFamilyOrAssembly;
    VirtualInvokeData get_IsStatic;
    VirtualInvokeData get_IsFinal;
    VirtualInvokeData get_IsVirtual;
    VirtualInvokeData get_IsHideBySig;
    VirtualInvokeData get_IsAbstract;
    VirtualInvokeData get_IsSpecialName;
    VirtualInvokeData get_IsConstructor;
    VirtualInvokeData GetMethodBody;
    VirtualInvokeData FormatNameAndSig;
    VirtualInvokeData GetParameterTypes;
    VirtualInvokeData GetParametersInternal;
    VirtualInvokeData GetParametersCount;
    VirtualInvokeData GetParameterType;
    VirtualInvokeData get_next_table_index;
    VirtualInvokeData Equals_3;
    VirtualInvokeData GetBaseDefinition;
    VirtualInvokeData GetCustomAttributes_8;
    VirtualInvokeData GetCustomAttributes_9;
    VirtualInvokeData GetHashCode_3;
    VirtualInvokeData GetMethodImplementationFlags_2;
    VirtualInvokeData GetParameters_2;
    VirtualInvokeData System_Runtime_InteropServices__MethodInfo_GetIDsOfNames;
    VirtualInvokeData System_Runtime_InteropServices__MethodInfo_GetTypeInfo;
    VirtualInvokeData System_Runtime_InteropServices__MethodInfo_GetTypeInfoCount;
    VirtualInvokeData System_Runtime_InteropServices__MethodInfo_Invoke;
    VirtualInvokeData System_Runtime_InteropServices__MethodInfo_GetType;
    VirtualInvokeData Invoke_3;
    VirtualInvokeData Invoke_4;
    VirtualInvokeData IsDefined_4;
    VirtualInvokeData ToString_3;
    VirtualInvokeData get_Attributes_2;
    VirtualInvokeData get_CallingConvention_2;
    VirtualInvokeData get_DeclaringType_3;
    VirtualInvokeData get_IsAbstract_1;
    VirtualInvokeData get_IsAssembly_1;
    VirtualInvokeData get_IsConstructor_1;
    VirtualInvokeData get_IsFamily_1;
    VirtualInvokeData get_IsFamilyAndAssembly_1;
    VirtualInvokeData get_IsFamilyOrAssembly_1;
    VirtualInvokeData get_IsFinal_1;
    VirtualInvokeData get_IsHideBySig_1;
    VirtualInvokeData get_IsPrivate_1;
    VirtualInvokeData get_IsPublic_1;
    VirtualInvokeData get_IsSpecialName_1;
    VirtualInvokeData get_IsStatic_1;
    VirtualInvokeData get_IsVirtual_1;
    VirtualInvokeData get_MemberType_3;
    VirtualInvokeData get_MethodHandle_2;
    VirtualInvokeData get_Name_3;
    VirtualInvokeData get_ReflectedType_3;
    VirtualInvokeData get_ReturnType;
    VirtualInvokeData get_ReturnTypeCustomAttributes;
    VirtualInvokeData get_ReturnType_1;
    VirtualInvokeData get_ReturnParameter;
    VirtualInvokeData get_ReturnTypeCustomAttributes_1;
    VirtualInvokeData GetBaseDefinition_1;
    VirtualInvokeData GetGenericMethodDefinition;
    VirtualInvokeData MakeGenericMethod;
    VirtualInvokeData CreateDelegate;
    VirtualInvokeData CreateDelegate_1;
    VirtualInvokeData GetBaseMethod;
    VirtualInvokeData GetObjectData;
};

struct MonoMethod__StaticFields {
};

struct MonoMethod__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MonoMethod__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MonoMethod__VTable vtable;
};

struct MethodBase__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData GetCustomAttributes;
    VirtualInvokeData GetCustomAttributes_1;
    VirtualInvokeData IsDefined;
    VirtualInvokeData Equals_1;
    VirtualInvokeData GetCustomAttributes_2;
    VirtualInvokeData GetCustomAttributes_3;
    VirtualInvokeData GetHashCode_1;
    VirtualInvokeData System_Runtime_InteropServices__MemberInfo_GetType;
    VirtualInvokeData IsDefined_1;
    VirtualInvokeData ToString_1;
    VirtualInvokeData get_DeclaringType;
    VirtualInvokeData get_MemberType;
    VirtualInvokeData get_Name;
    VirtualInvokeData get_ReflectedType;
    VirtualInvokeData System_Runtime_InteropServices__MemberInfo_GetIDsOfNames;
    VirtualInvokeData System_Runtime_InteropServices__MemberInfo_GetTypeInfo;
    VirtualInvokeData System_Runtime_InteropServices__MemberInfo_GetTypeInfoCount;
    VirtualInvokeData System_Runtime_InteropServices__MemberInfo_Invoke;
    VirtualInvokeData CacheEquals;
    VirtualInvokeData __unknown;
    VirtualInvokeData __unknown_1;
    VirtualInvokeData __unknown_2;
    VirtualInvokeData __unknown_3;
    VirtualInvokeData get_CustomAttributes;
    VirtualInvokeData __unknown_4;
    VirtualInvokeData __unknown_5;
    VirtualInvokeData __unknown_6;
    VirtualInvokeData GetCustomAttributesData;
    VirtualInvokeData get_MetadataToken;
    VirtualInvokeData get_Module;
    VirtualInvokeData Equals_2;
    VirtualInvokeData GetCustomAttributes_4;
    VirtualInvokeData GetCustomAttributes_5;
    VirtualInvokeData GetHashCode_2;
    VirtualInvokeData GetMethodImplementationFlags;
    VirtualInvokeData GetParameters;
    VirtualInvokeData System_Runtime_InteropServices__MethodBase_GetIDsOfNames;
    VirtualInvokeData System_Runtime_InteropServices__MethodBase_GetTypeInfo;
    VirtualInvokeData System_Runtime_InteropServices__MethodBase_GetTypeInfoCount;
    VirtualInvokeData System_Runtime_InteropServices__MethodBase_Invoke;
    VirtualInvokeData System_Runtime_InteropServices__MethodBase_GetType;
    VirtualInvokeData Invoke;
    VirtualInvokeData Invoke_1;
    VirtualInvokeData IsDefined_2;
    VirtualInvokeData ToString_2;
    VirtualInvokeData get_Attributes;
    VirtualInvokeData get_CallingConvention;
    VirtualInvokeData get_DeclaringType_1;
    VirtualInvokeData System_Runtime_InteropServices__MethodBase_get_IsAbstract;
    VirtualInvokeData System_Runtime_InteropServices__MethodBase_get_IsAssembly;
    VirtualInvokeData System_Runtime_InteropServices__MethodBase_get_IsConstructor;
    VirtualInvokeData System_Runtime_InteropServices__MethodBase_get_IsFamily;
    VirtualInvokeData System_Runtime_InteropServices__MethodBase_get_IsFamilyAndAssembly;
    VirtualInvokeData System_Runtime_InteropServices__MethodBase_get_IsFamilyOrAssembly;
    VirtualInvokeData System_Runtime_InteropServices__MethodBase_get_IsFinal;
    VirtualInvokeData System_Runtime_InteropServices__MethodBase_get_IsHideBySig;
    VirtualInvokeData System_Runtime_InteropServices__MethodBase_get_IsPrivate;
    VirtualInvokeData System_Runtime_InteropServices__MethodBase_get_IsPublic;
    VirtualInvokeData System_Runtime_InteropServices__MethodBase_get_IsSpecialName;
    VirtualInvokeData System_Runtime_InteropServices__MethodBase_get_IsStatic;
    VirtualInvokeData System_Runtime_InteropServices__MethodBase_get_IsVirtual;
    VirtualInvokeData get_MemberType_1;
    VirtualInvokeData get_MethodHandle;
    VirtualInvokeData get_Name_1;
    VirtualInvokeData get_ReflectedType_1;
    VirtualInvokeData GetParametersNoCopy;
    VirtualInvokeData __unknown_7;
    VirtualInvokeData get_MethodImplementationFlags;
    VirtualInvokeData __unknown_8;
    VirtualInvokeData __unknown_9;
    VirtualInvokeData __unknown_10;
    VirtualInvokeData __unknown_11;
    VirtualInvokeData get_CallingConvention_1;
    VirtualInvokeData GetGenericArguments;
    VirtualInvokeData get_IsGenericMethodDefinition;
    VirtualInvokeData get_ContainsGenericParameters;
    VirtualInvokeData get_IsGenericMethod;
    VirtualInvokeData get_IsSecurityCritical;
    VirtualInvokeData get_IsSecuritySafeCritical;
    VirtualInvokeData get_IsSecurityTransparent;
    VirtualInvokeData get_IsPublic;
    VirtualInvokeData get_IsPrivate;
    VirtualInvokeData get_IsFamily;
    VirtualInvokeData get_IsAssembly;
    VirtualInvokeData get_IsFamilyAndAssembly;
    VirtualInvokeData get_IsFamilyOrAssembly;
    VirtualInvokeData get_IsStatic;
    VirtualInvokeData get_IsFinal;
    VirtualInvokeData get_IsVirtual;
    VirtualInvokeData get_IsHideBySig;
    VirtualInvokeData get_IsAbstract;
    VirtualInvokeData get_IsSpecialName;
    VirtualInvokeData get_IsConstructor;
    VirtualInvokeData GetMethodBody;
    VirtualInvokeData FormatNameAndSig;
    VirtualInvokeData GetParameterTypes;
    VirtualInvokeData GetParametersInternal;
    VirtualInvokeData GetParametersCount;
    VirtualInvokeData GetParameterType;
    VirtualInvokeData get_next_table_index;
};

struct MethodBase__StaticFields {
};

struct MethodBase__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MethodBase__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MethodBase__VTable vtable;
};

struct MethodInfo_1__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData GetCustomAttributes;
    VirtualInvokeData GetCustomAttributes_1;
    VirtualInvokeData IsDefined;
    VirtualInvokeData Equals_1;
    VirtualInvokeData GetCustomAttributes_2;
    VirtualInvokeData GetCustomAttributes_3;
    VirtualInvokeData GetHashCode_1;
    VirtualInvokeData System_Runtime_InteropServices__MemberInfo_GetType;
    VirtualInvokeData IsDefined_1;
    VirtualInvokeData ToString_1;
    VirtualInvokeData get_DeclaringType;
    VirtualInvokeData get_MemberType;
    VirtualInvokeData get_Name;
    VirtualInvokeData get_ReflectedType;
    VirtualInvokeData System_Runtime_InteropServices__MemberInfo_GetIDsOfNames;
    VirtualInvokeData System_Runtime_InteropServices__MemberInfo_GetTypeInfo;
    VirtualInvokeData System_Runtime_InteropServices__MemberInfo_GetTypeInfoCount;
    VirtualInvokeData System_Runtime_InteropServices__MemberInfo_Invoke;
    VirtualInvokeData CacheEquals;
    VirtualInvokeData get_MemberType_1;
    VirtualInvokeData __unknown;
    VirtualInvokeData __unknown_1;
    VirtualInvokeData __unknown_2;
    VirtualInvokeData get_CustomAttributes;
    VirtualInvokeData __unknown_3;
    VirtualInvokeData __unknown_4;
    VirtualInvokeData __unknown_5;
    VirtualInvokeData GetCustomAttributesData;
    VirtualInvokeData get_MetadataToken;
    VirtualInvokeData get_Module;
    VirtualInvokeData Equals_2;
    VirtualInvokeData GetCustomAttributes_4;
    VirtualInvokeData GetCustomAttributes_5;
    VirtualInvokeData GetHashCode_2;
    VirtualInvokeData GetMethodImplementationFlags;
    VirtualInvokeData GetParameters;
    VirtualInvokeData System_Runtime_InteropServices__MethodBase_GetIDsOfNames;
    VirtualInvokeData System_Runtime_InteropServices__MethodBase_GetTypeInfo;
    VirtualInvokeData System_Runtime_InteropServices__MethodBase_GetTypeInfoCount;
    VirtualInvokeData System_Runtime_InteropServices__MethodBase_Invoke;
    VirtualInvokeData System_Runtime_InteropServices__MethodBase_GetType;
    VirtualInvokeData Invoke;
    VirtualInvokeData Invoke_1;
    VirtualInvokeData IsDefined_2;
    VirtualInvokeData ToString_2;
    VirtualInvokeData get_Attributes;
    VirtualInvokeData get_CallingConvention;
    VirtualInvokeData get_DeclaringType_1;
    VirtualInvokeData System_Runtime_InteropServices__MethodBase_get_IsAbstract;
    VirtualInvokeData System_Runtime_InteropServices__MethodBase_get_IsAssembly;
    VirtualInvokeData System_Runtime_InteropServices__MethodBase_get_IsConstructor;
    VirtualInvokeData System_Runtime_InteropServices__MethodBase_get_IsFamily;
    VirtualInvokeData System_Runtime_InteropServices__MethodBase_get_IsFamilyAndAssembly;
    VirtualInvokeData System_Runtime_InteropServices__MethodBase_get_IsFamilyOrAssembly;
    VirtualInvokeData System_Runtime_InteropServices__MethodBase_get_IsFinal;
    VirtualInvokeData System_Runtime_InteropServices__MethodBase_get_IsHideBySig;
    VirtualInvokeData System_Runtime_InteropServices__MethodBase_get_IsPrivate;
    VirtualInvokeData System_Runtime_InteropServices__MethodBase_get_IsPublic;
    VirtualInvokeData System_Runtime_InteropServices__MethodBase_get_IsSpecialName;
    VirtualInvokeData System_Runtime_InteropServices__MethodBase_get_IsStatic;
    VirtualInvokeData System_Runtime_InteropServices__MethodBase_get_IsVirtual;
    VirtualInvokeData get_MemberType_2;
    VirtualInvokeData get_MethodHandle;
    VirtualInvokeData get_Name_1;
    VirtualInvokeData get_ReflectedType_1;
    VirtualInvokeData GetParametersNoCopy;
    VirtualInvokeData __unknown_6;
    VirtualInvokeData get_MethodImplementationFlags;
    VirtualInvokeData __unknown_7;
    VirtualInvokeData __unknown_8;
    VirtualInvokeData __unknown_9;
    VirtualInvokeData __unknown_10;
    VirtualInvokeData get_CallingConvention_1;
    VirtualInvokeData GetGenericArguments;
    VirtualInvokeData get_IsGenericMethodDefinition;
    VirtualInvokeData get_ContainsGenericParameters;
    VirtualInvokeData get_IsGenericMethod;
    VirtualInvokeData get_IsSecurityCritical;
    VirtualInvokeData get_IsSecuritySafeCritical;
    VirtualInvokeData get_IsSecurityTransparent;
    VirtualInvokeData get_IsPublic;
    VirtualInvokeData get_IsPrivate;
    VirtualInvokeData get_IsFamily;
    VirtualInvokeData get_IsAssembly;
    VirtualInvokeData get_IsFamilyAndAssembly;
    VirtualInvokeData get_IsFamilyOrAssembly;
    VirtualInvokeData get_IsStatic;
    VirtualInvokeData get_IsFinal;
    VirtualInvokeData get_IsVirtual;
    VirtualInvokeData get_IsHideBySig;
    VirtualInvokeData get_IsAbstract;
    VirtualInvokeData get_IsSpecialName;
    VirtualInvokeData get_IsConstructor;
    VirtualInvokeData GetMethodBody;
    VirtualInvokeData FormatNameAndSig;
    VirtualInvokeData GetParameterTypes;
    VirtualInvokeData GetParametersInternal;
    VirtualInvokeData GetParametersCount;
    VirtualInvokeData GetParameterType;
    VirtualInvokeData get_next_table_index;
    VirtualInvokeData Equals_3;
    VirtualInvokeData GetBaseDefinition;
    VirtualInvokeData GetCustomAttributes_6;
    VirtualInvokeData GetCustomAttributes_7;
    VirtualInvokeData GetHashCode_3;
    VirtualInvokeData GetMethodImplementationFlags_1;
    VirtualInvokeData GetParameters_1;
    VirtualInvokeData System_Runtime_InteropServices__MethodInfo_GetIDsOfNames;
    VirtualInvokeData System_Runtime_InteropServices__MethodInfo_GetTypeInfo;
    VirtualInvokeData System_Runtime_InteropServices__MethodInfo_GetTypeInfoCount;
    VirtualInvokeData System_Runtime_InteropServices__MethodInfo_Invoke;
    VirtualInvokeData System_Runtime_InteropServices__MethodInfo_GetType;
    VirtualInvokeData Invoke_2;
    VirtualInvokeData Invoke_3;
    VirtualInvokeData IsDefined_3;
    VirtualInvokeData ToString_3;
    VirtualInvokeData get_Attributes_1;
    VirtualInvokeData get_CallingConvention_2;
    VirtualInvokeData get_DeclaringType_2;
    VirtualInvokeData get_IsAbstract_1;
    VirtualInvokeData get_IsAssembly_1;
    VirtualInvokeData get_IsConstructor_1;
    VirtualInvokeData get_IsFamily_1;
    VirtualInvokeData get_IsFamilyAndAssembly_1;
    VirtualInvokeData get_IsFamilyOrAssembly_1;
    VirtualInvokeData get_IsFinal_1;
    VirtualInvokeData get_IsHideBySig_1;
    VirtualInvokeData get_IsPrivate_1;
    VirtualInvokeData get_IsPublic_1;
    VirtualInvokeData get_IsSpecialName_1;
    VirtualInvokeData get_IsStatic_1;
    VirtualInvokeData get_IsVirtual_1;
    VirtualInvokeData get_MemberType_3;
    VirtualInvokeData get_MethodHandle_1;
    VirtualInvokeData get_Name_2;
    VirtualInvokeData get_ReflectedType_2;
    VirtualInvokeData get_ReturnType;
    VirtualInvokeData get_ReturnTypeCustomAttributes;
    VirtualInvokeData get_ReturnType_1;
    VirtualInvokeData get_ReturnParameter;
    VirtualInvokeData __unknown_11;
    VirtualInvokeData __unknown_12;
    VirtualInvokeData GetGenericMethodDefinition;
    VirtualInvokeData MakeGenericMethod;
    VirtualInvokeData CreateDelegate;
    VirtualInvokeData CreateDelegate_1;
    VirtualInvokeData GetBaseMethod;
};

struct MethodInfo_1__StaticFields {
};

struct MethodInfo_1__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MethodInfo_1__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MethodInfo_1__VTable vtable;
};

struct DelegateData__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct DelegateData__StaticFields {
};

struct DelegateData__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct DelegateData__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct DelegateData__VTable vtable;
};

struct Delegate__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Clone;
    VirtualInvokeData GetObjectData;
    VirtualInvokeData DynamicInvokeImpl;
    VirtualInvokeData Clone_1;
    VirtualInvokeData GetMethodImpl;
    VirtualInvokeData GetObjectData_1;
    VirtualInvokeData GetInvocationList;
    VirtualInvokeData CombineImpl;
    VirtualInvokeData RemoveImpl;
};

struct Delegate__StaticFields {
};

struct Delegate__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Delegate__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Delegate__VTable vtable;
};

struct MulticastDelegate__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Clone;
    VirtualInvokeData GetObjectData;
    VirtualInvokeData DynamicInvokeImpl;
    VirtualInvokeData Clone_1;
    VirtualInvokeData GetMethodImpl;
    VirtualInvokeData GetObjectData_1;
    VirtualInvokeData GetInvocationList;
    VirtualInvokeData CombineImpl;
    VirtualInvokeData RemoveImpl;
};

struct MulticastDelegate__StaticFields {
};

struct MulticastDelegate__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MulticastDelegate__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MulticastDelegate__VTable vtable;
};

struct TypeFilter__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Clone;
    VirtualInvokeData GetObjectData;
    VirtualInvokeData DynamicInvokeImpl;
    VirtualInvokeData Clone_1;
    VirtualInvokeData GetMethodImpl;
    VirtualInvokeData GetObjectData_1;
    VirtualInvokeData GetInvocationList;
    VirtualInvokeData CombineImpl;
    VirtualInvokeData RemoveImpl;
    VirtualInvokeData Invoke;
    VirtualInvokeData BeginInvoke;
    VirtualInvokeData EndInvoke;
};

struct TypeFilter__StaticFields {
};

struct TypeFilter__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct TypeFilter__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct TypeFilter__VTable vtable;
};

struct EventArgs__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct EventArgs__StaticFields {
    struct EventArgs *Empty;
};

struct EventArgs__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct EventArgs__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct EventArgs__VTable vtable;
};

struct ResolveEventArgs__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct ResolveEventArgs__StaticFields {
};

struct ResolveEventArgs__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ResolveEventArgs__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ResolveEventArgs__VTable vtable;
};

struct ModuleResolveEventHandler__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Clone;
    VirtualInvokeData GetObjectData;
    VirtualInvokeData DynamicInvokeImpl;
    VirtualInvokeData Clone_1;
    VirtualInvokeData GetMethodImpl;
    VirtualInvokeData GetObjectData_1;
    VirtualInvokeData GetInvocationList;
    VirtualInvokeData CombineImpl;
    VirtualInvokeData RemoveImpl;
    VirtualInvokeData Invoke;
    VirtualInvokeData BeginInvoke;
    VirtualInvokeData EndInvoke;
};

struct ModuleResolveEventHandler__StaticFields {
};

struct ModuleResolveEventHandler__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ModuleResolveEventHandler__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ModuleResolveEventHandler__VTable vtable;
};

struct Assembly_ResolveEventHolder__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct Assembly_ResolveEventHolder__StaticFields {
};

struct Assembly_ResolveEventHolder__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Assembly_ResolveEventHolder__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Assembly_ResolveEventHolder__VTable vtable;
};

struct AssemblyNameFlags__Enum__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData CompareTo;
    VirtualInvokeData ToString_1;
    VirtualInvokeData GetTypeCode;
    VirtualInvokeData System_IConvertible_ToBoolean;
    VirtualInvokeData System_IConvertible_ToChar;
    VirtualInvokeData System_IConvertible_ToSByte;
    VirtualInvokeData System_IConvertible_ToByte;
    VirtualInvokeData System_IConvertible_ToInt16;
    VirtualInvokeData System_IConvertible_ToUInt16;
    VirtualInvokeData System_IConvertible_ToInt32;
    VirtualInvokeData System_IConvertible_ToUInt32;
    VirtualInvokeData System_IConvertible_ToInt64;
    VirtualInvokeData System_IConvertible_ToUInt64;
    VirtualInvokeData System_IConvertible_ToSingle;
    VirtualInvokeData System_IConvertible_ToDouble;
    VirtualInvokeData System_IConvertible_ToDecimal;
    VirtualInvokeData System_IConvertible_ToDateTime;
    VirtualInvokeData ToString_2;
    VirtualInvokeData System_IConvertible_ToType;
};

struct AssemblyNameFlags__Enum__StaticFields {
};

struct AssemblyNameFlags__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct AssemblyNameFlags__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct AssemblyNameFlags__Enum__VTable vtable;
};

struct AssemblyHashAlgorithm__Enum__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData CompareTo;
    VirtualInvokeData ToString_1;
    VirtualInvokeData GetTypeCode;
    VirtualInvokeData System_IConvertible_ToBoolean;
    VirtualInvokeData System_IConvertible_ToChar;
    VirtualInvokeData System_IConvertible_ToSByte;
    VirtualInvokeData System_IConvertible_ToByte;
    VirtualInvokeData System_IConvertible_ToInt16;
    VirtualInvokeData System_IConvertible_ToUInt16;
    VirtualInvokeData System_IConvertible_ToInt32;
    VirtualInvokeData System_IConvertible_ToUInt32;
    VirtualInvokeData System_IConvertible_ToInt64;
    VirtualInvokeData System_IConvertible_ToUInt64;
    VirtualInvokeData System_IConvertible_ToSingle;
    VirtualInvokeData System_IConvertible_ToDouble;
    VirtualInvokeData System_IConvertible_ToDecimal;
    VirtualInvokeData System_IConvertible_ToDateTime;
    VirtualInvokeData ToString_2;
    VirtualInvokeData System_IConvertible_ToType;
};

struct AssemblyHashAlgorithm__Enum__StaticFields {
};

struct AssemblyHashAlgorithm__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct AssemblyHashAlgorithm__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct AssemblyHashAlgorithm__Enum__VTable vtable;
};

struct KeySizes__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct KeySizes__StaticFields {
};

struct KeySizes__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct KeySizes__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct KeySizes__VTable vtable;
};

struct KeySizes__Array__VTable {
};

struct KeySizes__Array__StaticFields {
};

struct KeySizes__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct KeySizes__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct KeySizes__Array__VTable vtable;
};

struct AsymmetricAlgorithm__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Dispose;
    VirtualInvokeData Dispose_1;
    VirtualInvokeData get_KeySize;
    VirtualInvokeData set_KeySize;
    VirtualInvokeData get_LegalKeySizes;
    VirtualInvokeData get_SignatureAlgorithm;
    VirtualInvokeData get_KeyExchangeAlgorithm;
    VirtualInvokeData FromXmlString;
    VirtualInvokeData ToXmlString;
};

struct AsymmetricAlgorithm__StaticFields {
};

struct AsymmetricAlgorithm__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct AsymmetricAlgorithm__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct AsymmetricAlgorithm__VTable vtable;
};

struct RSAEncryptionPaddingMode__Enum__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData CompareTo;
    VirtualInvokeData ToString_1;
    VirtualInvokeData GetTypeCode;
    VirtualInvokeData System_IConvertible_ToBoolean;
    VirtualInvokeData System_IConvertible_ToChar;
    VirtualInvokeData System_IConvertible_ToSByte;
    VirtualInvokeData System_IConvertible_ToByte;
    VirtualInvokeData System_IConvertible_ToInt16;
    VirtualInvokeData System_IConvertible_ToUInt16;
    VirtualInvokeData System_IConvertible_ToInt32;
    VirtualInvokeData System_IConvertible_ToUInt32;
    VirtualInvokeData System_IConvertible_ToInt64;
    VirtualInvokeData System_IConvertible_ToUInt64;
    VirtualInvokeData System_IConvertible_ToSingle;
    VirtualInvokeData System_IConvertible_ToDouble;
    VirtualInvokeData System_IConvertible_ToDecimal;
    VirtualInvokeData System_IConvertible_ToDateTime;
    VirtualInvokeData ToString_2;
    VirtualInvokeData System_IConvertible_ToType;
};

struct RSAEncryptionPaddingMode__Enum__StaticFields {
};

struct RSAEncryptionPaddingMode__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct RSAEncryptionPaddingMode__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct RSAEncryptionPaddingMode__Enum__VTable vtable;
};

struct HashAlgorithmName__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Equals_1;
};

struct HashAlgorithmName__StaticFields {
};

struct HashAlgorithmName__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct HashAlgorithmName__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct HashAlgorithmName__VTable vtable;
};

struct RSAEncryptionPadding__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Equals_1;
};

struct RSAEncryptionPadding__StaticFields {
    struct RSAEncryptionPadding *s_pkcs1;
    struct RSAEncryptionPadding *s_oaepSHA1;
    struct RSAEncryptionPadding *s_oaepSHA256;
    struct RSAEncryptionPadding *s_oaepSHA384;
    struct RSAEncryptionPadding *s_oaepSHA512;
};

struct RSAEncryptionPadding__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct RSAEncryptionPadding__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct RSAEncryptionPadding__VTable vtable;
};

struct RSASignaturePaddingMode__Enum__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData CompareTo;
    VirtualInvokeData ToString_1;
    VirtualInvokeData GetTypeCode;
    VirtualInvokeData System_IConvertible_ToBoolean;
    VirtualInvokeData System_IConvertible_ToChar;
    VirtualInvokeData System_IConvertible_ToSByte;
    VirtualInvokeData System_IConvertible_ToByte;
    VirtualInvokeData System_IConvertible_ToInt16;
    VirtualInvokeData System_IConvertible_ToUInt16;
    VirtualInvokeData System_IConvertible_ToInt32;
    VirtualInvokeData System_IConvertible_ToUInt32;
    VirtualInvokeData System_IConvertible_ToInt64;
    VirtualInvokeData System_IConvertible_ToUInt64;
    VirtualInvokeData System_IConvertible_ToSingle;
    VirtualInvokeData System_IConvertible_ToDouble;
    VirtualInvokeData System_IConvertible_ToDecimal;
    VirtualInvokeData System_IConvertible_ToDateTime;
    VirtualInvokeData ToString_2;
    VirtualInvokeData System_IConvertible_ToType;
};

struct RSASignaturePaddingMode__Enum__StaticFields {
};

struct RSASignaturePaddingMode__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct RSASignaturePaddingMode__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct RSASignaturePaddingMode__Enum__VTable vtable;
};

struct RSASignaturePadding__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Equals_1;
};

struct RSASignaturePadding__StaticFields {
    struct RSASignaturePadding *s_pkcs1;
    struct RSASignaturePadding *s_pss;
};

struct RSASignaturePadding__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct RSASignaturePadding__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct RSASignaturePadding__VTable vtable;
};

struct IChannelInfo__VTable {
    VirtualInvokeData get_ChannelData;
    VirtualInvokeData set_ChannelData;
};

struct IChannelInfo__StaticFields {
};

struct IChannelInfo__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IChannelInfo__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IChannelInfo__VTable vtable;
};

struct IRemotingTypeInfo__VTable {
    VirtualInvokeData get_TypeName;
    VirtualInvokeData set_TypeName;
    VirtualInvokeData CanCastTo;
};

struct IRemotingTypeInfo__StaticFields {
};

struct IRemotingTypeInfo__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IRemotingTypeInfo__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IRemotingTypeInfo__VTable vtable;
};

struct IEnvoyInfo__VTable {
    VirtualInvokeData get_EnvoySinks;
    VirtualInvokeData set_EnvoySinks;
};

struct IEnvoyInfo__StaticFields {
};

struct IEnvoyInfo__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnvoyInfo__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnvoyInfo__VTable vtable;
};

struct ObjRef__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData GetRealObject;
    VirtualInvokeData GetObjectData;
    VirtualInvokeData get_ChannelInfo;
    VirtualInvokeData set_ChannelInfo;
    VirtualInvokeData get_EnvoyInfo;
    VirtualInvokeData set_EnvoyInfo;
    VirtualInvokeData get_TypeInfo;
    VirtualInvokeData set_TypeInfo;
    VirtualInvokeData get_URI;
    VirtualInvokeData set_URI;
    VirtualInvokeData GetObjectData_1;
    VirtualInvokeData GetRealObject_1;
};

struct ObjRef__StaticFields {
    int32_t MarshalledObjectRef;
    int32_t WellKnowObjectRef;
};

struct ObjRef__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ObjRef__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ObjRef__VTable vtable;
};

struct MarshalByRefObject__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData CreateObjRef;
    VirtualInvokeData GetLifetimeService;
    VirtualInvokeData InitializeLifetimeService;
};

struct MarshalByRefObject__StaticFields {
};

struct MarshalByRefObject__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MarshalByRefObject__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MarshalByRefObject__VTable vtable;
};

struct StackGuard__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct StackGuard__StaticFields {
};

struct StackGuard__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct StackGuard__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct StackGuard__VTable vtable;
};

struct CriticalFinalizerObject__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct CriticalFinalizerObject__StaticFields {
};

struct CriticalFinalizerObject__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct CriticalFinalizerObject__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct CriticalFinalizerObject__VTable vtable;
};

struct SafeFileHandle__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Dispose;
    VirtualInvokeData get_IsInvalid;
    VirtualInvokeData Dispose_1;
    VirtualInvokeData ReleaseHandle;
};

struct SafeFileHandle__StaticFields {
};

struct SafeFileHandle__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SafeFileHandle__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SafeFileHandle__VTable vtable;
};

struct SafeHandle__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Dispose;
    VirtualInvokeData __unknown;
    VirtualInvokeData Dispose_1;
    VirtualInvokeData __unknown_1;
};

struct SafeHandle__StaticFields {
};

struct SafeHandle__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SafeHandle__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SafeHandle__VTable vtable;
};

struct SafeHandleZeroOrMinusOneIsInvalid__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Dispose;
    VirtualInvokeData get_IsInvalid;
    VirtualInvokeData Dispose_1;
    VirtualInvokeData __unknown;
};

struct SafeHandleZeroOrMinusOneIsInvalid__StaticFields {
};

struct SafeHandleZeroOrMinusOneIsInvalid__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SafeHandleZeroOrMinusOneIsInvalid__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SafeHandleZeroOrMinusOneIsInvalid__VTable vtable;
};

struct SafeWaitHandle__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Dispose;
    VirtualInvokeData get_IsInvalid;
    VirtualInvokeData Dispose_1;
    VirtualInvokeData ReleaseHandle;
};

struct SafeWaitHandle__StaticFields {
};

struct SafeWaitHandle__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SafeWaitHandle__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SafeWaitHandle__VTable vtable;
};

struct TimeSpan__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData CompareTo;
    VirtualInvokeData CompareTo_1;
    VirtualInvokeData Equals_1;
    VirtualInvokeData ToString_1;
};

struct TimeSpan__StaticFields {
    struct TimeSpan Zero;
    struct TimeSpan MaxValue;
    struct TimeSpan MinValue;
    bool _legacyConfigChecked;
    bool _legacyMode;
};

struct TimeSpan__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct TimeSpan__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct TimeSpan__VTable vtable;
};

struct WaitHandle__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData CreateObjRef;
    VirtualInvokeData GetLifetimeService;
    VirtualInvokeData InitializeLifetimeService;
    VirtualInvokeData Dispose;
    VirtualInvokeData get_Handle;
    VirtualInvokeData set_Handle;
    VirtualInvokeData WaitOne;
    VirtualInvokeData WaitOne_1;
    VirtualInvokeData WaitOne_2;
    VirtualInvokeData WaitOne_3;
    VirtualInvokeData WaitOne_4;
    VirtualInvokeData Close;
    VirtualInvokeData Dispose_1;
};

struct WaitHandle__StaticFields {
    void *InvalidHandle;
};

struct WaitHandle__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct WaitHandle__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct WaitHandle__VTable vtable;
};

struct EventWaitHandle__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData CreateObjRef;
    VirtualInvokeData GetLifetimeService;
    VirtualInvokeData InitializeLifetimeService;
    VirtualInvokeData Dispose;
    VirtualInvokeData get_Handle;
    VirtualInvokeData set_Handle;
    VirtualInvokeData WaitOne;
    VirtualInvokeData WaitOne_1;
    VirtualInvokeData WaitOne_2;
    VirtualInvokeData WaitOne_3;
    VirtualInvokeData WaitOne_4;
    VirtualInvokeData Close;
    VirtualInvokeData Dispose_1;
};

struct EventWaitHandle__StaticFields {
};

struct EventWaitHandle__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct EventWaitHandle__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct EventWaitHandle__VTable vtable;
};

struct ManualResetEvent__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData CreateObjRef;
    VirtualInvokeData GetLifetimeService;
    VirtualInvokeData InitializeLifetimeService;
    VirtualInvokeData Dispose;
    VirtualInvokeData get_Handle;
    VirtualInvokeData set_Handle;
    VirtualInvokeData WaitOne;
    VirtualInvokeData WaitOne_1;
    VirtualInvokeData WaitOne_2;
    VirtualInvokeData WaitOne_3;
    VirtualInvokeData WaitOne_4;
    VirtualInvokeData Close;
    VirtualInvokeData Dispose_1;
};

struct ManualResetEvent__StaticFields {
};

struct ManualResetEvent__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ManualResetEvent__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ManualResetEvent__VTable vtable;
};

struct Action_1_Object___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Clone;
    VirtualInvokeData GetObjectData;
    VirtualInvokeData DynamicInvokeImpl;
    VirtualInvokeData Clone_1;
    VirtualInvokeData GetMethodImpl;
    VirtualInvokeData GetObjectData_1;
    VirtualInvokeData GetInvocationList;
    VirtualInvokeData CombineImpl;
    VirtualInvokeData RemoveImpl;
    VirtualInvokeData Invoke;
    VirtualInvokeData BeginInvoke;
    VirtualInvokeData EndInvoke;
};

struct Action_1_Object___StaticFields {
};

struct Action_1_Object___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Action_1_Object___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Action_1_Object___VTable vtable;
};

struct SynchronizationContextProperties__Enum__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData CompareTo;
    VirtualInvokeData ToString_1;
    VirtualInvokeData GetTypeCode;
    VirtualInvokeData System_IConvertible_ToBoolean;
    VirtualInvokeData System_IConvertible_ToChar;
    VirtualInvokeData System_IConvertible_ToSByte;
    VirtualInvokeData System_IConvertible_ToByte;
    VirtualInvokeData System_IConvertible_ToInt16;
    VirtualInvokeData System_IConvertible_ToUInt16;
    VirtualInvokeData System_IConvertible_ToInt32;
    VirtualInvokeData System_IConvertible_ToUInt32;
    VirtualInvokeData System_IConvertible_ToInt64;
    VirtualInvokeData System_IConvertible_ToUInt64;
    VirtualInvokeData System_IConvertible_ToSingle;
    VirtualInvokeData System_IConvertible_ToDouble;
    VirtualInvokeData System_IConvertible_ToDecimal;
    VirtualInvokeData System_IConvertible_ToDateTime;
    VirtualInvokeData ToString_2;
    VirtualInvokeData System_IConvertible_ToType;
};

struct SynchronizationContextProperties__Enum__StaticFields {
};

struct SynchronizationContextProperties__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SynchronizationContextProperties__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SynchronizationContextProperties__Enum__VTable vtable;
};

struct SendOrPostCallback__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Clone;
    VirtualInvokeData GetObjectData;
    VirtualInvokeData DynamicInvokeImpl;
    VirtualInvokeData Clone_1;
    VirtualInvokeData GetMethodImpl;
    VirtualInvokeData GetObjectData_1;
    VirtualInvokeData GetInvocationList;
    VirtualInvokeData CombineImpl;
    VirtualInvokeData RemoveImpl;
    VirtualInvokeData Invoke;
    VirtualInvokeData BeginInvoke;
    VirtualInvokeData EndInvoke;
};

struct SendOrPostCallback__StaticFields {
};

struct SendOrPostCallback__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SendOrPostCallback__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SendOrPostCallback__VTable vtable;
};

struct IntPtr__Array__VTable {
};

struct IntPtr__Array__StaticFields {
};

struct IntPtr__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IntPtr__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IntPtr__Array__VTable vtable;
};

struct SynchronizationContext__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Send;
    VirtualInvokeData Post;
    VirtualInvokeData OperationStarted;
    VirtualInvokeData OperationCompleted;
    VirtualInvokeData Wait;
    VirtualInvokeData CreateCopy;
};

struct SynchronizationContext__StaticFields {
    struct Type *s_cachedPreparedType1;
    struct Type *s_cachedPreparedType2;
    struct Type *s_cachedPreparedType3;
    struct Type *s_cachedPreparedType4;
    struct Type *s_cachedPreparedType5;
};

struct SynchronizationContext__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SynchronizationContext__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SynchronizationContext__VTable vtable;
};

struct CallContextRemotingData__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Clone;
};

struct CallContextRemotingData__StaticFields {
};

struct CallContextRemotingData__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct CallContextRemotingData__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct CallContextRemotingData__VTable vtable;
};

struct IPrincipal__VTable {
    VirtualInvokeData get_Identity;
    VirtualInvokeData IsInRole;
};

struct IPrincipal__StaticFields {
};

struct IPrincipal__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IPrincipal__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IPrincipal__VTable vtable;
};

struct CallContextSecurityData__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Clone;
};

struct CallContextSecurityData__StaticFields {
};

struct CallContextSecurityData__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct CallContextSecurityData__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct CallContextSecurityData__VTable vtable;
};

struct Header__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct Header__StaticFields {
};

struct Header__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Header__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Header__VTable vtable;
};

struct Header__Array__VTable {
};

struct Header__Array__StaticFields {
};

struct Header__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Header__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Header__Array__VTable vtable;
};

struct LogicalCallContext__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData GetObjectData;
    VirtualInvokeData Clone;
};

struct LogicalCallContext__StaticFields {
    struct Type *s_callContextType;
};

struct LogicalCallContext__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct LogicalCallContext__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct LogicalCallContext__VTable vtable;
};

struct IllogicalCallContext__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct IllogicalCallContext__StaticFields {
};

struct IllogicalCallContext__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IllogicalCallContext__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IllogicalCallContext__VTable vtable;
};

struct ExecutionContext_Flags__Enum__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData CompareTo;
    VirtualInvokeData ToString_1;
    VirtualInvokeData GetTypeCode;
    VirtualInvokeData System_IConvertible_ToBoolean;
    VirtualInvokeData System_IConvertible_ToChar;
    VirtualInvokeData System_IConvertible_ToSByte;
    VirtualInvokeData System_IConvertible_ToByte;
    VirtualInvokeData System_IConvertible_ToInt16;
    VirtualInvokeData System_IConvertible_ToUInt16;
    VirtualInvokeData System_IConvertible_ToInt32;
    VirtualInvokeData System_IConvertible_ToUInt32;
    VirtualInvokeData System_IConvertible_ToInt64;
    VirtualInvokeData System_IConvertible_ToUInt64;
    VirtualInvokeData System_IConvertible_ToSingle;
    VirtualInvokeData System_IConvertible_ToDouble;
    VirtualInvokeData System_IConvertible_ToDecimal;
    VirtualInvokeData System_IConvertible_ToDateTime;
    VirtualInvokeData ToString_2;
    VirtualInvokeData System_IConvertible_ToType;
};

struct ExecutionContext_Flags__Enum__StaticFields {
};

struct ExecutionContext_Flags__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ExecutionContext_Flags__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ExecutionContext_Flags__Enum__VTable vtable;
};

struct IAsyncLocal__VTable {
    VirtualInvokeData OnValueChanged;
};

struct IAsyncLocal__StaticFields {
};

struct IAsyncLocal__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IAsyncLocal__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IAsyncLocal__VTable vtable;
};

struct Dictionary_2_TKey_TValue_Entry_System_Threading_IAsyncLocal_System_Object___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct Dictionary_2_TKey_TValue_Entry_System_Threading_IAsyncLocal_System_Object___StaticFields {
};

struct Dictionary_2_TKey_TValue_Entry_System_Threading_IAsyncLocal_System_Object___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Dictionary_2_TKey_TValue_Entry_System_Threading_IAsyncLocal_System_Object___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Dictionary_2_TKey_TValue_Entry_System_Threading_IAsyncLocal_System_Object___VTable vtable;
};

struct Dictionary_2_TKey_TValue_Entry_System_Threading_IAsyncLocal_System_Object___Array__VTable {
};

struct Dictionary_2_TKey_TValue_Entry_System_Threading_IAsyncLocal_System_Object___Array__StaticFields {
};

struct Dictionary_2_TKey_TValue_Entry_System_Threading_IAsyncLocal_System_Object___Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Dictionary_2_TKey_TValue_Entry_System_Threading_IAsyncLocal_System_Object___Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Dictionary_2_TKey_TValue_Entry_System_Threading_IAsyncLocal_System_Object___Array__VTable vtable;
};

struct IEqualityComparer_1_System_Threading_IAsyncLocal___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData GetHashCode;
};

struct IEqualityComparer_1_System_Threading_IAsyncLocal___StaticFields {
};

struct IEqualityComparer_1_System_Threading_IAsyncLocal___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEqualityComparer_1_System_Threading_IAsyncLocal___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEqualityComparer_1_System_Threading_IAsyncLocal___VTable vtable;
};

struct IAsyncLocal__Array__VTable {
};

struct IAsyncLocal__Array__StaticFields {
};

struct IAsyncLocal__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IAsyncLocal__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IAsyncLocal__Array__VTable vtable;
};

struct IEnumerator_1_System_Threading_IAsyncLocal___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_System_Threading_IAsyncLocal___StaticFields {
};

struct IEnumerator_1_System_Threading_IAsyncLocal___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_System_Threading_IAsyncLocal___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_System_Threading_IAsyncLocal___VTable vtable;
};

struct Dictionary_2_TKey_TValue_KeyCollection_System_Threading_IAsyncLocal_System_Object___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_Count;
    VirtualInvokeData System_Collections_Generic_ICollection_TKey__get_IsReadOnly;
    VirtualInvokeData System_Collections_Generic_ICollection_TKey__Add;
    VirtualInvokeData System_Collections_Generic_ICollection_TKey__Clear;
    VirtualInvokeData System_Collections_Generic_ICollection_TKey__Contains;
    VirtualInvokeData CopyTo;
    VirtualInvokeData System_Collections_Generic_ICollection_TKey__Remove;
    VirtualInvokeData System_Collections_Generic_IEnumerable_TKey__GetEnumerator;
    VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
    VirtualInvokeData System_Collections_ICollection_CopyTo;
    VirtualInvokeData get_Count_1;
    VirtualInvokeData System_Collections_ICollection_get_SyncRoot;
    VirtualInvokeData System_Collections_ICollection_get_IsSynchronized;
    VirtualInvokeData get_Count_2;
};

struct Dictionary_2_TKey_TValue_KeyCollection_System_Threading_IAsyncLocal_System_Object___StaticFields {
};

struct Dictionary_2_TKey_TValue_KeyCollection_System_Threading_IAsyncLocal_System_Object___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Dictionary_2_TKey_TValue_KeyCollection_System_Threading_IAsyncLocal_System_Object___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Dictionary_2_TKey_TValue_KeyCollection_System_Threading_IAsyncLocal_System_Object___VTable vtable;
};

struct IEnumerator_1_System_Object___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_System_Object___StaticFields {
};

struct IEnumerator_1_System_Object___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_System_Object___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_System_Object___VTable vtable;
};

struct Dictionary_2_TKey_TValue_ValueCollection_System_Threading_IAsyncLocal_System_Object___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_Count;
    VirtualInvokeData System_Collections_Generic_ICollection_TValue__get_IsReadOnly;
    VirtualInvokeData System_Collections_Generic_ICollection_TValue__Add;
    VirtualInvokeData System_Collections_Generic_ICollection_TValue__Clear;
    VirtualInvokeData System_Collections_Generic_ICollection_TValue__Contains;
    VirtualInvokeData CopyTo;
    VirtualInvokeData System_Collections_Generic_ICollection_TValue__Remove;
    VirtualInvokeData System_Collections_Generic_IEnumerable_TValue__GetEnumerator;
    VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
    VirtualInvokeData System_Collections_ICollection_CopyTo;
    VirtualInvokeData get_Count_1;
    VirtualInvokeData System_Collections_ICollection_get_SyncRoot;
    VirtualInvokeData System_Collections_ICollection_get_IsSynchronized;
    VirtualInvokeData get_Count_2;
};

struct Dictionary_2_TKey_TValue_ValueCollection_System_Threading_IAsyncLocal_System_Object___StaticFields {
};

struct Dictionary_2_TKey_TValue_ValueCollection_System_Threading_IAsyncLocal_System_Object___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Dictionary_2_TKey_TValue_ValueCollection_System_Threading_IAsyncLocal_System_Object___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Dictionary_2_TKey_TValue_ValueCollection_System_Threading_IAsyncLocal_System_Object___VTable vtable;
};

struct ICollection_1_System_Threading_IAsyncLocal___VTable {
    VirtualInvokeData get_Count;
    VirtualInvokeData get_IsReadOnly;
    VirtualInvokeData Add;
    VirtualInvokeData Clear;
    VirtualInvokeData Contains;
    VirtualInvokeData CopyTo;
    VirtualInvokeData Remove;
};

struct ICollection_1_System_Threading_IAsyncLocal___StaticFields {
};

struct ICollection_1_System_Threading_IAsyncLocal___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ICollection_1_System_Threading_IAsyncLocal___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ICollection_1_System_Threading_IAsyncLocal___VTable vtable;
};

struct ICollection_1_System_Object___VTable {
    VirtualInvokeData get_Count;
    VirtualInvokeData get_IsReadOnly;
    VirtualInvokeData Add;
    VirtualInvokeData Clear;
    VirtualInvokeData Contains;
    VirtualInvokeData CopyTo;
    VirtualInvokeData Remove;
};

struct ICollection_1_System_Object___StaticFields {
};

struct ICollection_1_System_Object___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ICollection_1_System_Object___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ICollection_1_System_Object___VTable vtable;
};

struct KeyValuePair_2_System_Threading_IAsyncLocal_System_Object___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct KeyValuePair_2_System_Threading_IAsyncLocal_System_Object___StaticFields {
};

struct KeyValuePair_2_System_Threading_IAsyncLocal_System_Object___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct KeyValuePair_2_System_Threading_IAsyncLocal_System_Object___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct KeyValuePair_2_System_Threading_IAsyncLocal_System_Object___VTable vtable;
};

struct KeyValuePair_2_System_Threading_IAsyncLocal_System_Object___Array__VTable {
};

struct KeyValuePair_2_System_Threading_IAsyncLocal_System_Object___Array__StaticFields {
};

struct KeyValuePair_2_System_Threading_IAsyncLocal_System_Object___Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct KeyValuePair_2_System_Threading_IAsyncLocal_System_Object___Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct KeyValuePair_2_System_Threading_IAsyncLocal_System_Object___Array__VTable vtable;
};

struct IEnumerator_1_KeyValuePair_2_System_Threading_IAsyncLocal_System_Object___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_KeyValuePair_2_System_Threading_IAsyncLocal_System_Object___StaticFields {
};

struct IEnumerator_1_KeyValuePair_2_System_Threading_IAsyncLocal_System_Object___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_KeyValuePair_2_System_Threading_IAsyncLocal_System_Object___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_KeyValuePair_2_System_Threading_IAsyncLocal_System_Object___VTable vtable;
};

struct IEnumerable_1_System_Threading_IAsyncLocal___VTable {
    VirtualInvokeData GetEnumerator;
};

struct IEnumerable_1_System_Threading_IAsyncLocal___StaticFields {
};

struct IEnumerable_1_System_Threading_IAsyncLocal___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerable_1_System_Threading_IAsyncLocal___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerable_1_System_Threading_IAsyncLocal___VTable vtable;
};

struct IEnumerable_1_System_Object___VTable {
    VirtualInvokeData GetEnumerator;
};

struct IEnumerable_1_System_Object___StaticFields {
};

struct IEnumerable_1_System_Object___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerable_1_System_Object___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerable_1_System_Object___VTable vtable;
};

struct Dictionary_2_System_Threading_IAsyncLocal_System_Object___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_Item;
    VirtualInvokeData set_Item;
    VirtualInvokeData System_Collections_Generic_IDictionary_TKey_TValue__get_Keys;
    VirtualInvokeData System_Collections_Generic_IDictionary_TKey_TValue__get_Values;
    VirtualInvokeData ContainsKey;
    VirtualInvokeData Add;
    VirtualInvokeData Remove;
    VirtualInvokeData TryGetValue;
    VirtualInvokeData get_Count;
    VirtualInvokeData System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___get_IsReadOnly;
    VirtualInvokeData System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Add;
    VirtualInvokeData Clear;
    VirtualInvokeData System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Contains;
    VirtualInvokeData System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___CopyTo;
    VirtualInvokeData System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Remove;
    VirtualInvokeData System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_TKey_TValue___GetEnumerator;
    VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
    VirtualInvokeData System_Collections_IDictionary_get_Item;
    VirtualInvokeData System_Collections_IDictionary_set_Item;
    VirtualInvokeData System_Collections_IDictionary_get_Keys;
    VirtualInvokeData System_Collections_IDictionary_get_Values;
    VirtualInvokeData System_Collections_IDictionary_Contains;
    VirtualInvokeData System_Collections_IDictionary_Add;
    VirtualInvokeData Clear_1;
    VirtualInvokeData System_Collections_IDictionary_get_IsReadOnly;
    VirtualInvokeData System_Collections_IDictionary_get_IsFixedSize;
    VirtualInvokeData System_Collections_IDictionary_GetEnumerator;
    VirtualInvokeData System_Collections_IDictionary_Remove;
    VirtualInvokeData System_Collections_ICollection_CopyTo;
    VirtualInvokeData get_Count_1;
    VirtualInvokeData System_Collections_ICollection_get_SyncRoot;
    VirtualInvokeData System_Collections_ICollection_get_IsSynchronized;
    VirtualInvokeData ContainsKey_1;
    VirtualInvokeData TryGetValue_1;
    VirtualInvokeData get_Item_1;
    VirtualInvokeData System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Keys;
    VirtualInvokeData System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Values;
    VirtualInvokeData get_Count_2;
    VirtualInvokeData GetObjectData;
    VirtualInvokeData OnDeserialization;
    VirtualInvokeData GetObjectData_1;
    VirtualInvokeData OnDeserialization_1;
};

struct Dictionary_2_System_Threading_IAsyncLocal_System_Object___StaticFields {
};

struct Dictionary_2_System_Threading_IAsyncLocal_System_Object___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Dictionary_2_System_Threading_IAsyncLocal_System_Object___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Dictionary_2_System_Threading_IAsyncLocal_System_Object___VTable vtable;
};

struct List_1_System_Threading_IAsyncLocal___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_Item;
    VirtualInvokeData set_Item;
    VirtualInvokeData IndexOf;
    VirtualInvokeData Insert;
    VirtualInvokeData RemoveAt;
    VirtualInvokeData get_Count;
    VirtualInvokeData System_Collections_Generic_ICollection_T__get_IsReadOnly;
    VirtualInvokeData Add;
    VirtualInvokeData Clear;
    VirtualInvokeData Contains;
    VirtualInvokeData CopyTo;
    VirtualInvokeData Remove;
    VirtualInvokeData System_Collections_Generic_IEnumerable_T__GetEnumerator;
    VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
    VirtualInvokeData System_Collections_IList_get_Item;
    VirtualInvokeData System_Collections_IList_set_Item;
    VirtualInvokeData System_Collections_IList_Add;
    VirtualInvokeData System_Collections_IList_Contains;
    VirtualInvokeData Clear_1;
    VirtualInvokeData System_Collections_IList_get_IsReadOnly;
    VirtualInvokeData System_Collections_IList_get_IsFixedSize;
    VirtualInvokeData System_Collections_IList_IndexOf;
    VirtualInvokeData System_Collections_IList_Insert;
    VirtualInvokeData System_Collections_IList_Remove;
    VirtualInvokeData RemoveAt_1;
    VirtualInvokeData System_Collections_ICollection_CopyTo;
    VirtualInvokeData get_Count_1;
    VirtualInvokeData System_Collections_ICollection_get_SyncRoot;
    VirtualInvokeData System_Collections_ICollection_get_IsSynchronized;
    VirtualInvokeData get_Item_1;
    VirtualInvokeData get_Count_2;
};

struct List_1_System_Threading_IAsyncLocal___StaticFields {
    struct IAsyncLocal__Array *_emptyArray;
};

struct List_1_System_Threading_IAsyncLocal___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct List_1_System_Threading_IAsyncLocal___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct List_1_System_Threading_IAsyncLocal___VTable vtable;
};

struct ExecutionContext__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Dispose;
    VirtualInvokeData GetObjectData;
};

struct ExecutionContext__StaticFields {
    struct ExecutionContext *s_dummyDefaultEC;
};

struct ExecutionContext__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ExecutionContext__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ExecutionContext__VTable vtable;
};

struct ContextCallback__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Clone;
    VirtualInvokeData GetObjectData;
    VirtualInvokeData DynamicInvokeImpl;
    VirtualInvokeData Clone_1;
    VirtualInvokeData GetMethodImpl;
    VirtualInvokeData GetObjectData_1;
    VirtualInvokeData GetInvocationList;
    VirtualInvokeData CombineImpl;
    VirtualInvokeData RemoveImpl;
    VirtualInvokeData Invoke;
    VirtualInvokeData BeginInvoke;
    VirtualInvokeData EndInvoke;
};

struct ContextCallback__StaticFields {
};

struct ContextCallback__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ContextCallback__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ContextCallback__VTable vtable;
};

struct CancellationCallbackInfo__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct CancellationCallbackInfo__StaticFields {
    struct ContextCallback *s_executionContextCallback;
};

struct CancellationCallbackInfo__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct CancellationCallbackInfo__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct CancellationCallbackInfo__VTable vtable;
};

struct CancellationCallbackInfo__Array__VTable {
};

struct CancellationCallbackInfo__Array__StaticFields {
};

struct CancellationCallbackInfo__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct CancellationCallbackInfo__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct CancellationCallbackInfo__Array__VTable vtable;
};

struct SparselyPopulatedArrayFragment_1_CancellationCallbackInfo___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct SparselyPopulatedArrayFragment_1_CancellationCallbackInfo___StaticFields {
};

struct SparselyPopulatedArrayFragment_1_CancellationCallbackInfo___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SparselyPopulatedArrayFragment_1_CancellationCallbackInfo___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SparselyPopulatedArrayFragment_1_CancellationCallbackInfo___VTable vtable;
};

struct SparselyPopulatedArray_1_CancellationCallbackInfo___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct SparselyPopulatedArray_1_CancellationCallbackInfo___StaticFields {
};

struct SparselyPopulatedArray_1_CancellationCallbackInfo___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SparselyPopulatedArray_1_CancellationCallbackInfo___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SparselyPopulatedArray_1_CancellationCallbackInfo___VTable vtable;
};

struct SparselyPopulatedArray_1_CancellationCallbackInfo___Array__VTable {
};

struct SparselyPopulatedArray_1_CancellationCallbackInfo___Array__StaticFields {
};

struct SparselyPopulatedArray_1_CancellationCallbackInfo___Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SparselyPopulatedArray_1_CancellationCallbackInfo___Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SparselyPopulatedArray_1_CancellationCallbackInfo___Array__VTable vtable;
};

struct SparselyPopulatedArrayAddInfo_1_CancellationCallbackInfo___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct SparselyPopulatedArrayAddInfo_1_CancellationCallbackInfo___StaticFields {
};

struct SparselyPopulatedArrayAddInfo_1_CancellationCallbackInfo___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SparselyPopulatedArrayAddInfo_1_CancellationCallbackInfo___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SparselyPopulatedArrayAddInfo_1_CancellationCallbackInfo___VTable vtable;
};

struct CancellationTokenRegistration__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Equals_1;
    VirtualInvokeData Dispose;
};

struct CancellationTokenRegistration__StaticFields {
};

struct CancellationTokenRegistration__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct CancellationTokenRegistration__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct CancellationTokenRegistration__VTable vtable;
};

struct CancellationTokenRegistration__Array__VTable {
};

struct CancellationTokenRegistration__Array__StaticFields {
};

struct CancellationTokenRegistration__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct CancellationTokenRegistration__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct CancellationTokenRegistration__Array__VTable vtable;
};

struct SortedList_KeyList__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_Item;
    VirtualInvokeData set_Item;
    VirtualInvokeData Add;
    VirtualInvokeData Contains;
    VirtualInvokeData Clear;
    VirtualInvokeData get_IsReadOnly;
    VirtualInvokeData get_IsFixedSize;
    VirtualInvokeData IndexOf;
    VirtualInvokeData Insert;
    VirtualInvokeData Remove;
    VirtualInvokeData RemoveAt;
    VirtualInvokeData CopyTo;
    VirtualInvokeData get_Count;
    VirtualInvokeData get_SyncRoot;
    VirtualInvokeData get_IsSynchronized;
    VirtualInvokeData GetEnumerator;
    VirtualInvokeData get_Count_1;
    VirtualInvokeData get_IsReadOnly_1;
    VirtualInvokeData get_IsFixedSize_1;
    VirtualInvokeData get_IsSynchronized_1;
    VirtualInvokeData get_SyncRoot_1;
    VirtualInvokeData Add_1;
    VirtualInvokeData Clear_1;
    VirtualInvokeData Contains_1;
    VirtualInvokeData CopyTo_1;
    VirtualInvokeData Insert_1;
    VirtualInvokeData get_Item_1;
    VirtualInvokeData set_Item_1;
    VirtualInvokeData GetEnumerator_1;
    VirtualInvokeData IndexOf_1;
    VirtualInvokeData Remove_1;
    VirtualInvokeData RemoveAt_1;
};

struct SortedList_KeyList__StaticFields {
};

struct SortedList_KeyList__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SortedList_KeyList__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SortedList_KeyList__VTable vtable;
};

struct SortedList_ValueList__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_Item;
    VirtualInvokeData set_Item;
    VirtualInvokeData Add;
    VirtualInvokeData Contains;
    VirtualInvokeData Clear;
    VirtualInvokeData get_IsReadOnly;
    VirtualInvokeData get_IsFixedSize;
    VirtualInvokeData IndexOf;
    VirtualInvokeData Insert;
    VirtualInvokeData Remove;
    VirtualInvokeData RemoveAt;
    VirtualInvokeData CopyTo;
    VirtualInvokeData get_Count;
    VirtualInvokeData get_SyncRoot;
    VirtualInvokeData get_IsSynchronized;
    VirtualInvokeData GetEnumerator;
    VirtualInvokeData get_Count_1;
    VirtualInvokeData get_IsReadOnly_1;
    VirtualInvokeData get_IsFixedSize_1;
    VirtualInvokeData get_IsSynchronized_1;
    VirtualInvokeData get_SyncRoot_1;
    VirtualInvokeData Add_1;
    VirtualInvokeData Clear_1;
    VirtualInvokeData Contains_1;
    VirtualInvokeData CopyTo_1;
    VirtualInvokeData Insert_1;
    VirtualInvokeData get_Item_1;
    VirtualInvokeData set_Item_1;
    VirtualInvokeData GetEnumerator_1;
    VirtualInvokeData IndexOf_1;
    VirtualInvokeData Remove_1;
    VirtualInvokeData RemoveAt_1;
};

struct SortedList_ValueList__StaticFields {
};

struct SortedList_ValueList__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SortedList_ValueList__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SortedList_ValueList__VTable vtable;
};

struct IList__VTable {
    VirtualInvokeData get_Item;
    VirtualInvokeData set_Item;
    VirtualInvokeData Add;
    VirtualInvokeData Contains;
    VirtualInvokeData Clear;
    VirtualInvokeData get_IsReadOnly;
    VirtualInvokeData get_IsFixedSize;
    VirtualInvokeData IndexOf;
    VirtualInvokeData Insert;
    VirtualInvokeData Remove;
    VirtualInvokeData RemoveAt;
};

struct IList__StaticFields {
};

struct IList__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IList__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IList__VTable vtable;
};

struct SortedList__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_Item;
    VirtualInvokeData set_Item;
    VirtualInvokeData get_Keys;
    VirtualInvokeData get_Values;
    VirtualInvokeData Contains;
    VirtualInvokeData Add;
    VirtualInvokeData Clear;
    VirtualInvokeData get_IsReadOnly;
    VirtualInvokeData get_IsFixedSize;
    VirtualInvokeData GetEnumerator;
    VirtualInvokeData Remove;
    VirtualInvokeData CopyTo;
    VirtualInvokeData get_Count;
    VirtualInvokeData get_SyncRoot;
    VirtualInvokeData get_IsSynchronized;
    VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
    VirtualInvokeData Clone;
    VirtualInvokeData Add_1;
    VirtualInvokeData get_Capacity;
    VirtualInvokeData set_Capacity;
    VirtualInvokeData get_Count_1;
    VirtualInvokeData get_Keys_1;
    VirtualInvokeData get_Values_1;
    VirtualInvokeData get_IsReadOnly_1;
    VirtualInvokeData get_IsFixedSize_1;
    VirtualInvokeData get_IsSynchronized_1;
    VirtualInvokeData get_SyncRoot_1;
    VirtualInvokeData Clear_1;
    VirtualInvokeData Clone_1;
    VirtualInvokeData Contains_1;
    VirtualInvokeData ContainsKey;
    VirtualInvokeData ContainsValue;
    VirtualInvokeData CopyTo_1;
    VirtualInvokeData ToKeyValuePairsArray;
    VirtualInvokeData GetByIndex;
    VirtualInvokeData GetEnumerator_1;
    VirtualInvokeData GetKey;
    VirtualInvokeData GetKeyList;
    VirtualInvokeData GetValueList;
    VirtualInvokeData get_Item_1;
    VirtualInvokeData set_Item_1;
    VirtualInvokeData IndexOfKey;
    VirtualInvokeData IndexOfValue;
    VirtualInvokeData RemoveAt;
    VirtualInvokeData Remove_1;
    VirtualInvokeData SetByIndex;
    VirtualInvokeData TrimToSize;
};

struct SortedList__StaticFields {
    struct Object__Array *emptyArray;
};

struct SortedList__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SortedList__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SortedList__VTable vtable;
};

struct Timer_Scheduler__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct Timer_Scheduler__StaticFields {
    struct Timer_Scheduler *instance;
};

struct Timer_Scheduler__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Timer_Scheduler__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Timer_Scheduler__VTable vtable;
};

struct TimerCallback__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Clone;
    VirtualInvokeData GetObjectData;
    VirtualInvokeData DynamicInvokeImpl;
    VirtualInvokeData Clone_1;
    VirtualInvokeData GetMethodImpl;
    VirtualInvokeData GetObjectData_1;
    VirtualInvokeData GetInvocationList;
    VirtualInvokeData CombineImpl;
    VirtualInvokeData RemoveImpl;
    VirtualInvokeData Invoke;
    VirtualInvokeData BeginInvoke;
    VirtualInvokeData EndInvoke;
};

struct TimerCallback__StaticFields {
};

struct TimerCallback__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct TimerCallback__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct TimerCallback__VTable vtable;
};

struct Timer__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData CreateObjRef;
    VirtualInvokeData GetLifetimeService;
    VirtualInvokeData InitializeLifetimeService;
    VirtualInvokeData Dispose;
};

struct Timer__StaticFields {
    struct Timer_Scheduler *scheduler;
};

struct Timer__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Timer__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Timer__VTable vtable;
};

struct CancellationTokenSource__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Dispose;
    VirtualInvokeData Dispose_1;
};

struct CancellationTokenSource__StaticFields {
    struct CancellationTokenSource *_staticSource_Set;
    struct CancellationTokenSource *_staticSource_NotCancelable;
    int32_t s_nLists;
    struct Action_1_Object_ *s_LinkedTokenCancelDelegate;
    struct TimerCallback *s_timerCallback;
};

struct CancellationTokenSource__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct CancellationTokenSource__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct CancellationTokenSource__VTable vtable;
};

struct CancellationToken__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct CancellationToken__StaticFields {
    struct Action_1_Object_ *s_ActionToActionObjShunt;
};

struct CancellationToken__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct CancellationToken__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct CancellationToken__VTable vtable;
};

struct Ephemeron__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct Ephemeron__StaticFields {
};

struct Ephemeron__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Ephemeron__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Ephemeron__VTable vtable;
};

struct Ephemeron__Array__VTable {
};

struct Ephemeron__Array__StaticFields {
};

struct Ephemeron__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Ephemeron__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Ephemeron__Array__VTable vtable;
};

struct ConditionalWeakTable_2_System_Threading_Tasks_TaskScheduler_System_Object___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct ConditionalWeakTable_2_System_Threading_Tasks_TaskScheduler_System_Object___StaticFields {
};

struct ConditionalWeakTable_2_System_Threading_Tasks_TaskScheduler_System_Object___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ConditionalWeakTable_2_System_Threading_Tasks_TaskScheduler_System_Object___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ConditionalWeakTable_2_System_Threading_Tasks_TaskScheduler_System_Object___VTable vtable;
};

struct IDictionary__VTable {
    VirtualInvokeData get_Item;
    VirtualInvokeData set_Item;
    VirtualInvokeData get_Keys;
    VirtualInvokeData get_Values;
    VirtualInvokeData Contains;
    VirtualInvokeData Add;
    VirtualInvokeData Clear;
    VirtualInvokeData get_IsReadOnly;
    VirtualInvokeData get_IsFixedSize;
    VirtualInvokeData GetEnumerator;
    VirtualInvokeData Remove;
};

struct IDictionary__StaticFields {
};

struct IDictionary__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IDictionary__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IDictionary__VTable vtable;
};

struct IList_1_System_Object___VTable {
    VirtualInvokeData get_Item;
    VirtualInvokeData set_Item;
    VirtualInvokeData IndexOf;
    VirtualInvokeData Insert;
    VirtualInvokeData RemoveAt;
};

struct IList_1_System_Object___StaticFields {
};

struct IList_1_System_Object___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IList_1_System_Object___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IList_1_System_Object___VTable vtable;
};

struct List_1_System_Object___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_Item;
    VirtualInvokeData set_Item;
    VirtualInvokeData IndexOf;
    VirtualInvokeData Insert;
    VirtualInvokeData RemoveAt;
    VirtualInvokeData get_Count;
    VirtualInvokeData System_Collections_Generic_ICollection_T__get_IsReadOnly;
    VirtualInvokeData Add;
    VirtualInvokeData Clear;
    VirtualInvokeData Contains;
    VirtualInvokeData CopyTo;
    VirtualInvokeData Remove;
    VirtualInvokeData System_Collections_Generic_IEnumerable_T__GetEnumerator;
    VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
    VirtualInvokeData System_Collections_IList_get_Item;
    VirtualInvokeData System_Collections_IList_set_Item;
    VirtualInvokeData System_Collections_IList_Add;
    VirtualInvokeData System_Collections_IList_Contains;
    VirtualInvokeData Clear_1;
    VirtualInvokeData System_Collections_IList_get_IsReadOnly;
    VirtualInvokeData System_Collections_IList_get_IsFixedSize;
    VirtualInvokeData System_Collections_IList_IndexOf;
    VirtualInvokeData System_Collections_IList_Insert;
    VirtualInvokeData System_Collections_IList_Remove;
    VirtualInvokeData RemoveAt_1;
    VirtualInvokeData System_Collections_ICollection_CopyTo;
    VirtualInvokeData get_Count_1;
    VirtualInvokeData System_Collections_ICollection_get_SyncRoot;
    VirtualInvokeData System_Collections_ICollection_get_IsSynchronized;
    VirtualInvokeData get_Item_1;
    VirtualInvokeData get_Count_2;
};

struct List_1_System_Object___StaticFields {
    struct Object__Array *_emptyArray;
};

struct List_1_System_Object___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct List_1_System_Object___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct List_1_System_Object___VTable vtable;
};

struct SafeSerializationEventArgs__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct SafeSerializationEventArgs__StaticFields {
};

struct SafeSerializationEventArgs__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SafeSerializationEventArgs__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SafeSerializationEventArgs__VTable vtable;
};

struct EventHandler_1_System_Runtime_Serialization_SafeSerializationEventArgs___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Clone;
    VirtualInvokeData GetObjectData;
    VirtualInvokeData DynamicInvokeImpl;
    VirtualInvokeData Clone_1;
    VirtualInvokeData GetMethodImpl;
    VirtualInvokeData GetObjectData_1;
    VirtualInvokeData GetInvocationList;
    VirtualInvokeData CombineImpl;
    VirtualInvokeData RemoveImpl;
    VirtualInvokeData Invoke;
    VirtualInvokeData BeginInvoke;
    VirtualInvokeData EndInvoke;
};

struct EventHandler_1_System_Runtime_Serialization_SafeSerializationEventArgs___StaticFields {
};

struct EventHandler_1_System_Runtime_Serialization_SafeSerializationEventArgs___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct EventHandler_1_System_Runtime_Serialization_SafeSerializationEventArgs___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct EventHandler_1_System_Runtime_Serialization_SafeSerializationEventArgs___VTable vtable;
};

struct SafeSerializationManager__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData System_Runtime_Serialization_IObjectReference_GetRealObject;
    VirtualInvokeData System_Runtime_Serialization_ISerializable_GetObjectData;
};

struct SafeSerializationManager__StaticFields {
};

struct SafeSerializationManager__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SafeSerializationManager__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SafeSerializationManager__VTable vtable;
};

struct StackFrame__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData GetFileLineNumber;
    VirtualInvokeData GetFileColumnNumber;
    VirtualInvokeData GetFileName;
    VirtualInvokeData GetILOffset;
    VirtualInvokeData GetMethod;
    VirtualInvokeData GetNativeOffset;
};

struct StackFrame__StaticFields {
};

struct StackFrame__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct StackFrame__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct StackFrame__VTable vtable;
};

struct StackFrame__Array__VTable {
};

struct StackFrame__Array__StaticFields {
};

struct StackFrame__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct StackFrame__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct StackFrame__Array__VTable vtable;
};

struct StackTrace__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_FrameCount;
    VirtualInvokeData GetFrame;
    VirtualInvokeData GetFrames;
};

struct StackTrace__StaticFields {
    bool isAotidSet;
    struct String *aotid;
};

struct StackTrace__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct StackTrace__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct StackTrace__VTable vtable;
};

struct StackTrace__Array__VTable {
};

struct StackTrace__Array__StaticFields {
};

struct StackTrace__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct StackTrace__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct StackTrace__Array__VTable vtable;
};

struct Exception__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData GetObjectData;
    VirtualInvokeData get_HelpLink;
    VirtualInvokeData set_HelpLink;
    VirtualInvokeData get_InnerException;
    VirtualInvokeData get_Message;
    VirtualInvokeData get_Source;
    VirtualInvokeData set_Source;
    VirtualInvokeData get_StackTrace;
    VirtualInvokeData get_TargetSite;
    VirtualInvokeData Equals_1;
    VirtualInvokeData GetBaseException;
    VirtualInvokeData GetHashCode_1;
    VirtualInvokeData GetObjectData_1;
    VirtualInvokeData GetType;
    VirtualInvokeData ToString_1;
    VirtualInvokeData get_Message_1;
    VirtualInvokeData get_Data;
    VirtualInvokeData GetBaseException_1;
    VirtualInvokeData get_StackTrace_1;
    VirtualInvokeData get_HelpLink_1;
    VirtualInvokeData set_HelpLink_1;
    VirtualInvokeData get_Source_1;
    VirtualInvokeData set_Source_1;
    VirtualInvokeData GetObjectData_2;
    VirtualInvokeData InternalToString;
};

struct Exception__StaticFields {
    struct Object *s_EDILock;
};

struct Exception__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Exception__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Exception__VTable vtable;
};

struct IList_1_System_Exception___VTable {
    VirtualInvokeData get_Item;
    VirtualInvokeData set_Item;
    VirtualInvokeData IndexOf;
    VirtualInvokeData Insert;
    VirtualInvokeData RemoveAt;
};

struct IList_1_System_Exception___StaticFields {
};

struct IList_1_System_Exception___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IList_1_System_Exception___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IList_1_System_Exception___VTable vtable;
};

struct Exception__Array__VTable {
};

struct Exception__Array__StaticFields {
};

struct Exception__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Exception__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Exception__Array__VTable vtable;
};

struct IEnumerator_1_System_Exception___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_System_Exception___StaticFields {
};

struct IEnumerator_1_System_Exception___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_System_Exception___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_System_Exception___VTable vtable;
};

struct ReadOnlyCollection_1_System_Exception___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData System_Collections_Generic_IList_T__get_Item;
    VirtualInvokeData System_Collections_Generic_IList_T__set_Item;
    VirtualInvokeData IndexOf;
    VirtualInvokeData System_Collections_Generic_IList_T__Insert;
    VirtualInvokeData System_Collections_Generic_IList_T__RemoveAt;
    VirtualInvokeData get_Count;
    VirtualInvokeData System_Collections_Generic_ICollection_T__get_IsReadOnly;
    VirtualInvokeData System_Collections_Generic_ICollection_T__Add;
    VirtualInvokeData System_Collections_Generic_ICollection_T__Clear;
    VirtualInvokeData Contains;
    VirtualInvokeData CopyTo;
    VirtualInvokeData System_Collections_Generic_ICollection_T__Remove;
    VirtualInvokeData GetEnumerator;
    VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
    VirtualInvokeData System_Collections_IList_get_Item;
    VirtualInvokeData System_Collections_IList_set_Item;
    VirtualInvokeData System_Collections_IList_Add;
    VirtualInvokeData System_Collections_IList_Contains;
    VirtualInvokeData System_Collections_IList_Clear;
    VirtualInvokeData System_Collections_IList_get_IsReadOnly;
    VirtualInvokeData System_Collections_IList_get_IsFixedSize;
    VirtualInvokeData System_Collections_IList_IndexOf;
    VirtualInvokeData System_Collections_IList_Insert;
    VirtualInvokeData System_Collections_IList_Remove;
    VirtualInvokeData System_Collections_IList_RemoveAt;
    VirtualInvokeData System_Collections_ICollection_CopyTo;
    VirtualInvokeData get_Count_1;
    VirtualInvokeData System_Collections_ICollection_get_SyncRoot;
    VirtualInvokeData System_Collections_ICollection_get_IsSynchronized;
    VirtualInvokeData get_Item;
    VirtualInvokeData get_Count_2;
};

struct ReadOnlyCollection_1_System_Exception___StaticFields {
};

struct ReadOnlyCollection_1_System_Exception___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ReadOnlyCollection_1_System_Exception___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ReadOnlyCollection_1_System_Exception___VTable vtable;
};

struct AggregateException__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData GetObjectData;
    VirtualInvokeData get_HelpLink;
    VirtualInvokeData set_HelpLink;
    VirtualInvokeData get_InnerException;
    VirtualInvokeData get_Message;
    VirtualInvokeData get_Source;
    VirtualInvokeData set_Source;
    VirtualInvokeData get_StackTrace;
    VirtualInvokeData get_TargetSite;
    VirtualInvokeData Equals_1;
    VirtualInvokeData GetBaseException;
    VirtualInvokeData GetHashCode_1;
    VirtualInvokeData GetObjectData_1;
    VirtualInvokeData GetType;
    VirtualInvokeData ToString_1;
    VirtualInvokeData get_Message_1;
    VirtualInvokeData get_Data;
    VirtualInvokeData GetBaseException_1;
    VirtualInvokeData get_StackTrace_1;
    VirtualInvokeData get_HelpLink_1;
    VirtualInvokeData set_HelpLink_1;
    VirtualInvokeData get_Source_1;
    VirtualInvokeData set_Source_1;
    VirtualInvokeData GetObjectData_2;
    VirtualInvokeData InternalToString;
};

struct AggregateException__StaticFields {
};

struct AggregateException__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct AggregateException__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct AggregateException__VTable vtable;
};

struct UnobservedTaskExceptionEventArgs__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct UnobservedTaskExceptionEventArgs__StaticFields {
};

struct UnobservedTaskExceptionEventArgs__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct UnobservedTaskExceptionEventArgs__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct UnobservedTaskExceptionEventArgs__VTable vtable;
};

struct EventHandler_1_System_Threading_Tasks_UnobservedTaskExceptionEventArgs___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Clone;
    VirtualInvokeData GetObjectData;
    VirtualInvokeData DynamicInvokeImpl;
    VirtualInvokeData Clone_1;
    VirtualInvokeData GetMethodImpl;
    VirtualInvokeData GetObjectData_1;
    VirtualInvokeData GetInvocationList;
    VirtualInvokeData CombineImpl;
    VirtualInvokeData RemoveImpl;
    VirtualInvokeData Invoke;
    VirtualInvokeData BeginInvoke;
    VirtualInvokeData EndInvoke;
};

struct EventHandler_1_System_Threading_Tasks_UnobservedTaskExceptionEventArgs___StaticFields {
};

struct EventHandler_1_System_Threading_Tasks_UnobservedTaskExceptionEventArgs___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct EventHandler_1_System_Threading_Tasks_UnobservedTaskExceptionEventArgs___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct EventHandler_1_System_Threading_Tasks_UnobservedTaskExceptionEventArgs___VTable vtable;
};

struct Func_2_Object_Boolean___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Clone;
    VirtualInvokeData GetObjectData;
    VirtualInvokeData DynamicInvokeImpl;
    VirtualInvokeData Clone_1;
    VirtualInvokeData GetMethodImpl;
    VirtualInvokeData GetObjectData_1;
    VirtualInvokeData GetInvocationList;
    VirtualInvokeData CombineImpl;
    VirtualInvokeData RemoveImpl;
    VirtualInvokeData Invoke;
    VirtualInvokeData BeginInvoke;
    VirtualInvokeData EndInvoke;
};

struct Func_2_Object_Boolean___StaticFields {
};

struct Func_2_Object_Boolean___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Func_2_Object_Boolean___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Func_2_Object_Boolean___VTable vtable;
};

struct ConcurrentExclusiveSchedulerPair_ProcessingMode__Enum__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData CompareTo;
    VirtualInvokeData ToString_1;
    VirtualInvokeData GetTypeCode;
    VirtualInvokeData System_IConvertible_ToBoolean;
    VirtualInvokeData System_IConvertible_ToChar;
    VirtualInvokeData System_IConvertible_ToSByte;
    VirtualInvokeData System_IConvertible_ToByte;
    VirtualInvokeData System_IConvertible_ToInt16;
    VirtualInvokeData System_IConvertible_ToUInt16;
    VirtualInvokeData System_IConvertible_ToInt32;
    VirtualInvokeData System_IConvertible_ToUInt32;
    VirtualInvokeData System_IConvertible_ToInt64;
    VirtualInvokeData System_IConvertible_ToUInt64;
    VirtualInvokeData System_IConvertible_ToSingle;
    VirtualInvokeData System_IConvertible_ToDouble;
    VirtualInvokeData System_IConvertible_ToDecimal;
    VirtualInvokeData System_IConvertible_ToDateTime;
    VirtualInvokeData ToString_2;
    VirtualInvokeData System_IConvertible_ToType;
};

struct ConcurrentExclusiveSchedulerPair_ProcessingMode__Enum__StaticFields {
};

struct ConcurrentExclusiveSchedulerPair_ProcessingMode__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ConcurrentExclusiveSchedulerPair_ProcessingMode__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ConcurrentExclusiveSchedulerPair_ProcessingMode__Enum__VTable vtable;
};

struct ConcurrentDictionary_2_TKey_TValue_Node_System_Int32_System_Threading_Tasks_ConcurrentExclusiveSchedulerPair_ProcessingMode___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct ConcurrentDictionary_2_TKey_TValue_Node_System_Int32_System_Threading_Tasks_ConcurrentExclusiveSchedulerPair_ProcessingMode___StaticFields {
};

struct ConcurrentDictionary_2_TKey_TValue_Node_System_Int32_System_Threading_Tasks_ConcurrentExclusiveSchedulerPair_ProcessingMode___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ConcurrentDictionary_2_TKey_TValue_Node_System_Int32_System_Threading_Tasks_ConcurrentExclusiveSchedulerPair_ProcessingMode___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ConcurrentDictionary_2_TKey_TValue_Node_System_Int32_System_Threading_Tasks_ConcurrentExclusiveSchedulerPair_ProcessingMode___VTable vtable;
};

struct ConcurrentDictionary_2_TKey_TValue_Node_System_Int32_System_Threading_Tasks_ConcurrentExclusiveSchedulerPair_ProcessingMode___Array__VTable {
};

struct ConcurrentDictionary_2_TKey_TValue_Node_System_Int32_System_Threading_Tasks_ConcurrentExclusiveSchedulerPair_ProcessingMode___Array__StaticFields {
};

struct ConcurrentDictionary_2_TKey_TValue_Node_System_Int32_System_Threading_Tasks_ConcurrentExclusiveSchedulerPair_ProcessingMode___Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ConcurrentDictionary_2_TKey_TValue_Node_System_Int32_System_Threading_Tasks_ConcurrentExclusiveSchedulerPair_ProcessingMode___Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ConcurrentDictionary_2_TKey_TValue_Node_System_Int32_System_Threading_Tasks_ConcurrentExclusiveSchedulerPair_ProcessingMode___Array__VTable vtable;
};

struct ConcurrentDictionary_2_TKey_TValue_Tables_System_Int32_System_Threading_Tasks_ConcurrentExclusiveSchedulerPair_ProcessingMode___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct ConcurrentDictionary_2_TKey_TValue_Tables_System_Int32_System_Threading_Tasks_ConcurrentExclusiveSchedulerPair_ProcessingMode___StaticFields {
};

struct ConcurrentDictionary_2_TKey_TValue_Tables_System_Int32_System_Threading_Tasks_ConcurrentExclusiveSchedulerPair_ProcessingMode___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ConcurrentDictionary_2_TKey_TValue_Tables_System_Int32_System_Threading_Tasks_ConcurrentExclusiveSchedulerPair_ProcessingMode___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ConcurrentDictionary_2_TKey_TValue_Tables_System_Int32_System_Threading_Tasks_ConcurrentExclusiveSchedulerPair_ProcessingMode___VTable vtable;
};

struct ICollection_1_System_Threading_Tasks_ConcurrentExclusiveSchedulerPair_ProcessingMode___VTable {
    VirtualInvokeData get_Count;
    VirtualInvokeData get_IsReadOnly;
    VirtualInvokeData Add;
    VirtualInvokeData Clear;
    VirtualInvokeData Contains;
    VirtualInvokeData CopyTo;
    VirtualInvokeData Remove;
};

struct ICollection_1_System_Threading_Tasks_ConcurrentExclusiveSchedulerPair_ProcessingMode___StaticFields {
};

struct ICollection_1_System_Threading_Tasks_ConcurrentExclusiveSchedulerPair_ProcessingMode___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ICollection_1_System_Threading_Tasks_ConcurrentExclusiveSchedulerPair_ProcessingMode___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ICollection_1_System_Threading_Tasks_ConcurrentExclusiveSchedulerPair_ProcessingMode___VTable vtable;
};

struct ConcurrentExclusiveSchedulerPair_ProcessingMode___VTable {
};

struct ConcurrentExclusiveSchedulerPair_ProcessingMode___StaticFields {
};

struct ConcurrentExclusiveSchedulerPair_ProcessingMode___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ConcurrentExclusiveSchedulerPair_ProcessingMode___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ConcurrentExclusiveSchedulerPair_ProcessingMode___VTable vtable;
};

struct KeyValuePair_2_System_Int32_System_Threading_Tasks_ConcurrentExclusiveSchedulerPair_ProcessingMode___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct KeyValuePair_2_System_Int32_System_Threading_Tasks_ConcurrentExclusiveSchedulerPair_ProcessingMode___StaticFields {
};

struct KeyValuePair_2_System_Int32_System_Threading_Tasks_ConcurrentExclusiveSchedulerPair_ProcessingMode___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct KeyValuePair_2_System_Int32_System_Threading_Tasks_ConcurrentExclusiveSchedulerPair_ProcessingMode___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct KeyValuePair_2_System_Int32_System_Threading_Tasks_ConcurrentExclusiveSchedulerPair_ProcessingMode___VTable vtable;
};

struct KeyValuePair_2_System_Int32_System_Threading_Tasks_ConcurrentExclusiveSchedulerPair_ProcessingMode___Array__VTable {
};

struct KeyValuePair_2_System_Int32_System_Threading_Tasks_ConcurrentExclusiveSchedulerPair_ProcessingMode___Array__StaticFields {
};

struct KeyValuePair_2_System_Int32_System_Threading_Tasks_ConcurrentExclusiveSchedulerPair_ProcessingMode___Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct KeyValuePair_2_System_Int32_System_Threading_Tasks_ConcurrentExclusiveSchedulerPair_ProcessingMode___Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct KeyValuePair_2_System_Int32_System_Threading_Tasks_ConcurrentExclusiveSchedulerPair_ProcessingMode___Array__VTable vtable;
};

struct IEnumerator_1_KeyValuePair_2_System_Int32_System_Threading_Tasks_ConcurrentExclusiveSchedulerPair_Proces