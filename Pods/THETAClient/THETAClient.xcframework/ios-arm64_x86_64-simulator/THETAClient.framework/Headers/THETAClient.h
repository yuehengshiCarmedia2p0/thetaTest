#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class THETACDigestAuthCompanion, THETACKtor_ioByteReadPacket, THETACKotlinRegex, THETACKotlinStringBuilder, THETACKotlinByteArray, THETACKotlinPair<__covariant A, __covariant B>, THETACKotlinThrowable, THETACKotlinArray<T>, THETACKotlinException, THETACPreviewClientImplCompanion, THETACThetaApi, THETACCancelVideoConvertResponse, THETACConvertVideoFormatsParams, THETACConvertVideoFormatsResponse, THETACDeleteAccessPointParams, THETACDeleteAccessPointResponse, THETACDeleteParams, THETACDeleteResponse, THETACDeleteMySettingParams, THETACDeleteMySettingResponse, THETACFinishWlanResponse, THETACGetMetadataParams, THETACGetMetadataResponse, THETACGetMySettingParams, THETACGetMySettingResponse, THETACGetOptionsParams, THETACGetOptionsResponse, THETACGetPluginLicenseParams, THETACKtor_client_coreHttpResponse, THETACGetPluginOrdersResponse, THETACInfoApiResponse, THETACListAccessPointsResponse, THETACListFilesParams, THETACListFilesResponse, THETACListPluginsResponse, THETACPluginControlParams, THETACPluginControlResponse, THETACResetResponse, THETACSetAccessPointParams, THETACSetAccessPointResponse, THETACSetBluetoothDeviceParams, THETACSetBluetoothDeviceResponse, THETACSetMySettingParams, THETACSetMySettingResponse, THETACSetOptionsParams, THETACSetOptionsResponse, THETACSetPluginParams, THETACSetPluginResponse, THETACSetPluginOrdersParams, THETACSetPluginOrdersResponse, THETACStartCaptureParams, THETACStartCaptureResponse, THETACStartSessionResponse, THETACStateApiResponse, THETACStatusApiParams, THETACStopCaptureResponse, THETACStopSelfTimerResponse, THETACTakePictureResponse, THETACKtor_client_coreHttpClient, THETACThetaRepositoryCompanion, THETACThetaRepositoryCaptureModeEnum, THETACThetaRepositoryExif, THETACThetaRepositoryXmp, THETACThetaRepositoryOptions, THETACThetaRepositoryOptionNameEnum, THETACPhotoCaptureBuilder, THETACThetaRepositoryThetaInfo, THETACThetaRepositoryThetaState, THETACTimeShiftCaptureBuilder, THETACVideoCaptureBuilder, THETACThetaRepositoryAccessPoint, THETACThetaRepositoryFileTypeEnum, THETACThetaRepositoryThetaFiles, THETACThetaRepositoryStorageEnum, THETACThetaRepositoryPluginInfo, THETACThetaRepositoryAuthModeEnum, THETACThetaRepositoryProxy, THETACThetaRepositoryThetaModel, THETACAccessPoint, THETACKotlinEnumCompanion, THETACKotlinEnum<E>, THETACThetaRepositoryAiAutoThumbnailEnumCompanion, THETACThetaRepositoryAiAutoThumbnailEnum, THETACAiAutoThumbnail, THETACThetaRepositoryApertureEnumCompanion, THETACThetaRepositoryApertureEnum, THETACKotlinRuntimeException, THETACThetaRepositoryThetaRepositoryException, THETACThetaRepositoryAuthModeEnumCompanion, THETACAuthenticationMode, THETACThetaRepositoryBitrateEnumCompanion, THETACThetaRepositoryBitrateEnum, THETACThetaRepositoryBitrateNumberCompanion, THETACThetaRepositoryBitrateNumber, THETACThetaRepositoryBluetoothPowerEnumCompanion, THETACThetaRepositoryBluetoothPowerEnum, THETACBluetoothPower, THETACThetaRepositoryBurstBracketStepEnumCompanion, THETACThetaRepositoryBurstBracketStepEnum, THETACBurstBracketStep, THETACThetaRepositoryBurstCaptureNumEnumCompanion, THETACThetaRepositoryBurstCaptureNumEnum, THETACBurstCaptureNum, THETACThetaRepositoryBurstCompensationEnumCompanion, THETACThetaRepositoryBurstCompensationEnum, THETACBurstCompensation, THETACThetaRepositoryBurstEnableIsoControlEnumCompanion, THETACThetaRepositoryBurstEnableIsoControlEnum, THETACBurstEnableIsoControl, THETACThetaRepositoryBurstMaxExposureTimeEnumCompanion, THETACThetaRepositoryBurstMaxExposureTimeEnum, THETACBurstMaxExposureTime, THETACThetaRepositoryBurstModeEnumCompanion, THETACThetaRepositoryBurstModeEnum, THETACBurstMode, THETACBurstOption, THETACThetaRepositoryBurstOrderEnum, THETACThetaRepositoryBurstOption, THETACThetaRepositoryBurstOrderEnumCompanion, THETACBurstOrder, THETACThetaRepositoryCameraControlSourceEnumCompanion, THETACThetaRepositoryCameraControlSourceEnum, THETACCameraControlSource, THETACThetaRepositoryCameraErrorEnumCompanion, THETACThetaRepositoryCameraErrorEnum, THETACCameraError, THETACThetaRepositoryCameraModeEnumCompanion, THETACThetaRepositoryCameraModeEnum, THETACCameraMode, THETACThetaRepositoryCaptureModeEnumCompanion, THETACCaptureMode, THETACThetaRepositoryCaptureStatusEnumCompanion, THETACThetaRepositoryCaptureStatusEnum, THETACCaptureStatus, THETACThetaRepositoryChargingStateEnumCompanion, THETACThetaRepositoryChargingStateEnum, THETACChargingState, THETACThetaRepositoryCodecEnumCompanion, THETACThetaRepositoryCodecEnum, THETACThetaRepositoryConfig, THETACThetaRepositoryTimeout, THETACThetaRepository, THETACThetaRepositoryLanguageEnum, THETACDigestAuth, THETACThetaRepositoryContinuousNumberEnumCompanion, THETACThetaRepositoryContinuousNumberEnum, THETACExifInfo, THETACThetaRepositoryExposureCompensationEnumCompanion, THETACThetaRepositoryExposureCompensationEnum, THETACThetaRepositoryExposureDelayEnumCompanion, THETACThetaRepositoryExposureDelayEnum, THETACThetaRepositoryExposureProgramEnumCompanion, THETACThetaRepositoryExposureProgramEnum, THETACThetaRepositoryFileFormatEnumCompanion, THETACThetaRepositoryFileFormatEnum, THETACMediaFileFormat, THETACThetaRepositoryFileFormatTypeEnum, THETACMediaType, THETACCameraFileInfo, THETACThetaRepositoryProjectionTypeEnum, THETACThetaRepositoryFileInfo, THETACFileType, THETACThetaRepositoryFilterEnumCompanion, THETACThetaRepositoryFilterEnum, THETACImageFilter, THETACGpsInfo, THETACThetaRepositoryGpsInfoCompanion, THETACThetaRepositoryGpsInfo, THETACThetaRepositoryGpsTagRecordingEnumCompanion, THETACThetaRepositoryGpsTagRecordingEnum, THETACGpsTagRecording, THETACThetaRepositoryIsoAutoHighLimitEnumCompanion, THETACThetaRepositoryIsoAutoHighLimitEnum, THETACThetaRepositoryIsoEnumCompanion, THETACThetaRepositoryIsoEnum, THETACThetaRepositoryLanguageEnumCompanion, THETACLanguage, THETACThetaRepositoryMaxRecordableTimeEnumCompanion, THETACThetaRepositoryMaxRecordableTimeEnum, THETACThetaRepositoryMicrophoneOptionEnumCompanion, THETACThetaRepositoryMicrophoneOptionEnum, THETACMicrophoneOption, THETACThetaRepositoryNetworkTypeEnumCompanion, THETACThetaRepositoryNetworkTypeEnum, THETACNetworkType, THETACThetaRepositoryOffDelayEnumCompanion, THETACThetaRepositoryOffDelayEnum, THETACOptions, THETACThetaRepositoryPowerSavingEnum, THETACThetaRepositoryPresetEnum, THETACThetaRepositoryPreviewFormatEnum, THETACThetaRepositoryShootingMethodEnum, THETACThetaRepositoryShutterSpeedEnum, THETACThetaRepositoryTimeShiftSetting, THETACThetaRepositoryWhiteBalanceEnum, THETACThetaRepositoryWhiteBalanceAutoStrengthEnum, THETACThetaRepositoryWlanFrequencyEnum, THETACThetaRepositoryPhotoFileFormatEnumCompanion, THETACThetaRepositoryPhotoFileFormatEnum, THETACPlugin, THETACThetaRepositoryPowerSavingEnumCompanion, THETACPowerSaving, THETACThetaRepositoryPresetEnumCompanion, THETACPreset, THETACThetaRepositoryPreviewFormatEnumCompanion, THETACPreviewFormat, THETACThetaRepositoryProjectionTypeEnumCompanion, THETAC_ProjectionType, THETACProxy, THETACThetaRepositoryShootingFunctionEnumCompanion, THETACThetaRepositoryShootingFunctionEnum, THETACShootingFunction, THETACThetaRepositoryShootingMethodEnumCompanion, THETACShootingMethod, THETACThetaRepositoryShutterSpeedEnumCompanion, THETACThetaRepositorySleepDelayEnumCompanion, THETACThetaRepositorySleepDelayEnum, THETACStorage, THETACEndPoint, THETACThetaRepositoryThetaModelCompanion, THETACThetaRepositoryThetaWebApiExceptionCompanion, THETACKtor_client_coreResponseException, THETACThetaRepositoryThetaWebApiException, THETACThetaRepositoryTimeShiftIntervalEnumCompanion, THETACThetaRepositoryTimeShiftIntervalEnum, THETACTimeShift, THETACThetaRepositoryVideoFileFormatEnumCompanion, THETACThetaRepositoryVideoFileFormatEnum, THETACThetaRepositoryWhiteBalanceAutoStrengthEnumCompanion, THETACWhiteBalanceAutoStrength, THETACThetaRepositoryWhiteBalanceEnumCompanion, THETACWhiteBalance, THETACThetaRepositoryWlanFrequencyEnumCompanion, THETACWlanFrequency, THETACXmpInfo, THETACCapture, THETACCaptureBuilder<T>, THETACPhotoCapture, THETACTimeShiftCapturing, THETACTimeShiftCaptureBuilderCompanion, THETACTimeShiftCapture, THETACCapturing, THETACVideoCapturing, THETACVideoCapture, THETACIpAddressAllocation, THETACAccessPointCompanion, THETACAiAutoThumbnailCompanion, THETACAuthenticationModeCompanion, THETACBluetoothPowerCompanion, THETACBurstBracketStepCompanion, THETACBurstBracketStepSerializer, THETACBurstCaptureNumCompanion, THETACBurstCaptureNumSerializer, THETACBurstCompensationCompanion, THETACBurstCompensationSerializer, THETACBurstEnableIsoControlCompanion, THETACBurstEnableIsoControlSerializer, THETACBurstMaxExposureTimeCompanion, THETACBurstMaxExposureTimeSerializer, THETACBurstModeCompanion, THETACBurstOptionCompanion, THETACBurstOrderCompanion, THETACBurstOrderSerializer, THETACCameraControlSourceCompanion, THETACCameraErrorCompanion, THETACCameraFileInfoCompanion, THETACCameraModeCompanion, THETACStorageOption, THETACCameraStateCompanion, THETACCameraState, THETACEmptyParameter, THETACCancelVideoConvertRequestCompanion, THETACCancelVideoConvertRequest, THETACCommandError, THETACCommandProgress, THETACCommandState, THETACKotlinx_serialization_jsonJsonElement, THETACCancelVideoConvertResponseCompanion, THETACCaptureIntervalSupportCompanion, THETACCaptureIntervalSupport, THETACCaptureModeCompanion, THETACCaptureNumberSupportCompanion, THETACCaptureNumberSupport, THETACCaptureStatusCompanion, THETACChargingStateCompanion, THETACCommandApi, THETACKtor_httpHttpMethod, THETACCommandErrorCompanion, THETACCommandProgressCompanion, THETACCommandStateCompanion, THETACVideoFormat, THETACTopBottomCorrection, THETACConvertVideoFormatsParamsCompanion, THETACConvertVideoFormatsRequestCompanion, THETACConvertVideoFormatsRequest, THETACResultConvertVideoFormats, THETACConvertVideoFormatsResponseCompanion, THETACDeleteAccessPointParamsCompanion, THETACDeleteAccessPointRequestCompanion, THETACDeleteAccessPointRequest, THETACDeleteAccessPointResponseCompanion, THETACDeleteMySettingParamsCompanion, THETACDeleteMySettingRequestCompanion, THETACDeleteMySettingRequest, THETACDeleteMySettingResponseCompanion, THETACDeleteParamsCompanion, THETACDeleteRequestCompanion, THETACDeleteRequest, THETACDeleteResponseCompanion, THETACEmptyParameterCompanion, THETACEndPointCompanion, THETACExifInfoCompanion, THETACFileTypeCompanion, THETACFinishWlanRequestCompanion, THETACFinishWlanRequest, THETACFinishWlanResponseCompanion, THETACFirstShootingEnumCompanion, THETACFirstShootingEnum, THETACGetLivePreviewRequestCompanion, THETACGetLivePreviewRequest, THETACGetMetadataParamsCompanion, THETACGetMetadataRequestCompanion, THETACGetMetadataRequest, THETACResultGetMetadata, THETACGetMetadataResponseCompanion, THETACGetMySettingParamsCompanion, THETACGetMySettingRequestCompanion, THETACGetMySettingRequest, THETACResultGetMySetting, THETACGetMySettingResponseCompanion, THETACGetOptionsParamsCompanion, THETACGetOptionsRequestCompanion, THETACGetOptionsRequest, THETACResultGetOptions, THETACGetOptionsResponseCompanion, THETACGetPluginLicenseParamsCompanion, THETACGetPluginLicenseRequestCompanion, THETACGetPluginLicenseRequest, THETACGetPluginOrdersRequestCompanion, THETACGetPluginOrdersRequest, THETACResultGetPluginOrders, THETACGetPluginOrdersResponseCompanion, THETACGpsInfoCompanion, THETACGpsTagRecordingCompanion, THETACImageFilterCompanion, THETACImageStitchingCompanion, THETACImageStitching, THETACInfoApi, THETACInfoApiResponseCompanion, THETACIpAddressAllocationCompanion, THETACLanguageCompanion, THETACListAccessPointsRequestCompanion, THETACListAccessPointsRequest, THETACResultListAccessPoints, THETACListAccessPointsResponseCompanion, THETACSortOrder, THETACListFilesParamsCompanion, THETACListFilesRequestCompanion, THETACListFilesRequest, THETACResultListFiles, THETACListFilesResponseCompanion, THETACListPluginsRequestCompanion, THETACListPluginsRequest, THETACResultListPlugins, THETACListPluginsResponseCompanion, THETACMediaFileFormatCompanion, THETACMediaTypeCompanion, THETACMicrophoneChannelCompanion, THETACMicrophoneChannel, THETACMicrophoneOptionCompanion, THETACNetworkTypeCompanion, THETACNumberAsIntSerializer, THETACNumberAsLongSerializer, THETACNumbersAsIntsSerializer, THETACNumbersAsLongsSerializer, THETACShutterVolumeSupport, THETACTopBottomCorrectionOption, THETACVideoStitching, THETACVisibilityReduction, THETACOptionsCompanion, THETACPluginCompanion, THETACPluginControlParamsCompanion, THETACPluginControlRequestCompanion, THETACPluginControlRequest, THETACPluginControlResponseCompanion, THETACPowerSavingCompanion, THETACPresetCompanion, THETACPreviewFormatCompanion, THETACProjectionTypeCompanion, THETACProjectionType, THETACProxyCompanion, THETACResetRequestCompanion, THETACResetRequest, THETACResetResponseCompanion, THETACResultConvertVideoFormatsCompanion, THETACResultGetMetadataCompanion, THETACResultGetMySettingCompanion, THETACResultGetOptionsCompanion, THETACResultGetPluginOrdersCompanion, THETACResultListAccessPointsCompanion, THETACResultListFilesCompanion, THETACResultListPluginsCompanion, THETACResultSetBluetoothDeviceCompanion, THETACResultSetBluetoothDevice, THETACResultSetOptionsCompanion, THETACResultSetOptions, THETACResultStartCaptureCompanion, THETACResultStartCapture, THETACResultStartSessionCompanion, THETACResultStartSession, THETACResultStopCaptureCompanion, THETACResultStopCapture, THETACResultTakePictureCompanion, THETACResultTakePicture, THETACSetAccessPointParamsCompanion, THETACSetAccessPointRequestCompanion, THETACSetAccessPointRequest, THETACSetAccessPointResponseCompanion, THETACSetBluetoothDeviceParamsCompanion, THETACSetBluetoothDeviceRequestCompanion, THETACSetBluetoothDeviceRequest, THETACSetBluetoothDeviceResponseCompanion, THETACSetMySettingParamsCompanion, THETACSetMySettingRequestCompanion, THETACSetMySettingRequest, THETACSetMySettingResponseCompanion, THETACSetOptionsParamsCompanion, THETACSetOptionsRequestCompanion, THETACSetOptionsRequest, THETACSetOptionsResponseCompanion, THETACSetPluginOrdersParamsCompanion, THETACSetPluginOrdersRequestCompanion, THETACSetPluginOrdersRequest, THETACSetPluginOrdersResponseCompanion, THETACSetPluginParamsCompanion, THETACSetPluginRequestCompanion, THETACSetPluginRequest, THETACSetPluginResponseCompanion, THETACShootingFunctionCompanion, THETACShootingMethodCompanion, THETACShootingModeCompanion, THETACShootingMode, THETACShutterVolumeSupportCompanion, THETACSortOrderCompanion, THETACStartCaptureParamsCompanion, THETACStartCaptureRequestCompanion, THETACStartCaptureRequest, THETACStartCaptureResponseCompanion, THETACStartSessionRequestCompanion, THETACStartSessionRequest, THETACStartSessionResponseCompanion, THETACStateApi, THETACStateApiResponseCompanion, THETACStatusApi, THETACStatusApiRequestCompanion, THETACStatusApiRequest, THETACStopCaptureRequestCompanion, THETACStopCaptureRequest, THETACStopCaptureResponseCompanion, THETACStopSelfTimerRequestCompanion, THETACStopSelfTimerRequest, THETACStopSelfTimerResponseCompanion, THETACStorageCompanion, THETACStorageOptionCompanion, THETACTakePictureRequestCompanion, THETACTakePictureRequest, THETACTakePictureResponseCompanion, THETACTimeShiftCompanion, THETACTopBottomCorrectionCompanion, THETACTopBottomCorrectionOptionCompanion, THETACUnknownResponseCompanion, THETACUnknownResponse, THETACVideoFormatCompanion, THETACVideoStitchingCompanion, THETACVisibilityReductionCompanion, THETACWhiteBalanceCompanion, THETACWhiteBalanceAutoStrengthCompanion, THETACWlanFrequencyCompanion, THETACWlanFrequencySerializer, THETACXmpInfoCompanion, THETAC_ProjectionTypeCompanion, NSData, NSMutableData, THETACKtor_ioMemory, THETACKtor_ioChunkBuffer, THETACKtor_ioBuffer, THETACKotlinIllegalStateException, THETACKtor_ioInputCompanion, THETACKtor_ioInput, THETACKtor_ioByteReadPacketCompanion, THETACKotlinRegexOption, THETACKotlinRegexCompanion, THETACKotlinCharArray, THETACKotlinByteIterator, THETACKtor_client_coreHttpClientCall, THETACKtor_utilsGMTDate, THETACKtor_httpHttpStatusCode, THETACKtor_httpHttpProtocolVersion, THETACKtor_client_coreHttpClientEngineConfig, THETACKtor_client_coreHttpClientConfig<T>, THETACKtor_eventsEvents, THETACKtor_client_coreHttpReceivePipeline, THETACKtor_client_coreHttpRequestPipeline, THETACKtor_client_coreHttpResponsePipeline, THETACKtor_client_coreHttpSendPipeline, THETACKotlinx_serialization_coreSerializersModule, THETACKotlinx_serialization_coreSerialKind, THETACKotlinNothing, THETACKotlinx_serialization_jsonJsonElementCompanion, THETACKtor_httpHttpMethodCompanion, THETACKtor_ioMemoryCompanion, THETACKtor_ioBufferCompanion, THETACKtor_ioChunkBufferCompanion, THETACKotlinMatchResultDestructured, THETACKotlinIntRange, THETACKotlinCharIterator, THETACKtor_client_coreHttpRequestData, THETACKtor_client_coreHttpResponseData, THETACKtor_client_coreHttpClientCallCompanion, THETACKtor_utilsTypeInfo, THETACKtor_utilsGMTDateCompanion, THETACKtor_utilsWeekDay, THETACKtor_utilsMonth, THETACKtor_httpHttpStatusCodeCompanion, THETACKtor_httpHttpProtocolVersionCompanion, THETACKotlinx_coroutines_coreCoroutineDispatcher, THETACKtor_client_coreProxyConfig, THETACKtor_utilsAttributeKey<T>, THETACKtor_eventsEventDefinition<T>, THETACKtor_utilsPipelinePhase, THETACKtor_utilsPipeline<TSubject, TContext>, THETACKtor_client_coreHttpReceivePipelinePhases, THETACKotlinUnit, THETACKtor_client_coreHttpRequestPipelinePhases, THETACKtor_client_coreHttpRequestBuilder, THETACKtor_client_coreHttpResponsePipelinePhases, THETACKtor_client_coreHttpResponseContainer, THETACKtor_client_coreHttpSendPipelinePhases, THETACKotlinMatchGroup, THETACKotlinIntProgressionCompanion, THETACKotlinIntIterator, THETACKotlinIntProgression, THETACKotlinIntRangeCompanion, THETACKtor_httpUrl, THETACKtor_httpOutgoingContent, THETACKtor_utilsWeekDayCompanion, THETACKtor_utilsMonthCompanion, THETACKotlinAbstractCoroutineContextElement, THETACKotlinx_coroutines_coreCoroutineDispatcherKey, THETACKtor_httpHeadersBuilder, THETACKtor_client_coreHttpRequestBuilderCompanion, THETACKtor_httpURLBuilder, THETACKtor_httpUrlCompanion, THETACKtor_httpURLProtocol, THETACKtor_httpContentType, THETACKotlinCancellationException, THETACKotlinKTypeProjection, THETACKotlinAbstractCoroutineContextKey<B, E>, THETACKtor_utilsStringValuesBuilderImpl, THETACKtor_httpURLBuilderCompanion, THETACKtor_httpURLProtocolCompanion, THETACKtor_httpHeaderValueParam, THETACKtor_httpHeaderValueWithParametersCompanion, THETACKtor_httpHeaderValueWithParameters, THETACKtor_httpContentTypeCompanion, THETACKotlinKVariance, THETACKotlinKTypeProjectionCompanion, THETACKotlinx_coroutines_coreAtomicDesc, THETACKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp, THETACKotlinx_coroutines_coreAtomicOp<__contravariant T>, THETACKotlinx_coroutines_coreOpDescriptor, THETACKotlinx_coroutines_coreLockFreeLinkedListNode, THETACKotlinx_coroutines_coreLockFreeLinkedListNodeAbstractAtomicDesc, THETACKotlinx_coroutines_coreLockFreeLinkedListNodeAddLastDesc<T>, THETACKotlinx_coroutines_coreLockFreeLinkedListNodeRemoveFirstDesc<T>;

@protocol THETACKtor_httpHeaders, THETACKtor_ioByteReadChannel, THETACPreviewClient, THETACKotlinx_coroutines_coreFlow, THETACKotlinSuspendFunction1, THETACCommandApiResponse, THETACKotlinComparable, THETACThetaRepositoryBitrate, THETACThetaRepositoryOffDelay, THETACThetaRepositorySleepDelay, THETACKotlinKClass, THETACPhotoCaptureTakePictureCallback, THETACTimeShiftCaptureStartCaptureCallback, THETACVideoCaptureStartCaptureCallback, THETACKotlinx_serialization_coreKSerializer, THETACKotlinx_serialization_coreEncoder, THETACKotlinx_serialization_coreSerialDescriptor, THETACKotlinx_serialization_coreSerializationStrategy, THETACKotlinx_serialization_coreDecoder, THETACKotlinx_serialization_coreDeserializationStrategy, THETACCommandApiRequest, THETACKotlinMapEntry, THETACKtor_utilsStringValues, THETACKtor_ioReadSession, THETACKotlinAppendable, THETACKtor_ioCloseable, THETACKtor_ioObjectPool, THETACKotlinMatchResult, THETACKotlinSequence, THETACKotlinCharSequence, THETACKotlinIterator, THETACKotlinx_coroutines_coreFlowCollector, THETACKotlinFunction, THETACKtor_httpHttpMessage, THETACKotlinCoroutineContext, THETACKotlinx_coroutines_coreCoroutineScope, THETACKtor_client_coreHttpClientEngine, THETACKtor_client_coreHttpClientEngineCapability, THETACKtor_utilsAttributes, THETACKotlinKDeclarationContainer, THETACKotlinKAnnotatedElement, THETACKotlinKClassifier, THETACKotlinx_serialization_coreCompositeEncoder, THETACKotlinAnnotation, THETACKotlinx_serialization_coreCompositeDecoder, THETACKotlinMatchGroupCollection, THETACKotlinCoroutineContextElement, THETACKotlinCoroutineContextKey, THETACKtor_client_coreHttpRequest, THETACKtor_client_coreHttpClientPlugin, THETACKotlinx_coroutines_coreDisposableHandle, THETACKotlinSuspendFunction2, THETACKotlinx_serialization_coreSerializersModuleCollector, THETACKotlinIterable, THETACKotlinCollection, THETACKotlinClosedRange, THETACKotlinOpenEndRange, THETACKotlinx_coroutines_coreJob, THETACKotlinKType, THETACKotlinContinuation, THETACKotlinContinuationInterceptor, THETACKotlinx_coroutines_coreRunnable, THETACKtor_httpHttpMessageBuilder, THETACKtor_httpParameters, THETACKotlinx_coroutines_coreChildHandle, THETACKotlinx_coroutines_coreChildJob, THETACKotlinx_coroutines_coreSelectClause0, THETACKtor_utilsStringValuesBuilder, THETACKtor_httpParametersBuilder, THETACKotlinx_coroutines_coreParentJob, THETACKotlinx_coroutines_coreSelectInstance, THETACKotlinSuspendFunction0;

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wincompatible-property-type"
#pragma clang diagnostic ignored "-Wnullability"

#pragma push_macro("_Nullable_result")
#if !__has_feature(nullability_nullable_result)
#undef _Nullable_result
#define _Nullable_result _Nullable
#endif

__attribute__((swift_name("KotlinBase")))
@interface THETACBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end

@interface THETACBase (THETACBaseCopying) <NSCopying>
@end

__attribute__((swift_name("KotlinMutableSet")))
@interface THETACMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end

__attribute__((swift_name("KotlinMutableDictionary")))
@interface THETACMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end

@interface NSError (NSErrorTHETACKotlinException)
@property (readonly) id _Nullable kotlinException;
@end

__attribute__((swift_name("KotlinNumber")))
@interface THETACNumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end

__attribute__((swift_name("KotlinByte")))
@interface THETACByte : THETACNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end

__attribute__((swift_name("KotlinUByte")))
@interface THETACUByte : THETACNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end

__attribute__((swift_name("KotlinShort")))
@interface THETACShort : THETACNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end

__attribute__((swift_name("KotlinUShort")))
@interface THETACUShort : THETACNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end

__attribute__((swift_name("KotlinInt")))
@interface THETACInt : THETACNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end

__attribute__((swift_name("KotlinUInt")))
@interface THETACUInt : THETACNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end

__attribute__((swift_name("KotlinLong")))
@interface THETACLong : THETACNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end

__attribute__((swift_name("KotlinULong")))
@interface THETACULong : THETACNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end

__attribute__((swift_name("KotlinFloat")))
@interface THETACFloat : THETACNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end

__attribute__((swift_name("KotlinDouble")))
@interface THETACDouble : THETACNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end

__attribute__((swift_name("KotlinBoolean")))
@interface THETACBoolean : THETACNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DigestAuth")))
@interface THETACDigestAuth : THETACBase
- (instancetype)initWithUsername:(NSString *)username __attribute__((swift_name("init(username:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithUsername:(NSString *)username password:(NSString * _Nullable)password __attribute__((swift_name("init(username:password:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) THETACDigestAuthCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)makeDigestHeaderUri:(NSString *)uri method:(NSString *)method __attribute__((swift_name("makeDigestHeader(uri:method:)")));
- (void)setAuthHeaderInfoRealm:(NSString * _Nullable)realm nonce:(NSString * _Nullable)nonce qop:(NSString *)qop __attribute__((swift_name("setAuthHeaderInfo(realm:nonce:qop:)")));
@property (readonly) NSString *password __attribute__((swift_name("password")));
@property (readonly) NSString *username __attribute__((swift_name("username")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DigestAuth.Companion")))
@interface THETACDigestAuthCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACDigestAuthCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Greeting")))
@interface THETACGreeting : THETACBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSString *)greeting __attribute__((swift_name("greeting()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MultipartReader")))
@interface THETACMultipartReader : THETACBase
- (instancetype)initWithHeaders:(id<THETACKtor_httpHeaders>)headers readChannel:(id<THETACKtor_ioByteReadChannel>)readChannel __attribute__((swift_name("init(headers:readChannel:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)nextPartWithCompletionHandler:(void (^)(THETACKtor_ioByteReadPacket * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("nextPart(completionHandler:)")));
@property (readonly) int32_t BUFFER_SIZE __attribute__((swift_name("BUFFER_SIZE")));
@property NSString * _Nullable boundary __attribute__((swift_name("boundary")));
@property THETACKotlinRegex *contentLengthRegex __attribute__((swift_name("contentLengthRegex")));
@property (readonly) THETACKotlinStringBuilder *lineBuffer __attribute__((swift_name("lineBuffer")));
@property (readonly) id<THETACKtor_ioByteReadChannel> readChannel __attribute__((swift_name("readChannel")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Platform")))
@interface THETACPlatform : THETACBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (readonly) NSString *platform __attribute__((swift_name("platform")));
@end

__attribute__((swift_name("PreviewClient")))
@protocol THETACPreviewClient
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)closeWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("close(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)hasNextPartWithCompletionHandler:(void (^)(THETACBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("hasNextPart(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)nextPartWithCompletionHandler:(void (^)(THETACKotlinPair<THETACKotlinByteArray *, THETACInt *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("nextPart(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)requestEndpoint:(NSString *)endpoint method:(NSString *)method path:(NSString *)path body:(NSString *)body contentType:(NSString *)contentType completionHandler:(void (^)(id<THETACPreviewClient> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("request(endpoint:method:path:body:contentType:completionHandler:)")));
@end

__attribute__((swift_name("KotlinThrowable")))
@interface THETACKotlinThrowable : THETACBase
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(THETACKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(THETACKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (THETACKotlinArray<NSString *> *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) THETACKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
- (NSError *)asError __attribute__((swift_name("asError()")));
@end

__attribute__((swift_name("KotlinException")))
@interface THETACKotlinException : THETACKotlinThrowable
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(THETACKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(THETACKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PreviewClientException")))
@interface THETACPreviewClientException : THETACKotlinException
- (instancetype)initWithMsg:(NSString *)msg cause:(THETACKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(msg:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(THETACKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithCause:(THETACKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PreviewClientImpl")))
@interface THETACPreviewClientImpl : THETACBase <THETACPreviewClient>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) THETACPreviewClientImplCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)closeWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("close(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)hasNextPartWithCompletionHandler:(void (^)(THETACBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("hasNextPart(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)nextPartWithCompletionHandler:(void (^)(THETACKotlinPair<THETACKotlinByteArray *, THETACInt *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("nextPart(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)requestEndpoint:(NSString *)endpoint method:(NSString *)method path:(NSString *)path body:(NSString *)body contentType:(NSString *)contentType completionHandler:(void (^)(id<THETACPreviewClient> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("request(endpoint:method:path:body:contentType:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)responseWithCompletionHandler:(void (^)(THETACKotlinPair<THETACKotlinByteArray *, THETACInt *> * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("response(completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PreviewClientImpl.Companion")))
@interface THETACPreviewClientImplCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACPreviewClientImplCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) THETACKotlinByteArray *buffer __attribute__((swift_name("buffer")));
@property (readonly) int64_t connectionTimeout __attribute__((swift_name("connectionTimeout")));
@property (readonly) THETACKotlinByteArray *lineBuffer __attribute__((swift_name("lineBuffer")));
@property THETACKotlinByteArray *parts __attribute__((swift_name("parts")));
@property (readonly) int64_t socketTimeout __attribute__((swift_name("socketTimeout")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PreviewClientImpl.URL")))
@interface THETACPreviewClientImplURL : THETACBase
- (instancetype)initWithUrl:(NSString *)url __attribute__((swift_name("init(url:)"))) __attribute__((objc_designated_initializer));
@property NSString *host __attribute__((swift_name("host")));
@property NSString *path __attribute__((swift_name("path")));
@property int32_t port __attribute__((swift_name("port")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaApi")))
@interface THETACThetaApi : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)thetaApi __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACThetaApi *shared __attribute__((swift_name("shared")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (void)callCancelVideoConvertCommandEndpoint:(NSString *)endpoint completionHandler:(void (^)(THETACCancelVideoConvertResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("callCancelVideoConvertCommand(endpoint:completionHandler:)")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (void)callConvertVideoFormatsCommandEndpoint:(NSString *)endpoint params:(THETACConvertVideoFormatsParams *)params completionHandler:(void (^)(THETACConvertVideoFormatsResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("callConvertVideoFormatsCommand(endpoint:params:completionHandler:)")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (void)callDeleteAccessPointCommandEndpoint:(NSString *)endpoint params:(THETACDeleteAccessPointParams *)params completionHandler:(void (^)(THETACDeleteAccessPointResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("callDeleteAccessPointCommand(endpoint:params:completionHandler:)")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (void)callDeleteCommandEndpoint:(NSString *)endpoint params:(THETACDeleteParams *)params completionHandler:(void (^)(THETACDeleteResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("callDeleteCommand(endpoint:params:completionHandler:)")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (void)callDeleteMySettingCommandEndpoint:(NSString *)endpoint params:(THETACDeleteMySettingParams *)params completionHandler:(void (^)(THETACDeleteMySettingResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("callDeleteMySettingCommand(endpoint:params:completionHandler:)")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (void)callFinishWlanCommandEndpoint:(NSString *)endpoint completionHandler:(void (^)(THETACFinishWlanResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("callFinishWlanCommand(endpoint:completionHandler:)")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (id<THETACKotlinx_coroutines_coreFlow> _Nullable)callGetLivePreviewCommandEndpoint:(NSString *)endpoint error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("callGetLivePreviewCommand(endpoint:)")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (void)callGetLivePreviewCommandEndpoint:(NSString *)endpoint frameHandler:(id<THETACKotlinSuspendFunction1>)frameHandler completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("callGetLivePreviewCommand(endpoint:frameHandler:completionHandler:)")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (void)callGetMetadataCommandEndpoint:(NSString *)endpoint params:(THETACGetMetadataParams *)params completionHandler:(void (^)(THETACGetMetadataResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("callGetMetadataCommand(endpoint:params:completionHandler:)")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (void)callGetMySettingCommandEndpoint:(NSString *)endpoint params:(THETACGetMySettingParams *)params completionHandler:(void (^)(THETACGetMySettingResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("callGetMySettingCommand(endpoint:params:completionHandler:)")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (void)callGetOptionsCommandEndpoint:(NSString *)endpoint params:(THETACGetOptionsParams *)params completionHandler:(void (^)(THETACGetOptionsResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("callGetOptionsCommand(endpoint:params:completionHandler:)")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (void)callGetPluginLicenseCommandEndpoint:(NSString *)endpoint params:(THETACGetPluginLicenseParams *)params completionHandler:(void (^)(THETACKtor_client_coreHttpResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("callGetPluginLicenseCommand(endpoint:params:completionHandler:)")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (void)callGetPluginOrdersCommandEndpoint:(NSString *)endpoint completionHandler:(void (^)(THETACGetPluginOrdersResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("callGetPluginOrdersCommand(endpoint:completionHandler:)")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (void)callInfoApiEndpoint:(NSString *)endpoint completionHandler:(void (^)(THETACInfoApiResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("callInfoApi(endpoint:completionHandler:)")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (void)callListAccessPointsCommandEndpoint:(NSString *)endpoint completionHandler:(void (^)(THETACListAccessPointsResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("callListAccessPointsCommand(endpoint:completionHandler:)")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (void)callListFilesCommandEndpoint:(NSString *)endpoint params:(THETACListFilesParams *)params completionHandler:(void (^)(THETACListFilesResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("callListFilesCommand(endpoint:params:completionHandler:)")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (void)callListPluginsCommandEndpoint:(NSString *)endpoint completionHandler:(void (^)(THETACListPluginsResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("callListPluginsCommand(endpoint:completionHandler:)")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (void)callPluginControlCommandEndpoint:(NSString *)endpoint params:(THETACPluginControlParams *)params completionHandler:(void (^)(THETACPluginControlResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("callPluginControlCommand(endpoint:params:completionHandler:)")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (void)callResetCommandEndpoint:(NSString *)endpoint completionHandler:(void (^)(THETACResetResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("callResetCommand(endpoint:completionHandler:)")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (void)callSetAccessPointCommandEndpoint:(NSString *)endpoint params:(THETACSetAccessPointParams *)params completionHandler:(void (^)(THETACSetAccessPointResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("callSetAccessPointCommand(endpoint:params:completionHandler:)")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (void)callSetBluetoothDeviceCommandEndpoint:(NSString *)endpoint params:(THETACSetBluetoothDeviceParams *)params completionHandler:(void (^)(THETACSetBluetoothDeviceResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("callSetBluetoothDeviceCommand(endpoint:params:completionHandler:)")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (void)callSetMySettingCommandEndpoint:(NSString *)endpoint params:(THETACSetMySettingParams *)params completionHandler:(void (^)(THETACSetMySettingResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("callSetMySettingCommand(endpoint:params:completionHandler:)")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (void)callSetOptionsCommandEndpoint:(NSString *)endpoint params:(THETACSetOptionsParams *)params completionHandler:(void (^)(THETACSetOptionsResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("callSetOptionsCommand(endpoint:params:completionHandler:)")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (void)callSetPluginCommandEndpoint:(NSString *)endpoint params:(THETACSetPluginParams *)params completionHandler:(void (^)(THETACSetPluginResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("callSetPluginCommand(endpoint:params:completionHandler:)")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (void)callSetPluginOrdersCommandEndpoint:(NSString *)endpoint params:(THETACSetPluginOrdersParams *)params completionHandler:(void (^)(THETACSetPluginOrdersResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("callSetPluginOrdersCommand(endpoint:params:completionHandler:)")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (void)callStartCaptureCommandEndpoint:(NSString *)endpoint params:(THETACStartCaptureParams *)params completionHandler:(void (^)(THETACStartCaptureResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("callStartCaptureCommand(endpoint:params:completionHandler:)")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (void)callStartSessionCommandEndpoint:(NSString *)endpoint completionHandler:(void (^)(THETACStartSessionResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("callStartSessionCommand(endpoint:completionHandler:)")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (void)callStateApiEndpoint:(NSString *)endpoint completionHandler:(void (^)(THETACStateApiResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("callStateApi(endpoint:completionHandler:)")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (void)callStatusApiEndpoint:(NSString *)endpoint params:(THETACStatusApiParams *)params completionHandler:(void (^)(id<THETACCommandApiResponse> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("callStatusApi(endpoint:params:completionHandler:)")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (void)callStopCaptureCommandEndpoint:(NSString *)endpoint completionHandler:(void (^)(THETACStopCaptureResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("callStopCaptureCommand(endpoint:completionHandler:)")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (void)callStopSelfTimerCommandEndpoint:(NSString *)endpoint completionHandler:(void (^)(THETACStopSelfTimerResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("callStopSelfTimerCommand(endpoint:completionHandler:)")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (void)callTakePictureCommandEndpoint:(NSString *)endpoint completionHandler:(void (^)(THETACTakePictureResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("callTakePictureCommand(endpoint:completionHandler:)")));
@property (readonly) THETACKtor_client_coreHttpClient *httpClient __attribute__((swift_name("httpClient")));
@property (readonly) id<THETACPreviewClient> previewClient __attribute__((swift_name("previewClient")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository")))
@interface THETACThetaRepository : THETACBase
@property (class, readonly, getter=companion) THETACThetaRepositoryCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (void)cancelVideoConvertWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("cancelVideoConvert(completionHandler:)")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (void)convertVideoFormatsFileUrl:(NSString *)fileUrl toLowResolution:(BOOL)toLowResolution applyTopBottomCorrection:(BOOL)applyTopBottomCorrection completionHandler:(void (^)(NSString * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("convertVideoFormats(fileUrl:toLowResolution:applyTopBottomCorrection:completionHandler:)")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (void)deleteAccessPointSsid:(NSString *)ssid completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("deleteAccessPoint(ssid:completionHandler:)")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (void)deleteAllFilesWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("deleteAllFiles(completionHandler:)")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (void)deleteAllImageFilesWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("deleteAllImageFiles(completionHandler:)")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (void)deleteAllVideoFilesWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("deleteAllVideoFiles(completionHandler:)")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (void)deleteFilesFileUrls:(NSArray<NSString *> *)fileUrls completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("deleteFiles(fileUrls:completionHandler:)")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (void)deleteMySettingCaptureMode:(THETACThetaRepositoryCaptureModeEnum *)captureMode completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("deleteMySetting(captureMode:completionHandler:)")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (void)finishWlanWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("finishWlan(completionHandler:)")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (id<THETACKotlinx_coroutines_coreFlow> _Nullable)getLivePreviewAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("getLivePreview()")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (void)getLivePreviewFrameHandler:(id<THETACKotlinSuspendFunction1>)frameHandler completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("getLivePreview(frameHandler:completionHandler:)")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (void)getMetadataFileUrl:(NSString *)fileUrl completionHandler:(void (^)(THETACKotlinPair<THETACThetaRepositoryExif *, THETACThetaRepositoryXmp *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getMetadata(fileUrl:completionHandler:)")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (void)getMySettingCaptureMode:(THETACThetaRepositoryCaptureModeEnum *)captureMode completionHandler:(void (^)(THETACThetaRepositoryOptions * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getMySetting(captureMode:completionHandler:)")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (void)getMySettingOptionNames:(NSArray<THETACThetaRepositoryOptionNameEnum *> *)optionNames completionHandler:(void (^)(THETACThetaRepositoryOptions * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getMySetting(optionNames:completionHandler:)")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (void)getOptionsOptionNames:(NSArray<THETACThetaRepositoryOptionNameEnum *> *)optionNames completionHandler:(void (^)(THETACThetaRepositoryOptions * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getOptions(optionNames:completionHandler:)")));
- (THETACPhotoCaptureBuilder *)getPhotoCaptureBuilder __attribute__((swift_name("getPhotoCaptureBuilder()")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (void)getPluginLicensePackageName:(NSString *)packageName completionHandler:(void (^)(NSString * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getPluginLicense(packageName:completionHandler:)")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (void)getPluginOrdersWithCompletionHandler:(void (^)(NSArray<NSString *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getPluginOrders(completionHandler:)")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (void)getThetaInfoWithCompletionHandler:(void (^)(THETACThetaRepositoryThetaInfo * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getThetaInfo(completionHandler:)")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (void)getThetaStateWithCompletionHandler:(void (^)(THETACThetaRepositoryThetaState * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getThetaState(completionHandler:)")));
- (THETACTimeShiftCaptureBuilder *)getTimeShiftCaptureBuilder __attribute__((swift_name("getTimeShiftCaptureBuilder()")));
- (THETACVideoCaptureBuilder *)getVideoCaptureBuilder __attribute__((swift_name("getVideoCaptureBuilder()")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (void)listAccessPointsWithCompletionHandler:(void (^)(NSArray<THETACThetaRepositoryAccessPoint *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("listAccessPoints(completionHandler:)")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (void)listFilesFileType:(THETACThetaRepositoryFileTypeEnum *)fileType startPosition:(int32_t)startPosition entryCount:(int32_t)entryCount completionHandler:(void (^)(THETACThetaRepositoryThetaFiles * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("listFiles(fileType:startPosition:entryCount:completionHandler:)")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (void)listFilesFileType:(THETACThetaRepositoryFileTypeEnum *)fileType startPosition:(int32_t)startPosition entryCount:(int32_t)entryCount storage:(THETACThetaRepositoryStorageEnum * _Nullable)storage completionHandler:(void (^)(THETACThetaRepositoryThetaFiles * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("listFiles(fileType:startPosition:entryCount:storage:completionHandler:)")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (void)listPluginsWithCompletionHandler:(void (^)(NSArray<THETACThetaRepositoryPluginInfo *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("listPlugins(completionHandler:)")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (void)resetWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("reset(completionHandler:)")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (void)restoreSettingsWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("restoreSettings(completionHandler:)")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (void)setAccessPointDynamicallySsid:(NSString *)ssid ssidStealth:(BOOL)ssidStealth authMode:(THETACThetaRepositoryAuthModeEnum *)authMode password:(NSString *)password connectionPriority:(int32_t)connectionPriority proxy:(THETACThetaRepositoryProxy * _Nullable)proxy completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("setAccessPointDynamically(ssid:ssidStealth:authMode:password:connectionPriority:proxy:completionHandler:)")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (void)setAccessPointStaticallySsid:(NSString *)ssid ssidStealth:(BOOL)ssidStealth authMode:(THETACThetaRepositoryAuthModeEnum *)authMode password:(NSString * _Nullable)password connectionPriority:(int32_t)connectionPriority ipAddress:(NSString *)ipAddress subnetMask:(NSString *)subnetMask defaultGateway:(NSString *)defaultGateway proxy:(THETACThetaRepositoryProxy * _Nullable)proxy completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("setAccessPointStatically(ssid:ssidStealth:authMode:password:connectionPriority:ipAddress:subnetMask:defaultGateway:proxy:completionHandler:)")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (void)setBluetoothDeviceUuid:(NSString *)uuid completionHandler:(void (^)(NSString * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("setBluetoothDevice(uuid:completionHandler:)")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (void)setMySettingCaptureMode:(THETACThetaRepositoryCaptureModeEnum *)captureMode options:(THETACThetaRepositoryOptions *)options completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("setMySetting(captureMode:options:completionHandler:)")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (void)setOptionsOptions:(THETACThetaRepositoryOptions *)options completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("setOptions(options:completionHandler:)")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (void)setPluginPackageName:(NSString *)packageName completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("setPlugin(packageName:completionHandler:)")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (void)setPluginOrdersPlugins:(NSArray<NSString *> *)plugins completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("setPluginOrders(plugins:completionHandler:)")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (void)startPluginPackageName:(NSString * _Nullable)packageName completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("startPlugin(packageName:completionHandler:)")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (void)stopPluginWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("stopPlugin(completionHandler:)")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (void)stopSelfTimerWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("stopSelfTimer(completionHandler:)")));
@property (readonly) THETACThetaRepositoryThetaModel * _Nullable cameraModel __attribute__((swift_name("cameraModel")));
@property (readonly) NSString *endpoint __attribute__((swift_name("endpoint")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.AccessPoint")))
@interface THETACThetaRepositoryAccessPoint : THETACBase
- (instancetype)initWithAccessPoint:(THETACAccessPoint *)accessPoint __attribute__((swift_name("init(accessPoint:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithSsid:(NSString *)ssid ssidStealth:(BOOL)ssidStealth authMode:(THETACThetaRepositoryAuthModeEnum *)authMode connectionPriority:(int32_t)connectionPriority usingDhcp:(BOOL)usingDhcp ipAddress:(NSString * _Nullable)ipAddress subnetMask:(NSString * _Nullable)subnetMask defaultGateway:(NSString * _Nullable)defaultGateway proxy:(THETACThetaRepositoryProxy * _Nullable)proxy __attribute__((swift_name("init(ssid:ssidStealth:authMode:connectionPriority:usingDhcp:ipAddress:subnetMask:defaultGateway:proxy:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (BOOL)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACThetaRepositoryAuthModeEnum *)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (int32_t)component4 __attribute__((swift_name("component4()"))) __attribute__((deprecated("use corresponding property instead")));
- (BOOL)component5 __attribute__((swift_name("component5()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component6 __attribute__((swift_name("component6()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component7 __attribute__((swift_name("component7()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component8 __attribute__((swift_name("component8()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACThetaRepositoryProxy * _Nullable)component9 __attribute__((swift_name("component9()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACThetaRepositoryAccessPoint *)doCopySsid:(NSString *)ssid ssidStealth:(BOOL)ssidStealth authMode:(THETACThetaRepositoryAuthModeEnum *)authMode connectionPriority:(int32_t)connectionPriority usingDhcp:(BOOL)usingDhcp ipAddress:(NSString * _Nullable)ipAddress subnetMask:(NSString * _Nullable)subnetMask defaultGateway:(NSString * _Nullable)defaultGateway proxy:(THETACThetaRepositoryProxy * _Nullable)proxy __attribute__((swift_name("doCopy(ssid:ssidStealth:authMode:connectionPriority:usingDhcp:ipAddress:subnetMask:defaultGateway:proxy:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) THETACThetaRepositoryAuthModeEnum *authMode __attribute__((swift_name("authMode")));
@property (readonly) int32_t connectionPriority __attribute__((swift_name("connectionPriority")));
@property (readonly) NSString * _Nullable defaultGateway __attribute__((swift_name("defaultGateway")));
@property (readonly) NSString * _Nullable ipAddress __attribute__((swift_name("ipAddress")));
@property (readonly) THETACThetaRepositoryProxy * _Nullable proxy __attribute__((swift_name("proxy")));
@property (readonly) NSString *ssid __attribute__((swift_name("ssid")));
@property (readonly) BOOL ssidStealth __attribute__((swift_name("ssidStealth")));
@property (readonly) NSString * _Nullable subnetMask __attribute__((swift_name("subnetMask")));
@property (readonly) BOOL usingDhcp __attribute__((swift_name("usingDhcp")));
@end

__attribute__((swift_name("KotlinComparable")))
@protocol THETACKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end

__attribute__((swift_name("KotlinEnum")))
@interface THETACKotlinEnum<E> : THETACBase <THETACKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) THETACKotlinEnumCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(E)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.AiAutoThumbnailEnum")))
@interface THETACThetaRepositoryAiAutoThumbnailEnum : THETACKotlinEnum<THETACThetaRepositoryAiAutoThumbnailEnum *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) THETACThetaRepositoryAiAutoThumbnailEnumCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) THETACThetaRepositoryAiAutoThumbnailEnum *on __attribute__((swift_name("on")));
@property (class, readonly) THETACThetaRepositoryAiAutoThumbnailEnum *off __attribute__((swift_name("off")));
+ (THETACKotlinArray<THETACThetaRepositoryAiAutoThumbnailEnum *> *)values __attribute__((swift_name("values()")));
@property (readonly) THETACAiAutoThumbnail *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.AiAutoThumbnailEnumCompanion")))
@interface THETACThetaRepositoryAiAutoThumbnailEnumCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACThetaRepositoryAiAutoThumbnailEnumCompanion *shared __attribute__((swift_name("shared")));
- (THETACThetaRepositoryAiAutoThumbnailEnum * _Nullable)getValue:(THETACAiAutoThumbnail *)value __attribute__((swift_name("get(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.ApertureEnum")))
@interface THETACThetaRepositoryApertureEnum : THETACKotlinEnum<THETACThetaRepositoryApertureEnum *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) THETACThetaRepositoryApertureEnumCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) THETACThetaRepositoryApertureEnum *apertureAuto __attribute__((swift_name("apertureAuto")));
@property (class, readonly) THETACThetaRepositoryApertureEnum *aperture20 __attribute__((swift_name("aperture20")));
@property (class, readonly) THETACThetaRepositoryApertureEnum *aperture21 __attribute__((swift_name("aperture21")));
@property (class, readonly) THETACThetaRepositoryApertureEnum *aperture24 __attribute__((swift_name("aperture24")));
@property (class, readonly) THETACThetaRepositoryApertureEnum *aperture35 __attribute__((swift_name("aperture35")));
@property (class, readonly) THETACThetaRepositoryApertureEnum *aperture56 __attribute__((swift_name("aperture56")));
+ (THETACKotlinArray<THETACThetaRepositoryApertureEnum *> *)values __attribute__((swift_name("values()")));
@property (readonly) float value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.ApertureEnumCompanion")))
@interface THETACThetaRepositoryApertureEnumCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACThetaRepositoryApertureEnumCompanion *shared __attribute__((swift_name("shared")));
- (THETACThetaRepositoryApertureEnum * _Nullable)getValue:(float)value __attribute__((swift_name("get(value:)")));
@end

__attribute__((swift_name("KotlinRuntimeException")))
@interface THETACKotlinRuntimeException : THETACKotlinException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(THETACKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(THETACKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("ThetaRepository.ThetaRepositoryException")))
@interface THETACThetaRepositoryThetaRepositoryException : THETACKotlinRuntimeException
- (instancetype)initWithMessage:(NSString *)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(THETACKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithCause:(THETACKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.ArgumentException")))
@interface THETACThetaRepositoryArgumentException : THETACThetaRepositoryThetaRepositoryException
- (instancetype)initWithMessage:(NSString *)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.AuthModeEnum")))
@interface THETACThetaRepositoryAuthModeEnum : THETACKotlinEnum<THETACThetaRepositoryAuthModeEnum *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) THETACThetaRepositoryAuthModeEnumCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) THETACThetaRepositoryAuthModeEnum *none __attribute__((swift_name("none")));
@property (class, readonly) THETACThetaRepositoryAuthModeEnum *wep __attribute__((swift_name("wep")));
@property (class, readonly) THETACThetaRepositoryAuthModeEnum *wpa __attribute__((swift_name("wpa")));
+ (THETACKotlinArray<THETACThetaRepositoryAuthModeEnum *> *)values __attribute__((swift_name("values()")));
@property (readonly) THETACAuthenticationMode *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.AuthModeEnumCompanion")))
@interface THETACThetaRepositoryAuthModeEnumCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACThetaRepositoryAuthModeEnumCompanion *shared __attribute__((swift_name("shared")));
- (THETACThetaRepositoryAuthModeEnum * _Nullable)getValue:(THETACAuthenticationMode *)value __attribute__((swift_name("get(value:)")));
@end

__attribute__((swift_name("ThetaRepositoryBitrate")))
@protocol THETACThetaRepositoryBitrate
@required
@property (readonly) NSString *rawValue __attribute__((swift_name("rawValue")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.BitrateEnum")))
@interface THETACThetaRepositoryBitrateEnum : THETACKotlinEnum<THETACThetaRepositoryBitrateEnum *> <THETACThetaRepositoryBitrate>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) THETACThetaRepositoryBitrateEnumCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) THETACThetaRepositoryBitrateEnum *auto_ __attribute__((swift_name("auto_")));
@property (class, readonly) THETACThetaRepositoryBitrateEnum *fine __attribute__((swift_name("fine")));
@property (class, readonly) THETACThetaRepositoryBitrateEnum *normal __attribute__((swift_name("normal")));
@property (class, readonly) THETACThetaRepositoryBitrateEnum *economy __attribute__((swift_name("economy")));
+ (THETACKotlinArray<THETACThetaRepositoryBitrateEnum *> *)values __attribute__((swift_name("values()")));
@property (readonly) NSString *rawValue __attribute__((swift_name("rawValue")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.BitrateEnumCompanion")))
@interface THETACThetaRepositoryBitrateEnumCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACThetaRepositoryBitrateEnumCompanion *shared __attribute__((swift_name("shared")));
- (id<THETACThetaRepositoryBitrate> _Nullable)getStr:(NSString *)str __attribute__((swift_name("get(str:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.BitrateNumber")))
@interface THETACThetaRepositoryBitrateNumber : THETACBase <THETACThetaRepositoryBitrate>
- (instancetype)initWithValue:(int32_t)value __attribute__((swift_name("init(value:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) THETACThetaRepositoryBitrateNumberCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
@property (readonly) NSString *rawValue __attribute__((swift_name("rawValue")));
@property (readonly) int32_t value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.BitrateNumberCompanion")))
@interface THETACThetaRepositoryBitrateNumberCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACThetaRepositoryBitrateNumberCompanion *shared __attribute__((swift_name("shared")));
- (THETACThetaRepositoryBitrateNumber * _Nullable)getStr:(NSString *)str __attribute__((swift_name("get(str:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.BluetoothPowerEnum")))
@interface THETACThetaRepositoryBluetoothPowerEnum : THETACKotlinEnum<THETACThetaRepositoryBluetoothPowerEnum *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) THETACThetaRepositoryBluetoothPowerEnumCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) THETACThetaRepositoryBluetoothPowerEnum *on __attribute__((swift_name("on")));
@property (class, readonly) THETACThetaRepositoryBluetoothPowerEnum *off __attribute__((swift_name("off")));
+ (THETACKotlinArray<THETACThetaRepositoryBluetoothPowerEnum *> *)values __attribute__((swift_name("values()")));
@property (readonly) THETACBluetoothPower *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.BluetoothPowerEnumCompanion")))
@interface THETACThetaRepositoryBluetoothPowerEnumCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACThetaRepositoryBluetoothPowerEnumCompanion *shared __attribute__((swift_name("shared")));
- (THETACThetaRepositoryBluetoothPowerEnum * _Nullable)getValue:(THETACBluetoothPower *)value __attribute__((swift_name("get(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.BurstBracketStepEnum")))
@interface THETACThetaRepositoryBurstBracketStepEnum : THETACKotlinEnum<THETACThetaRepositoryBurstBracketStepEnum *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) THETACThetaRepositoryBurstBracketStepEnumCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) THETACThetaRepositoryBurstBracketStepEnum *bracketStep00 __attribute__((swift_name("bracketStep00")));
@property (class, readonly) THETACThetaRepositoryBurstBracketStepEnum *bracketStep03 __attribute__((swift_name("bracketStep03")));
@property (class, readonly) THETACThetaRepositoryBurstBracketStepEnum *bracketStep07 __attribute__((swift_name("bracketStep07")));
@property (class, readonly) THETACThetaRepositoryBurstBracketStepEnum *bracketStep10 __attribute__((swift_name("bracketStep10")));
@property (class, readonly) THETACThetaRepositoryBurstBracketStepEnum *bracketStep13 __attribute__((swift_name("bracketStep13")));
@property (class, readonly) THETACThetaRepositoryBurstBracketStepEnum *bracketStep17 __attribute__((swift_name("bracketStep17")));
@property (class, readonly) THETACThetaRepositoryBurstBracketStepEnum *bracketStep20 __attribute__((swift_name("bracketStep20")));
@property (class, readonly) THETACThetaRepositoryBurstBracketStepEnum *bracketStep23 __attribute__((swift_name("bracketStep23")));
@property (class, readonly) THETACThetaRepositoryBurstBracketStepEnum *bracketStep27 __attribute__((swift_name("bracketStep27")));
@property (class, readonly) THETACThetaRepositoryBurstBracketStepEnum *bracketStep30 __attribute__((swift_name("bracketStep30")));
+ (THETACKotlinArray<THETACThetaRepositoryBurstBracketStepEnum *> *)values __attribute__((swift_name("values()")));
@property (readonly) THETACBurstBracketStep *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.BurstBracketStepEnumCompanion")))
@interface THETACThetaRepositoryBurstBracketStepEnumCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACThetaRepositoryBurstBracketStepEnumCompanion *shared __attribute__((swift_name("shared")));
- (THETACThetaRepositoryBurstBracketStepEnum * _Nullable)getValue:(THETACBurstBracketStep *)value __attribute__((swift_name("get(value:)")));
- (THETACThetaRepositoryBurstBracketStepEnum * _Nullable)getValue_:(float)value __attribute__((swift_name("get(value_:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.BurstCaptureNumEnum")))
@interface THETACThetaRepositoryBurstCaptureNumEnum : THETACKotlinEnum<THETACThetaRepositoryBurstCaptureNumEnum *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) THETACThetaRepositoryBurstCaptureNumEnumCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) THETACThetaRepositoryBurstCaptureNumEnum *burstCaptureNum1 __attribute__((swift_name("burstCaptureNum1")));
@property (class, readonly) THETACThetaRepositoryBurstCaptureNumEnum *burstCaptureNum3 __attribute__((swift_name("burstCaptureNum3")));
@property (class, readonly) THETACThetaRepositoryBurstCaptureNumEnum *burstCaptureNum5 __attribute__((swift_name("burstCaptureNum5")));
@property (class, readonly) THETACThetaRepositoryBurstCaptureNumEnum *burstCaptureNum7 __attribute__((swift_name("burstCaptureNum7")));
@property (class, readonly) THETACThetaRepositoryBurstCaptureNumEnum *burstCaptureNum9 __attribute__((swift_name("burstCaptureNum9")));
+ (THETACKotlinArray<THETACThetaRepositoryBurstCaptureNumEnum *> *)values __attribute__((swift_name("values()")));
@property (readonly) THETACBurstCaptureNum *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.BurstCaptureNumEnumCompanion")))
@interface THETACThetaRepositoryBurstCaptureNumEnumCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACThetaRepositoryBurstCaptureNumEnumCompanion *shared __attribute__((swift_name("shared")));
- (THETACThetaRepositoryBurstCaptureNumEnum * _Nullable)getValue:(THETACBurstCaptureNum *)value __attribute__((swift_name("get(value:)")));
- (THETACThetaRepositoryBurstCaptureNumEnum * _Nullable)getValue_:(int32_t)value __attribute__((swift_name("get(value_:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.BurstCompensationEnum")))
@interface THETACThetaRepositoryBurstCompensationEnum : THETACKotlinEnum<THETACThetaRepositoryBurstCompensationEnum *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) THETACThetaRepositoryBurstCompensationEnumCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) THETACThetaRepositoryBurstCompensationEnum *burstCompensationDown50 __attribute__((swift_name("burstCompensationDown50")));
@property (class, readonly) THETACThetaRepositoryBurstCompensationEnum *burstCompensationDown47 __attribute__((swift_name("burstCompensationDown47")));
@property (class, readonly) THETACThetaRepositoryBurstCompensationEnum *burstCompensationDown43 __attribute__((swift_name("burstCompensationDown43")));
@property (class, readonly) THETACThetaRepositoryBurstCompensationEnum *burstCompensationDown40 __attribute__((swift_name("burstCompensationDown40")));
@property (class, readonly) THETACThetaRepositoryBurstCompensationEnum *burstCompensationDown37 __attribute__((swift_name("burstCompensationDown37")));
@property (class, readonly) THETACThetaRepositoryBurstCompensationEnum *burstCompensationDown33 __attribute__((swift_name("burstCompensationDown33")));
@property (class, readonly) THETACThetaRepositoryBurstCompensationEnum *burstCompensationDown30 __attribute__((swift_name("burstCompensationDown30")));
@property (class, readonly) THETACThetaRepositoryBurstCompensationEnum *burstCompensationDown27 __attribute__((swift_name("burstCompensationDown27")));
@property (class, readonly) THETACThetaRepositoryBurstCompensationEnum *burstCompensationDown23 __attribute__((swift_name("burstCompensationDown23")));
@property (class, readonly) THETACThetaRepositoryBurstCompensationEnum *burstCompensationDown20 __attribute__((swift_name("burstCompensationDown20")));
@property (class, readonly) THETACThetaRepositoryBurstCompensationEnum *burstCompensationDown17 __attribute__((swift_name("burstCompensationDown17")));
@property (class, readonly) THETACThetaRepositoryBurstCompensationEnum *burstCompensationDown13 __attribute__((swift_name("burstCompensationDown13")));
@property (class, readonly) THETACThetaRepositoryBurstCompensationEnum *burstCompensationDown10 __attribute__((swift_name("burstCompensationDown10")));
@property (class, readonly) THETACThetaRepositoryBurstCompensationEnum *burstCompensationDown07 __attribute__((swift_name("burstCompensationDown07")));
@property (class, readonly) THETACThetaRepositoryBurstCompensationEnum *burstCompensationDown03 __attribute__((swift_name("burstCompensationDown03")));
@property (class, readonly) THETACThetaRepositoryBurstCompensationEnum *burstCompensation00 __attribute__((swift_name("burstCompensation00")));
@property (class, readonly) THETACThetaRepositoryBurstCompensationEnum *burstCompensationUp03 __attribute__((swift_name("burstCompensationUp03")));
@property (class, readonly) THETACThetaRepositoryBurstCompensationEnum *burstCompensationUp07 __attribute__((swift_name("burstCompensationUp07")));
@property (class, readonly) THETACThetaRepositoryBurstCompensationEnum *burstCompensationUp10 __attribute__((swift_name("burstCompensationUp10")));
@property (class, readonly) THETACThetaRepositoryBurstCompensationEnum *burstCompensationUp13 __attribute__((swift_name("burstCompensationUp13")));
@property (class, readonly) THETACThetaRepositoryBurstCompensationEnum *burstCompensationUp17 __attribute__((swift_name("burstCompensationUp17")));
@property (class, readonly) THETACThetaRepositoryBurstCompensationEnum *burstCompensationUp20 __attribute__((swift_name("burstCompensationUp20")));
@property (class, readonly) THETACThetaRepositoryBurstCompensationEnum *burstCompensationUp23 __attribute__((swift_name("burstCompensationUp23")));
@property (class, readonly) THETACThetaRepositoryBurstCompensationEnum *burstCompensationUp27 __attribute__((swift_name("burstCompensationUp27")));
@property (class, readonly) THETACThetaRepositoryBurstCompensationEnum *burstCompensationUp30 __attribute__((swift_name("burstCompensationUp30")));
@property (class, readonly) THETACThetaRepositoryBurstCompensationEnum *burstCompensationUp33 __attribute__((swift_name("burstCompensationUp33")));
@property (class, readonly) THETACThetaRepositoryBurstCompensationEnum *burstCompensationUp37 __attribute__((swift_name("burstCompensationUp37")));
@property (class, readonly) THETACThetaRepositoryBurstCompensationEnum *burstCompensationUp40 __attribute__((swift_name("burstCompensationUp40")));
@property (class, readonly) THETACThetaRepositoryBurstCompensationEnum *burstCompensationUp43 __attribute__((swift_name("burstCompensationUp43")));
@property (class, readonly) THETACThetaRepositoryBurstCompensationEnum *burstCompensationUp47 __attribute__((swift_name("burstCompensationUp47")));
@property (class, readonly) THETACThetaRepositoryBurstCompensationEnum *burstCompensationUp50 __attribute__((swift_name("burstCompensationUp50")));
+ (THETACKotlinArray<THETACThetaRepositoryBurstCompensationEnum *> *)values __attribute__((swift_name("values()")));
@property (readonly) THETACBurstCompensation *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.BurstCompensationEnumCompanion")))
@interface THETACThetaRepositoryBurstCompensationEnumCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACThetaRepositoryBurstCompensationEnumCompanion *shared __attribute__((swift_name("shared")));
- (THETACThetaRepositoryBurstCompensationEnum * _Nullable)getValue:(THETACBurstCompensation *)value __attribute__((swift_name("get(value:)")));
- (THETACThetaRepositoryBurstCompensationEnum * _Nullable)getValue_:(float)value __attribute__((swift_name("get(value_:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.BurstEnableIsoControlEnum")))
@interface THETACThetaRepositoryBurstEnableIsoControlEnum : THETACKotlinEnum<THETACThetaRepositoryBurstEnableIsoControlEnum *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) THETACThetaRepositoryBurstEnableIsoControlEnumCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) THETACThetaRepositoryBurstEnableIsoControlEnum *off __attribute__((swift_name("off")));
@property (class, readonly) THETACThetaRepositoryBurstEnableIsoControlEnum *on __attribute__((swift_name("on")));
+ (THETACKotlinArray<THETACThetaRepositoryBurstEnableIsoControlEnum *> *)values __attribute__((swift_name("values()")));
@property (readonly) THETACBurstEnableIsoControl *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.BurstEnableIsoControlEnumCompanion")))
@interface THETACThetaRepositoryBurstEnableIsoControlEnumCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACThetaRepositoryBurstEnableIsoControlEnumCompanion *shared __attribute__((swift_name("shared")));
- (THETACThetaRepositoryBurstEnableIsoControlEnum * _Nullable)getValue:(THETACBurstEnableIsoControl *)value __attribute__((swift_name("get(value:)")));
- (THETACThetaRepositoryBurstEnableIsoControlEnum * _Nullable)getValue_:(int32_t)value __attribute__((swift_name("get(value_:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.BurstMaxExposureTimeEnum")))
@interface THETACThetaRepositoryBurstMaxExposureTimeEnum : THETACKotlinEnum<THETACThetaRepositoryBurstMaxExposureTimeEnum *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) THETACThetaRepositoryBurstMaxExposureTimeEnumCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) THETACThetaRepositoryBurstMaxExposureTimeEnum *maxExposureTime05 __attribute__((swift_name("maxExposureTime05")));
@property (class, readonly) THETACThetaRepositoryBurstMaxExposureTimeEnum *maxExposureTime0625 __attribute__((swift_name("maxExposureTime0625")));
@property (class, readonly) THETACThetaRepositoryBurstMaxExposureTimeEnum *maxExposureTime076923076 __attribute__((swift_name("maxExposureTime076923076")));
@property (class, readonly) THETACThetaRepositoryBurstMaxExposureTimeEnum *maxExposureTime1 __attribute__((swift_name("maxExposureTime1")));
@property (class, readonly) THETACThetaRepositoryBurstMaxExposureTimeEnum *maxExposureTime13 __attribute__((swift_name("maxExposureTime13")));
@property (class, readonly) THETACThetaRepositoryBurstMaxExposureTimeEnum *maxExposureTime16 __attribute__((swift_name("maxExposureTime16")));
@property (class, readonly) THETACThetaRepositoryBurstMaxExposureTimeEnum *maxExposureTime2 __attribute__((swift_name("maxExposureTime2")));
@property (class, readonly) THETACThetaRepositoryBurstMaxExposureTimeEnum *maxExposureTime25 __attribute__((swift_name("maxExposureTime25")));
@property (class, readonly) THETACThetaRepositoryBurstMaxExposureTimeEnum *maxExposureTime32 __attribute__((swift_name("maxExposureTime32")));
@property (class, readonly) THETACThetaRepositoryBurstMaxExposureTimeEnum *maxExposureTime4 __attribute__((swift_name("maxExposureTime4")));
@property (class, readonly) THETACThetaRepositoryBurstMaxExposureTimeEnum *maxExposureTime5 __attribute__((swift_name("maxExposureTime5")));
@property (class, readonly) THETACThetaRepositoryBurstMaxExposureTimeEnum *maxExposureTime6 __attribute__((swift_name("maxExposureTime6")));
@property (class, readonly) THETACThetaRepositoryBurstMaxExposureTimeEnum *maxExposureTime8 __attribute__((swift_name("maxExposureTime8")));
@property (class, readonly) THETACThetaRepositoryBurstMaxExposureTimeEnum *maxExposureTime10 __attribute__((swift_name("maxExposureTime10")));
@property (class, readonly) THETACThetaRepositoryBurstMaxExposureTimeEnum *maxExposureTime13_ __attribute__((swift_name("maxExposureTime13_")));
@property (class, readonly) THETACThetaRepositoryBurstMaxExposureTimeEnum *maxExposureTime15 __attribute__((swift_name("maxExposureTime15")));
@property (class, readonly) THETACThetaRepositoryBurstMaxExposureTimeEnum *maxExposureTime20 __attribute__((swift_name("maxExposureTime20")));
@property (class, readonly) THETACThetaRepositoryBurstMaxExposureTimeEnum *maxExposureTime25_ __attribute__((swift_name("maxExposureTime25_")));
@property (class, readonly) THETACThetaRepositoryBurstMaxExposureTimeEnum *maxExposureTime30 __attribute__((swift_name("maxExposureTime30")));
@property (class, readonly) THETACThetaRepositoryBurstMaxExposureTimeEnum *maxExposureTime40 __attribute__((swift_name("maxExposureTime40")));
@property (class, readonly) THETACThetaRepositoryBurstMaxExposureTimeEnum *maxExposureTime50 __attribute__((swift_name("maxExposureTime50")));
@property (class, readonly) THETACThetaRepositoryBurstMaxExposureTimeEnum *maxExposureTime60 __attribute__((swift_name("maxExposureTime60")));
+ (THETACKotlinArray<THETACThetaRepositoryBurstMaxExposureTimeEnum *> *)values __attribute__((swift_name("values()")));
@property (readonly) THETACBurstMaxExposureTime *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.BurstMaxExposureTimeEnumCompanion")))
@interface THETACThetaRepositoryBurstMaxExposureTimeEnumCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACThetaRepositoryBurstMaxExposureTimeEnumCompanion *shared __attribute__((swift_name("shared")));
- (THETACThetaRepositoryBurstMaxExposureTimeEnum * _Nullable)getValue:(THETACBurstMaxExposureTime *)value __attribute__((swift_name("get(value:)")));
- (THETACThetaRepositoryBurstMaxExposureTimeEnum * _Nullable)getValue_:(double)value __attribute__((swift_name("get(value_:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.BurstModeEnum")))
@interface THETACThetaRepositoryBurstModeEnum : THETACKotlinEnum<THETACThetaRepositoryBurstModeEnum *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) THETACThetaRepositoryBurstModeEnumCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) THETACThetaRepositoryBurstModeEnum *on __attribute__((swift_name("on")));
@property (class, readonly) THETACThetaRepositoryBurstModeEnum *off __attribute__((swift_name("off")));
+ (THETACKotlinArray<THETACThetaRepositoryBurstModeEnum *> *)values __attribute__((swift_name("values()")));
@property (readonly) THETACBurstMode *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.BurstModeEnumCompanion")))
@interface THETACThetaRepositoryBurstModeEnumCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACThetaRepositoryBurstModeEnumCompanion *shared __attribute__((swift_name("shared")));
- (THETACThetaRepositoryBurstModeEnum * _Nullable)getValue:(THETACBurstMode *)value __attribute__((swift_name("get(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.BurstOption")))
@interface THETACThetaRepositoryBurstOption : THETACBase
- (instancetype)initWithOption:(THETACBurstOption *)option __attribute__((swift_name("init(option:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithBurstCaptureNum:(THETACThetaRepositoryBurstCaptureNumEnum * _Nullable)burstCaptureNum burstBracketStep:(THETACThetaRepositoryBurstBracketStepEnum * _Nullable)burstBracketStep burstCompensation:(THETACThetaRepositoryBurstCompensationEnum * _Nullable)burstCompensation burstMaxExposureTime:(THETACThetaRepositoryBurstMaxExposureTimeEnum * _Nullable)burstMaxExposureTime burstEnableIsoControl:(THETACThetaRepositoryBurstEnableIsoControlEnum * _Nullable)burstEnableIsoControl burstOrder:(THETACThetaRepositoryBurstOrderEnum * _Nullable)burstOrder __attribute__((swift_name("init(burstCaptureNum:burstBracketStep:burstCompensation:burstMaxExposureTime:burstEnableIsoControl:burstOrder:)"))) __attribute__((objc_designated_initializer));
- (THETACThetaRepositoryBurstCaptureNumEnum * _Nullable)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACThetaRepositoryBurstBracketStepEnum * _Nullable)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACThetaRepositoryBurstCompensationEnum * _Nullable)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACThetaRepositoryBurstMaxExposureTimeEnum * _Nullable)component4 __attribute__((swift_name("component4()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACThetaRepositoryBurstEnableIsoControlEnum * _Nullable)component5 __attribute__((swift_name("component5()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACThetaRepositoryBurstOrderEnum * _Nullable)component6 __attribute__((swift_name("component6()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACThetaRepositoryBurstOption *)doCopyBurstCaptureNum:(THETACThetaRepositoryBurstCaptureNumEnum * _Nullable)burstCaptureNum burstBracketStep:(THETACThetaRepositoryBurstBracketStepEnum * _Nullable)burstBracketStep burstCompensation:(THETACThetaRepositoryBurstCompensationEnum * _Nullable)burstCompensation burstMaxExposureTime:(THETACThetaRepositoryBurstMaxExposureTimeEnum * _Nullable)burstMaxExposureTime burstEnableIsoControl:(THETACThetaRepositoryBurstEnableIsoControlEnum * _Nullable)burstEnableIsoControl burstOrder:(THETACThetaRepositoryBurstOrderEnum * _Nullable)burstOrder __attribute__((swift_name("doCopy(burstCaptureNum:burstBracketStep:burstCompensation:burstMaxExposureTime:burstEnableIsoControl:burstOrder:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
- (THETACBurstOption *)toTransferredBurstOption __attribute__((swift_name("toTransferredBurstOption()")));
@property (readonly) THETACThetaRepositoryBurstBracketStepEnum * _Nullable burstBracketStep __attribute__((swift_name("burstBracketStep")));
@property (readonly) THETACThetaRepositoryBurstCaptureNumEnum * _Nullable burstCaptureNum __attribute__((swift_name("burstCaptureNum")));
@property (readonly) THETACThetaRepositoryBurstCompensationEnum * _Nullable burstCompensation __attribute__((swift_name("burstCompensation")));
@property (readonly) THETACThetaRepositoryBurstEnableIsoControlEnum * _Nullable burstEnableIsoControl __attribute__((swift_name("burstEnableIsoControl")));
@property (readonly) THETACThetaRepositoryBurstMaxExposureTimeEnum * _Nullable burstMaxExposureTime __attribute__((swift_name("burstMaxExposureTime")));
@property (readonly) THETACThetaRepositoryBurstOrderEnum * _Nullable burstOrder __attribute__((swift_name("burstOrder")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.BurstOrderEnum")))
@interface THETACThetaRepositoryBurstOrderEnum : THETACKotlinEnum<THETACThetaRepositoryBurstOrderEnum *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) THETACThetaRepositoryBurstOrderEnumCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) THETACThetaRepositoryBurstOrderEnum *burstBracketOrder0 __attribute__((swift_name("burstBracketOrder0")));
@property (class, readonly) THETACThetaRepositoryBurstOrderEnum *burstBracketOrder1 __attribute__((swift_name("burstBracketOrder1")));
+ (THETACKotlinArray<THETACThetaRepositoryBurstOrderEnum *> *)values __attribute__((swift_name("values()")));
@property (readonly) THETACBurstOrder *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.BurstOrderEnumCompanion")))
@interface THETACThetaRepositoryBurstOrderEnumCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACThetaRepositoryBurstOrderEnumCompanion *shared __attribute__((swift_name("shared")));
- (THETACThetaRepositoryBurstOrderEnum * _Nullable)getValue:(THETACBurstOrder *)value __attribute__((swift_name("get(value:)")));
- (THETACThetaRepositoryBurstOrderEnum * _Nullable)getValue_:(int32_t)value __attribute__((swift_name("get(value_:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.CameraControlSourceEnum")))
@interface THETACThetaRepositoryCameraControlSourceEnum : THETACKotlinEnum<THETACThetaRepositoryCameraControlSourceEnum *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) THETACThetaRepositoryCameraControlSourceEnumCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) THETACThetaRepositoryCameraControlSourceEnum *camera __attribute__((swift_name("camera")));
@property (class, readonly) THETACThetaRepositoryCameraControlSourceEnum *app __attribute__((swift_name("app")));
+ (THETACKotlinArray<THETACThetaRepositoryCameraControlSourceEnum *> *)values __attribute__((swift_name("values()")));
@property (readonly) THETACCameraControlSource *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.CameraControlSourceEnumCompanion")))
@interface THETACThetaRepositoryCameraControlSourceEnumCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACThetaRepositoryCameraControlSourceEnumCompanion *shared __attribute__((swift_name("shared")));
- (THETACThetaRepositoryCameraControlSourceEnum * _Nullable)getValue:(THETACCameraControlSource *)value __attribute__((swift_name("get(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.CameraErrorEnum")))
@interface THETACThetaRepositoryCameraErrorEnum : THETACKotlinEnum<THETACThetaRepositoryCameraErrorEnum *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) THETACThetaRepositoryCameraErrorEnumCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) THETACThetaRepositoryCameraErrorEnum *noMemory __attribute__((swift_name("noMemory")));
@property (class, readonly) THETACThetaRepositoryCameraErrorEnum *fileNumberOver __attribute__((swift_name("fileNumberOver")));
@property (class, readonly) THETACThetaRepositoryCameraErrorEnum *noDateSetting __attribute__((swift_name("noDateSetting")));
@property (class, readonly) THETACThetaRepositoryCameraErrorEnum *readError __attribute__((swift_name("readError")));
@property (class, readonly) THETACThetaRepositoryCameraErrorEnum *notSupportedMediaType __attribute__((swift_name("notSupportedMediaType")));
@property (class, readonly) THETACThetaRepositoryCameraErrorEnum *notSupportedFileSystem __attribute__((swift_name("notSupportedFileSystem")));
@property (class, readonly) THETACThetaRepositoryCameraErrorEnum *mediaNotReady __attribute__((swift_name("mediaNotReady")));
@property (class, readonly) THETACThetaRepositoryCameraErrorEnum *notEnoughBattery __attribute__((swift_name("notEnoughBattery")));
@property (class, readonly) THETACThetaRepositoryCameraErrorEnum *invalidFile __attribute__((swift_name("invalidFile")));
@property (class, readonly) THETACThetaRepositoryCameraErrorEnum *pluginBootError __attribute__((swift_name("pluginBootError")));
@property (class, readonly) THETACThetaRepositoryCameraErrorEnum *inProgressError __attribute__((swift_name("inProgressError")));
@property (class, readonly) THETACThetaRepositoryCameraErrorEnum *cannotRecording __attribute__((swift_name("cannotRecording")));
@property (class, readonly) THETACThetaRepositoryCameraErrorEnum *cannotRecordLowbat __attribute__((swift_name("cannotRecordLowbat")));
@property (class, readonly) THETACThetaRepositoryCameraErrorEnum *captureHwFailed __attribute__((swift_name("captureHwFailed")));
@property (class, readonly) THETACThetaRepositoryCameraErrorEnum *captureSwFailed __attribute__((swift_name("captureSwFailed")));
@property (class, readonly) THETACThetaRepositoryCameraErrorEnum *internalMemAccessFail __attribute__((swift_name("internalMemAccessFail")));
@property (class, readonly) THETACThetaRepositoryCameraErrorEnum *unexpectedError __attribute__((swift_name("unexpectedError")));
@property (class, readonly) THETACThetaRepositoryCameraErrorEnum *batteryChargeFail __attribute__((swift_name("batteryChargeFail")));
@property (class, readonly) THETACThetaRepositoryCameraErrorEnum *highTemperatureWarning __attribute__((swift_name("highTemperatureWarning")));
@property (class, readonly) THETACThetaRepositoryCameraErrorEnum *highTemperature __attribute__((swift_name("highTemperature")));
@property (class, readonly) THETACThetaRepositoryCameraErrorEnum *batteryHighTemperature __attribute__((swift_name("batteryHighTemperature")));
@property (class, readonly) THETACThetaRepositoryCameraErrorEnum *compassCalibration __attribute__((swift_name("compassCalibration")));
+ (THETACKotlinArray<THETACThetaRepositoryCameraErrorEnum *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.CameraErrorEnumCompanion")))
@interface THETACThetaRepositoryCameraErrorEnumCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACThetaRepositoryCameraErrorEnumCompanion *shared __attribute__((swift_name("shared")));
- (THETACThetaRepositoryCameraErrorEnum *)getCameraError:(THETACCameraError *)cameraError __attribute__((swift_name("get(cameraError:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.CameraModeEnum")))
@interface THETACThetaRepositoryCameraModeEnum : THETACKotlinEnum<THETACThetaRepositoryCameraModeEnum *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) THETACThetaRepositoryCameraModeEnumCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) THETACThetaRepositoryCameraModeEnum *capture __attribute__((swift_name("capture")));
@property (class, readonly) THETACThetaRepositoryCameraModeEnum *playback __attribute__((swift_name("playback")));
@property (class, readonly) THETACThetaRepositoryCameraModeEnum *setting __attribute__((swift_name("setting")));
@property (class, readonly) THETACThetaRepositoryCameraModeEnum *plugin __attribute__((swift_name("plugin")));
+ (THETACKotlinArray<THETACThetaRepositoryCameraModeEnum *> *)values __attribute__((swift_name("values()")));
@property (readonly) THETACCameraMode *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.CameraModeEnumCompanion")))
@interface THETACThetaRepositoryCameraModeEnumCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACThetaRepositoryCameraModeEnumCompanion *shared __attribute__((swift_name("shared")));
- (THETACThetaRepositoryCameraModeEnum * _Nullable)getValue:(THETACCameraMode *)value __attribute__((swift_name("get(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.CaptureModeEnum")))
@interface THETACThetaRepositoryCaptureModeEnum : THETACKotlinEnum<THETACThetaRepositoryCaptureModeEnum *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) THETACThetaRepositoryCaptureModeEnumCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) THETACThetaRepositoryCaptureModeEnum *image __attribute__((swift_name("image")));
@property (class, readonly) THETACThetaRepositoryCaptureModeEnum *video __attribute__((swift_name("video")));
@property (class, readonly) THETACThetaRepositoryCaptureModeEnum *liveStreaming __attribute__((swift_name("liveStreaming")));
@property (class, readonly) THETACThetaRepositoryCaptureModeEnum *interval __attribute__((swift_name("interval")));
@property (class, readonly) THETACThetaRepositoryCaptureModeEnum *preset __attribute__((swift_name("preset")));
+ (THETACKotlinArray<THETACThetaRepositoryCaptureModeEnum *> *)values __attribute__((swift_name("values()")));
@property (readonly) THETACCaptureMode *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.CaptureModeEnumCompanion")))
@interface THETACThetaRepositoryCaptureModeEnumCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACThetaRepositoryCaptureModeEnumCompanion *shared __attribute__((swift_name("shared")));
- (THETACThetaRepositoryCaptureModeEnum * _Nullable)getValue:(THETACCaptureMode *)value __attribute__((swift_name("get(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.CaptureStatusEnum")))
@interface THETACThetaRepositoryCaptureStatusEnum : THETACKotlinEnum<THETACThetaRepositoryCaptureStatusEnum *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) THETACThetaRepositoryCaptureStatusEnumCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) THETACThetaRepositoryCaptureStatusEnum *shooting __attribute__((swift_name("shooting")));
@property (class, readonly) THETACThetaRepositoryCaptureStatusEnum *idle __attribute__((swift_name("idle")));
@property (class, readonly) THETACThetaRepositoryCaptureStatusEnum *selfTimerCountdown __attribute__((swift_name("selfTimerCountdown")));
@property (class, readonly) THETACThetaRepositoryCaptureStatusEnum *bracketShooting __attribute__((swift_name("bracketShooting")));
@property (class, readonly) THETACThetaRepositoryCaptureStatusEnum *converting __attribute__((swift_name("converting")));
@property (class, readonly) THETACThetaRepositoryCaptureStatusEnum *timeShiftShooting __attribute__((swift_name("timeShiftShooting")));
@property (class, readonly) THETACThetaRepositoryCaptureStatusEnum *continuousShooting __attribute__((swift_name("continuousShooting")));
@property (class, readonly) THETACThetaRepositoryCaptureStatusEnum *retrospectiveImageRecording __attribute__((swift_name("retrospectiveImageRecording")));
+ (THETACKotlinArray<THETACThetaRepositoryCaptureStatusEnum *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.CaptureStatusEnumCompanion")))
@interface THETACThetaRepositoryCaptureStatusEnumCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACThetaRepositoryCaptureStatusEnumCompanion *shared __attribute__((swift_name("shared")));
- (THETACThetaRepositoryCaptureStatusEnum *)getCaptureStatus:(THETACCaptureStatus *)captureStatus __attribute__((swift_name("get(captureStatus:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.ChargingStateEnum")))
@interface THETACThetaRepositoryChargingStateEnum : THETACKotlinEnum<THETACThetaRepositoryChargingStateEnum *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) THETACThetaRepositoryChargingStateEnumCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) THETACThetaRepositoryChargingStateEnum *charging __attribute__((swift_name("charging")));
@property (class, readonly) THETACThetaRepositoryChargingStateEnum *completed __attribute__((swift_name("completed")));
@property (class, readonly) THETACThetaRepositoryChargingStateEnum *notCharging __attribute__((swift_name("notCharging")));
+ (THETACKotlinArray<THETACThetaRepositoryChargingStateEnum *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.ChargingStateEnumCompanion")))
@interface THETACThetaRepositoryChargingStateEnumCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACThetaRepositoryChargingStateEnumCompanion *shared __attribute__((swift_name("shared")));
- (THETACThetaRepositoryChargingStateEnum *)getChargingState:(THETACChargingState *)chargingState __attribute__((swift_name("get(chargingState:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.CodecEnum")))
@interface THETACThetaRepositoryCodecEnum : THETACKotlinEnum<THETACThetaRepositoryCodecEnum *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) THETACThetaRepositoryCodecEnumCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) THETACThetaRepositoryCodecEnum *h264mp4avc __attribute__((swift_name("h264mp4avc")));
+ (THETACKotlinArray<THETACThetaRepositoryCodecEnum *> *)values __attribute__((swift_name("values()")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.CodecEnumCompanion")))
@interface THETACThetaRepositoryCodecEnumCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACThetaRepositoryCodecEnumCompanion *shared __attribute__((swift_name("shared")));
- (THETACThetaRepositoryCodecEnum * _Nullable)getValue:(NSString *)value __attribute__((swift_name("get(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.Companion")))
@interface THETACThetaRepositoryCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACThetaRepositoryCompanion *shared __attribute__((swift_name("shared")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (void)doNewInstanceEndpoint:(NSString *)endpoint config:(THETACThetaRepositoryConfig * _Nullable)config timeout:(THETACThetaRepositoryTimeout * _Nullable)timeout completionHandler:(void (^)(THETACThetaRepository * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("doNewInstance(endpoint:config:timeout:completionHandler:)")));
@property (readonly, getter=doInitConfig) THETACThetaRepositoryConfig * _Nullable initConfig __attribute__((swift_name("initConfig")));
@property (readonly) THETACThetaRepositoryConfig * _Nullable restoreConfig __attribute__((swift_name("restoreConfig")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.Config")))
@interface THETACThetaRepositoryConfig : THETACBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithDateTime:(NSString * _Nullable)dateTime language:(THETACThetaRepositoryLanguageEnum * _Nullable)language offDelay:(id<THETACThetaRepositoryOffDelay> _Nullable)offDelay sleepDelay:(id<THETACThetaRepositorySleepDelay> _Nullable)sleepDelay shutterVolume:(THETACInt * _Nullable)shutterVolume clientMode:(THETACDigestAuth * _Nullable)clientMode __attribute__((swift_name("init(dateTime:language:offDelay:sleepDelay:shutterVolume:clientMode:)"))) __attribute__((objc_designated_initializer));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACThetaRepositoryLanguageEnum * _Nullable)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (id<THETACThetaRepositoryOffDelay> _Nullable)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (id<THETACThetaRepositorySleepDelay> _Nullable)component4 __attribute__((swift_name("component4()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACInt * _Nullable)component5 __attribute__((swift_name("component5()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACDigestAuth * _Nullable)component6 __attribute__((swift_name("component6()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACThetaRepositoryConfig *)doCopyDateTime:(NSString * _Nullable)dateTime language:(THETACThetaRepositoryLanguageEnum * _Nullable)language offDelay:(id<THETACThetaRepositoryOffDelay> _Nullable)offDelay sleepDelay:(id<THETACThetaRepositorySleepDelay> _Nullable)sleepDelay shutterVolume:(THETACInt * _Nullable)shutterVolume clientMode:(THETACDigestAuth * _Nullable)clientMode __attribute__((swift_name("doCopy(dateTime:language:offDelay:sleepDelay:shutterVolume:clientMode:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property THETACDigestAuth * _Nullable clientMode __attribute__((swift_name("clientMode")));
@property NSString * _Nullable dateTime __attribute__((swift_name("dateTime")));
@property THETACThetaRepositoryLanguageEnum * _Nullable language __attribute__((swift_name("language")));
@property id<THETACThetaRepositoryOffDelay> _Nullable offDelay __attribute__((swift_name("offDelay")));
@property THETACInt * _Nullable shutterVolume __attribute__((swift_name("shutterVolume")));
@property id<THETACThetaRepositorySleepDelay> _Nullable sleepDelay __attribute__((swift_name("sleepDelay")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.ContinuousNumberEnum")))
@interface THETACThetaRepositoryContinuousNumberEnum : THETACKotlinEnum<THETACThetaRepositoryContinuousNumberEnum *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) THETACThetaRepositoryContinuousNumberEnumCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) THETACThetaRepositoryContinuousNumberEnum *off __attribute__((swift_name("off")));
@property (class, readonly) THETACThetaRepositoryContinuousNumberEnum *max1 __attribute__((swift_name("max1")));
@property (class, readonly) THETACThetaRepositoryContinuousNumberEnum *max2 __attribute__((swift_name("max2")));
@property (class, readonly) THETACThetaRepositoryContinuousNumberEnum *max3 __attribute__((swift_name("max3")));
@property (class, readonly) THETACThetaRepositoryContinuousNumberEnum *max4 __attribute__((swift_name("max4")));
@property (class, readonly) THETACThetaRepositoryContinuousNumberEnum *max5 __attribute__((swift_name("max5")));
@property (class, readonly) THETACThetaRepositoryContinuousNumberEnum *max6 __attribute__((swift_name("max6")));
@property (class, readonly) THETACThetaRepositoryContinuousNumberEnum *max7 __attribute__((swift_name("max7")));
@property (class, readonly) THETACThetaRepositoryContinuousNumberEnum *max8 __attribute__((swift_name("max8")));
@property (class, readonly) THETACThetaRepositoryContinuousNumberEnum *max9 __attribute__((swift_name("max9")));
@property (class, readonly) THETACThetaRepositoryContinuousNumberEnum *max10 __attribute__((swift_name("max10")));
@property (class, readonly) THETACThetaRepositoryContinuousNumberEnum *max11 __attribute__((swift_name("max11")));
@property (class, readonly) THETACThetaRepositoryContinuousNumberEnum *max12 __attribute__((swift_name("max12")));
@property (class, readonly) THETACThetaRepositoryContinuousNumberEnum *max13 __attribute__((swift_name("max13")));
@property (class, readonly) THETACThetaRepositoryContinuousNumberEnum *max14 __attribute__((swift_name("max14")));
@property (class, readonly) THETACThetaRepositoryContinuousNumberEnum *max15 __attribute__((swift_name("max15")));
@property (class, readonly) THETACThetaRepositoryContinuousNumberEnum *max16 __attribute__((swift_name("max16")));
@property (class, readonly) THETACThetaRepositoryContinuousNumberEnum *max17 __attribute__((swift_name("max17")));
@property (class, readonly) THETACThetaRepositoryContinuousNumberEnum *max18 __attribute__((swift_name("max18")));
@property (class, readonly) THETACThetaRepositoryContinuousNumberEnum *max19 __attribute__((swift_name("max19")));
@property (class, readonly) THETACThetaRepositoryContinuousNumberEnum *max20 __attribute__((swift_name("max20")));
@property (class, readonly) THETACThetaRepositoryContinuousNumberEnum *unsupported __attribute__((swift_name("unsupported")));
+ (THETACKotlinArray<THETACThetaRepositoryContinuousNumberEnum *> *)values __attribute__((swift_name("values()")));
@property (readonly) int32_t value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.ContinuousNumberEnumCompanion")))
@interface THETACThetaRepositoryContinuousNumberEnumCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACThetaRepositoryContinuousNumberEnumCompanion *shared __attribute__((swift_name("shared")));
- (THETACThetaRepositoryContinuousNumberEnum *)getValue:(int32_t)value __attribute__((swift_name("get(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.Exif")))
@interface THETACThetaRepositoryExif : THETACBase
- (instancetype)initWithExif:(THETACExifInfo *)exif __attribute__((swift_name("init(exif:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithExifVersion:(NSString *)exifVersion dateTime:(NSString *)dateTime imageWidth:(THETACInt * _Nullable)imageWidth imageLength:(THETACInt * _Nullable)imageLength gpsLatitude:(THETACDouble * _Nullable)gpsLatitude gpsLongitude:(THETACDouble * _Nullable)gpsLongitude __attribute__((swift_name("init(exifVersion:dateTime:imageWidth:imageLength:gpsLatitude:gpsLongitude:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACInt * _Nullable)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACInt * _Nullable)component4 __attribute__((swift_name("component4()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACDouble * _Nullable)component5 __attribute__((swift_name("component5()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACDouble * _Nullable)component6 __attribute__((swift_name("component6()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACThetaRepositoryExif *)doCopyExifVersion:(NSString *)exifVersion dateTime:(NSString *)dateTime imageWidth:(THETACInt * _Nullable)imageWidth imageLength:(THETACInt * _Nullable)imageLength gpsLatitude:(THETACDouble * _Nullable)gpsLatitude gpsLongitude:(THETACDouble * _Nullable)gpsLongitude __attribute__((swift_name("doCopy(exifVersion:dateTime:imageWidth:imageLength:gpsLatitude:gpsLongitude:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *dateTime __attribute__((swift_name("dateTime")));
@property (readonly) NSString *exifVersion __attribute__((swift_name("exifVersion")));
@property (readonly) THETACDouble * _Nullable gpsLatitude __attribute__((swift_name("gpsLatitude")));
@property (readonly) THETACDouble * _Nullable gpsLongitude __attribute__((swift_name("gpsLongitude")));
@property (readonly) THETACInt * _Nullable imageLength __attribute__((swift_name("imageLength")));
@property (readonly) THETACInt * _Nullable imageWidth __attribute__((swift_name("imageWidth")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.ExposureCompensationEnum")))
@interface THETACThetaRepositoryExposureCompensationEnum : THETACKotlinEnum<THETACThetaRepositoryExposureCompensationEnum *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) THETACThetaRepositoryExposureCompensationEnumCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) THETACThetaRepositoryExposureCompensationEnum *m20 __attribute__((swift_name("m20")));
@property (class, readonly) THETACThetaRepositoryExposureCompensationEnum *m17 __attribute__((swift_name("m17")));
@property (class, readonly) THETACThetaRepositoryExposureCompensationEnum *m13 __attribute__((swift_name("m13")));
@property (class, readonly) THETACThetaRepositoryExposureCompensationEnum *m10 __attribute__((swift_name("m10")));
@property (class, readonly) THETACThetaRepositoryExposureCompensationEnum *m07 __attribute__((swift_name("m07")));
@property (class, readonly) THETACThetaRepositoryExposureCompensationEnum *m03 __attribute__((swift_name("m03")));
@property (class, readonly) THETACThetaRepositoryExposureCompensationEnum *zero __attribute__((swift_name("zero")));
@property (class, readonly) THETACThetaRepositoryExposureCompensationEnum *p03 __attribute__((swift_name("p03")));
@property (class, readonly) THETACThetaRepositoryExposureCompensationEnum *p07 __attribute__((swift_name("p07")));
@property (class, readonly) THETACThetaRepositoryExposureCompensationEnum *p10 __attribute__((swift_name("p10")));
@property (class, readonly) THETACThetaRepositoryExposureCompensationEnum *p13 __attribute__((swift_name("p13")));
@property (class, readonly) THETACThetaRepositoryExposureCompensationEnum *p17 __attribute__((swift_name("p17")));
@property (class, readonly) THETACThetaRepositoryExposureCompensationEnum *p20 __attribute__((swift_name("p20")));
+ (THETACKotlinArray<THETACThetaRepositoryExposureCompensationEnum *> *)values __attribute__((swift_name("values()")));
@property (readonly) float value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.ExposureCompensationEnumCompanion")))
@interface THETACThetaRepositoryExposureCompensationEnumCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACThetaRepositoryExposureCompensationEnumCompanion *shared __attribute__((swift_name("shared")));
- (THETACThetaRepositoryExposureCompensationEnum * _Nullable)getValue:(float)value __attribute__((swift_name("get(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.ExposureDelayEnum")))
@interface THETACThetaRepositoryExposureDelayEnum : THETACKotlinEnum<THETACThetaRepositoryExposureDelayEnum *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) THETACThetaRepositoryExposureDelayEnumCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) THETACThetaRepositoryExposureDelayEnum *delayOff __attribute__((swift_name("delayOff")));
@property (class, readonly) THETACThetaRepositoryExposureDelayEnum *delay1 __attribute__((swift_name("delay1")));
@property (class, readonly) THETACThetaRepositoryExposureDelayEnum *delay2 __attribute__((swift_name("delay2")));
@property (class, readonly) THETACThetaRepositoryExposureDelayEnum *delay3 __attribute__((swift_name("delay3")));
@property (class, readonly) THETACThetaRepositoryExposureDelayEnum *delay4 __attribute__((swift_name("delay4")));
@property (class, readonly) THETACThetaRepositoryExposureDelayEnum *delay5 __attribute__((swift_name("delay5")));
@property (class, readonly) THETACThetaRepositoryExposureDelayEnum *delay6 __attribute__((swift_name("delay6")));
@property (class, readonly) THETACThetaRepositoryExposureDelayEnum *delay7 __attribute__((swift_name("delay7")));
@property (class, readonly) THETACThetaRepositoryExposureDelayEnum *delay8 __attribute__((swift_name("delay8")));
@property (class, readonly) THETACThetaRepositoryExposureDelayEnum *delay9 __attribute__((swift_name("delay9")));
@property (class, readonly) THETACThetaRepositoryExposureDelayEnum *delay10 __attribute__((swift_name("delay10")));
@property (class, readonly) THETACThetaRepositoryExposureDelayEnum *doNotUpdateMySettingCondition __attribute__((swift_name("doNotUpdateMySettingCondition")));
+ (THETACKotlinArray<THETACThetaRepositoryExposureDelayEnum *> *)values __attribute__((swift_name("values()")));
@property (readonly) int32_t sec __attribute__((swift_name("sec")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.ExposureDelayEnumCompanion")))
@interface THETACThetaRepositoryExposureDelayEnumCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACThetaRepositoryExposureDelayEnumCompanion *shared __attribute__((swift_name("shared")));
- (THETACThetaRepositoryExposureDelayEnum * _Nullable)getSec:(int32_t)sec __attribute__((swift_name("get(sec:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.ExposureProgramEnum")))
@interface THETACThetaRepositoryExposureProgramEnum : THETACKotlinEnum<THETACThetaRepositoryExposureProgramEnum *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) THETACThetaRepositoryExposureProgramEnumCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) THETACThetaRepositoryExposureProgramEnum *manual __attribute__((swift_name("manual")));
@property (class, readonly) THETACThetaRepositoryExposureProgramEnum *normalProgram __attribute__((swift_name("normalProgram")));
@property (class, readonly) THETACThetaRepositoryExposureProgramEnum *aperturePriority __attribute__((swift_name("aperturePriority")));
@property (class, readonly) THETACThetaRepositoryExposureProgramEnum *shutterPriority __attribute__((swift_name("shutterPriority")));
@property (class, readonly) THETACThetaRepositoryExposureProgramEnum *isoPriority __attribute__((swift_name("isoPriority")));
+ (THETACKotlinArray<THETACThetaRepositoryExposureProgramEnum *> *)values __attribute__((swift_name("values()")));
@property (readonly) int32_t value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.ExposureProgramEnumCompanion")))
@interface THETACThetaRepositoryExposureProgramEnumCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACThetaRepositoryExposureProgramEnumCompanion *shared __attribute__((swift_name("shared")));
- (THETACThetaRepositoryExposureProgramEnum * _Nullable)getValue:(int32_t)value __attribute__((swift_name("get(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.FileFormatEnum")))
@interface THETACThetaRepositoryFileFormatEnum : THETACKotlinEnum<THETACThetaRepositoryFileFormatEnum *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) THETACThetaRepositoryFileFormatEnumCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) THETACThetaRepositoryFileFormatEnum *image2k __attribute__((swift_name("image2k")));
@property (class, readonly) THETACThetaRepositoryFileFormatEnum *image5k __attribute__((swift_name("image5k")));
@property (class, readonly) THETACThetaRepositoryFileFormatEnum *image67k __attribute__((swift_name("image67k")));
@property (class, readonly) THETACThetaRepositoryFileFormatEnum *rawP67k __attribute__((swift_name("rawP67k")));
@property (class, readonly) THETACThetaRepositoryFileFormatEnum *image55k __attribute__((swift_name("image55k")));
@property (class, readonly) THETACThetaRepositoryFileFormatEnum *image11k __attribute__((swift_name("image11k")));
@property (class, readonly) THETACThetaRepositoryFileFormatEnum *imageDoNotUpdateMySettingCondition __attribute__((swift_name("imageDoNotUpdateMySettingCondition")));
@property (class, readonly) THETACThetaRepositoryFileFormatEnum *videoHd __attribute__((swift_name("videoHd")));
@property (class, readonly) THETACThetaRepositoryFileFormatEnum *videoFullHd __attribute__((swift_name("videoFullHd")));
@property (class, readonly) THETACThetaRepositoryFileFormatEnum *video2k __attribute__((swift_name("video2k")));
@property (class, readonly) THETACThetaRepositoryFileFormatEnum *video4k __attribute__((swift_name("video4k")));
@property (class, readonly) THETACThetaRepositoryFileFormatEnum *video2k30f __attribute__((swift_name("video2k30f")));
@property (class, readonly) THETACThetaRepositoryFileFormatEnum *video2k60f __attribute__((swift_name("video2k60f")));
@property (class, readonly) THETACThetaRepositoryFileFormatEnum *video4k30f __attribute__((swift_name("video4k30f")));
@property (class, readonly) THETACThetaRepositoryFileFormatEnum *video4k60f __attribute__((swift_name("video4k60f")));
@property (class, readonly) THETACThetaRepositoryFileFormatEnum *video57k2f __attribute__((swift_name("video57k2f")));
@property (class, readonly) THETACThetaRepositoryFileFormatEnum *video57k5f __attribute__((swift_name("video57k5f")));
@property (class, readonly) THETACThetaRepositoryFileFormatEnum *video57k30f __attribute__((swift_name("video57k30f")));
@property (class, readonly) THETACThetaRepositoryFileFormatEnum *video7k2f __attribute__((swift_name("video7k2f")));
@property (class, readonly) THETACThetaRepositoryFileFormatEnum *video7k5f __attribute__((swift_name("video7k5f")));
@property (class, readonly) THETACThetaRepositoryFileFormatEnum *video7k10f __attribute__((swift_name("video7k10f")));
@property (class, readonly) THETACThetaRepositoryFileFormatEnum *videoDoNotUpdateMySettingCondition __attribute__((swift_name("videoDoNotUpdateMySettingCondition")));
+ (THETACKotlinArray<THETACThetaRepositoryFileFormatEnum *> *)values __attribute__((swift_name("values()")));
- (THETACMediaFileFormat *)toMediaFileFormat __attribute__((swift_name("toMediaFileFormat()")));
@property (readonly) NSString * _Nullable _codec __attribute__((swift_name("_codec")));
@property (readonly) THETACInt * _Nullable _frameRate __attribute__((swift_name("_frameRate")));
@property (readonly) int32_t height __attribute__((swift_name("height")));
@property (readonly) THETACThetaRepositoryFileFormatTypeEnum *type __attribute__((swift_name("type")));
@property (readonly) int32_t width __attribute__((swift_name("width")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.FileFormatEnumCompanion")))
@interface THETACThetaRepositoryFileFormatEnumCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACThetaRepositoryFileFormatEnumCompanion *shared __attribute__((swift_name("shared")));
- (THETACThetaRepositoryFileFormatEnum * _Nullable)getMediaFileFormat:(THETACMediaFileFormat *)mediaFileFormat __attribute__((swift_name("get(mediaFileFormat:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.FileFormatTypeEnum")))
@interface THETACThetaRepositoryFileFormatTypeEnum : THETACKotlinEnum<THETACThetaRepositoryFileFormatTypeEnum *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) THETACThetaRepositoryFileFormatTypeEnum *jpeg __attribute__((swift_name("jpeg")));
@property (class, readonly) THETACThetaRepositoryFileFormatTypeEnum *mp4 __attribute__((swift_name("mp4")));
@property (class, readonly) THETACThetaRepositoryFileFormatTypeEnum *raw __attribute__((swift_name("raw")));
+ (THETACKotlinArray<THETACThetaRepositoryFileFormatTypeEnum *> *)values __attribute__((swift_name("values()")));
@property (readonly) THETACMediaType *mediaType __attribute__((swift_name("mediaType")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.FileInfo")))
@interface THETACThetaRepositoryFileInfo : THETACBase
- (instancetype)initWithCameraFileInfo:(THETACCameraFileInfo *)cameraFileInfo __attribute__((swift_name("init(cameraFileInfo:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithName:(NSString *)name fileUrl:(NSString *)fileUrl size:(int64_t)size dateTimeZone:(NSString * _Nullable)dateTimeZone dateTime:(NSString *)dateTime lat:(THETACFloat * _Nullable)lat lng:(THETACFloat * _Nullable)lng width:(THETACInt * _Nullable)width height:(THETACInt * _Nullable)height thumbnailUrl:(NSString *)thumbnailUrl intervalCaptureGroupId:(NSString * _Nullable)intervalCaptureGroupId compositeShootingGroupId:(NSString * _Nullable)compositeShootingGroupId autoBracketGroupId:(NSString * _Nullable)autoBracketGroupId recordTime:(THETACInt * _Nullable)recordTime isProcessed:(THETACBoolean * _Nullable)isProcessed previewUrl:(NSString * _Nullable)previewUrl codec:(THETACThetaRepositoryCodecEnum * _Nullable)codec projectionType:(THETACThetaRepositoryProjectionTypeEnum * _Nullable)projectionType continuousShootingGroupId:(NSString * _Nullable)continuousShootingGroupId frameRate:(THETACInt * _Nullable)frameRate favorite:(THETACBoolean * _Nullable)favorite imageDescription:(NSString * _Nullable)imageDescription storageID:(NSString * _Nullable)storageID __attribute__((swift_name("init(name:fileUrl:size:dateTimeZone:dateTime:lat:lng:width:height:thumbnailUrl:intervalCaptureGroupId:compositeShootingGroupId:autoBracketGroupId:recordTime:isProcessed:previewUrl:codec:projectionType:continuousShootingGroupId:frameRate:favorite:imageDescription:storageID:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component10 __attribute__((swift_name("component10()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component11 __attribute__((swift_name("component11()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component12 __attribute__((swift_name("component12()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component13 __attribute__((swift_name("component13()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACInt * _Nullable)component14 __attribute__((swift_name("component14()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACBoolean * _Nullable)component15 __attribute__((swift_name("component15()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component16 __attribute__((swift_name("component16()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACThetaRepositoryCodecEnum * _Nullable)component17 __attribute__((swift_name("component17()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACThetaRepositoryProjectionTypeEnum * _Nullable)component18 __attribute__((swift_name("component18()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component19 __attribute__((swift_name("component19()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACInt * _Nullable)component20 __attribute__((swift_name("component20()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACBoolean * _Nullable)component21 __attribute__((swift_name("component21()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component22 __attribute__((swift_name("component22()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component23 __attribute__((swift_name("component23()"))) __attribute__((deprecated("use corresponding property instead")));
- (int64_t)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component5 __attribute__((swift_name("component5()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACFloat * _Nullable)component6 __attribute__((swift_name("component6()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACFloat * _Nullable)component7 __attribute__((swift_name("component7()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACInt * _Nullable)component8 __attribute__((swift_name("component8()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACInt * _Nullable)component9 __attribute__((swift_name("component9()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACThetaRepositoryFileInfo *)doCopyName:(NSString *)name fileUrl:(NSString *)fileUrl size:(int64_t)size dateTimeZone:(NSString * _Nullable)dateTimeZone dateTime:(NSString *)dateTime lat:(THETACFloat * _Nullable)lat lng:(THETACFloat * _Nullable)lng width:(THETACInt * _Nullable)width height:(THETACInt * _Nullable)height thumbnailUrl:(NSString *)thumbnailUrl intervalCaptureGroupId:(NSString * _Nullable)intervalCaptureGroupId compositeShootingGroupId:(NSString * _Nullable)compositeShootingGroupId autoBracketGroupId:(NSString * _Nullable)autoBracketGroupId recordTime:(THETACInt * _Nullable)recordTime isProcessed:(THETACBoolean * _Nullable)isProcessed previewUrl:(NSString * _Nullable)previewUrl codec:(THETACThetaRepositoryCodecEnum * _Nullable)codec projectionType:(THETACThetaRepositoryProjectionTypeEnum * _Nullable)projectionType continuousShootingGroupId:(NSString * _Nullable)continuousShootingGroupId frameRate:(THETACInt * _Nullable)frameRate favorite:(THETACBoolean * _Nullable)favorite imageDescription:(NSString * _Nullable)imageDescription storageID:(NSString * _Nullable)storageID __attribute__((swift_name("doCopy(name:fileUrl:size:dateTimeZone:dateTime:lat:lng:width:height:thumbnailUrl:intervalCaptureGroupId:compositeShootingGroupId:autoBracketGroupId:recordTime:isProcessed:previewUrl:codec:projectionType:continuousShootingGroupId:frameRate:favorite:imageDescription:storageID:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable autoBracketGroupId __attribute__((swift_name("autoBracketGroupId")));
@property (readonly) THETACThetaRepositoryCodecEnum * _Nullable codec __attribute__((swift_name("codec")));
@property (readonly) NSString * _Nullable compositeShootingGroupId __attribute__((swift_name("compositeShootingGroupId")));
@property (readonly) NSString * _Nullable continuousShootingGroupId __attribute__((swift_name("continuousShootingGroupId")));
@property (readonly) NSString *dateTime __attribute__((swift_name("dateTime")));
@property (readonly) NSString * _Nullable dateTimeZone __attribute__((swift_name("dateTimeZone")));
@property (readonly) THETACBoolean * _Nullable favorite __attribute__((swift_name("favorite")));
@property (readonly) NSString *fileUrl __attribute__((swift_name("fileUrl")));
@property (readonly) THETACInt * _Nullable frameRate __attribute__((swift_name("frameRate")));
@property (readonly) THETACInt * _Nullable height __attribute__((swift_name("height")));
@property (readonly) NSString * _Nullable imageDescription __attribute__((swift_name("imageDescription")));
@property (readonly) NSString * _Nullable intervalCaptureGroupId __attribute__((swift_name("intervalCaptureGroupId")));
@property (readonly) THETACBoolean * _Nullable isProcessed __attribute__((swift_name("isProcessed")));
@property (readonly) THETACFloat * _Nullable lat __attribute__((swift_name("lat")));
@property (readonly) THETACFloat * _Nullable lng __attribute__((swift_name("lng")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSString * _Nullable previewUrl __attribute__((swift_name("previewUrl")));
@property (readonly) THETACThetaRepositoryProjectionTypeEnum * _Nullable projectionType __attribute__((swift_name("projectionType")));
@property (readonly) THETACInt * _Nullable recordTime __attribute__((swift_name("recordTime")));
@property (readonly) int64_t size __attribute__((swift_name("size")));
@property (readonly) NSString * _Nullable storageID __attribute__((swift_name("storageID")));
@property (readonly) NSString *thumbnailUrl __attribute__((swift_name("thumbnailUrl")));
@property (readonly) THETACInt * _Nullable width __attribute__((swift_name("width")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.FileTypeEnum")))
@interface THETACThetaRepositoryFileTypeEnum : THETACKotlinEnum<THETACThetaRepositoryFileTypeEnum *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) THETACThetaRepositoryFileTypeEnum *all __attribute__((swift_name("all")));
@property (class, readonly) THETACThetaRepositoryFileTypeEnum *image __attribute__((swift_name("image")));
@property (class, readonly) THETACThetaRepositoryFileTypeEnum *video __attribute__((swift_name("video")));
+ (THETACKotlinArray<THETACThetaRepositoryFileTypeEnum *> *)values __attribute__((swift_name("values()")));
@property (readonly) THETACFileType *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.FilterEnum")))
@interface THETACThetaRepositoryFilterEnum : THETACKotlinEnum<THETACThetaRepositoryFilterEnum *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) THETACThetaRepositoryFilterEnumCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) THETACThetaRepositoryFilterEnum *off __attribute__((swift_name("off")));
@property (class, readonly) THETACThetaRepositoryFilterEnum *drComp __attribute__((swift_name("drComp")));
@property (class, readonly) THETACThetaRepositoryFilterEnum *noiseReduction __attribute__((swift_name("noiseReduction")));
@property (class, readonly) THETACThetaRepositoryFilterEnum *hdr __attribute__((swift_name("hdr")));
@property (class, readonly) THETACThetaRepositoryFilterEnum *hhHdr __attribute__((swift_name("hhHdr")));
+ (THETACKotlinArray<THETACThetaRepositoryFilterEnum *> *)values __attribute__((swift_name("values()")));
@property (readonly) THETACImageFilter *filter __attribute__((swift_name("filter")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.FilterEnumCompanion")))
@interface THETACThetaRepositoryFilterEnumCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACThetaRepositoryFilterEnumCompanion *shared __attribute__((swift_name("shared")));
- (THETACThetaRepositoryFilterEnum * _Nullable)getFilter:(THETACImageFilter *)filter __attribute__((swift_name("get(filter:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.GpsInfo")))
@interface THETACThetaRepositoryGpsInfo : THETACBase
- (instancetype)initWithGpsInfo:(THETACGpsInfo *)gpsInfo __attribute__((swift_name("init(gpsInfo:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithLatitude:(float)latitude longitude:(float)longitude altitude:(float)altitude dateTimeZone:(NSString *)dateTimeZone __attribute__((swift_name("init(latitude:longitude:altitude:dateTimeZone:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) THETACThetaRepositoryGpsInfoCompanion *companion __attribute__((swift_name("companion")));
- (float)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (float)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (float)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component4 __attribute__((swift_name("component4()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACThetaRepositoryGpsInfo *)doCopyLatitude:(float)latitude longitude:(float)longitude altitude:(float)altitude dateTimeZone:(NSString *)dateTimeZone __attribute__((swift_name("doCopy(latitude:longitude:altitude:dateTimeZone:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)isDisabled __attribute__((swift_name("isDisabled()")));
- (NSString *)description __attribute__((swift_name("description()")));
- (THETACGpsInfo *)toTransferredGpsInfo __attribute__((swift_name("toTransferredGpsInfo()")));
@property (readonly) float altitude __attribute__((swift_name("altitude")));
@property (readonly) NSString *dateTimeZone __attribute__((swift_name("dateTimeZone")));
@property (readonly) float latitude __attribute__((swift_name("latitude")));
@property (readonly) float longitude __attribute__((swift_name("longitude")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.GpsInfoCompanion")))
@interface THETACThetaRepositoryGpsInfoCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACThetaRepositoryGpsInfoCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) THETACThetaRepositoryGpsInfo *disabled __attribute__((swift_name("disabled")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.GpsTagRecordingEnum")))
@interface THETACThetaRepositoryGpsTagRecordingEnum : THETACKotlinEnum<THETACThetaRepositoryGpsTagRecordingEnum *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) THETACThetaRepositoryGpsTagRecordingEnumCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) THETACThetaRepositoryGpsTagRecordingEnum *on __attribute__((swift_name("on")));
@property (class, readonly) THETACThetaRepositoryGpsTagRecordingEnum *off __attribute__((swift_name("off")));
+ (THETACKotlinArray<THETACThetaRepositoryGpsTagRecordingEnum *> *)values __attribute__((swift_name("values()")));
@property (readonly) THETACGpsTagRecording *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.GpsTagRecordingEnumCompanion")))
@interface THETACThetaRepositoryGpsTagRecordingEnumCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACThetaRepositoryGpsTagRecordingEnumCompanion *shared __attribute__((swift_name("shared")));
- (THETACThetaRepositoryGpsTagRecordingEnum * _Nullable)getValue:(THETACGpsTagRecording *)value __attribute__((swift_name("get(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.IsoAutoHighLimitEnum")))
@interface THETACThetaRepositoryIsoAutoHighLimitEnum : THETACKotlinEnum<THETACThetaRepositoryIsoAutoHighLimitEnum *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) THETACThetaRepositoryIsoAutoHighLimitEnumCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) THETACThetaRepositoryIsoAutoHighLimitEnum *iso100 __attribute__((swift_name("iso100")));
@property (class, readonly) THETACThetaRepositoryIsoAutoHighLimitEnum *iso125 __attribute__((swift_name("iso125")));
@property (class, readonly) THETACThetaRepositoryIsoAutoHighLimitEnum *iso160 __attribute__((swift_name("iso160")));
@property (class, readonly) THETACThetaRepositoryIsoAutoHighLimitEnum *iso200 __attribute__((swift_name("iso200")));
@property (class, readonly) THETACThetaRepositoryIsoAutoHighLimitEnum *iso250 __attribute__((swift_name("iso250")));
@property (class, readonly) THETACThetaRepositoryIsoAutoHighLimitEnum *iso320 __attribute__((swift_name("iso320")));
@property (class, readonly) THETACThetaRepositoryIsoAutoHighLimitEnum *iso400 __attribute__((swift_name("iso400")));
@property (class, readonly) THETACThetaRepositoryIsoAutoHighLimitEnum *iso500 __attribute__((swift_name("iso500")));
@property (class, readonly) THETACThetaRepositoryIsoAutoHighLimitEnum *iso640 __attribute__((swift_name("iso640")));
@property (class, readonly) THETACThetaRepositoryIsoAutoHighLimitEnum *iso800 __attribute__((swift_name("iso800")));
@property (class, readonly) THETACThetaRepositoryIsoAutoHighLimitEnum *iso1000 __attribute__((swift_name("iso1000")));
@property (class, readonly) THETACThetaRepositoryIsoAutoHighLimitEnum *iso1250 __attribute__((swift_name("iso1250")));
@property (class, readonly) THETACThetaRepositoryIsoAutoHighLimitEnum *iso1600 __attribute__((swift_name("iso1600")));
@property (class, readonly) THETACThetaRepositoryIsoAutoHighLimitEnum *iso2000 __attribute__((swift_name("iso2000")));
@property (class, readonly) THETACThetaRepositoryIsoAutoHighLimitEnum *iso2500 __attribute__((swift_name("iso2500")));
@property (class, readonly) THETACThetaRepositoryIsoAutoHighLimitEnum *iso3200 __attribute__((swift_name("iso3200")));
@property (class, readonly) THETACThetaRepositoryIsoAutoHighLimitEnum *iso4000 __attribute__((swift_name("iso4000")));
@property (class, readonly) THETACThetaRepositoryIsoAutoHighLimitEnum *iso5000 __attribute__((swift_name("iso5000")));
@property (class, readonly) THETACThetaRepositoryIsoAutoHighLimitEnum *iso6400 __attribute__((swift_name("iso6400")));
@property (class, readonly) THETACThetaRepositoryIsoAutoHighLimitEnum *doNotUpdateMySettingCondition __attribute__((swift_name("doNotUpdateMySettingCondition")));
+ (THETACKotlinArray<THETACThetaRepositoryIsoAutoHighLimitEnum *> *)values __attribute__((swift_name("values()")));
@property (readonly) int32_t value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.IsoAutoHighLimitEnumCompanion")))
@interface THETACThetaRepositoryIsoAutoHighLimitEnumCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACThetaRepositoryIsoAutoHighLimitEnumCompanion *shared __attribute__((swift_name("shared")));
- (THETACThetaRepositoryIsoAutoHighLimitEnum * _Nullable)getValue:(int32_t)value __attribute__((swift_name("get(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.IsoEnum")))
@interface THETACThetaRepositoryIsoEnum : THETACKotlinEnum<THETACThetaRepositoryIsoEnum *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) THETACThetaRepositoryIsoEnumCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) THETACThetaRepositoryIsoEnum *isoAuto __attribute__((swift_name("isoAuto")));
@property (class, readonly) THETACThetaRepositoryIsoEnum *iso50 __attribute__((swift_name("iso50")));
@property (class, readonly) THETACThetaRepositoryIsoEnum *iso64 __attribute__((swift_name("iso64")));
@property (class, readonly) THETACThetaRepositoryIsoEnum *iso80 __attribute__((swift_name("iso80")));
@property (class, readonly) THETACThetaRepositoryIsoEnum *iso100 __attribute__((swift_name("iso100")));
@property (class, readonly) THETACThetaRepositoryIsoEnum *iso125 __attribute__((swift_name("iso125")));
@property (class, readonly) THETACThetaRepositoryIsoEnum *iso160 __attribute__((swift_name("iso160")));
@property (class, readonly) THETACThetaRepositoryIsoEnum *iso200 __attribute__((swift_name("iso200")));
@property (class, readonly) THETACThetaRepositoryIsoEnum *iso250 __attribute__((swift_name("iso250")));
@property (class, readonly) THETACThetaRepositoryIsoEnum *iso320 __attribute__((swift_name("iso320")));
@property (class, readonly) THETACThetaRepositoryIsoEnum *iso400 __attribute__((swift_name("iso400")));
@property (class, readonly) THETACThetaRepositoryIsoEnum *iso500 __attribute__((swift_name("iso500")));
@property (class, readonly) THETACThetaRepositoryIsoEnum *iso640 __attribute__((swift_name("iso640")));
@property (class, readonly) THETACThetaRepositoryIsoEnum *iso800 __attribute__((swift_name("iso800")));
@property (class, readonly) THETACThetaRepositoryIsoEnum *iso1000 __attribute__((swift_name("iso1000")));
@property (class, readonly) THETACThetaRepositoryIsoEnum *iso1250 __attribute__((swift_name("iso1250")));
@property (class, readonly) THETACThetaRepositoryIsoEnum *iso1600 __attribute__((swift_name("iso1600")));
@property (class, readonly) THETACThetaRepositoryIsoEnum *iso2000 __attribute__((swift_name("iso2000")));
@property (class, readonly) THETACThetaRepositoryIsoEnum *iso2500 __attribute__((swift_name("iso2500")));
@property (class, readonly) THETACThetaRepositoryIsoEnum *iso3200 __attribute__((swift_name("iso3200")));
@property (class, readonly) THETACThetaRepositoryIsoEnum *iso4000 __attribute__((swift_name("iso4000")));
@property (class, readonly) THETACThetaRepositoryIsoEnum *iso5000 __attribute__((swift_name("iso5000")));
@property (class, readonly) THETACThetaRepositoryIsoEnum *iso6400 __attribute__((swift_name("iso6400")));
+ (THETACKotlinArray<THETACThetaRepositoryIsoEnum *> *)values __attribute__((swift_name("values()")));
@property (readonly) int32_t value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.IsoEnumCompanion")))
@interface THETACThetaRepositoryIsoEnumCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACThetaRepositoryIsoEnumCompanion *shared __attribute__((swift_name("shared")));
- (THETACThetaRepositoryIsoEnum * _Nullable)getValue:(int32_t)value __attribute__((swift_name("get(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.LanguageEnum")))
@interface THETACThetaRepositoryLanguageEnum : THETACKotlinEnum<THETACThetaRepositoryLanguageEnum *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) THETACThetaRepositoryLanguageEnumCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) THETACThetaRepositoryLanguageEnum *de __attribute__((swift_name("de")));
@property (class, readonly) THETACThetaRepositoryLanguageEnum *enGb __attribute__((swift_name("enGb")));
@property (class, readonly) THETACThetaRepositoryLanguageEnum *enUs __attribute__((swift_name("enUs")));
@property (class, readonly) THETACThetaRepositoryLanguageEnum *fr __attribute__((swift_name("fr")));
@property (class, readonly) THETACThetaRepositoryLanguageEnum *it __attribute__((swift_name("it")));
@property (class, readonly) THETACThetaRepositoryLanguageEnum *ja __attribute__((swift_name("ja")));
@property (class, readonly) THETACThetaRepositoryLanguageEnum *ko __attribute__((swift_name("ko")));
@property (class, readonly) THETACThetaRepositoryLanguageEnum *zhCn __attribute__((swift_name("zhCn")));
@property (class, readonly) THETACThetaRepositoryLanguageEnum *zhTw __attribute__((swift_name("zhTw")));
+ (THETACKotlinArray<THETACThetaRepositoryLanguageEnum *> *)values __attribute__((swift_name("values()")));
@property (readonly) THETACLanguage *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.LanguageEnumCompanion")))
@interface THETACThetaRepositoryLanguageEnumCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACThetaRepositoryLanguageEnumCompanion *shared __attribute__((swift_name("shared")));
- (THETACThetaRepositoryLanguageEnum * _Nullable)getValue:(THETACLanguage *)value __attribute__((swift_name("get(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.MaxRecordableTimeEnum")))
@interface THETACThetaRepositoryMaxRecordableTimeEnum : THETACKotlinEnum<THETACThetaRepositoryMaxRecordableTimeEnum *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) THETACThetaRepositoryMaxRecordableTimeEnumCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) THETACThetaRepositoryMaxRecordableTimeEnum *recordableTime180 __attribute__((swift_name("recordableTime180")));
@property (class, readonly) THETACThetaRepositoryMaxRecordableTimeEnum *recordableTime300 __attribute__((swift_name("recordableTime300")));
@property (class, readonly) THETACThetaRepositoryMaxRecordableTimeEnum *recordableTime1500 __attribute__((swift_name("recordableTime1500")));
@property (class, readonly) THETACThetaRepositoryMaxRecordableTimeEnum *recordableTime7200 __attribute__((swift_name("recordableTime7200")));
@property (class, readonly) THETACThetaRepositoryMaxRecordableTimeEnum *doNotUpdateMySettingCondition __attribute__((swift_name("doNotUpdateMySettingCondition")));
+ (THETACKotlinArray<THETACThetaRepositoryMaxRecordableTimeEnum *> *)values __attribute__((swift_name("values()")));
@property (readonly) int32_t sec __attribute__((swift_name("sec")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.MaxRecordableTimeEnumCompanion")))
@interface THETACThetaRepositoryMaxRecordableTimeEnumCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACThetaRepositoryMaxRecordableTimeEnumCompanion *shared __attribute__((swift_name("shared")));
- (THETACThetaRepositoryMaxRecordableTimeEnum * _Nullable)getSec:(int32_t)sec __attribute__((swift_name("get(sec:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.MicrophoneOptionEnum")))
@interface THETACThetaRepositoryMicrophoneOptionEnum : THETACKotlinEnum<THETACThetaRepositoryMicrophoneOptionEnum *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) THETACThetaRepositoryMicrophoneOptionEnumCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) THETACThetaRepositoryMicrophoneOptionEnum *auto_ __attribute__((swift_name("auto_")));
@property (class, readonly) THETACThetaRepositoryMicrophoneOptionEnum *internal __attribute__((swift_name("internal")));
@property (class, readonly) THETACThetaRepositoryMicrophoneOptionEnum *external __attribute__((swift_name("external")));
+ (THETACKotlinArray<THETACThetaRepositoryMicrophoneOptionEnum *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.MicrophoneOptionEnumCompanion")))
@interface THETACThetaRepositoryMicrophoneOptionEnumCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACThetaRepositoryMicrophoneOptionEnumCompanion *shared __attribute__((swift_name("shared")));
- (THETACThetaRepositoryMicrophoneOptionEnum *)getMicrophoneOption:(THETACMicrophoneOption *)microphoneOption __attribute__((swift_name("get(microphoneOption:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.NetworkTypeEnum")))
@interface THETACThetaRepositoryNetworkTypeEnum : THETACKotlinEnum<THETACThetaRepositoryNetworkTypeEnum *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) THETACThetaRepositoryNetworkTypeEnumCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) THETACThetaRepositoryNetworkTypeEnum *direct __attribute__((swift_name("direct")));
@property (class, readonly) THETACThetaRepositoryNetworkTypeEnum *client __attribute__((swift_name("client")));
@property (class, readonly) THETACThetaRepositoryNetworkTypeEnum *ethernet __attribute__((swift_name("ethernet")));
@property (class, readonly) THETACThetaRepositoryNetworkTypeEnum *off __attribute__((swift_name("off")));
+ (THETACKotlinArray<THETACThetaRepositoryNetworkTypeEnum *> *)values __attribute__((swift_name("values()")));
@property (readonly) THETACNetworkType *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.NetworkTypeEnumCompanion")))
@interface THETACThetaRepositoryNetworkTypeEnumCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACThetaRepositoryNetworkTypeEnumCompanion *shared __attribute__((swift_name("shared")));
- (THETACThetaRepositoryNetworkTypeEnum * _Nullable)getValue:(THETACNetworkType *)value __attribute__((swift_name("get(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.NotConnectedException")))
@interface THETACThetaRepositoryNotConnectedException : THETACThetaRepositoryThetaRepositoryException
- (instancetype)initWithMessage:(NSString *)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("ThetaRepositoryOffDelay")))
@protocol THETACThetaRepositoryOffDelay
@required
@property (readonly) int32_t sec __attribute__((swift_name("sec")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.OffDelayEnum")))
@interface THETACThetaRepositoryOffDelayEnum : THETACKotlinEnum<THETACThetaRepositoryOffDelayEnum *> <THETACThetaRepositoryOffDelay>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) THETACThetaRepositoryOffDelayEnumCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) THETACThetaRepositoryOffDelayEnum *disable __attribute__((swift_name("disable")));
@property (class, readonly) THETACThetaRepositoryOffDelayEnum *offDelay5m __attribute__((swift_name("offDelay5m")));
@property (class, readonly) THETACThetaRepositoryOffDelayEnum *offDelay10m __attribute__((swift_name("offDelay10m")));
@property (class, readonly) THETACThetaRepositoryOffDelayEnum *offDelay15m __attribute__((swift_name("offDelay15m")));
@property (class, readonly) THETACThetaRepositoryOffDelayEnum *offDelay30m __attribute__((swift_name("offDelay30m")));
+ (THETACKotlinArray<THETACThetaRepositoryOffDelayEnum *> *)values __attribute__((swift_name("values()")));
@property (readonly) int32_t sec __attribute__((swift_name("sec")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.OffDelayEnumCompanion")))
@interface THETACThetaRepositoryOffDelayEnumCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACThetaRepositoryOffDelayEnumCompanion *shared __attribute__((swift_name("shared")));
- (id<THETACThetaRepositoryOffDelay>)getSec:(int32_t)sec __attribute__((swift_name("get(sec:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.OffDelaySec")))
@interface THETACThetaRepositoryOffDelaySec : THETACBase <THETACThetaRepositoryOffDelay>
- (instancetype)initWithSec:(int32_t)sec __attribute__((swift_name("init(sec:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
@property (readonly) int32_t sec __attribute__((swift_name("sec")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.OptionNameEnum")))
@interface THETACThetaRepositoryOptionNameEnum : THETACKotlinEnum<THETACThetaRepositoryOptionNameEnum *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) THETACThetaRepositoryOptionNameEnum *aiautothumbnail __attribute__((swift_name("aiautothumbnail")));
@property (class, readonly) THETACThetaRepositoryOptionNameEnum *aperture __attribute__((swift_name("aperture")));
@property (class, readonly) THETACThetaRepositoryOptionNameEnum *bitrate __attribute__((swift_name("bitrate")));
@property (class, readonly) THETACThetaRepositoryOptionNameEnum *bluetoothpower __attribute__((swift_name("bluetoothpower")));
@property (class, readonly) THETACThetaRepositoryOptionNameEnum *burstmode __attribute__((swift_name("burstmode")));
@property (class, readonly) THETACThetaRepositoryOptionNameEnum *burstoption __attribute__((swift_name("burstoption")));
@property (class, readonly) THETACThetaRepositoryOptionNameEnum *cameracontrolsource __attribute__((swift_name("cameracontrolsource")));
@property (class, readonly) THETACThetaRepositoryOptionNameEnum *cameramode __attribute__((swift_name("cameramode")));
@property (class, readonly) THETACThetaRepositoryOptionNameEnum *captureinterval __attribute__((swift_name("captureinterval")));
@property (class, readonly) THETACThetaRepositoryOptionNameEnum *capturemode __attribute__((swift_name("capturemode")));
@property (class, readonly) THETACThetaRepositoryOptionNameEnum *capturenumber __attribute__((swift_name("capturenumber")));
@property (class, readonly) THETACThetaRepositoryOptionNameEnum *colortemperature __attribute__((swift_name("colortemperature")));
@property (class, readonly) THETACThetaRepositoryOptionNameEnum *compositeshootingoutputinterval __attribute__((swift_name("compositeshootingoutputinterval")));
@property (class, readonly) THETACThetaRepositoryOptionNameEnum *compositeshootingtime __attribute__((swift_name("compositeshootingtime")));
@property (class, readonly) THETACThetaRepositoryOptionNameEnum *continuousnumber __attribute__((swift_name("continuousnumber")));
@property (class, readonly) THETACThetaRepositoryOptionNameEnum *datetimezone __attribute__((swift_name("datetimezone")));
@property (class, readonly) THETACThetaRepositoryOptionNameEnum *exposurecompensation __attribute__((swift_name("exposurecompensation")));
@property (class, readonly) THETACThetaRepositoryOptionNameEnum *exposuredelay __attribute__((swift_name("exposuredelay")));
@property (class, readonly) THETACThetaRepositoryOptionNameEnum *exposureprogram __attribute__((swift_name("exposureprogram")));
@property (class, readonly) THETACThetaRepositoryOptionNameEnum *fileformat __attribute__((swift_name("fileformat")));
@property (class, readonly) THETACThetaRepositoryOptionNameEnum *filter __attribute__((swift_name("filter")));
@property (class, readonly) THETACThetaRepositoryOptionNameEnum *gpsinfo __attribute__((swift_name("gpsinfo")));
@property (class, readonly) THETACThetaRepositoryOptionNameEnum *isgpson __attribute__((swift_name("isgpson")));
@property (class, readonly) THETACThetaRepositoryOptionNameEnum *iso __attribute__((swift_name("iso")));
@property (class, readonly) THETACThetaRepositoryOptionNameEnum *isoautohighlimit __attribute__((swift_name("isoautohighlimit")));
@property (class, readonly) THETACThetaRepositoryOptionNameEnum *language __attribute__((swift_name("language")));
@property (class, readonly) THETACThetaRepositoryOptionNameEnum *maxrecordabletime __attribute__((swift_name("maxrecordabletime")));
@property (class, readonly) THETACThetaRepositoryOptionNameEnum *networktype __attribute__((swift_name("networktype")));
@property (class, readonly) THETACThetaRepositoryOptionNameEnum *offdelay __attribute__((swift_name("offdelay")));
@property (class, readonly) THETACThetaRepositoryOptionNameEnum *password __attribute__((swift_name("password")));
@property (class, readonly) THETACThetaRepositoryOptionNameEnum *powersaving __attribute__((swift_name("powersaving")));
@property (class, readonly) THETACThetaRepositoryOptionNameEnum *preset __attribute__((swift_name("preset")));
@property (class, readonly) THETACThetaRepositoryOptionNameEnum *previewformat __attribute__((swift_name("previewformat")));
@property (class, readonly) THETACThetaRepositoryOptionNameEnum *proxy __attribute__((swift_name("proxy")));
@property (class, readonly) THETACThetaRepositoryOptionNameEnum *remainingpictures __attribute__((swift_name("remainingpictures")));
@property (class, readonly) THETACThetaRepositoryOptionNameEnum *remainingvideoseconds __attribute__((swift_name("remainingvideoseconds")));
@property (class, readonly) THETACThetaRepositoryOptionNameEnum *remainingspace __attribute__((swift_name("remainingspace")));
@property (class, readonly) THETACThetaRepositoryOptionNameEnum *sleepdelay __attribute__((swift_name("sleepdelay")));
@property (class, readonly) THETACThetaRepositoryOptionNameEnum *totalspace __attribute__((swift_name("totalspace")));
@property (class, readonly) THETACThetaRepositoryOptionNameEnum *shootingmethod __attribute__((swift_name("shootingmethod")));
@property (class, readonly) THETACThetaRepositoryOptionNameEnum *shutterspeed __attribute__((swift_name("shutterspeed")));
@property (class, readonly) THETACThetaRepositoryOptionNameEnum *shuttervolume __attribute__((swift_name("shuttervolume")));
@property (class, readonly) THETACThetaRepositoryOptionNameEnum *timeshift __attribute__((swift_name("timeshift")));
@property (class, readonly) THETACThetaRepositoryOptionNameEnum *username __attribute__((swift_name("username")));
@property (class, readonly) THETACThetaRepositoryOptionNameEnum *whitebalance __attribute__((swift_name("whitebalance")));
@property (class, readonly) THETACThetaRepositoryOptionNameEnum *whitebalanceautostrength __attribute__((swift_name("whitebalanceautostrength")));
@property (class, readonly) THETACThetaRepositoryOptionNameEnum *wlanfrequency __attribute__((swift_name("wlanfrequency")));
+ (THETACKotlinArray<THETACThetaRepositoryOptionNameEnum *> *)values __attribute__((swift_name("values()")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@property (readonly) id<THETACKotlinKClass> valueType __attribute__((swift_name("valueType")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.Options")))
@interface THETACThetaRepositoryOptions : THETACBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithOptions:(THETACOptions *)options __attribute__((swift_name("init(options:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithAiAutoThumbnail:(THETACThetaRepositoryAiAutoThumbnailEnum * _Nullable)aiAutoThumbnail aperture:(THETACThetaRepositoryApertureEnum * _Nullable)aperture bitrate:(id<THETACThetaRepositoryBitrate> _Nullable)bitrate bluetoothPower:(THETACThetaRepositoryBluetoothPowerEnum * _Nullable)bluetoothPower burstMode:(THETACThetaRepositoryBurstModeEnum * _Nullable)burstMode burstOption:(THETACThetaRepositoryBurstOption * _Nullable)burstOption cameraControlSource:(THETACThetaRepositoryCameraControlSourceEnum * _Nullable)cameraControlSource cameraMode:(THETACThetaRepositoryCameraModeEnum * _Nullable)cameraMode captureInterval:(THETACInt * _Nullable)captureInterval captureMode:(THETACThetaRepositoryCaptureModeEnum * _Nullable)captureMode captureNumber:(THETACInt * _Nullable)captureNumber colorTemperature:(THETACInt * _Nullable)colorTemperature compositeShootingOutputInterval:(THETACInt * _Nullable)compositeShootingOutputInterval compositeShootingTime:(THETACInt * _Nullable)compositeShootingTime continuousNumber:(THETACThetaRepositoryContinuousNumberEnum * _Nullable)continuousNumber dateTimeZone:(NSString * _Nullable)dateTimeZone exposureCompensation:(THETACThetaRepositoryExposureCompensationEnum * _Nullable)exposureCompensation exposureDelay:(THETACThetaRepositoryExposureDelayEnum * _Nullable)exposureDelay exposureProgram:(THETACThetaRepositoryExposureProgramEnum * _Nullable)exposureProgram fileFormat:(THETACThetaRepositoryFileFormatEnum * _Nullable)fileFormat filter:(THETACThetaRepositoryFilterEnum * _Nullable)filter gpsInfo:(THETACThetaRepositoryGpsInfo * _Nullable)gpsInfo isGpsOn:(THETACBoolean * _Nullable)isGpsOn iso:(THETACThetaRepositoryIsoEnum * _Nullable)iso isoAutoHighLimit:(THETACThetaRepositoryIsoAutoHighLimitEnum * _Nullable)isoAutoHighLimit language:(THETACThetaRepositoryLanguageEnum * _Nullable)language maxRecordableTime:(THETACThetaRepositoryMaxRecordableTimeEnum * _Nullable)maxRecordableTime networkType:(THETACThetaRepositoryNetworkTypeEnum * _Nullable)networkType offDelay:(id<THETACThetaRepositoryOffDelay> _Nullable)offDelay password:(NSString * _Nullable)password powerSaving:(THETACThetaRepositoryPowerSavingEnum * _Nullable)powerSaving preset:(THETACThetaRepositoryPresetEnum * _Nullable)preset previewFormat:(THETACThetaRepositoryPreviewFormatEnum * _Nullable)previewFormat proxy:(THETACThetaRepositoryProxy * _Nullable)proxy remainingPictures:(THETACInt * _Nullable)remainingPictures remainingVideoSeconds:(THETACInt * _Nullable)remainingVideoSeconds remainingSpace:(THETACLong * _Nullable)remainingSpace shootingMethod:(THETACThetaRepositoryShootingMethodEnum * _Nullable)shootingMethod shutterSpeed:(THETACThetaRepositoryShutterSpeedEnum * _Nullable)shutterSpeed sleepDelay:(id<THETACThetaRepositorySleepDelay> _Nullable)sleepDelay timeShift:(THETACThetaRepositoryTimeShiftSetting * _Nullable)timeShift totalSpace:(THETACLong * _Nullable)totalSpace shutterVolume:(THETACInt * _Nullable)shutterVolume username:(NSString * _Nullable)username whiteBalance:(THETACThetaRepositoryWhiteBalanceEnum * _Nullable)whiteBalance whiteBalanceAutoStrength:(THETACThetaRepositoryWhiteBalanceAutoStrengthEnum * _Nullable)whiteBalanceAutoStrength wlanFrequency:(THETACThetaRepositoryWlanFrequencyEnum * _Nullable)wlanFrequency __attribute__((swift_name("init(aiAutoThumbnail:aperture:bitrate:bluetoothPower:burstMode:burstOption:cameraControlSource:cameraMode:captureInterval:captureMode:captureNumber:colorTemperature:compositeShootingOutputInterval:compositeShootingTime:continuousNumber:dateTimeZone:exposureCompensation:exposureDelay:exposureProgram:fileFormat:filter:gpsInfo:isGpsOn:iso:isoAutoHighLimit:language:maxRecordableTime:networkType:offDelay:password:powerSaving:preset:previewFormat:proxy:remainingPictures:remainingVideoSeconds:remainingSpace:shootingMethod:shutterSpeed:sleepDelay:timeShift:totalSpace:shutterVolume:username:whiteBalance:whiteBalanceAutoStrength:wlanFrequency:)"))) __attribute__((objc_designated_initializer));
- (THETACThetaRepositoryAiAutoThumbnailEnum * _Nullable)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACThetaRepositoryCaptureModeEnum * _Nullable)component10 __attribute__((swift_name("component10()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACInt * _Nullable)component11 __attribute__((swift_name("component11()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACInt * _Nullable)component12 __attribute__((swift_name("component12()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACInt * _Nullable)component13 __attribute__((swift_name("component13()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACInt * _Nullable)component14 __attribute__((swift_name("component14()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACThetaRepositoryContinuousNumberEnum * _Nullable)component15 __attribute__((swift_name("component15()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component16 __attribute__((swift_name("component16()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACThetaRepositoryExposureCompensationEnum * _Nullable)component17 __attribute__((swift_name("component17()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACThetaRepositoryExposureDelayEnum * _Nullable)component18 __attribute__((swift_name("component18()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACThetaRepositoryExposureProgramEnum * _Nullable)component19 __attribute__((swift_name("component19()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACThetaRepositoryApertureEnum * _Nullable)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACThetaRepositoryFileFormatEnum * _Nullable)component20 __attribute__((swift_name("component20()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACThetaRepositoryFilterEnum * _Nullable)component21 __attribute__((swift_name("component21()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACThetaRepositoryGpsInfo * _Nullable)component22 __attribute__((swift_name("component22()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACBoolean * _Nullable)component23 __attribute__((swift_name("component23()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACThetaRepositoryIsoEnum * _Nullable)component24 __attribute__((swift_name("component24()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACThetaRepositoryIsoAutoHighLimitEnum * _Nullable)component25 __attribute__((swift_name("component25()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACThetaRepositoryLanguageEnum * _Nullable)component26 __attribute__((swift_name("component26()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACThetaRepositoryMaxRecordableTimeEnum * _Nullable)component27 __attribute__((swift_name("component27()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACThetaRepositoryNetworkTypeEnum * _Nullable)component28 __attribute__((swift_name("component28()"))) __attribute__((deprecated("use corresponding property instead")));
- (id<THETACThetaRepositoryOffDelay> _Nullable)component29 __attribute__((swift_name("component29()"))) __attribute__((deprecated("use corresponding property instead")));
- (id<THETACThetaRepositoryBitrate> _Nullable)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component30 __attribute__((swift_name("component30()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACThetaRepositoryPowerSavingEnum * _Nullable)component31 __attribute__((swift_name("component31()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACThetaRepositoryPresetEnum * _Nullable)component32 __attribute__((swift_name("component32()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACThetaRepositoryPreviewFormatEnum * _Nullable)component33 __attribute__((swift_name("component33()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACThetaRepositoryProxy * _Nullable)component34 __attribute__((swift_name("component34()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACInt * _Nullable)component35 __attribute__((swift_name("component35()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACInt * _Nullable)component36 __attribute__((swift_name("component36()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACLong * _Nullable)component37 __attribute__((swift_name("component37()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACThetaRepositoryShootingMethodEnum * _Nullable)component38 __attribute__((swift_name("component38()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACThetaRepositoryShutterSpeedEnum * _Nullable)component39 __attribute__((swift_name("component39()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACThetaRepositoryBluetoothPowerEnum * _Nullable)component4 __attribute__((swift_name("component4()"))) __attribute__((deprecated("use corresponding property instead")));
- (id<THETACThetaRepositorySleepDelay> _Nullable)component40 __attribute__((swift_name("component40()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACThetaRepositoryTimeShiftSetting * _Nullable)component41 __attribute__((swift_name("component41()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACLong * _Nullable)component42 __attribute__((swift_name("component42()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACInt * _Nullable)component43 __attribute__((swift_name("component43()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component44 __attribute__((swift_name("component44()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACThetaRepositoryWhiteBalanceEnum * _Nullable)component45 __attribute__((swift_name("component45()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACThetaRepositoryWhiteBalanceAutoStrengthEnum * _Nullable)component46 __attribute__((swift_name("component46()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACThetaRepositoryWlanFrequencyEnum * _Nullable)component47 __attribute__((swift_name("component47()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACThetaRepositoryBurstModeEnum * _Nullable)component5 __attribute__((swift_name("component5()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACThetaRepositoryBurstOption * _Nullable)component6 __attribute__((swift_name("component6()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACThetaRepositoryCameraControlSourceEnum * _Nullable)component7 __attribute__((swift_name("component7()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACThetaRepositoryCameraModeEnum * _Nullable)component8 __attribute__((swift_name("component8()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACInt * _Nullable)component9 __attribute__((swift_name("component9()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACThetaRepositoryOptions *)doCopyAiAutoThumbnail:(THETACThetaRepositoryAiAutoThumbnailEnum * _Nullable)aiAutoThumbnail aperture:(THETACThetaRepositoryApertureEnum * _Nullable)aperture bitrate:(id<THETACThetaRepositoryBitrate> _Nullable)bitrate bluetoothPower:(THETACThetaRepositoryBluetoothPowerEnum * _Nullable)bluetoothPower burstMode:(THETACThetaRepositoryBurstModeEnum * _Nullable)burstMode burstOption:(THETACThetaRepositoryBurstOption * _Nullable)burstOption cameraControlSource:(THETACThetaRepositoryCameraControlSourceEnum * _Nullable)cameraControlSource cameraMode:(THETACThetaRepositoryCameraModeEnum * _Nullable)cameraMode captureInterval:(THETACInt * _Nullable)captureInterval captureMode:(THETACThetaRepositoryCaptureModeEnum * _Nullable)captureMode captureNumber:(THETACInt * _Nullable)captureNumber colorTemperature:(THETACInt * _Nullable)colorTemperature compositeShootingOutputInterval:(THETACInt * _Nullable)compositeShootingOutputInterval compositeShootingTime:(THETACInt * _Nullable)compositeShootingTime continuousNumber:(THETACThetaRepositoryContinuousNumberEnum * _Nullable)continuousNumber dateTimeZone:(NSString * _Nullable)dateTimeZone exposureCompensation:(THETACThetaRepositoryExposureCompensationEnum * _Nullable)exposureCompensation exposureDelay:(THETACThetaRepositoryExposureDelayEnum * _Nullable)exposureDelay exposureProgram:(THETACThetaRepositoryExposureProgramEnum * _Nullable)exposureProgram fileFormat:(THETACThetaRepositoryFileFormatEnum * _Nullable)fileFormat filter:(THETACThetaRepositoryFilterEnum * _Nullable)filter gpsInfo:(THETACThetaRepositoryGpsInfo * _Nullable)gpsInfo isGpsOn:(THETACBoolean * _Nullable)isGpsOn iso:(THETACThetaRepositoryIsoEnum * _Nullable)iso isoAutoHighLimit:(THETACThetaRepositoryIsoAutoHighLimitEnum * _Nullable)isoAutoHighLimit language:(THETACThetaRepositoryLanguageEnum * _Nullable)language maxRecordableTime:(THETACThetaRepositoryMaxRecordableTimeEnum * _Nullable)maxRecordableTime networkType:(THETACThetaRepositoryNetworkTypeEnum * _Nullable)networkType offDelay:(id<THETACThetaRepositoryOffDelay> _Nullable)offDelay password:(NSString * _Nullable)password powerSaving:(THETACThetaRepositoryPowerSavingEnum * _Nullable)powerSaving preset:(THETACThetaRepositoryPresetEnum * _Nullable)preset previewFormat:(THETACThetaRepositoryPreviewFormatEnum * _Nullable)previewFormat proxy:(THETACThetaRepositoryProxy * _Nullable)proxy remainingPictures:(THETACInt * _Nullable)remainingPictures remainingVideoSeconds:(THETACInt * _Nullable)remainingVideoSeconds remainingSpace:(THETACLong * _Nullable)remainingSpace shootingMethod:(THETACThetaRepositoryShootingMethodEnum * _Nullable)shootingMethod shutterSpeed:(THETACThetaRepositoryShutterSpeedEnum * _Nullable)shutterSpeed sleepDelay:(id<THETACThetaRepositorySleepDelay> _Nullable)sleepDelay timeShift:(THETACThetaRepositoryTimeShiftSetting * _Nullable)timeShift totalSpace:(THETACLong * _Nullable)totalSpace shutterVolume:(THETACInt * _Nullable)shutterVolume username:(NSString * _Nullable)username whiteBalance:(THETACThetaRepositoryWhiteBalanceEnum * _Nullable)whiteBalance whiteBalanceAutoStrength:(THETACThetaRepositoryWhiteBalanceAutoStrengthEnum * _Nullable)whiteBalanceAutoStrength wlanFrequency:(THETACThetaRepositoryWlanFrequencyEnum * _Nullable)wlanFrequency __attribute__((swift_name("doCopy(aiAutoThumbnail:aperture:bitrate:bluetoothPower:burstMode:burstOption:cameraControlSource:cameraMode:captureInterval:captureMode:captureNumber:colorTemperature:compositeShootingOutputInterval:compositeShootingTime:continuousNumber:dateTimeZone:exposureCompensation:exposureDelay:exposureProgram:fileFormat:filter:gpsInfo:isGpsOn:iso:isoAutoHighLimit:language:maxRecordableTime:networkType:offDelay:password:powerSaving:preset:previewFormat:proxy:remainingPictures:remainingVideoSeconds:remainingSpace:shootingMethod:shutterSpeed:sleepDelay:timeShift:totalSpace:shutterVolume:username:whiteBalance:whiteBalanceAutoStrength:wlanFrequency:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (id _Nullable)getValueName:(THETACThetaRepositoryOptionNameEnum *)name error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("getValue(name:)"))) __attribute__((swift_error(nonnull_error)));
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (BOOL)setValueName:(THETACThetaRepositoryOptionNameEnum *)name value:(id)value error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("setValue(name:value:)")));
- (THETACOptions *)toOptions __attribute__((swift_name("toOptions()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property THETACThetaRepositoryAiAutoThumbnailEnum * _Nullable aiAutoThumbnail __attribute__((swift_name("aiAutoThumbnail")));
@property THETACThetaRepositoryApertureEnum * _Nullable aperture __attribute__((swift_name("aperture")));
@property id<THETACThetaRepositoryBitrate> _Nullable bitrate __attribute__((swift_name("bitrate")));
@property THETACThetaRepositoryBluetoothPowerEnum * _Nullable bluetoothPower __attribute__((swift_name("bluetoothPower")));
@property THETACThetaRepositoryBurstModeEnum * _Nullable burstMode __attribute__((swift_name("burstMode")));
@property THETACThetaRepositoryBurstOption * _Nullable burstOption __attribute__((swift_name("burstOption")));
@property THETACThetaRepositoryCameraControlSourceEnum * _Nullable cameraControlSource __attribute__((swift_name("cameraControlSource")));
@property THETACThetaRepositoryCameraModeEnum * _Nullable cameraMode __attribute__((swift_name("cameraMode")));
@property THETACInt * _Nullable captureInterval __attribute__((swift_name("captureInterval")));
@property THETACThetaRepositoryCaptureModeEnum * _Nullable captureMode __attribute__((swift_name("captureMode")));
@property THETACInt * _Nullable captureNumber __attribute__((swift_name("captureNumber")));
@property THETACInt * _Nullable colorTemperature __attribute__((swift_name("colorTemperature")));
@property THETACInt * _Nullable compositeShootingOutputInterval __attribute__((swift_name("compositeShootingOutputInterval")));
@property THETACInt * _Nullable compositeShootingTime __attribute__((swift_name("compositeShootingTime")));
@property THETACThetaRepositoryContinuousNumberEnum * _Nullable continuousNumber __attribute__((swift_name("continuousNumber")));
@property NSString * _Nullable dateTimeZone __attribute__((swift_name("dateTimeZone")));
@property THETACThetaRepositoryExposureCompensationEnum * _Nullable exposureCompensation __attribute__((swift_name("exposureCompensation")));
@property THETACThetaRepositoryExposureDelayEnum * _Nullable exposureDelay __attribute__((swift_name("exposureDelay")));
@property THETACThetaRepositoryExposureProgramEnum * _Nullable exposureProgram __attribute__((swift_name("exposureProgram")));
@property THETACThetaRepositoryFileFormatEnum * _Nullable fileFormat __attribute__((swift_name("fileFormat")));
@property THETACThetaRepositoryFilterEnum * _Nullable filter __attribute__((swift_name("filter")));
@property THETACThetaRepositoryGpsInfo * _Nullable gpsInfo __attribute__((swift_name("gpsInfo")));
@property THETACBoolean * _Nullable isGpsOn __attribute__((swift_name("isGpsOn")));
@property THETACThetaRepositoryIsoEnum * _Nullable iso __attribute__((swift_name("iso")));
@property THETACThetaRepositoryIsoAutoHighLimitEnum * _Nullable isoAutoHighLimit __attribute__((swift_name("isoAutoHighLimit")));
@property THETACThetaRepositoryLanguageEnum * _Nullable language __attribute__((swift_name("language")));
@property THETACThetaRepositoryMaxRecordableTimeEnum * _Nullable maxRecordableTime __attribute__((swift_name("maxRecordableTime")));
@property THETACThetaRepositoryNetworkTypeEnum * _Nullable networkType __attribute__((swift_name("networkType")));
@property id<THETACThetaRepositoryOffDelay> _Nullable offDelay __attribute__((swift_name("offDelay")));
@property NSString * _Nullable password __attribute__((swift_name("password")));
@property THETACThetaRepositoryPowerSavingEnum * _Nullable powerSaving __attribute__((swift_name("powerSaving")));
@property THETACThetaRepositoryPresetEnum * _Nullable preset __attribute__((swift_name("preset")));
@property THETACThetaRepositoryPreviewFormatEnum * _Nullable previewFormat __attribute__((swift_name("previewFormat")));
@property THETACThetaRepositoryProxy * _Nullable proxy __attribute__((swift_name("proxy")));
@property THETACInt * _Nullable remainingPictures __attribute__((swift_name("remainingPictures")));
@property THETACLong * _Nullable remainingSpace __attribute__((swift_name("remainingSpace")));
@property THETACInt * _Nullable remainingVideoSeconds __attribute__((swift_name("remainingVideoSeconds")));
@property THETACThetaRepositoryShootingMethodEnum * _Nullable shootingMethod __attribute__((swift_name("shootingMethod")));
@property THETACThetaRepositoryShutterSpeedEnum * _Nullable shutterSpeed __attribute__((swift_name("shutterSpeed")));
@property THETACInt * _Nullable shutterVolume __attribute__((swift_name("shutterVolume")));
@property id<THETACThetaRepositorySleepDelay> _Nullable sleepDelay __attribute__((swift_name("sleepDelay")));
@property THETACThetaRepositoryTimeShiftSetting * _Nullable timeShift __attribute__((swift_name("timeShift")));
@property THETACLong * _Nullable totalSpace __attribute__((swift_name("totalSpace")));
@property NSString * _Nullable username __attribute__((swift_name("username")));
@property THETACThetaRepositoryWhiteBalanceEnum * _Nullable whiteBalance __attribute__((swift_name("whiteBalance")));
@property THETACThetaRepositoryWhiteBalanceAutoStrengthEnum * _Nullable whiteBalanceAutoStrength __attribute__((swift_name("whiteBalanceAutoStrength")));
@property THETACThetaRepositoryWlanFrequencyEnum * _Nullable wlanFrequency __attribute__((swift_name("wlanFrequency")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.PhotoFileFormatEnum")))
@interface THETACThetaRepositoryPhotoFileFormatEnum : THETACKotlinEnum<THETACThetaRepositoryPhotoFileFormatEnum *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) THETACThetaRepositoryPhotoFileFormatEnumCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) THETACThetaRepositoryPhotoFileFormatEnum *image2k __attribute__((swift_name("image2k")));
@property (class, readonly) THETACThetaRepositoryPhotoFileFormatEnum *image5k __attribute__((swift_name("image5k")));
@property (class, readonly) THETACThetaRepositoryPhotoFileFormatEnum *image67k __attribute__((swift_name("image67k")));
@property (class, readonly) THETACThetaRepositoryPhotoFileFormatEnum *rawP67k __attribute__((swift_name("rawP67k")));
@property (class, readonly) THETACThetaRepositoryPhotoFileFormatEnum *image55k __attribute__((swift_name("image55k")));
@property (class, readonly) THETACThetaRepositoryPhotoFileFormatEnum *image11k __attribute__((swift_name("image11k")));
+ (THETACKotlinArray<THETACThetaRepositoryPhotoFileFormatEnum *> *)values __attribute__((swift_name("values()")));
@property (readonly) THETACThetaRepositoryFileFormatEnum *fileFormat __attribute__((swift_name("fileFormat")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.PhotoFileFormatEnumCompanion")))
@interface THETACThetaRepositoryPhotoFileFormatEnumCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACThetaRepositoryPhotoFileFormatEnumCompanion *shared __attribute__((swift_name("shared")));
- (THETACThetaRepositoryPhotoFileFormatEnum * _Nullable)getFileformat:(THETACThetaRepositoryFileFormatEnum *)fileformat __attribute__((swift_name("get(fileformat:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.PluginInfo")))
@interface THETACThetaRepositoryPluginInfo : THETACBase
- (instancetype)initWithPlugin:(THETACPlugin *)plugin __attribute__((swift_name("init(plugin:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithName:(NSString *)name packageName:(NSString *)packageName version:(NSString *)version isPreInstalled:(BOOL)isPreInstalled isRunning:(BOOL)isRunning isForeground:(BOOL)isForeground isBoot:(BOOL)isBoot hasWebServer:(BOOL)hasWebServer exitStatus:(NSString *)exitStatus message:(NSString *)message __attribute__((swift_name("init(name:packageName:version:isPreInstalled:isRunning:isForeground:isBoot:hasWebServer:exitStatus:message:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component10 __attribute__((swift_name("component10()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (BOOL)component4 __attribute__((swift_name("component4()"))) __attribute__((deprecated("use corresponding property instead")));
- (BOOL)component5 __attribute__((swift_name("component5()"))) __attribute__((deprecated("use corresponding property instead")));
- (BOOL)component6 __attribute__((swift_name("component6()"))) __attribute__((deprecated("use corresponding property instead")));
- (BOOL)component7 __attribute__((swift_name("component7()"))) __attribute__((deprecated("use corresponding property instead")));
- (BOOL)component8 __attribute__((swift_name("component8()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component9 __attribute__((swift_name("component9()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACThetaRepositoryPluginInfo *)doCopyName:(NSString *)name packageName:(NSString *)packageName version:(NSString *)version isPreInstalled:(BOOL)isPreInstalled isRunning:(BOOL)isRunning isForeground:(BOOL)isForeground isBoot:(BOOL)isBoot hasWebServer:(BOOL)hasWebServer exitStatus:(NSString *)exitStatus message:(NSString *)message __attribute__((swift_name("doCopy(name:packageName:version:isPreInstalled:isRunning:isForeground:isBoot:hasWebServer:exitStatus:message:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *exitStatus __attribute__((swift_name("exitStatus")));
@property (readonly) BOOL hasWebServer __attribute__((swift_name("hasWebServer")));
@property (readonly) BOOL isBoot __attribute__((swift_name("isBoot")));
@property (readonly) BOOL isForeground __attribute__((swift_name("isForeground")));
@property (readonly) BOOL isPreInstalled __attribute__((swift_name("isPreInstalled")));
@property (readonly) BOOL isRunning __attribute__((swift_name("isRunning")));
@property (readonly) NSString *message __attribute__((swift_name("message")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSString *packageName __attribute__((swift_name("packageName")));
@property (readonly) NSString *version __attribute__((swift_name("version")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.PowerSavingEnum")))
@interface THETACThetaRepositoryPowerSavingEnum : THETACKotlinEnum<THETACThetaRepositoryPowerSavingEnum *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) THETACThetaRepositoryPowerSavingEnumCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) THETACThetaRepositoryPowerSavingEnum *on __attribute__((swift_name("on")));
@property (class, readonly) THETACThetaRepositoryPowerSavingEnum *off __attribute__((swift_name("off")));
+ (THETACKotlinArray<THETACThetaRepositoryPowerSavingEnum *> *)values __attribute__((swift_name("values()")));
@property (readonly) THETACPowerSaving *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.PowerSavingEnumCompanion")))
@interface THETACThetaRepositoryPowerSavingEnumCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACThetaRepositoryPowerSavingEnumCompanion *shared __attribute__((swift_name("shared")));
- (THETACThetaRepositoryPowerSavingEnum * _Nullable)getValue:(THETACPowerSaving *)value __attribute__((swift_name("get(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.PresetEnum")))
@interface THETACThetaRepositoryPresetEnum : THETACKotlinEnum<THETACThetaRepositoryPresetEnum *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) THETACThetaRepositoryPresetEnumCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) THETACThetaRepositoryPresetEnum *face __attribute__((swift_name("face")));
@property (class, readonly) THETACThetaRepositoryPresetEnum *nightView __attribute__((swift_name("nightView")));
@property (class, readonly) THETACThetaRepositoryPresetEnum *lensByLensExposure __attribute__((swift_name("lensByLensExposure")));
@property (class, readonly) THETACThetaRepositoryPresetEnum *room __attribute__((swift_name("room")));
+ (THETACKotlinArray<THETACThetaRepositoryPresetEnum *> *)values __attribute__((swift_name("values()")));
@property (readonly) THETACPreset *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.PresetEnumCompanion")))
@interface THETACThetaRepositoryPresetEnumCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACThetaRepositoryPresetEnumCompanion *shared __attribute__((swift_name("shared")));
- (THETACThetaRepositoryPresetEnum * _Nullable)getValue:(THETACPreset *)value __attribute__((swift_name("get(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.PreviewFormatEnum")))
@interface THETACThetaRepositoryPreviewFormatEnum : THETACKotlinEnum<THETACThetaRepositoryPreviewFormatEnum *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) THETACThetaRepositoryPreviewFormatEnumCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) THETACThetaRepositoryPreviewFormatEnum *w1024H512F30 __attribute__((swift_name("w1024H512F30")));
@property (class, readonly) THETACThetaRepositoryPreviewFormatEnum *w1024H512F15 __attribute__((swift_name("w1024H512F15")));
@property (class, readonly) THETACThetaRepositoryPreviewFormatEnum *w512H512F30 __attribute__((swift_name("w512H512F30")));
@property (class, readonly) THETACThetaRepositoryPreviewFormatEnum *w1920H960F8 __attribute__((swift_name("w1920H960F8")));
@property (class, readonly) THETACThetaRepositoryPreviewFormatEnum *w1024H512F8 __attribute__((swift_name("w1024H512F8")));
@property (class, readonly) THETACThetaRepositoryPreviewFormatEnum *w640H320F30 __attribute__((swift_name("w640H320F30")));
@property (class, readonly) THETACThetaRepositoryPreviewFormatEnum *w640H320F8 __attribute__((swift_name("w640H320F8")));
@property (class, readonly) THETACThetaRepositoryPreviewFormatEnum *w640H320F10 __attribute__((swift_name("w640H320F10")));
+ (THETACKotlinArray<THETACThetaRepositoryPreviewFormatEnum *> *)values __attribute__((swift_name("values()")));
- (THETACPreviewFormat *)toPreviewFormat __attribute__((swift_name("toPreviewFormat()")));
@property (readonly) int32_t framerate __attribute__((swift_name("framerate")));
@property (readonly) int32_t height __attribute__((swift_name("height")));
@property (readonly) int32_t width __attribute__((swift_name("width")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.PreviewFormatEnumCompanion")))
@interface THETACThetaRepositoryPreviewFormatEnumCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACThetaRepositoryPreviewFormatEnumCompanion *shared __attribute__((swift_name("shared")));
- (THETACThetaRepositoryPreviewFormatEnum * _Nullable)getValue:(THETACPreviewFormat *)value __attribute__((swift_name("get(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.ProjectionTypeEnum")))
@interface THETACThetaRepositoryProjectionTypeEnum : THETACKotlinEnum<THETACThetaRepositoryProjectionTypeEnum *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) THETACThetaRepositoryProjectionTypeEnumCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) THETACThetaRepositoryProjectionTypeEnum *equirectangular __attribute__((swift_name("equirectangular")));
@property (class, readonly) THETACThetaRepositoryProjectionTypeEnum *dualFisheye __attribute__((swift_name("dualFisheye")));
@property (class, readonly) THETACThetaRepositoryProjectionTypeEnum *fisheye __attribute__((swift_name("fisheye")));
+ (THETACKotlinArray<THETACThetaRepositoryProjectionTypeEnum *> *)values __attribute__((swift_name("values()")));
@property (readonly) THETAC_ProjectionType *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.ProjectionTypeEnumCompanion")))
@interface THETACThetaRepositoryProjectionTypeEnumCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACThetaRepositoryProjectionTypeEnumCompanion *shared __attribute__((swift_name("shared")));
- (THETACThetaRepositoryProjectionTypeEnum * _Nullable)getValue:(THETAC_ProjectionType *)value __attribute__((swift_name("get(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.Proxy")))
@interface THETACThetaRepositoryProxy : THETACBase
- (instancetype)initWithUse:(BOOL)use __attribute__((swift_name("init(use:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithInfo:(THETACProxy *)info __attribute__((swift_name("init(info:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithUse:(BOOL)use url:(NSString * _Nullable)url port:(THETACInt * _Nullable)port userid:(NSString * _Nullable)userid password:(NSString * _Nullable)password __attribute__((swift_name("init(use:url:port:userid:password:)"))) __attribute__((objc_designated_initializer));
- (BOOL)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACInt * _Nullable)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component5 __attribute__((swift_name("component5()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACThetaRepositoryProxy *)doCopyUse:(BOOL)use url:(NSString * _Nullable)url port:(THETACInt * _Nullable)port userid:(NSString * _Nullable)userid password:(NSString * _Nullable)password __attribute__((swift_name("doCopy(use:url:port:userid:password:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
- (THETACProxy *)toTransferredProxy __attribute__((swift_name("toTransferredProxy()")));
@property (readonly) NSString * _Nullable password __attribute__((swift_name("password")));
@property (readonly) THETACInt * _Nullable port __attribute__((swift_name("port")));
@property (readonly) NSString * _Nullable url __attribute__((swift_name("url")));
@property (readonly) BOOL use __attribute__((swift_name("use")));
@property (readonly) NSString * _Nullable userid __attribute__((swift_name("userid")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.ShootingFunctionEnum")))
@interface THETACThetaRepositoryShootingFunctionEnum : THETACKotlinEnum<THETACThetaRepositoryShootingFunctionEnum *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) THETACThetaRepositoryShootingFunctionEnumCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) THETACThetaRepositoryShootingFunctionEnum *normal __attribute__((swift_name("normal")));
@property (class, readonly) THETACThetaRepositoryShootingFunctionEnum *selfTimer __attribute__((swift_name("selfTimer")));
@property (class, readonly) THETACThetaRepositoryShootingFunctionEnum *mySetting __attribute__((swift_name("mySetting")));
+ (THETACKotlinArray<THETACThetaRepositoryShootingFunctionEnum *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.ShootingFunctionEnumCompanion")))
@interface THETACThetaRepositoryShootingFunctionEnumCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACThetaRepositoryShootingFunctionEnumCompanion *shared __attribute__((swift_name("shared")));
- (THETACThetaRepositoryShootingFunctionEnum *)getShootingFunction:(THETACShootingFunction *)shootingFunction __attribute__((swift_name("get(shootingFunction:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.ShootingMethodEnum")))
@interface THETACThetaRepositoryShootingMethodEnum : THETACKotlinEnum<THETACThetaRepositoryShootingMethodEnum *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) THETACThetaRepositoryShootingMethodEnumCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) THETACThetaRepositoryShootingMethodEnum *normal __attribute__((swift_name("normal")));
@property (class, readonly) THETACThetaRepositoryShootingMethodEnum *interval __attribute__((swift_name("interval")));
@property (class, readonly) THETACThetaRepositoryShootingMethodEnum *moveInterval __attribute__((swift_name("moveInterval")));
@property (class, readonly) THETACThetaRepositoryShootingMethodEnum *fixedInterval __attribute__((swift_name("fixedInterval")));
@property (class, readonly) THETACThetaRepositoryShootingMethodEnum *bracket __attribute__((swift_name("bracket")));
@property (class, readonly) THETACThetaRepositoryShootingMethodEnum *composite __attribute__((swift_name("composite")));
@property (class, readonly) THETACThetaRepositoryShootingMethodEnum *continuous __attribute__((swift_name("continuous")));
@property (class, readonly) THETACThetaRepositoryShootingMethodEnum *timeShift __attribute__((swift_name("timeShift")));
@property (class, readonly) THETACThetaRepositoryShootingMethodEnum *burst __attribute__((swift_name("burst")));
+ (THETACKotlinArray<THETACThetaRepositoryShootingMethodEnum *> *)values __attribute__((swift_name("values()")));
@property (readonly) THETACShootingMethod *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.ShootingMethodEnumCompanion")))
@interface THETACThetaRepositoryShootingMethodEnumCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACThetaRepositoryShootingMethodEnumCompanion *shared __attribute__((swift_name("shared")));
- (THETACThetaRepositoryShootingMethodEnum * _Nullable)getValue:(THETACShootingMethod *)value __attribute__((swift_name("get(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.ShutterSpeedEnum")))
@interface THETACThetaRepositoryShutterSpeedEnum : THETACKotlinEnum<THETACThetaRepositoryShutterSpeedEnum *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) THETACThetaRepositoryShutterSpeedEnumCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) THETACThetaRepositoryShutterSpeedEnum *shutterSpeedAuto __attribute__((swift_name("shutterSpeedAuto")));
@property (class, readonly) THETACThetaRepositoryShutterSpeedEnum *shutterSpeed60 __attribute__((swift_name("shutterSpeed60")));
@property (class, readonly) THETACThetaRepositoryShutterSpeedEnum *shutterSpeed50 __attribute__((swift_name("shutterSpeed50")));
@property (class, readonly) THETACThetaRepositoryShutterSpeedEnum *shutterSpeed40 __attribute__((swift_name("shutterSpeed40")));
@property (class, readonly) THETACThetaRepositoryShutterSpeedEnum *shutterSpeed30 __attribute__((swift_name("shutterSpeed30")));
@property (class, readonly) THETACThetaRepositoryShutterSpeedEnum *shutterSpeed25 __attribute__((swift_name("shutterSpeed25")));
@property (class, readonly) THETACThetaRepositoryShutterSpeedEnum *shutterSpeed20 __attribute__((swift_name("shutterSpeed20")));
@property (class, readonly) THETACThetaRepositoryShutterSpeedEnum *shutterSpeed15 __attribute__((swift_name("shutterSpeed15")));
@property (class, readonly) THETACThetaRepositoryShutterSpeedEnum *shutterSpeed13 __attribute__((swift_name("shutterSpeed13")));
@property (class, readonly) THETACThetaRepositoryShutterSpeedEnum *shutterSpeed10 __attribute__((swift_name("shutterSpeed10")));
@property (class, readonly) THETACThetaRepositoryShutterSpeedEnum *shutterSpeed8 __attribute__((swift_name("shutterSpeed8")));
@property (class, readonly) THETACThetaRepositoryShutterSpeedEnum *shutterSpeed6 __attribute__((swift_name("shutterSpeed6")));
@property (class, readonly) THETACThetaRepositoryShutterSpeedEnum *shutterSpeed5 __attribute__((swift_name("shutterSpeed5")));
@property (class, readonly) THETACThetaRepositoryShutterSpeedEnum *shutterSpeed4 __attribute__((swift_name("shutterSpeed4")));
@property (class, readonly) THETACThetaRepositoryShutterSpeedEnum *shutterSpeed32 __attribute__((swift_name("shutterSpeed32")));
@property (class, readonly) THETACThetaRepositoryShutterSpeedEnum *shutterSpeed25_ __attribute__((swift_name("shutterSpeed25_")));
@property (class, readonly) THETACThetaRepositoryShutterSpeedEnum *shutterSpeed2 __attribute__((swift_name("shutterSpeed2")));
@property (class, readonly) THETACThetaRepositoryShutterSpeedEnum *shutterSpeed16 __attribute__((swift_name("shutterSpeed16")));
@property (class, readonly) THETACThetaRepositoryShutterSpeedEnum *shutterSpeed13_ __attribute__((swift_name("shutterSpeed13_")));
@property (class, readonly) THETACThetaRepositoryShutterSpeedEnum *shutterSpeed1 __attribute__((swift_name("shutterSpeed1")));
@property (class, readonly) THETACThetaRepositoryShutterSpeedEnum *shutterSpeedOneOver13 __attribute__((swift_name("shutterSpeedOneOver13")));
@property (class, readonly) THETACThetaRepositoryShutterSpeedEnum *shutterSpeedOneOver16 __attribute__((swift_name("shutterSpeedOneOver16")));
@property (class, readonly) THETACThetaRepositoryShutterSpeedEnum *shutterSpeedOneOver2 __attribute__((swift_name("shutterSpeedOneOver2")));
@property (class, readonly) THETACThetaRepositoryShutterSpeedEnum *shutterSpeedOneOver25 __attribute__((swift_name("shutterSpeedOneOver25")));
@property (class, readonly) THETACThetaRepositoryShutterSpeedEnum *shutterSpeedOneOver3 __attribute__((swift_name("shutterSpeedOneOver3")));
@property (class, readonly) THETACThetaRepositoryShutterSpeedEnum *shutterSpeedOneOver4 __attribute__((swift_name("shutterSpeedOneOver4")));
@property (class, readonly) THETACThetaRepositoryShutterSpeedEnum *shutterSpeedOneOver5 __attribute__((swift_name("shutterSpeedOneOver5")));
@property (class, readonly) THETACThetaRepositoryShutterSpeedEnum *shutterSpeedOneOver6 __attribute__((swift_name("shutterSpeedOneOver6")));
@property (class, readonly) THETACThetaRepositoryShutterSpeedEnum *shutterSpeedOneOver8 __attribute__((swift_name("shutterSpeedOneOver8")));
@property (class, readonly) THETACThetaRepositoryShutterSpeedEnum *shutterSpeedOneOver10 __attribute__((swift_name("shutterSpeedOneOver10")));
@property (class, readonly) THETACThetaRepositoryShutterSpeedEnum *shutterSpeedOneOver13_ __attribute__((swift_name("shutterSpeedOneOver13_")));
@property (class, readonly) THETACThetaRepositoryShutterSpeedEnum *shutterSpeedOneOver15 __attribute__((swift_name("shutterSpeedOneOver15")));
@property (class, readonly) THETACThetaRepositoryShutterSpeedEnum *shutterSpeedOneOver20 __attribute__((swift_name("shutterSpeedOneOver20")));
@property (class, readonly) THETACThetaRepositoryShutterSpeedEnum *shutterSpeedOneOver25_ __attribute__((swift_name("shutterSpeedOneOver25_")));
@property (class, readonly) THETACThetaRepositoryShutterSpeedEnum *shutterSpeedOneOver30 __attribute__((swift_name("shutterSpeedOneOver30")));
@property (class, readonly) THETACThetaRepositoryShutterSpeedEnum *shutterSpeedOneOver40 __attribute__((swift_name("shutterSpeedOneOver40")));
@property (class, readonly) THETACThetaRepositoryShutterSpeedEnum *shutterSpeedOneOver50 __attribute__((swift_name("shutterSpeedOneOver50")));
@property (class, readonly) THETACThetaRepositoryShutterSpeedEnum *shutterSpeedOneOver60 __attribute__((swift_name("shutterSpeedOneOver60")));
@property (class, readonly) THETACThetaRepositoryShutterSpeedEnum *shutterSpeedOneOver80 __attribute__((swift_name("shutterSpeedOneOver80")));
@property (class, readonly) THETACThetaRepositoryShutterSpeedEnum *shutterSpeedOneOver100 __attribute__((swift_name("shutterSpeedOneOver100")));
@property (class, readonly) THETACThetaRepositoryShutterSpeedEnum *shutterSpeedOneOver125 __attribute__((swift_name("shutterSpeedOneOver125")));
@property (class, readonly) THETACThetaRepositoryShutterSpeedEnum *shutterSpeedOneOver160 __attribute__((swift_name("shutterSpeedOneOver160")));
@property (class, readonly) THETACThetaRepositoryShutterSpeedEnum *shutterSpeedOneOver200 __attribute__((swift_name("shutterSpeedOneOver200")));
@property (class, readonly) THETACThetaRepositoryShutterSpeedEnum *shutterSpeedOneOver250 __attribute__((swift_name("shutterSpeedOneOver250")));
@property (class, readonly) THETACThetaRepositoryShutterSpeedEnum *shutterSpeedOneOver320 __attribute__((swift_name("shutterSpeedOneOver320")));
@property (class, readonly) THETACThetaRepositoryShutterSpeedEnum *shutterSpeedOneOver400 __attribute__((swift_name("shutterSpeedOneOver400")));
@property (class, readonly) THETACThetaRepositoryShutterSpeedEnum *shutterSpeedOneOver500 __attribute__((swift_name("shutterSpeedOneOver500")));
@property (class, readonly) THETACThetaRepositoryShutterSpeedEnum *shutterSpeedOneOver640 __attribute__((swift_name("shutterSpeedOneOver640")));
@property (class, readonly) THETACThetaRepositoryShutterSpeedEnum *shutterSpeedOneOver800 __attribute__((swift_name("shutterSpeedOneOver800")));
@property (class, readonly) THETACThetaRepositoryShutterSpeedEnum *shutterSpeedOneOver1000 __attribute__((swift_name("shutterSpeedOneOver1000")));
@property (class, readonly) THETACThetaRepositoryShutterSpeedEnum *shutterSpeedOneOver1250 __attribute__((swift_name("shutterSpeedOneOver1250")));
@property (class, readonly) THETACThetaRepositoryShutterSpeedEnum *shutterSpeedOneOver1600 __attribute__((swift_name("shutterSpeedOneOver1600")));
@property (class, readonly) THETACThetaRepositoryShutterSpeedEnum *shutterSpeedOneOver2000 __attribute__((swift_name("shutterSpeedOneOver2000")));
@property (class, readonly) THETACThetaRepositoryShutterSpeedEnum *shutterSpeedOneOver2500 __attribute__((swift_name("shutterSpeedOneOver2500")));
@property (class, readonly) THETACThetaRepositoryShutterSpeedEnum *shutterSpeedOneOver3200 __attribute__((swift_name("shutterSpeedOneOver3200")));
@property (class, readonly) THETACThetaRepositoryShutterSpeedEnum *shutterSpeedOneOver4000 __attribute__((swift_name("shutterSpeedOneOver4000")));
@property (class, readonly) THETACThetaRepositoryShutterSpeedEnum *shutterSpeedOneOver5000 __attribute__((swift_name("shutterSpeedOneOver5000")));
@property (class, readonly) THETACThetaRepositoryShutterSpeedEnum *shutterSpeedOneOver6400 __attribute__((swift_name("shutterSpeedOneOver6400")));
@property (class, readonly) THETACThetaRepositoryShutterSpeedEnum *shutterSpeedOneOver8000 __attribute__((swift_name("shutterSpeedOneOver8000")));
@property (class, readonly) THETACThetaRepositoryShutterSpeedEnum *shutterSpeedOneOver10000 __attribute__((swift_name("shutterSpeedOneOver10000")));
@property (class, readonly) THETACThetaRepositoryShutterSpeedEnum *shutterSpeedOneOver12500 __attribute__((swift_name("shutterSpeedOneOver12500")));
@property (class, readonly) THETACThetaRepositoryShutterSpeedEnum *shutterSpeedOneOver12800 __attribute__((swift_name("shutterSpeedOneOver12800")));
@property (class, readonly) THETACThetaRepositoryShutterSpeedEnum *shutterSpeedOneOver16000 __attribute__((swift_name("shutterSpeedOneOver16000")));
@property (class, readonly) THETACThetaRepositoryShutterSpeedEnum *shutterSpeedOneOver20000 __attribute__((swift_name("shutterSpeedOneOver20000")));
@property (class, readonly) THETACThetaRepositoryShutterSpeedEnum *shutterSpeedOneOver25000 __attribute__((swift_name("shutterSpeedOneOver25000")));
+ (THETACKotlinArray<THETACThetaRepositoryShutterSpeedEnum *> *)values __attribute__((swift_name("values()")));
@property (readonly) double value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.ShutterSpeedEnumCompanion")))
@interface THETACThetaRepositoryShutterSpeedEnumCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACThetaRepositoryShutterSpeedEnumCompanion *shared __attribute__((swift_name("shared")));
- (THETACThetaRepositoryShutterSpeedEnum * _Nullable)getValue:(double)value __attribute__((swift_name("get(value:)")));
@end

__attribute__((swift_name("ThetaRepositorySleepDelay")))
@protocol THETACThetaRepositorySleepDelay
@required
@property (readonly) int32_t sec __attribute__((swift_name("sec")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.SleepDelayEnum")))
@interface THETACThetaRepositorySleepDelayEnum : THETACKotlinEnum<THETACThetaRepositorySleepDelayEnum *> <THETACThetaRepositorySleepDelay>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) THETACThetaRepositorySleepDelayEnumCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) THETACThetaRepositorySleepDelayEnum *sleepDelay3m __attribute__((swift_name("sleepDelay3m")));
@property (class, readonly) THETACThetaRepositorySleepDelayEnum *sleepDelay5m __attribute__((swift_name("sleepDelay5m")));
@property (class, readonly) THETACThetaRepositorySleepDelayEnum *sleepDelay7m __attribute__((swift_name("sleepDelay7m")));
@property (class, readonly) THETACThetaRepositorySleepDelayEnum *sleepDelay10m __attribute__((swift_name("sleepDelay10m")));
@property (class, readonly) THETACThetaRepositorySleepDelayEnum *disable __attribute__((swift_name("disable")));
+ (THETACKotlinArray<THETACThetaRepositorySleepDelayEnum *> *)values __attribute__((swift_name("values()")));
@property (readonly) int32_t sec __attribute__((swift_name("sec")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.SleepDelayEnumCompanion")))
@interface THETACThetaRepositorySleepDelayEnumCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACThetaRepositorySleepDelayEnumCompanion *shared __attribute__((swift_name("shared")));
- (id<THETACThetaRepositorySleepDelay>)getSec:(int32_t)sec __attribute__((swift_name("get(sec:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.SleepDelaySec")))
@interface THETACThetaRepositorySleepDelaySec : THETACBase <THETACThetaRepositorySleepDelay>
- (instancetype)initWithSec:(int32_t)sec __attribute__((swift_name("init(sec:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
@property (readonly) int32_t sec __attribute__((swift_name("sec")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.StorageEnum")))
@interface THETACThetaRepositoryStorageEnum : THETACKotlinEnum<THETACThetaRepositoryStorageEnum *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) THETACThetaRepositoryStorageEnum *internal __attribute__((swift_name("internal")));
@property (class, readonly) THETACThetaRepositoryStorageEnum *sd __attribute__((swift_name("sd")));
@property (class, readonly) THETACThetaRepositoryStorageEnum *current __attribute__((swift_name("current")));
+ (THETACKotlinArray<THETACThetaRepositoryStorageEnum *> *)values __attribute__((swift_name("values()")));
@property (readonly) THETACStorage *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.ThetaFiles")))
@interface THETACThetaRepositoryThetaFiles : THETACBase
- (instancetype)initWithFileList:(NSArray<THETACThetaRepositoryFileInfo *> *)fileList totalEntries:(int32_t)totalEntries __attribute__((swift_name("init(fileList:totalEntries:)"))) __attribute__((objc_designated_initializer));
- (NSArray<THETACThetaRepositoryFileInfo *> *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (int32_t)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACThetaRepositoryThetaFiles *)doCopyFileList:(NSArray<THETACThetaRepositoryFileInfo *> *)fileList totalEntries:(int32_t)totalEntries __attribute__((swift_name("doCopy(fileList:totalEntries:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<THETACThetaRepositoryFileInfo *> *fileList __attribute__((swift_name("fileList")));
@property (readonly) int32_t totalEntries __attribute__((swift_name("totalEntries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.ThetaInfo")))
@interface THETACThetaRepositoryThetaInfo : THETACBase
- (instancetype)initWithRes:(THETACInfoApiResponse *)res __attribute__((swift_name("init(res:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithManufacturer:(NSString *)manufacturer model:(NSString *)model serialNumber:(NSString *)serialNumber wlanMacAddress:(NSString * _Nullable)wlanMacAddress bluetoothMacAddress:(NSString * _Nullable)bluetoothMacAddress firmwareVersion:(NSString *)firmwareVersion supportUrl:(NSString *)supportUrl hasGps:(BOOL)hasGps hasGyro:(BOOL)hasGyro uptime:(int32_t)uptime api:(NSArray<NSString *> *)api endpoints:(THETACEndPoint *)endpoints apiLevel:(NSArray<THETACInt *> *)apiLevel __attribute__((swift_name("init(manufacturer:model:serialNumber:wlanMacAddress:bluetoothMacAddress:firmwareVersion:supportUrl:hasGps:hasGyro:uptime:api:endpoints:apiLevel:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (int32_t)component10 __attribute__((swift_name("component10()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSArray<NSString *> *)component11 __attribute__((swift_name("component11()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACEndPoint *)component12 __attribute__((swift_name("component12()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSArray<THETACInt *> *)component13 __attribute__((swift_name("component13()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component5 __attribute__((swift_name("component5()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component6 __attribute__((swift_name("component6()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component7 __attribute__((swift_name("component7()"))) __attribute__((deprecated("use corresponding property instead")));
- (BOOL)component8 __attribute__((swift_name("component8()"))) __attribute__((deprecated("use corresponding property instead")));
- (BOOL)component9 __attribute__((swift_name("component9()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACThetaRepositoryThetaInfo *)doCopyManufacturer:(NSString *)manufacturer model:(NSString *)model serialNumber:(NSString *)serialNumber wlanMacAddress:(NSString * _Nullable)wlanMacAddress bluetoothMacAddress:(NSString * _Nullable)bluetoothMacAddress firmwareVersion:(NSString *)firmwareVersion supportUrl:(NSString *)supportUrl hasGps:(BOOL)hasGps hasGyro:(BOOL)hasGyro uptime:(int32_t)uptime api:(NSArray<NSString *> *)api endpoints:(THETACEndPoint *)endpoints apiLevel:(NSArray<THETACInt *> *)apiLevel __attribute__((swift_name("doCopy(manufacturer:model:serialNumber:wlanMacAddress:bluetoothMacAddress:firmwareVersion:supportUrl:hasGps:hasGyro:uptime:api:endpoints:apiLevel:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<NSString *> *api __attribute__((swift_name("api")));
@property (readonly) NSArray<THETACInt *> *apiLevel __attribute__((swift_name("apiLevel")));
@property (readonly) NSString * _Nullable bluetoothMacAddress __attribute__((swift_name("bluetoothMacAddress")));
@property (readonly) THETACEndPoint *endpoints __attribute__((swift_name("endpoints")));
@property (readonly) NSString *firmwareVersion __attribute__((swift_name("firmwareVersion")));
@property (readonly) BOOL hasGps __attribute__((swift_name("hasGps")));
@property (readonly) BOOL hasGyro __attribute__((swift_name("hasGyro")));
@property (readonly) NSString *manufacturer __attribute__((swift_name("manufacturer")));
@property (readonly) NSString *model __attribute__((swift_name("model")));
@property (readonly) NSString *serialNumber __attribute__((swift_name("serialNumber")));
@property (readonly) NSString *supportUrl __attribute__((swift_name("supportUrl")));
@property (readonly) int32_t uptime __attribute__((swift_name("uptime")));
@property (readonly) NSString * _Nullable wlanMacAddress __attribute__((swift_name("wlanMacAddress")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.ThetaModel")))
@interface THETACThetaRepositoryThetaModel : THETACKotlinEnum<THETACThetaRepositoryThetaModel *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) THETACThetaRepositoryThetaModelCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) THETACThetaRepositoryThetaModel *thetaS __attribute__((swift_name("thetaS")));
@property (class, readonly) THETACThetaRepositoryThetaModel *thetaSc __attribute__((swift_name("thetaSc")));
@property (class, readonly) THETACThetaRepositoryThetaModel *thetaV __attribute__((swift_name("thetaV")));
@property (class, readonly) THETACThetaRepositoryThetaModel *thetaZ1 __attribute__((swift_name("thetaZ1")));
@property (class, readonly) THETACThetaRepositoryThetaModel *thetaX __attribute__((swift_name("thetaX")));
@property (class, readonly) THETACThetaRepositoryThetaModel *thetaSc2 __attribute__((swift_name("thetaSc2")));
@property (class, readonly) THETACThetaRepositoryThetaModel *thetaSc2B __attribute__((swift_name("thetaSc2B")));
+ (THETACKotlinArray<THETACThetaRepositoryThetaModel *> *)values __attribute__((swift_name("values()")));
@property (readonly) id _Nullable firstCharOfSerialNumber __attribute__((swift_name("firstCharOfSerialNumber")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.ThetaModelCompanion")))
@interface THETACThetaRepositoryThetaModelCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACThetaRepositoryThetaModelCompanion *shared __attribute__((swift_name("shared")));
- (THETACThetaRepositoryThetaModel * _Nullable)getModel:(NSString * _Nullable)model serialNumber:(NSString * _Nullable)serialNumber __attribute__((swift_name("get(model:serialNumber:)")));
- (BOOL)isBeforeThetaVModel:(THETACThetaRepositoryThetaModel * _Nullable)model __attribute__((swift_name("isBeforeThetaV(model:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.ThetaState")))
@interface THETACThetaRepositoryThetaState : THETACBase
- (instancetype)initWithResponse:(THETACStateApiResponse *)response __attribute__((swift_name("init(response:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithFingerprint:(NSString *)fingerprint batteryLevel:(float)batteryLevel storageUri:(NSString * _Nullable)storageUri storageID:(NSString * _Nullable)storageID captureStatus:(THETACThetaRepositoryCaptureStatusEnum *)captureStatus recordedTime:(int32_t)recordedTime recordableTime:(int32_t)recordableTime capturedPictures:(THETACInt * _Nullable)capturedPictures compositeShootingElapsedTime:(THETACInt * _Nullable)compositeShootingElapsedTime latestFileUrl:(NSString *)latestFileUrl chargingState:(THETACThetaRepositoryChargingStateEnum *)chargingState apiVersion:(int32_t)apiVersion isPluginRunning:(THETACBoolean * _Nullable)isPluginRunning isPluginWebServer:(THETACBoolean * _Nullable)isPluginWebServer function:(THETACThetaRepositoryShootingFunctionEnum * _Nullable)function isMySettingChanged:(THETACBoolean * _Nullable)isMySettingChanged currentMicrophone:(THETACThetaRepositoryMicrophoneOptionEnum * _Nullable)currentMicrophone isSdCard:(BOOL)isSdCard cameraError:(NSArray<THETACThetaRepositoryCameraErrorEnum *> * _Nullable)cameraError isBatteryInsert:(THETACBoolean * _Nullable)isBatteryInsert __attribute__((swift_name("init(fingerprint:batteryLevel:storageUri:storageID:captureStatus:recordedTime:recordableTime:capturedPictures:compositeShootingElapsedTime:latestFileUrl:chargingState:apiVersion:isPluginRunning:isPluginWebServer:function:isMySettingChanged:currentMicrophone:isSdCard:cameraError:isBatteryInsert:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component10 __attribute__((swift_name("component10()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACThetaRepositoryChargingStateEnum *)component11 __attribute__((swift_name("component11()"))) __attribute__((deprecated("use corresponding property instead")));
- (int32_t)component12 __attribute__((swift_name("component12()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACBoolean * _Nullable)component13 __attribute__((swift_name("component13()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACBoolean * _Nullable)component14 __attribute__((swift_name("component14()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACThetaRepositoryShootingFunctionEnum * _Nullable)component15 __attribute__((swift_name("component15()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACBoolean * _Nullable)component16 __attribute__((swift_name("component16()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACThetaRepositoryMicrophoneOptionEnum * _Nullable)component17 __attribute__((swift_name("component17()"))) __attribute__((deprecated("use corresponding property instead")));
- (BOOL)component18 __attribute__((swift_name("component18()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSArray<THETACThetaRepositoryCameraErrorEnum *> * _Nullable)component19 __attribute__((swift_name("component19()"))) __attribute__((deprecated("use corresponding property instead")));
- (float)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACBoolean * _Nullable)component20 __attribute__((swift_name("component20()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACThetaRepositoryCaptureStatusEnum *)component5 __attribute__((swift_name("component5()"))) __attribute__((deprecated("use corresponding property instead")));
- (int32_t)component6 __attribute__((swift_name("component6()"))) __attribute__((deprecated("use corresponding property instead")));
- (int32_t)component7 __attribute__((swift_name("component7()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACInt * _Nullable)component8 __attribute__((swift_name("component8()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACInt * _Nullable)component9 __attribute__((swift_name("component9()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACThetaRepositoryThetaState *)doCopyFingerprint:(NSString *)fingerprint batteryLevel:(float)batteryLevel storageUri:(NSString * _Nullable)storageUri storageID:(NSString * _Nullable)storageID captureStatus:(THETACThetaRepositoryCaptureStatusEnum *)captureStatus recordedTime:(int32_t)recordedTime recordableTime:(int32_t)recordableTime capturedPictures:(THETACInt * _Nullable)capturedPictures compositeShootingElapsedTime:(THETACInt * _Nullable)compositeShootingElapsedTime latestFileUrl:(NSString *)latestFileUrl chargingState:(THETACThetaRepositoryChargingStateEnum *)chargingState apiVersion:(int32_t)apiVersion isPluginRunning:(THETACBoolean * _Nullable)isPluginRunning isPluginWebServer:(THETACBoolean * _Nullable)isPluginWebServer function:(THETACThetaRepositoryShootingFunctionEnum * _Nullable)function isMySettingChanged:(THETACBoolean * _Nullable)isMySettingChanged currentMicrophone:(THETACThetaRepositoryMicrophoneOptionEnum * _Nullable)currentMicrophone isSdCard:(BOOL)isSdCard cameraError:(NSArray<THETACThetaRepositoryCameraErrorEnum *> * _Nullable)cameraError isBatteryInsert:(THETACBoolean * _Nullable)isBatteryInsert __attribute__((swift_name("doCopy(fingerprint:batteryLevel:storageUri:storageID:captureStatus:recordedTime:recordableTime:capturedPictures:compositeShootingElapsedTime:latestFileUrl:chargingState:apiVersion:isPluginRunning:isPluginWebServer:function:isMySettingChanged:currentMicrophone:isSdCard:cameraError:isBatteryInsert:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t apiVersion __attribute__((swift_name("apiVersion")));
@property (readonly) float batteryLevel __attribute__((swift_name("batteryLevel")));
@property (readonly) NSArray<THETACThetaRepositoryCameraErrorEnum *> * _Nullable cameraError __attribute__((swift_name("cameraError")));
@property (readonly) THETACThetaRepositoryCaptureStatusEnum *captureStatus __attribute__((swift_name("captureStatus")));
@property (readonly) THETACInt * _Nullable capturedPictures __attribute__((swift_name("capturedPictures")));
@property (readonly) THETACThetaRepositoryChargingStateEnum *chargingState __attribute__((swift_name("chargingState")));
@property (readonly) THETACInt * _Nullable compositeShootingElapsedTime __attribute__((swift_name("compositeShootingElapsedTime")));
@property (readonly) THETACThetaRepositoryMicrophoneOptionEnum * _Nullable currentMicrophone __attribute__((swift_name("currentMicrophone")));
@property (readonly) NSString *fingerprint __attribute__((swift_name("fingerprint")));
@property (readonly) THETACThetaRepositoryShootingFunctionEnum * _Nullable function __attribute__((swift_name("function")));
@property (readonly) THETACBoolean * _Nullable isBatteryInsert __attribute__((swift_name("isBatteryInsert")));
@property (readonly) THETACBoolean * _Nullable isMySettingChanged __attribute__((swift_name("isMySettingChanged")));
@property (readonly) THETACBoolean * _Nullable isPluginRunning __attribute__((swift_name("isPluginRunning")));
@property (readonly) THETACBoolean * _Nullable isPluginWebServer __attribute__((swift_name("isPluginWebServer")));
@property (readonly) BOOL isSdCard __attribute__((swift_name("isSdCard")));
@property (readonly) NSString *latestFileUrl __attribute__((swift_name("latestFileUrl")));
@property (readonly) int32_t recordableTime __attribute__((swift_name("recordableTime")));
@property (readonly) int32_t recordedTime __attribute__((swift_name("recordedTime")));
@property (readonly) NSString * _Nullable storageID __attribute__((swift_name("storageID")));
@property (readonly) NSString * _Nullable storageUri __attribute__((swift_name("storageUri")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.ThetaUnauthorizedException")))
@interface THETACThetaRepositoryThetaUnauthorizedException : THETACThetaRepositoryThetaRepositoryException
- (instancetype)initWithMessage:(NSString *)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.ThetaWebApiException")))
@interface THETACThetaRepositoryThetaWebApiException : THETACThetaRepositoryThetaRepositoryException
- (instancetype)initWithMessage:(NSString *)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) THETACThetaRepositoryThetaWebApiExceptionCompanion *companion __attribute__((swift_name("companion")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.ThetaWebApiExceptionCompanion")))
@interface THETACThetaRepositoryThetaWebApiExceptionCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACThetaRepositoryThetaWebApiExceptionCompanion *shared __attribute__((swift_name("shared")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)createException:(THETACKtor_client_coreResponseException *)exception completionHandler:(void (^)(THETACThetaRepositoryThetaWebApiException * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("create(exception:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.TimeShiftIntervalEnum")))
@interface THETACThetaRepositoryTimeShiftIntervalEnum : THETACKotlinEnum<THETACThetaRepositoryTimeShiftIntervalEnum *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) THETACThetaRepositoryTimeShiftIntervalEnumCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) THETACThetaRepositoryTimeShiftIntervalEnum *interval0 __attribute__((swift_name("interval0")));
@property (class, readonly) THETACThetaRepositoryTimeShiftIntervalEnum *interval1 __attribute__((swift_name("interval1")));
@property (class, readonly) THETACThetaRepositoryTimeShiftIntervalEnum *interval2 __attribute__((swift_name("interval2")));
@property (class, readonly) THETACThetaRepositoryTimeShiftIntervalEnum *interval3 __attribute__((swift_name("interval3")));
@property (class, readonly) THETACThetaRepositoryTimeShiftIntervalEnum *interval4 __attribute__((swift_name("interval4")));
@property (class, readonly) THETACThetaRepositoryTimeShiftIntervalEnum *interval5 __attribute__((swift_name("interval5")));
@property (class, readonly) THETACThetaRepositoryTimeShiftIntervalEnum *interval6 __attribute__((swift_name("interval6")));
@property (class, readonly) THETACThetaRepositoryTimeShiftIntervalEnum *interval7 __attribute__((swift_name("interval7")));
@property (class, readonly) THETACThetaRepositoryTimeShiftIntervalEnum *interval8 __attribute__((swift_name("interval8")));
@property (class, readonly) THETACThetaRepositoryTimeShiftIntervalEnum *interval9 __attribute__((swift_name("interval9")));
@property (class, readonly) THETACThetaRepositoryTimeShiftIntervalEnum *interval10 __attribute__((swift_name("interval10")));
+ (THETACKotlinArray<THETACThetaRepositoryTimeShiftIntervalEnum *> *)values __attribute__((swift_name("values()")));
@property (readonly) int32_t sec __attribute__((swift_name("sec")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.TimeShiftIntervalEnumCompanion")))
@interface THETACThetaRepositoryTimeShiftIntervalEnumCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACThetaRepositoryTimeShiftIntervalEnumCompanion *shared __attribute__((swift_name("shared")));
- (THETACThetaRepositoryTimeShiftIntervalEnum * _Nullable)getSec:(int32_t)sec __attribute__((swift_name("get(sec:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.TimeShiftSetting")))
@interface THETACThetaRepositoryTimeShiftSetting : THETACBase
- (instancetype)initWithTimeShift:(THETACTimeShift *)timeShift __attribute__((swift_name("init(timeShift:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithIsFrontFirst:(THETACBoolean * _Nullable)isFrontFirst firstInterval:(THETACThetaRepositoryTimeShiftIntervalEnum * _Nullable)firstInterval secondInterval:(THETACThetaRepositoryTimeShiftIntervalEnum * _Nullable)secondInterval __attribute__((swift_name("init(isFrontFirst:firstInterval:secondInterval:)"))) __attribute__((objc_designated_initializer));
- (THETACBoolean * _Nullable)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACThetaRepositoryTimeShiftIntervalEnum * _Nullable)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACThetaRepositoryTimeShiftIntervalEnum * _Nullable)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACThetaRepositoryTimeShiftSetting *)doCopyIsFrontFirst:(THETACBoolean * _Nullable)isFrontFirst firstInterval:(THETACThetaRepositoryTimeShiftIntervalEnum * _Nullable)firstInterval secondInterval:(THETACThetaRepositoryTimeShiftIntervalEnum * _Nullable)secondInterval __attribute__((swift_name("doCopy(isFrontFirst:firstInterval:secondInterval:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
- (THETACTimeShift *)toTransferredTimeShift __attribute__((swift_name("toTransferredTimeShift()")));
@property THETACThetaRepositoryTimeShiftIntervalEnum * _Nullable firstInterval __attribute__((swift_name("firstInterval")));
@property THETACBoolean * _Nullable isFrontFirst __attribute__((swift_name("isFrontFirst")));
@property THETACThetaRepositoryTimeShiftIntervalEnum * _Nullable secondInterval __attribute__((swift_name("secondInterval")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.Timeout")))
@interface THETACThetaRepositoryTimeout : THETACBase
- (instancetype)initWithConnectTimeout:(int64_t)connectTimeout requestTimeout:(int64_t)requestTimeout socketTimeout:(int64_t)socketTimeout __attribute__((swift_name("init(connectTimeout:requestTimeout:socketTimeout:)"))) __attribute__((objc_designated_initializer));
- (int64_t)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (int64_t)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (int64_t)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACThetaRepositoryTimeout *)doCopyConnectTimeout:(int64_t)connectTimeout requestTimeout:(int64_t)requestTimeout socketTimeout:(int64_t)socketTimeout __attribute__((swift_name("doCopy(connectTimeout:requestTimeout:socketTimeout:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int64_t connectTimeout __attribute__((swift_name("connectTimeout")));
@property (readonly) int64_t requestTimeout __attribute__((swift_name("requestTimeout")));
@property (readonly) int64_t socketTimeout __attribute__((swift_name("socketTimeout")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.VideoFileFormatEnum")))
@interface THETACThetaRepositoryVideoFileFormatEnum : THETACKotlinEnum<THETACThetaRepositoryVideoFileFormatEnum *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) THETACThetaRepositoryVideoFileFormatEnumCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) THETACThetaRepositoryVideoFileFormatEnum *videoHd __attribute__((swift_name("videoHd")));
@property (class, readonly) THETACThetaRepositoryVideoFileFormatEnum *videoFullHd __attribute__((swift_name("videoFullHd")));
@property (class, readonly) THETACThetaRepositoryVideoFileFormatEnum *video2k __attribute__((swift_name("video2k")));
@property (class, readonly) THETACThetaRepositoryVideoFileFormatEnum *video4k __attribute__((swift_name("video4k")));
@property (class, readonly) THETACThetaRepositoryVideoFileFormatEnum *video2k30f __attribute__((swift_name("video2k30f")));
@property (class, readonly) THETACThetaRepositoryVideoFileFormatEnum *video2k60f __attribute__((swift_name("video2k60f")));
@property (class, readonly) THETACThetaRepositoryVideoFileFormatEnum *video4k30f __attribute__((swift_name("video4k30f")));
@property (class, readonly) THETACThetaRepositoryVideoFileFormatEnum *video4k60f __attribute__((swift_name("video4k60f")));
@property (class, readonly) THETACThetaRepositoryVideoFileFormatEnum *video57k2f __attribute__((swift_name("video57k2f")));
@property (class, readonly) THETACThetaRepositoryVideoFileFormatEnum *video57k5f __attribute__((swift_name("video57k5f")));
@property (class, readonly) THETACThetaRepositoryVideoFileFormatEnum *video57k30f __attribute__((swift_name("video57k30f")));
@property (class, readonly) THETACThetaRepositoryVideoFileFormatEnum *video7k2f __attribute__((swift_name("video7k2f")));
@property (class, readonly) THETACThetaRepositoryVideoFileFormatEnum *video7k5f __attribute__((swift_name("video7k5f")));
@property (class, readonly) THETACThetaRepositoryVideoFileFormatEnum *video7k10f __attribute__((swift_name("video7k10f")));
+ (THETACKotlinArray<THETACThetaRepositoryVideoFileFormatEnum *> *)values __attribute__((swift_name("values()")));
@property (readonly) THETACThetaRepositoryFileFormatEnum *fileFormat __attribute__((swift_name("fileFormat")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.VideoFileFormatEnumCompanion")))
@interface THETACThetaRepositoryVideoFileFormatEnumCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACThetaRepositoryVideoFileFormatEnumCompanion *shared __attribute__((swift_name("shared")));
- (THETACThetaRepositoryVideoFileFormatEnum * _Nullable)getFileformat:(THETACThetaRepositoryFileFormatEnum *)fileformat __attribute__((swift_name("get(fileformat:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.WhiteBalanceAutoStrengthEnum")))
@interface THETACThetaRepositoryWhiteBalanceAutoStrengthEnum : THETACKotlinEnum<THETACThetaRepositoryWhiteBalanceAutoStrengthEnum *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) THETACThetaRepositoryWhiteBalanceAutoStrengthEnumCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) THETACThetaRepositoryWhiteBalanceAutoStrengthEnum *on __attribute__((swift_name("on")));
@property (class, readonly) THETACThetaRepositoryWhiteBalanceAutoStrengthEnum *off __attribute__((swift_name("off")));
+ (THETACKotlinArray<THETACThetaRepositoryWhiteBalanceAutoStrengthEnum *> *)values __attribute__((swift_name("values()")));
@property (readonly) THETACWhiteBalanceAutoStrength *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.WhiteBalanceAutoStrengthEnumCompanion")))
@interface THETACThetaRepositoryWhiteBalanceAutoStrengthEnumCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACThetaRepositoryWhiteBalanceAutoStrengthEnumCompanion *shared __attribute__((swift_name("shared")));
- (THETACThetaRepositoryWhiteBalanceAutoStrengthEnum * _Nullable)getValue:(THETACWhiteBalanceAutoStrength *)value __attribute__((swift_name("get(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.WhiteBalanceEnum")))
@interface THETACThetaRepositoryWhiteBalanceEnum : THETACKotlinEnum<THETACThetaRepositoryWhiteBalanceEnum *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) THETACThetaRepositoryWhiteBalanceEnumCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) THETACThetaRepositoryWhiteBalanceEnum *auto_ __attribute__((swift_name("auto_")));
@property (class, readonly) THETACThetaRepositoryWhiteBalanceEnum *daylight __attribute__((swift_name("daylight")));
@property (class, readonly) THETACThetaRepositoryWhiteBalanceEnum *shade __attribute__((swift_name("shade")));
@property (class, readonly) THETACThetaRepositoryWhiteBalanceEnum *cloudyDaylight __attribute__((swift_name("cloudyDaylight")));
@property (class, readonly) THETACThetaRepositoryWhiteBalanceEnum *incandescent __attribute__((swift_name("incandescent")));
@property (class, readonly) THETACThetaRepositoryWhiteBalanceEnum *warmWhiteFluorescent __attribute__((swift_name("warmWhiteFluorescent")));
@property (class, readonly) THETACThetaRepositoryWhiteBalanceEnum *daylightFluorescent __attribute__((swift_name("daylightFluorescent")));
@property (class, readonly) THETACThetaRepositoryWhiteBalanceEnum *daywhiteFluorescent __attribute__((swift_name("daywhiteFluorescent")));
@property (class, readonly) THETACThetaRepositoryWhiteBalanceEnum *fluorescent __attribute__((swift_name("fluorescent")));
@property (class, readonly) THETACThetaRepositoryWhiteBalanceEnum *bulbFluorescent __attribute__((swift_name("bulbFluorescent")));
@property (class, readonly) THETACThetaRepositoryWhiteBalanceEnum *colorTemperature __attribute__((swift_name("colorTemperature")));
@property (class, readonly) THETACThetaRepositoryWhiteBalanceEnum *underwater __attribute__((swift_name("underwater")));
+ (THETACKotlinArray<THETACThetaRepositoryWhiteBalanceEnum *> *)values __attribute__((swift_name("values()")));
@property (readonly) THETACWhiteBalance *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.WhiteBalanceEnumCompanion")))
@interface THETACThetaRepositoryWhiteBalanceEnumCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACThetaRepositoryWhiteBalanceEnumCompanion *shared __attribute__((swift_name("shared")));
- (THETACThetaRepositoryWhiteBalanceEnum * _Nullable)getValue:(THETACWhiteBalance *)value __attribute__((swift_name("get(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.WlanFrequencyEnum")))
@interface THETACThetaRepositoryWlanFrequencyEnum : THETACKotlinEnum<THETACThetaRepositoryWlanFrequencyEnum *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) THETACThetaRepositoryWlanFrequencyEnumCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) THETACThetaRepositoryWlanFrequencyEnum *ghz24 __attribute__((swift_name("ghz24")));
@property (class, readonly) THETACThetaRepositoryWlanFrequencyEnum *ghz5 __attribute__((swift_name("ghz5")));
+ (THETACKotlinArray<THETACThetaRepositoryWlanFrequencyEnum *> *)values __attribute__((swift_name("values()")));
@property (readonly) THETACWlanFrequency *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.WlanFrequencyEnumCompanion")))
@interface THETACThetaRepositoryWlanFrequencyEnumCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACThetaRepositoryWlanFrequencyEnumCompanion *shared __attribute__((swift_name("shared")));
- (THETACThetaRepositoryWlanFrequencyEnum * _Nullable)getValue:(THETACWlanFrequency *)value __attribute__((swift_name("get(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.Xmp")))
@interface THETACThetaRepositoryXmp : THETACBase
- (instancetype)initWithXmp:(THETACXmpInfo *)xmp __attribute__((swift_name("init(xmp:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPoseHeadingDegrees:(THETACDouble * _Nullable)poseHeadingDegrees fullPanoWidthPixels:(int32_t)fullPanoWidthPixels fullPanoHeightPixels:(int32_t)fullPanoHeightPixels __attribute__((swift_name("init(poseHeadingDegrees:fullPanoWidthPixels:fullPanoHeightPixels:)"))) __attribute__((objc_designated_initializer));
- (THETACDouble * _Nullable)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (int32_t)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (int32_t)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACThetaRepositoryXmp *)doCopyPoseHeadingDegrees:(THETACDouble * _Nullable)poseHeadingDegrees fullPanoWidthPixels:(int32_t)fullPanoWidthPixels fullPanoHeightPixels:(int32_t)fullPanoHeightPixels __attribute__((swift_name("doCopy(poseHeadingDegrees:fullPanoWidthPixels:fullPanoHeightPixels:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t fullPanoHeightPixels __attribute__((swift_name("fullPanoHeightPixels")));
@property (readonly) int32_t fullPanoWidthPixels __attribute__((swift_name("fullPanoWidthPixels")));
@property (readonly) THETACDouble * _Nullable poseHeadingDegrees __attribute__((swift_name("poseHeadingDegrees")));
@end

__attribute__((swift_name("Capture")))
@interface THETACCapture : THETACBase

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (instancetype)initWithOptions:(THETACOptions *)options __attribute__((swift_name("init(options:)"))) __attribute__((objc_designated_initializer));
- (THETACThetaRepositoryApertureEnum * _Nullable)getAperture __attribute__((swift_name("getAperture()")));
- (THETACInt * _Nullable)getColorTemperature __attribute__((swift_name("getColorTemperature()")));
- (THETACThetaRepositoryExposureCompensationEnum * _Nullable)getExposureCompensation __attribute__((swift_name("getExposureCompensation()")));
- (THETACThetaRepositoryExposureDelayEnum * _Nullable)getExposureDelay __attribute__((swift_name("getExposureDelay()")));
- (THETACThetaRepositoryExposureProgramEnum * _Nullable)getExposureProgram __attribute__((swift_name("getExposureProgram()")));
- (THETACThetaRepositoryGpsInfo * _Nullable)getGpsInfo __attribute__((swift_name("getGpsInfo()")));
- (THETACThetaRepositoryGpsTagRecordingEnum * _Nullable)getGpsTagRecording __attribute__((swift_name("getGpsTagRecording()")));
- (THETACThetaRepositoryIsoEnum * _Nullable)getIso __attribute__((swift_name("getIso()")));
- (THETACThetaRepositoryIsoAutoHighLimitEnum * _Nullable)getIsoAutoHighLimit __attribute__((swift_name("getIsoAutoHighLimit()")));
- (THETACThetaRepositoryWhiteBalanceEnum * _Nullable)getWhiteBalance __attribute__((swift_name("getWhiteBalance()")));
@property (readonly) THETACOptions *options __attribute__((swift_name("options")));
@end

__attribute__((swift_name("CaptureBuilder")))
@interface THETACCaptureBuilder<T> : THETACBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (T _Nullable)setApertureAperture:(THETACThetaRepositoryApertureEnum *)aperture __attribute__((swift_name("setAperture(aperture:)")));
- (T _Nullable)setColorTemperatureKelvin:(int32_t)kelvin __attribute__((swift_name("setColorTemperature(kelvin:)")));
- (T _Nullable)setExposureCompensationValue:(THETACThetaRepositoryExposureCompensationEnum *)value __attribute__((swift_name("setExposureCompensation(value:)")));
- (T _Nullable)setExposureDelayDelay:(THETACThetaRepositoryExposureDelayEnum *)delay __attribute__((swift_name("setExposureDelay(delay:)")));
- (T _Nullable)setExposureProgramProgram:(THETACThetaRepositoryExposureProgramEnum *)program __attribute__((swift_name("setExposureProgram(program:)")));
- (T _Nullable)setGpsInfoGpsInfo:(THETACThetaRepositoryGpsInfo *)gpsInfo __attribute__((swift_name("setGpsInfo(gpsInfo:)")));
- (T _Nullable)setGpsTagRecordingValue:(THETACThetaRepositoryGpsTagRecordingEnum *)value __attribute__((swift_name("setGpsTagRecording(value:)")));
- (T _Nullable)setIsoIso:(THETACThetaRepositoryIsoEnum *)iso __attribute__((swift_name("setIso(iso:)")));
- (T _Nullable)setIsoAutoHighLimitIso:(THETACThetaRepositoryIsoAutoHighLimitEnum *)iso __attribute__((swift_name("setIsoAutoHighLimit(iso:)")));
- (T _Nullable)setWhiteBalanceWhiteBalance:(THETACThetaRepositoryWhiteBalanceEnum *)whiteBalance __attribute__((swift_name("setWhiteBalance(whiteBalance:)")));
@property (readonly) THETACOptions *options __attribute__((swift_name("options")));
@end

__attribute__((swift_name("Capturing")))
@interface THETACCapturing : THETACBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)stopCapture __attribute__((swift_name("stopCapture()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PhotoCapture")))
@interface THETACPhotoCapture : THETACCapture

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (instancetype)initWithOptions:(THETACOptions *)options __attribute__((swift_name("init(options:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (THETACThetaRepositoryPhotoFileFormatEnum * _Nullable)getFileFormat __attribute__((swift_name("getFileFormat()")));
- (THETACThetaRepositoryFilterEnum * _Nullable)getFilter __attribute__((swift_name("getFilter()")));
- (void)takePictureCallback:(id<THETACPhotoCaptureTakePictureCallback>)callback __attribute__((swift_name("takePicture(callback:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PhotoCapture.Builder")))
@interface THETACPhotoCaptureBuilder : THETACCaptureBuilder<THETACPhotoCaptureBuilder *>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (void)buildWithCompletionHandler:(void (^)(THETACPhotoCapture * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("build(completionHandler:)")));
- (THETACPhotoCaptureBuilder *)setFileFormatFileFormat:(THETACThetaRepositoryPhotoFileFormatEnum *)fileFormat __attribute__((swift_name("setFileFormat(fileFormat:)")));
- (THETACPhotoCaptureBuilder *)setFilterFilter:(THETACThetaRepositoryFilterEnum *)filter __attribute__((swift_name("setFilter(filter:)")));
@end

__attribute__((swift_name("PhotoCaptureTakePictureCallback")))
@protocol THETACPhotoCaptureTakePictureCallback
@required
- (void)onErrorException:(THETACThetaRepositoryThetaRepositoryException *)exception __attribute__((swift_name("onError(exception:)")));
- (void)onProgressCompletion:(float)completion __attribute__((swift_name("onProgress(completion:)")));
- (void)onSuccessFileUrl:(NSString *)fileUrl __attribute__((swift_name("onSuccess(fileUrl:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TimeShiftCapture")))
@interface THETACTimeShiftCapture : THETACCapture

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (instancetype)initWithOptions:(THETACOptions *)options __attribute__((swift_name("init(options:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (int64_t)getCheckStatusCommandInterval __attribute__((swift_name("getCheckStatusCommandInterval()")));
- (THETACThetaRepositoryTimeShiftSetting * _Nullable)getTimeShiftSetting __attribute__((swift_name("getTimeShiftSetting()")));
- (THETACTimeShiftCapturing *)startCaptureCallback:(id<THETACTimeShiftCaptureStartCaptureCallback>)callback __attribute__((swift_name("startCapture(callback:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TimeShiftCapture.Builder")))
@interface THETACTimeShiftCaptureBuilder : THETACCaptureBuilder<THETACTimeShiftCaptureBuilder *>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) THETACTimeShiftCaptureBuilderCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (void)buildWithCompletionHandler:(void (^)(THETACTimeShiftCapture * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("build(completionHandler:)")));
- (THETACTimeShiftCaptureBuilder *)setCheckStatusCommandIntervalTimeMillis:(int64_t)timeMillis __attribute__((swift_name("setCheckStatusCommandInterval(timeMillis:)")));
- (THETACTimeShiftCaptureBuilder *)setFirstIntervalInterval:(THETACThetaRepositoryTimeShiftIntervalEnum *)interval __attribute__((swift_name("setFirstInterval(interval:)")));
- (THETACTimeShiftCaptureBuilder *)setIsFrontFirstIsFrontFirst:(BOOL)isFrontFirst __attribute__((swift_name("setIsFrontFirst(isFrontFirst:)")));
- (THETACTimeShiftCaptureBuilder *)setSecondIntervalInterval:(THETACThetaRepositoryTimeShiftIntervalEnum *)interval __attribute__((swift_name("setSecondInterval(interval:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TimeShiftCapture.BuilderCompanion")))
@interface THETACTimeShiftCaptureBuilderCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACTimeShiftCaptureBuilderCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) int32_t SC2B_DEFAULT_EXPOSURE_DELAY __attribute__((swift_name("SC2B_DEFAULT_EXPOSURE_DELAY")));
@property (readonly) int32_t SC2B_DEFAULT_FIRST_INTERVAL __attribute__((swift_name("SC2B_DEFAULT_FIRST_INTERVAL")));
@property (readonly) int32_t SC2B_DEFAULT_SECOND_INTERVAL __attribute__((swift_name("SC2B_DEFAULT_SECOND_INTERVAL")));
@end

__attribute__((swift_name("TimeShiftCaptureStartCaptureCallback")))
@protocol THETACTimeShiftCaptureStartCaptureCallback
@required
- (void)onErrorException:(THETACThetaRepositoryThetaRepositoryException *)exception __attribute__((swift_name("onError(exception:)")));
- (void)onProgressCompletion:(float)completion __attribute__((swift_name("onProgress(completion:)")));
- (void)onSuccessFileUrl_:(NSString * _Nullable)fileUrl __attribute__((swift_name("onSuccess(fileUrl_:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TimeShiftCapturing")))
@interface THETACTimeShiftCapturing : THETACCapturing
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (void)cancelCapture __attribute__((swift_name("cancelCapture()")));
- (void)stopCapture __attribute__((swift_name("stopCapture()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VideoCapture")))
@interface THETACVideoCapture : THETACCapture

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (instancetype)initWithOptions:(THETACOptions *)options __attribute__((swift_name("init(options:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (THETACThetaRepositoryVideoFileFormatEnum * _Nullable)getFileFormat __attribute__((swift_name("getFileFormat()")));
- (THETACThetaRepositoryMaxRecordableTimeEnum * _Nullable)getMaxRecordableTime __attribute__((swift_name("getMaxRecordableTime()")));
- (THETACVideoCapturing *)startCaptureCallback:(id<THETACVideoCaptureStartCaptureCallback>)callback __attribute__((swift_name("startCapture(callback:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VideoCapture.Builder")))
@interface THETACVideoCaptureBuilder : THETACCaptureBuilder<THETACVideoCaptureBuilder *>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (void)buildWithCompletionHandler:(void (^)(THETACVideoCapture * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("build(completionHandler:)")));
- (THETACVideoCaptureBuilder *)setFileFormatFileFormat:(THETACThetaRepositoryVideoFileFormatEnum *)fileFormat __attribute__((swift_name("setFileFormat(fileFormat:)")));
- (THETACVideoCaptureBuilder *)setMaxRecordableTimeTime:(THETACThetaRepositoryMaxRecordableTimeEnum *)time __attribute__((swift_name("setMaxRecordableTime(time:)")));
@end

__attribute__((swift_name("VideoCaptureStartCaptureCallback")))
@protocol THETACVideoCaptureStartCaptureCallback
@required
- (void)onErrorException:(THETACThetaRepositoryThetaRepositoryException *)exception __attribute__((swift_name("onError(exception:)")));
- (void)onSuccessFileUrl:(NSString *)fileUrl __attribute__((swift_name("onSuccess(fileUrl:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VideoCapturing")))
@interface THETACVideoCapturing : THETACCapturing
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (void)stopCapture __attribute__((swift_name("stopCapture()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AccessPoint")))
@interface THETACAccessPoint : THETACBase
- (instancetype)initWithSsid:(NSString *)ssid ssidStealth:(BOOL)ssidStealth security:(THETACAuthenticationMode *)security connectionPriority:(int32_t)connectionPriority ipAddressAllocation:(THETACIpAddressAllocation *)ipAddressAllocation ipAddress:(NSString * _Nullable)ipAddress subnetMask:(NSString * _Nullable)subnetMask defaultGateway:(NSString * _Nullable)defaultGateway proxy:(THETACProxy * _Nullable)proxy __attribute__((swift_name("init(ssid:ssidStealth:security:connectionPriority:ipAddressAllocation:ipAddress:subnetMask:defaultGateway:proxy:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) THETACAccessPointCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (BOOL)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACAuthenticationMode *)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (int32_t)component4 __attribute__((swift_name("component4()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACIpAddressAllocation *)component5 __attribute__((swift_name("component5()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component6 __attribute__((swift_name("component6()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component7 __attribute__((swift_name("component7()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component8 __attribute__((swift_name("component8()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACProxy * _Nullable)component9 __attribute__((swift_name("component9()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACAccessPoint *)doCopySsid:(NSString *)ssid ssidStealth:(BOOL)ssidStealth security:(THETACAuthenticationMode *)security connectionPriority:(int32_t)connectionPriority ipAddressAllocation:(THETACIpAddressAllocation *)ipAddressAllocation ipAddress:(NSString * _Nullable)ipAddress subnetMask:(NSString * _Nullable)subnetMask defaultGateway:(NSString * _Nullable)defaultGateway proxy:(THETACProxy * _Nullable)proxy __attribute__((swift_name("doCopy(ssid:ssidStealth:security:connectionPriority:ipAddressAllocation:ipAddress:subnetMask:defaultGateway:proxy:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t connectionPriority __attribute__((swift_name("connectionPriority")));
@property (readonly) NSString * _Nullable defaultGateway __attribute__((swift_name("defaultGateway")));
@property (readonly) NSString * _Nullable ipAddress __attribute__((swift_name("ipAddress")));
@property (readonly) THETACIpAddressAllocation *ipAddressAllocation __attribute__((swift_name("ipAddressAllocation")));
@property (readonly) THETACProxy * _Nullable proxy __attribute__((swift_name("proxy")));
@property (readonly) THETACAuthenticationMode *security __attribute__((swift_name("security")));
@property (readonly) NSString *ssid __attribute__((swift_name("ssid")));
@property (readonly) BOOL ssidStealth __attribute__((swift_name("ssidStealth")));
@property (readonly) NSString * _Nullable subnetMask __attribute__((swift_name("subnetMask")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AccessPoint.Companion")))
@interface THETACAccessPointCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACAccessPointCompanion *shared __attribute__((swift_name("shared")));
- (id<THETACKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AiAutoThumbnail")))
@interface THETACAiAutoThumbnail : THETACKotlinEnum<THETACAiAutoThumbnail *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) THETACAiAutoThumbnailCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) THETACAiAutoThumbnail *on __attribute__((swift_name("on")));
@property (class, readonly) THETACAiAutoThumbnail *off __attribute__((swift_name("off")));
+ (THETACKotlinArray<THETACAiAutoThumbnail *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AiAutoThumbnail.Companion")))
@interface THETACAiAutoThumbnailCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACAiAutoThumbnailCompanion *shared __attribute__((swift_name("shared")));
- (id<THETACKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<THETACKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(THETACKotlinArray<id<THETACKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AuthenticationMode")))
@interface THETACAuthenticationMode : THETACKotlinEnum<THETACAuthenticationMode *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) THETACAuthenticationModeCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) THETACAuthenticationMode *none __attribute__((swift_name("none")));
@property (class, readonly) THETACAuthenticationMode *wep __attribute__((swift_name("wep")));
@property (class, readonly) THETACAuthenticationMode *wpaWpa2Psk __attribute__((swift_name("wpaWpa2Psk")));
+ (THETACKotlinArray<THETACAuthenticationMode *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AuthenticationMode.Companion")))
@interface THETACAuthenticationModeCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACAuthenticationModeCompanion *shared __attribute__((swift_name("shared")));
- (id<THETACKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<THETACKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(THETACKotlinArray<id<THETACKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BluetoothPower")))
@interface THETACBluetoothPower : THETACKotlinEnum<THETACBluetoothPower *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) THETACBluetoothPowerCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) THETACBluetoothPower *on __attribute__((swift_name("on")));
@property (class, readonly) THETACBluetoothPower *off __attribute__((swift_name("off")));
+ (THETACKotlinArray<THETACBluetoothPower *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BluetoothPower.Companion")))
@interface THETACBluetoothPowerCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACBluetoothPowerCompanion *shared __attribute__((swift_name("shared")));
- (id<THETACKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<THETACKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(THETACKotlinArray<id<THETACKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BurstBracketStep")))
@interface THETACBurstBracketStep : THETACKotlinEnum<THETACBurstBracketStep *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) THETACBurstBracketStepCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) THETACBurstBracketStep *bracketStep00 __attribute__((swift_name("bracketStep00")));
@property (class, readonly) THETACBurstBracketStep *bracketStep03 __attribute__((swift_name("bracketStep03")));
@property (class, readonly) THETACBurstBracketStep *bracketStep07 __attribute__((swift_name("bracketStep07")));
@property (class, readonly) THETACBurstBracketStep *bracketStep10 __attribute__((swift_name("bracketStep10")));
@property (class, readonly) THETACBurstBracketStep *bracketStep13 __attribute__((swift_name("bracketStep13")));
@property (class, readonly) THETACBurstBracketStep *bracketStep17 __attribute__((swift_name("bracketStep17")));
@property (class, readonly) THETACBurstBracketStep *bracketStep20 __attribute__((swift_name("bracketStep20")));
@property (class, readonly) THETACBurstBracketStep *bracketStep23 __attribute__((swift_name("bracketStep23")));
@property (class, readonly) THETACBurstBracketStep *bracketStep27 __attribute__((swift_name("bracketStep27")));
@property (class, readonly) THETACBurstBracketStep *bracketStep30 __attribute__((swift_name("bracketStep30")));
+ (THETACKotlinArray<THETACBurstBracketStep *> *)values __attribute__((swift_name("values()")));
@property (readonly) float value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BurstBracketStep.Companion")))
@interface THETACBurstBracketStepCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACBurstBracketStepCompanion *shared __attribute__((swift_name("shared")));
- (THETACBurstBracketStep *)getDefault __attribute__((swift_name("getDefault()")));
- (THETACBurstBracketStep * _Nullable)getFromValueValue:(THETACFloat * _Nullable)value __attribute__((swift_name("getFromValue(value:)")));
- (id<THETACKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<THETACKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(THETACKotlinArray<id<THETACKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerializationStrategy")))
@protocol THETACKotlinx_serialization_coreSerializationStrategy
@required
- (void)serializeEncoder:(id<THETACKotlinx_serialization_coreEncoder>)encoder value:(id _Nullable)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<THETACKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreDeserializationStrategy")))
@protocol THETACKotlinx_serialization_coreDeserializationStrategy
@required
- (id _Nullable)deserializeDecoder:(id<THETACKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
@property (readonly) id<THETACKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreKSerializer")))
@protocol THETACKotlinx_serialization_coreKSerializer <THETACKotlinx_serialization_coreSerializationStrategy, THETACKotlinx_serialization_coreDeserializationStrategy>
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BurstBracketStepSerializer")))
@interface THETACBurstBracketStepSerializer : THETACBase <THETACKotlinx_serialization_coreKSerializer>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)burstBracketStepSerializer __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACBurstBracketStepSerializer *shared __attribute__((swift_name("shared")));
- (THETACBurstBracketStep *)deserializeDecoder:(id<THETACKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
- (void)serializeEncoder:(id<THETACKotlinx_serialization_coreEncoder>)encoder value:(THETACBurstBracketStep *)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<THETACKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BurstCaptureNum")))
@interface THETACBurstCaptureNum : THETACKotlinEnum<THETACBurstCaptureNum *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) THETACBurstCaptureNumCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) THETACBurstCaptureNum *burstCaptureNum1 __attribute__((swift_name("burstCaptureNum1")));
@property (class, readonly) THETACBurstCaptureNum *burstCaptureNum3 __attribute__((swift_name("burstCaptureNum3")));
@property (class, readonly) THETACBurstCaptureNum *burstCaptureNum5 __attribute__((swift_name("burstCaptureNum5")));
@property (class, readonly) THETACBurstCaptureNum *burstCaptureNum7 __attribute__((swift_name("burstCaptureNum7")));
@property (class, readonly) THETACBurstCaptureNum *burstCaptureNum9 __attribute__((swift_name("burstCaptureNum9")));
+ (THETACKotlinArray<THETACBurstCaptureNum *> *)values __attribute__((swift_name("values()")));
@property (readonly) int32_t value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BurstCaptureNum.Companion")))
@interface THETACBurstCaptureNumCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACBurstCaptureNumCompanion *shared __attribute__((swift_name("shared")));
- (THETACBurstCaptureNum *)getDefault __attribute__((swift_name("getDefault()")));
- (THETACBurstCaptureNum * _Nullable)getFromValueValue:(THETACInt * _Nullable)value __attribute__((swift_name("getFromValue(value:)")));
- (id<THETACKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<THETACKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(THETACKotlinArray<id<THETACKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BurstCaptureNumSerializer")))
@interface THETACBurstCaptureNumSerializer : THETACBase <THETACKotlinx_serialization_coreKSerializer>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)burstCaptureNumSerializer __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACBurstCaptureNumSerializer *shared __attribute__((swift_name("shared")));
- (THETACBurstCaptureNum *)deserializeDecoder:(id<THETACKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
- (void)serializeEncoder:(id<THETACKotlinx_serialization_coreEncoder>)encoder value:(THETACBurstCaptureNum *)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<THETACKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BurstCompensation")))
@interface THETACBurstCompensation : THETACKotlinEnum<THETACBurstCompensation *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) THETACBurstCompensationCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) THETACBurstCompensation *burstCompensationDown50 __attribute__((swift_name("burstCompensationDown50")));
@property (class, readonly) THETACBurstCompensation *burstCompensationDown47 __attribute__((swift_name("burstCompensationDown47")));
@property (class, readonly) THETACBurstCompensation *burstCompensationDown43 __attribute__((swift_name("burstCompensationDown43")));
@property (class, readonly) THETACBurstCompensation *burstCompensationDown40 __attribute__((swift_name("burstCompensationDown40")));
@property (class, readonly) THETACBurstCompensation *burstCompensationDown37 __attribute__((swift_name("burstCompensationDown37")));
@property (class, readonly) THETACBurstCompensation *burstCompensationDown33 __attribute__((swift_name("burstCompensationDown33")));
@property (class, readonly) THETACBurstCompensation *burstCompensationDown30 __attribute__((swift_name("burstCompensationDown30")));
@property (class, readonly) THETACBurstCompensation *burstCompensationDown27 __attribute__((swift_name("burstCompensationDown27")));
@property (class, readonly) THETACBurstCompensation *burstCompensationDown23 __attribute__((swift_name("burstCompensationDown23")));
@property (class, readonly) THETACBurstCompensation *burstCompensationDown20 __attribute__((swift_name("burstCompensationDown20")));
@property (class, readonly) THETACBurstCompensation *burstCompensationDown17 __attribute__((swift_name("burstCompensationDown17")));
@property (class, readonly) THETACBurstCompensation *burstCompensationDown13 __attribute__((swift_name("burstCompensationDown13")));
@property (class, readonly) THETACBurstCompensation *burstCompensationDown10 __attribute__((swift_name("burstCompensationDown10")));
@property (class, readonly) THETACBurstCompensation *burstCompensationDown07 __attribute__((swift_name("burstCompensationDown07")));
@property (class, readonly) THETACBurstCompensation *burstCompensationDown03 __attribute__((swift_name("burstCompensationDown03")));
@property (class, readonly) THETACBurstCompensation *burstCompensation00 __attribute__((swift_name("burstCompensation00")));
@property (class, readonly) THETACBurstCompensation *burstCompensationUp03 __attribute__((swift_name("burstCompensationUp03")));
@property (class, readonly) THETACBurstCompensation *burstCompensationUp07 __attribute__((swift_name("burstCompensationUp07")));
@property (class, readonly) THETACBurstCompensation *burstCompensationUp10 __attribute__((swift_name("burstCompensationUp10")));
@property (class, readonly) THETACBurstCompensation *burstCompensationUp13 __attribute__((swift_name("burstCompensationUp13")));
@property (class, readonly) THETACBurstCompensation *burstCompensationUp17 __attribute__((swift_name("burstCompensationUp17")));
@property (class, readonly) THETACBurstCompensation *burstCompensationUp20 __attribute__((swift_name("burstCompensationUp20")));
@property (class, readonly) THETACBurstCompensation *burstCompensationUp23 __attribute__((swift_name("burstCompensationUp23")));
@property (class, readonly) THETACBurstCompensation *burstCompensationUp27 __attribute__((swift_name("burstCompensationUp27")));
@property (class, readonly) THETACBurstCompensation *burstCompensationUp30 __attribute__((swift_name("burstCompensationUp30")));
@property (class, readonly) THETACBurstCompensation *burstCompensationUp33 __attribute__((swift_name("burstCompensationUp33")));
@property (class, readonly) THETACBurstCompensation *burstCompensationUp37 __attribute__((swift_name("burstCompensationUp37")));
@property (class, readonly) THETACBurstCompensation *burstCompensationUp40 __attribute__((swift_name("burstCompensationUp40")));
@property (class, readonly) THETACBurstCompensation *burstCompensationUp43 __attribute__((swift_name("burstCompensationUp43")));
@property (class, readonly) THETACBurstCompensation *burstCompensationUp47 __attribute__((swift_name("burstCompensationUp47")));
@property (class, readonly) THETACBurstCompensation *burstCompensationUp50 __attribute__((swift_name("burstCompensationUp50")));
+ (THETACKotlinArray<THETACBurstCompensation *> *)values __attribute__((swift_name("values()")));
@property (readonly) float value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BurstCompensation.Companion")))
@interface THETACBurstCompensationCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACBurstCompensationCompanion *shared __attribute__((swift_name("shared")));
- (THETACBurstCompensation *)getDefault __attribute__((swift_name("getDefault()")));
- (THETACBurstCompensation * _Nullable)getFromValueValue:(THETACFloat * _Nullable)value __attribute__((swift_name("getFromValue(value:)")));
- (id<THETACKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<THETACKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(THETACKotlinArray<id<THETACKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BurstCompensationSerializer")))
@interface THETACBurstCompensationSerializer : THETACBase <THETACKotlinx_serialization_coreKSerializer>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)burstCompensationSerializer __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACBurstCompensationSerializer *shared __attribute__((swift_name("shared")));
- (THETACBurstCompensation *)deserializeDecoder:(id<THETACKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
- (void)serializeEncoder:(id<THETACKotlinx_serialization_coreEncoder>)encoder value:(THETACBurstCompensation *)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<THETACKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BurstEnableIsoControl")))
@interface THETACBurstEnableIsoControl : THETACKotlinEnum<THETACBurstEnableIsoControl *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) THETACBurstEnableIsoControlCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) THETACBurstEnableIsoControl *off __attribute__((swift_name("off")));
@property (class, readonly) THETACBurstEnableIsoControl *on __attribute__((swift_name("on")));
+ (THETACKotlinArray<THETACBurstEnableIsoControl *> *)values __attribute__((swift_name("values()")));
@property (readonly) int32_t value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BurstEnableIsoControl.Companion")))
@interface THETACBurstEnableIsoControlCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACBurstEnableIsoControlCompanion *shared __attribute__((swift_name("shared")));
- (THETACBurstEnableIsoControl *)getDefault __attribute__((swift_name("getDefault()")));
- (THETACBurstEnableIsoControl * _Nullable)getFromValueValue:(THETACInt * _Nullable)value __attribute__((swift_name("getFromValue(value:)")));
- (id<THETACKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<THETACKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(THETACKotlinArray<id<THETACKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BurstEnableIsoControlSerializer")))
@interface THETACBurstEnableIsoControlSerializer : THETACBase <THETACKotlinx_serialization_coreKSerializer>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)burstEnableIsoControlSerializer __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACBurstEnableIsoControlSerializer *shared __attribute__((swift_name("shared")));
- (THETACBurstEnableIsoControl *)deserializeDecoder:(id<THETACKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
- (void)serializeEncoder:(id<THETACKotlinx_serialization_coreEncoder>)encoder value:(THETACBurstEnableIsoControl *)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<THETACKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BurstMaxExposureTime")))
@interface THETACBurstMaxExposureTime : THETACKotlinEnum<THETACBurstMaxExposureTime *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) THETACBurstMaxExposureTimeCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) THETACBurstMaxExposureTime *maxExposureTime05 __attribute__((swift_name("maxExposureTime05")));
@property (class, readonly) THETACBurstMaxExposureTime *maxExposureTime0625 __attribute__((swift_name("maxExposureTime0625")));
@property (class, readonly) THETACBurstMaxExposureTime *maxExposureTime076923076 __attribute__((swift_name("maxExposureTime076923076")));
@property (class, readonly) THETACBurstMaxExposureTime *maxExposureTime1 __attribute__((swift_name("maxExposureTime1")));
@property (class, readonly) THETACBurstMaxExposureTime *maxExposureTime13 __attribute__((swift_name("maxExposureTime13")));
@property (class, readonly) THETACBurstMaxExposureTime *maxExposureTime16 __attribute__((swift_name("maxExposureTime16")));
@property (class, readonly) THETACBurstMaxExposureTime *maxExposureTime2 __attribute__((swift_name("maxExposureTime2")));
@property (class, readonly) THETACBurstMaxExposureTime *maxExposureTime25 __attribute__((swift_name("maxExposureTime25")));
@property (class, readonly) THETACBurstMaxExposureTime *maxExposureTime32 __attribute__((swift_name("maxExposureTime32")));
@property (class, readonly) THETACBurstMaxExposureTime *maxExposureTime4 __attribute__((swift_name("maxExposureTime4")));
@property (class, readonly) THETACBurstMaxExposureTime *maxExposureTime5 __attribute__((swift_name("maxExposureTime5")));
@property (class, readonly) THETACBurstMaxExposureTime *maxExposureTime6 __attribute__((swift_name("maxExposureTime6")));
@property (class, readonly) THETACBurstMaxExposureTime *maxExposureTime8 __attribute__((swift_name("maxExposureTime8")));
@property (class, readonly) THETACBurstMaxExposureTime *maxExposureTime10 __attribute__((swift_name("maxExposureTime10")));
@property (class, readonly) THETACBurstMaxExposureTime *maxExposureTime13_ __attribute__((swift_name("maxExposureTime13_")));
@property (class, readonly) THETACBurstMaxExposureTime *maxExposureTime15 __attribute__((swift_name("maxExposureTime15")));
@property (class, readonly) THETACBurstMaxExposureTime *maxExposureTime20 __attribute__((swift_name("maxExposureTime20")));
@property (class, readonly) THETACBurstMaxExposureTime *maxExposureTime25_ __attribute__((swift_name("maxExposureTime25_")));
@property (class, readonly) THETACBurstMaxExposureTime *maxExposureTime30 __attribute__((swift_name("maxExposureTime30")));
@property (class, readonly) THETACBurstMaxExposureTime *maxExposureTime40 __attribute__((swift_name("maxExposureTime40")));
@property (class, readonly) THETACBurstMaxExposureTime *maxExposureTime50 __attribute__((swift_name("maxExposureTime50")));
@property (class, readonly) THETACBurstMaxExposureTime *maxExposureTime60 __attribute__((swift_name("maxExposureTime60")));
+ (THETACKotlinArray<THETACBurstMaxExposureTime *> *)values __attribute__((swift_name("values()")));
@property (readonly) double value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BurstMaxExposureTime.Companion")))
@interface THETACBurstMaxExposureTimeCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACBurstMaxExposureTimeCompanion *shared __attribute__((swift_name("shared")));
- (THETACBurstMaxExposureTime *)getDefault __attribute__((swift_name("getDefault()")));
- (THETACBurstMaxExposureTime * _Nullable)getFromValueValue:(THETACDouble * _Nullable)value __attribute__((swift_name("getFromValue(value:)")));
- (id<THETACKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<THETACKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(THETACKotlinArray<id<THETACKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BurstMaxExposureTimeSerializer")))
@interface THETACBurstMaxExposureTimeSerializer : THETACBase <THETACKotlinx_serialization_coreKSerializer>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)burstMaxExposureTimeSerializer __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACBurstMaxExposureTimeSerializer *shared __attribute__((swift_name("shared")));
- (THETACBurstMaxExposureTime *)deserializeDecoder:(id<THETACKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
- (void)serializeEncoder:(id<THETACKotlinx_serialization_coreEncoder>)encoder value:(THETACBurstMaxExposureTime *)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<THETACKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BurstMode")))
@interface THETACBurstMode : THETACKotlinEnum<THETACBurstMode *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) THETACBurstModeCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) THETACBurstMode *on __attribute__((swift_name("on")));
@property (class, readonly) THETACBurstMode *off __attribute__((swift_name("off")));
+ (THETACKotlinArray<THETACBurstMode *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BurstMode.Companion")))
@interface THETACBurstModeCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACBurstModeCompanion *shared __attribute__((swift_name("shared")));
- (id<THETACKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<THETACKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(THETACKotlinArray<id<THETACKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BurstOption")))
@interface THETACBurstOption : THETACBase
- (instancetype)initWith_burstCaptureNum:(THETACBurstCaptureNum * _Nullable)_burstCaptureNum _burstBracketStep:(THETACBurstBracketStep * _Nullable)_burstBracketStep _burstCompensation:(THETACBurstCompensation * _Nullable)_burstCompensation _burstMaxExposureTime:(THETACBurstMaxExposureTime * _Nullable)_burstMaxExposureTime _burstEnableIsoControl:(THETACBurstEnableIsoControl * _Nullable)_burstEnableIsoControl _burstOrder:(THETACBurstOrder * _Nullable)_burstOrder __attribute__((swift_name("init(_burstCaptureNum:_burstBracketStep:_burstCompensation:_burstMaxExposureTime:_burstEnableIsoControl:_burstOrder:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) THETACBurstOptionCompanion *companion __attribute__((swift_name("companion")));
- (THETACBurstCaptureNum * _Nullable)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACBurstBracketStep * _Nullable)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACBurstCompensation * _Nullable)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACBurstMaxExposureTime * _Nullable)component4 __attribute__((swift_name("component4()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACBurstEnableIsoControl * _Nullable)component5 __attribute__((swift_name("component5()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACBurstOrder * _Nullable)component6 __attribute__((swift_name("component6()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACBurstOption *)doCopy_burstCaptureNum:(THETACBurstCaptureNum * _Nullable)_burstCaptureNum _burstBracketStep:(THETACBurstBracketStep * _Nullable)_burstBracketStep _burstCompensation:(THETACBurstCompensation * _Nullable)_burstCompensation _burstMaxExposureTime:(THETACBurstMaxExposureTime * _Nullable)_burstMaxExposureTime _burstEnableIsoControl:(THETACBurstEnableIsoControl * _Nullable)_burstEnableIsoControl _burstOrder:(THETACBurstOrder * _Nullable)_burstOrder __attribute__((swift_name("doCopy(_burstCaptureNum:_burstBracketStep:_burstCompensation:_burstMaxExposureTime:_burstEnableIsoControl:_burstOrder:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) THETACBurstBracketStep * _Nullable _burstBracketStep __attribute__((swift_name("_burstBracketStep")));
@property (readonly) THETACBurstCaptureNum * _Nullable _burstCaptureNum __attribute__((swift_name("_burstCaptureNum")));
@property (readonly) THETACBurstCompensation * _Nullable _burstCompensation __attribute__((swift_name("_burstCompensation")));
@property (readonly) THETACBurstEnableIsoControl * _Nullable _burstEnableIsoControl __attribute__((swift_name("_burstEnableIsoControl")));
@property (readonly) THETACBurstMaxExposureTime * _Nullable _burstMaxExposureTime __attribute__((swift_name("_burstMaxExposureTime")));
@property (readonly) THETACBurstOrder * _Nullable _burstOrder __attribute__((swift_name("_burstOrder")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BurstOption.Companion")))
@interface THETACBurstOptionCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACBurstOptionCompanion *shared __attribute__((swift_name("shared")));
- (id<THETACKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BurstOrder")))
@interface THETACBurstOrder : THETACKotlinEnum<THETACBurstOrder *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) THETACBurstOrderCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) THETACBurstOrder *burstBracketOrder0 __attribute__((swift_name("burstBracketOrder0")));
@property (class, readonly) THETACBurstOrder *burstBracketOrder1 __attribute__((swift_name("burstBracketOrder1")));
+ (THETACKotlinArray<THETACBurstOrder *> *)values __attribute__((swift_name("values()")));
@property (readonly) int32_t value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BurstOrder.Companion")))
@interface THETACBurstOrderCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACBurstOrderCompanion *shared __attribute__((swift_name("shared")));
- (THETACBurstOrder *)getDefault __attribute__((swift_name("getDefault()")));
- (THETACBurstOrder * _Nullable)getFromValueValue:(THETACInt * _Nullable)value __attribute__((swift_name("getFromValue(value:)")));
- (id<THETACKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<THETACKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(THETACKotlinArray<id<THETACKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BurstOrderSerializer")))
@interface THETACBurstOrderSerializer : THETACBase <THETACKotlinx_serialization_coreKSerializer>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)burstOrderSerializer __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACBurstOrderSerializer *shared __attribute__((swift_name("shared")));
- (THETACBurstOrder *)deserializeDecoder:(id<THETACKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
- (void)serializeEncoder:(id<THETACKotlinx_serialization_coreEncoder>)encoder value:(THETACBurstOrder *)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<THETACKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CameraControlSource")))
@interface THETACCameraControlSource : THETACKotlinEnum<THETACCameraControlSource *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) THETACCameraControlSourceCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) THETACCameraControlSource *camera __attribute__((swift_name("camera")));
@property (class, readonly) THETACCameraControlSource *app __attribute__((swift_name("app")));
+ (THETACKotlinArray<THETACCameraControlSource *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CameraControlSource.Companion")))
@interface THETACCameraControlSourceCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACCameraControlSourceCompanion *shared __attribute__((swift_name("shared")));
- (id<THETACKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<THETACKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(THETACKotlinArray<id<THETACKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CameraError")))
@interface THETACCameraError : THETACKotlinEnum<THETACCameraError *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) THETACCameraErrorCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) THETACCameraError *noMemory __attribute__((swift_name("noMemory")));
@property (class, readonly) THETACCameraError *fileNumberOver __attribute__((swift_name("fileNumberOver")));
@property (class, readonly) THETACCameraError *noDateSetting __attribute__((swift_name("noDateSetting")));
@property (class, readonly) THETACCameraError *readError __attribute__((swift_name("readError")));
@property (class, readonly) THETACCameraError *notSupportedMediaType __attribute__((swift_name("notSupportedMediaType")));
@property (class, readonly) THETACCameraError *notSupportedFileSystem __attribute__((swift_name("notSupportedFileSystem")));
@property (class, readonly) THETACCameraError *mediaNotReady __attribute__((swift_name("mediaNotReady")));
@property (class, readonly) THETACCameraError *notEnoughBattery __attribute__((swift_name("notEnoughBattery")));
@property (class, readonly) THETACCameraError *invalidFile __attribute__((swift_name("invalidFile")));
@property (class, readonly) THETACCameraError *pluginBootError __attribute__((swift_name("pluginBootError")));
@property (class, readonly) THETACCameraError *inProgressError __attribute__((swift_name("inProgressError")));
@property (class, readonly) THETACCameraError *cannotRecording __attribute__((swift_name("cannotRecording")));
@property (class, readonly) THETACCameraError *cannotRecordLowbat __attribute__((swift_name("cannotRecordLowbat")));
@property (class, readonly) THETACCameraError *captureHwFailed __attribute__((swift_name("captureHwFailed")));
@property (class, readonly) THETACCameraError *captureSwFailed __attribute__((swift_name("captureSwFailed")));
@property (class, readonly) THETACCameraError *internalMemAccessFail __attribute__((swift_name("internalMemAccessFail")));
@property (class, readonly) THETACCameraError *unexpectedError __attribute__((swift_name("unexpectedError")));
@property (class, readonly) THETACCameraError *batteryChargeFail __attribute__((swift_name("batteryChargeFail")));
@property (class, readonly) THETACCameraError *highTemperatureWarning __attribute__((swift_name("highTemperatureWarning")));
@property (class, readonly) THETACCameraError *highTemperature __attribute__((swift_name("highTemperature")));
@property (class, readonly) THETACCameraError *batteryHighTemperature __attribute__((swift_name("batteryHighTemperature")));
@property (class, readonly) THETACCameraError *compassCalibration __attribute__((swift_name("compassCalibration")));
+ (THETACKotlinArray<THETACCameraError *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CameraError.Companion")))
@interface THETACCameraErrorCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACCameraErrorCompanion *shared __attribute__((swift_name("shared")));
- (id<THETACKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<THETACKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(THETACKotlinArray<id<THETACKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CameraFileInfo")))
@interface THETACCameraFileInfo : THETACBase
- (instancetype)initWithName:(NSString *)name fileUrl:(NSString *)fileUrl size:(int64_t)size dateTimeZone:(NSString * _Nullable)dateTimeZone dateTime:(NSString * _Nullable)dateTime lat:(THETACFloat * _Nullable)lat lng:(THETACFloat * _Nullable)lng width:(THETACInt * _Nullable)width height:(THETACInt * _Nullable)height thumbnail:(NSString * _Nullable)thumbnail _thumbSize:(THETACInt * _Nullable)_thumbSize _intervalCaptureGroupId:(NSString * _Nullable)_intervalCaptureGroupId _compositeShootingGroupId:(NSString * _Nullable)_compositeShootingGroupId _autoBracketGroupId:(NSString * _Nullable)_autoBracketGroupId _recordTime:(THETACInt * _Nullable)_recordTime isProcessed:(BOOL)isProcessed previewUrl:(NSString *)previewUrl _codec:(NSString * _Nullable)_codec _projectionType:(THETAC_ProjectionType * _Nullable)_projectionType _continuousShootingGroupId:(NSString * _Nullable)_continuousShootingGroupId _frameRate:(THETACInt * _Nullable)_frameRate _favorite:(THETACBoolean * _Nullable)_favorite _imageDescription:(NSString * _Nullable)_imageDescription _storageID:(NSString * _Nullable)_storageID __attribute__((swift_name("init(name:fileUrl:size:dateTimeZone:dateTime:lat:lng:width:height:thumbnail:_thumbSize:_intervalCaptureGroupId:_compositeShootingGroupId:_autoBracketGroupId:_recordTime:isProcessed:previewUrl:_codec:_projectionType:_continuousShootingGroupId:_frameRate:_favorite:_imageDescription:_storageID:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) THETACCameraFileInfoCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component10 __attribute__((swift_name("component10()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACInt * _Nullable)component11 __attribute__((swift_name("component11()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component12 __attribute__((swift_name("component12()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component13 __attribute__((swift_name("component13()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component14 __attribute__((swift_name("component14()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACInt * _Nullable)component15 __attribute__((swift_name("component15()"))) __attribute__((deprecated("use corresponding property instead")));
- (BOOL)component16 __attribute__((swift_name("component16()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component17 __attribute__((swift_name("component17()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component18 __attribute__((swift_name("component18()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETAC_ProjectionType * _Nullable)component19 __attribute__((swift_name("component19()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component20 __attribute__((swift_name("component20()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACInt * _Nullable)component21 __attribute__((swift_name("component21()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACBoolean * _Nullable)component22 __attribute__((swift_name("component22()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component23 __attribute__((swift_name("component23()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component24 __attribute__((swift_name("component24()"))) __attribute__((deprecated("use corresponding property instead")));
- (int64_t)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component5 __attribute__((swift_name("component5()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACFloat * _Nullable)component6 __attribute__((swift_name("component6()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACFloat * _Nullable)component7 __attribute__((swift_name("component7()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACInt * _Nullable)component8 __attribute__((swift_name("component8()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACInt * _Nullable)component9 __attribute__((swift_name("component9()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACCameraFileInfo *)doCopyName:(NSString *)name fileUrl:(NSString *)fileUrl size:(int64_t)size dateTimeZone:(NSString * _Nullable)dateTimeZone dateTime:(NSString * _Nullable)dateTime lat:(THETACFloat * _Nullable)lat lng:(THETACFloat * _Nullable)lng width:(THETACInt * _Nullable)width height:(THETACInt * _Nullable)height thumbnail:(NSString * _Nullable)thumbnail _thumbSize:(THETACInt * _Nullable)_thumbSize _intervalCaptureGroupId:(NSString * _Nullable)_intervalCaptureGroupId _compositeShootingGroupId:(NSString * _Nullable)_compositeShootingGroupId _autoBracketGroupId:(NSString * _Nullable)_autoBracketGroupId _recordTime:(THETACInt * _Nullable)_recordTime isProcessed:(BOOL)isProcessed previewUrl:(NSString *)previewUrl _codec:(NSString * _Nullable)_codec _projectionType:(THETAC_ProjectionType * _Nullable)_projectionType _continuousShootingGroupId:(NSString * _Nullable)_continuousShootingGroupId _frameRate:(THETACInt * _Nullable)_frameRate _favorite:(THETACBoolean * _Nullable)_favorite _imageDescription:(NSString * _Nullable)_imageDescription _storageID:(NSString * _Nullable)_storageID __attribute__((swift_name("doCopy(name:fileUrl:size:dateTimeZone:dateTime:lat:lng:width:height:thumbnail:_thumbSize:_intervalCaptureGroupId:_compositeShootingGroupId:_autoBracketGroupId:_recordTime:isProcessed:previewUrl:_codec:_projectionType:_continuousShootingGroupId:_frameRate:_favorite:_imageDescription:_storageID:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSString *)getThumbnailUrl __attribute__((swift_name("getThumbnailUrl()")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable _autoBracketGroupId __attribute__((swift_name("_autoBracketGroupId")));
@property (readonly) NSString * _Nullable _codec __attribute__((swift_name("_codec")));
@property (readonly) NSString * _Nullable _compositeShootingGroupId __attribute__((swift_name("_compositeShootingGroupId")));
@property (readonly) NSString * _Nullable _continuousShootingGroupId __attribute__((swift_name("_continuousShootingGroupId")));
@property (readonly) THETACBoolean * _Nullable _favorite __attribute__((swift_name("_favorite")));
@property (readonly) THETACInt * _Nullable _frameRate __attribute__((swift_name("_frameRate")));
@property (readonly) NSString * _Nullable _imageDescription __attribute__((swift_name("_imageDescription")));
@property (readonly) NSString * _Nullable _intervalCaptureGroupId __attribute__((swift_name("_intervalCaptureGroupId")));
@property (readonly) THETAC_ProjectionType * _Nullable _projectionType __attribute__((swift_name("_projectionType")));
@property (readonly) THETACInt * _Nullable _recordTime __attribute__((swift_name("_recordTime")));
@property (readonly) NSString * _Nullable _storageID __attribute__((swift_name("_storageID")));
@property (readonly) THETACInt * _Nullable _thumbSize __attribute__((swift_name("_thumbSize")));
@property (readonly) NSString * _Nullable dateTime __attribute__((swift_name("dateTime")));
@property (readonly) NSString * _Nullable dateTimeZone __attribute__((swift_name("dateTimeZone")));
@property (readonly) NSString *fileUrl __attribute__((swift_name("fileUrl")));
@property (readonly) THETACInt * _Nullable height __attribute__((swift_name("height")));
@property (readonly) BOOL isProcessed __attribute__((swift_name("isProcessed")));
@property (readonly) THETACFloat * _Nullable lat __attribute__((swift_name("lat")));
@property (readonly) THETACFloat * _Nullable lng __attribute__((swift_name("lng")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSString *previewUrl __attribute__((swift_name("previewUrl")));
@property (readonly) int64_t size __attribute__((swift_name("size")));
@property (readonly) NSString * _Nullable thumbnail __attribute__((swift_name("thumbnail")));
@property (readonly) THETACInt * _Nullable width __attribute__((swift_name("width")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CameraFileInfo.Companion")))
@interface THETACCameraFileInfoCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACCameraFileInfoCompanion *shared __attribute__((swift_name("shared")));
- (id<THETACKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@property (readonly) NSString *THUMBNAIL_QUERY __attribute__((swift_name("THUMBNAIL_QUERY")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CameraMode")))
@interface THETACCameraMode : THETACKotlinEnum<THETACCameraMode *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) THETACCameraModeCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) THETACCameraMode *capture __attribute__((swift_name("capture")));
@property (class, readonly) THETACCameraMode *playback __attribute__((swift_name("playback")));
@property (class, readonly) THETACCameraMode *setting __attribute__((swift_name("setting")));
@property (class, readonly) THETACCameraMode *plugin __attribute__((swift_name("plugin")));
+ (THETACKotlinArray<THETACCameraMode *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CameraMode.Companion")))
@interface THETACCameraModeCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACCameraModeCompanion *shared __attribute__((swift_name("shared")));
- (id<THETACKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<THETACKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(THETACKotlinArray<id<THETACKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CameraState")))
@interface THETACCameraState : THETACBase
- (instancetype)initWithBatteryLevel:(double)batteryLevel storageUri:(NSString * _Nullable)storageUri _storageID:(NSString * _Nullable)_storageID _captureStatus:(THETACCaptureStatus *)_captureStatus _recordedTime:(int32_t)_recordedTime _recordableTime:(int32_t)_recordableTime _capturedPictures:(THETACInt * _Nullable)_capturedPictures _compositeShootingElapsedTime:(THETACInt * _Nullable)_compositeShootingElapsedTime _latestFileUrl:(NSString * _Nullable)_latestFileUrl _batteryState:(THETACChargingState *)_batteryState _apiVersion:(int32_t)_apiVersion _pluginRunning:(THETACBoolean * _Nullable)_pluginRunning _pluginWebServer:(THETACBoolean * _Nullable)_pluginWebServer _function:(THETACShootingFunction * _Nullable)_function _mySettingChanged:(THETACBoolean * _Nullable)_mySettingChanged _currentMicrophone:(THETACMicrophoneOption * _Nullable)_currentMicrophone _currentStorage:(THETACStorageOption * _Nullable)_currentStorage _cameraError:(NSArray<THETACCameraError *> * _Nullable)_cameraError _batteryInsert:(THETACBoolean * _Nullable)_batteryInsert __attribute__((swift_name("init(batteryLevel:storageUri:_storageID:_captureStatus:_recordedTime:_recordableTime:_capturedPictures:_compositeShootingElapsedTime:_latestFileUrl:_batteryState:_apiVersion:_pluginRunning:_pluginWebServer:_function:_mySettingChanged:_currentMicrophone:_currentStorage:_cameraError:_batteryInsert:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) THETACCameraStateCompanion *companion __attribute__((swift_name("companion")));
- (double)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACChargingState *)component10 __attribute__((swift_name("component10()"))) __attribute__((deprecated("use corresponding property instead")));
- (int32_t)component11 __attribute__((swift_name("component11()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACBoolean * _Nullable)component12 __attribute__((swift_name("component12()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACBoolean * _Nullable)component13 __attribute__((swift_name("component13()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACShootingFunction * _Nullable)component14 __attribute__((swift_name("component14()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACBoolean * _Nullable)component15 __attribute__((swift_name("component15()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACMicrophoneOption * _Nullable)component16 __attribute__((swift_name("component16()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACStorageOption * _Nullable)component17 __attribute__((swift_name("component17()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSArray<THETACCameraError *> * _Nullable)component18 __attribute__((swift_name("component18()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACBoolean * _Nullable)component19 __attribute__((swift_name("component19()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACCaptureStatus *)component4 __attribute__((swift_name("component4()"))) __attribute__((deprecated("use corresponding property instead")));
- (int32_t)component5 __attribute__((swift_name("component5()"))) __attribute__((deprecated("use corresponding property instead")));
- (int32_t)component6 __attribute__((swift_name("component6()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACInt * _Nullable)component7 __attribute__((swift_name("component7()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACInt * _Nullable)component8 __attribute__((swift_name("component8()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component9 __attribute__((swift_name("component9()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACCameraState *)doCopyBatteryLevel:(double)batteryLevel storageUri:(NSString * _Nullable)storageUri _storageID:(NSString * _Nullable)_storageID _captureStatus:(THETACCaptureStatus *)_captureStatus _recordedTime:(int32_t)_recordedTime _recordableTime:(int32_t)_recordableTime _capturedPictures:(THETACInt * _Nullable)_capturedPictures _compositeShootingElapsedTime:(THETACInt * _Nullable)_compositeShootingElapsedTime _latestFileUrl:(NSString * _Nullable)_latestFileUrl _batteryState:(THETACChargingState *)_batteryState _apiVersion:(int32_t)_apiVersion _pluginRunning:(THETACBoolean * _Nullable)_pluginRunning _pluginWebServer:(THETACBoolean * _Nullable)_pluginWebServer _function:(THETACShootingFunction * _Nullable)_function _mySettingChanged:(THETACBoolean * _Nullable)_mySettingChanged _currentMicrophone:(THETACMicrophoneOption * _Nullable)_currentMicrophone _currentStorage:(THETACStorageOption * _Nullable)_currentStorage _cameraError:(NSArray<THETACCameraError *> * _Nullable)_cameraError _batteryInsert:(THETACBoolean * _Nullable)_batteryInsert __attribute__((swift_name("doCopy(batteryLevel:storageUri:_storageID:_captureStatus:_recordedTime:_recordableTime:_capturedPictures:_compositeShootingElapsedTime:_latestFileUrl:_batteryState:_apiVersion:_pluginRunning:_pluginWebServer:_function:_mySettingChanged:_currentMicrophone:_currentStorage:_cameraError:_batteryInsert:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t _apiVersion __attribute__((swift_name("_apiVersion")));
@property (readonly) THETACBoolean * _Nullable _batteryInsert __attribute__((swift_name("_batteryInsert")));
@property (readonly) THETACChargingState *_batteryState __attribute__((swift_name("_batteryState")));
@property (readonly) NSArray<THETACCameraError *> * _Nullable _cameraError __attribute__((swift_name("_cameraError")));
@property (readonly) THETACCaptureStatus *_captureStatus __attribute__((swift_name("_captureStatus")));
@property (readonly) THETACInt * _Nullable _capturedPictures __attribute__((swift_name("_capturedPictures")));
@property (readonly) THETACInt * _Nullable _compositeShootingElapsedTime __attribute__((swift_name("_compositeShootingElapsedTime")));
@property (readonly) THETACMicrophoneOption * _Nullable _currentMicrophone __attribute__((swift_name("_currentMicrophone")));
@property (readonly) THETACStorageOption * _Nullable _currentStorage __attribute__((swift_name("_currentStorage")));
@property (readonly) THETACShootingFunction * _Nullable _function __attribute__((swift_name("_function")));
@property (readonly) NSString * _Nullable _latestFileUrl __attribute__((swift_name("_latestFileUrl")));
@property (readonly) THETACBoolean * _Nullable _mySettingChanged __attribute__((swift_name("_mySettingChanged")));
@property (readonly) THETACBoolean * _Nullable _pluginRunning __attribute__((swift_name("_pluginRunning")));
@property (readonly) THETACBoolean * _Nullable _pluginWebServer __attribute__((swift_name("_pluginWebServer")));
@property (readonly) int32_t _recordableTime __attribute__((swift_name("_recordableTime")));
@property (readonly) int32_t _recordedTime __attribute__((swift_name("_recordedTime")));
@property (readonly) NSString * _Nullable _storageID __attribute__((swift_name("_storageID")));
@property (readonly) double batteryLevel __attribute__((swift_name("batteryLevel")));
@property (readonly) NSString * _Nullable storageUri __attribute__((swift_name("storageUri")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CameraState.Companion")))
@interface THETACCameraStateCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACCameraStateCompanion *shared __attribute__((swift_name("shared")));
- (id<THETACKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((swift_name("CommandApiRequest")))
@protocol THETACCommandApiRequest
@required
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) id parameters __attribute__((swift_name("parameters")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CancelVideoConvertRequest")))
@interface THETACCancelVideoConvertRequest : THETACBase <THETACCommandApiRequest>
- (instancetype)initWithName:(NSString *)name parameters:(THETACEmptyParameter *)parameters __attribute__((swift_name("init(name:parameters:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) THETACCancelVideoConvertRequestCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACEmptyParameter *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACCancelVideoConvertRequest *)doCopyName:(NSString *)name parameters:(THETACEmptyParameter *)parameters __attribute__((swift_name("doCopy(name:parameters:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) THETACEmptyParameter *parameters __attribute__((swift_name("parameters")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CancelVideoConvertRequest.Companion")))
@interface THETACCancelVideoConvertRequestCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACCancelVideoConvertRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<THETACKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((swift_name("CommandApiResponse")))
@protocol THETACCommandApiResponse
@required
@property (readonly) THETACCommandError * _Nullable error __attribute__((swift_name("error")));
@property (readonly) NSString * _Nullable id __attribute__((swift_name("id")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) THETACCommandProgress * _Nullable progress __attribute__((swift_name("progress")));
@property (readonly) id _Nullable results __attribute__((swift_name("results")));
@property (readonly) THETACCommandState *state __attribute__((swift_name("state")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CancelVideoConvertResponse")))
@interface THETACCancelVideoConvertResponse : THETACBase <THETACCommandApiResponse>
- (instancetype)initWithName:(NSString *)name state:(THETACCommandState *)state id:(NSString * _Nullable)id results:(THETACKotlinx_serialization_jsonJsonElement * _Nullable)results error:(THETACCommandError * _Nullable)error progress:(THETACCommandProgress * _Nullable)progress __attribute__((swift_name("init(name:state:id:results:error:progress:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) THETACCancelVideoConvertResponseCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACCommandState *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACKotlinx_serialization_jsonJsonElement * _Nullable)component4 __attribute__((swift_name("component4()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACCommandError * _Nullable)component5 __attribute__((swift_name("component5()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACCommandProgress * _Nullable)component6 __attribute__((swift_name("component6()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACCancelVideoConvertResponse *)doCopyName:(NSString *)name state:(THETACCommandState *)state id:(NSString * _Nullable)id results:(THETACKotlinx_serialization_jsonJsonElement * _Nullable)results error:(THETACCommandError * _Nullable)error progress:(THETACCommandProgress * _Nullable)progress __attribute__((swift_name("doCopy(name:state:id:results:error:progress:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) THETACCommandError * _Nullable error __attribute__((swift_name("error")));
@property (readonly) NSString * _Nullable id __attribute__((swift_name("id")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) THETACCommandProgress * _Nullable progress __attribute__((swift_name("progress")));
@property (readonly) THETACKotlinx_serialization_jsonJsonElement * _Nullable results __attribute__((swift_name("results")));
@property (readonly) THETACCommandState *state __attribute__((swift_name("state")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CancelVideoConvertResponse.Companion")))
@interface THETACCancelVideoConvertResponseCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACCancelVideoConvertResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<THETACKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CaptureIntervalSupport")))
@interface THETACCaptureIntervalSupport : THETACBase
- (instancetype)initWithMinInterval:(THETACInt * _Nullable)minInterval maxInterval:(THETACInt * _Nullable)maxInterval __attribute__((swift_name("init(minInterval:maxInterval:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) THETACCaptureIntervalSupportCompanion *companion __attribute__((swift_name("companion")));
- (THETACInt * _Nullable)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACInt * _Nullable)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACCaptureIntervalSupport *)doCopyMinInterval:(THETACInt * _Nullable)minInterval maxInterval:(THETACInt * _Nullable)maxInterval __attribute__((swift_name("doCopy(minInterval:maxInterval:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) THETACInt * _Nullable maxInterval __attribute__((swift_name("maxInterval")));
@property (readonly) THETACInt * _Nullable minInterval __attribute__((swift_name("minInterval")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CaptureIntervalSupport.Companion")))
@interface THETACCaptureIntervalSupportCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACCaptureIntervalSupportCompanion *shared __attribute__((swift_name("shared")));
- (id<THETACKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CaptureMode")))
@interface THETACCaptureMode : THETACKotlinEnum<THETACCaptureMode *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) THETACCaptureModeCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) THETACCaptureMode *image __attribute__((swift_name("image")));
@property (class, readonly) THETACCaptureMode *video __attribute__((swift_name("video")));
@property (class, readonly) THETACCaptureMode *liveStreaming __attribute__((swift_name("liveStreaming")));
@property (class, readonly) THETACCaptureMode *interval __attribute__((swift_name("interval")));
@property (class, readonly) THETACCaptureMode *preset __attribute__((swift_name("preset")));
+ (THETACKotlinArray<THETACCaptureMode *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CaptureMode.Companion")))
@interface THETACCaptureModeCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACCaptureModeCompanion *shared __attribute__((swift_name("shared")));
- (id<THETACKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<THETACKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(THETACKotlinArray<id<THETACKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CaptureNumberSupport")))
@interface THETACCaptureNumberSupport : THETACBase
- (instancetype)initWith_limitless:(THETACInt * _Nullable)_limitless minNumber:(THETACInt * _Nullable)minNumber maxNumber:(THETACInt * _Nullable)maxNumber __attribute__((swift_name("init(_limitless:minNumber:maxNumber:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) THETACCaptureNumberSupportCompanion *companion __attribute__((swift_name("companion")));
- (THETACInt * _Nullable)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACInt * _Nullable)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACInt * _Nullable)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACCaptureNumberSupport *)doCopy_limitless:(THETACInt * _Nullable)_limitless minNumber:(THETACInt * _Nullable)minNumber maxNumber:(THETACInt * _Nullable)maxNumber __attribute__((swift_name("doCopy(_limitless:minNumber:maxNumber:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) THETACInt * _Nullable _limitless __attribute__((swift_name("_limitless")));
@property (readonly) THETACInt * _Nullable maxNumber __attribute__((swift_name("maxNumber")));
@property (readonly) THETACInt * _Nullable minNumber __attribute__((swift_name("minNumber")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CaptureNumberSupport.Companion")))
@interface THETACCaptureNumberSupportCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACCaptureNumberSupportCompanion *shared __attribute__((swift_name("shared")));
- (id<THETACKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CaptureStatus")))
@interface THETACCaptureStatus : THETACKotlinEnum<THETACCaptureStatus *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) THETACCaptureStatusCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) THETACCaptureStatus *shooting __attribute__((swift_name("shooting")));
@property (class, readonly) THETACCaptureStatus *idle __attribute__((swift_name("idle")));
@property (class, readonly) THETACCaptureStatus *selfTimerCountdown __attribute__((swift_name("selfTimerCountdown")));
@property (class, readonly) THETACCaptureStatus *bracketShooting __attribute__((swift_name("bracketShooting")));
@property (class, readonly) THETACCaptureStatus *converting __attribute__((swift_name("converting")));
@property (class, readonly) THETACCaptureStatus *timeShiftShooting __attribute__((swift_name("timeShiftShooting")));
@property (class, readonly) THETACCaptureStatus *continuousShooting __attribute__((swift_name("continuousShooting")));
@property (class, readonly) THETACCaptureStatus *retrospectiveImageRecording __attribute__((swift_name("retrospectiveImageRecording")));
+ (THETACKotlinArray<THETACCaptureStatus *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CaptureStatus.Companion")))
@interface THETACCaptureStatusCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACCaptureStatusCompanion *shared __attribute__((swift_name("shared")));
- (id<THETACKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<THETACKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(THETACKotlinArray<id<THETACKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ChargingState")))
@interface THETACChargingState : THETACKotlinEnum<THETACChargingState *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) THETACChargingStateCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) THETACChargingState *charging __attribute__((swift_name("charging")));
@property (class, readonly) THETACChargingState *charged __attribute__((swift_name("charged")));
@property (class, readonly) THETACChargingState *disconnect __attribute__((swift_name("disconnect")));
+ (THETACKotlinArray<THETACChargingState *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ChargingState.Companion")))
@interface THETACChargingStateCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACChargingStateCompanion *shared __attribute__((swift_name("shared")));
- (id<THETACKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<THETACKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(THETACKotlinArray<id<THETACKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CommandApi")))
@interface THETACCommandApi : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)commandApi __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACCommandApi *shared __attribute__((swift_name("shared")));
@property (readonly) THETACKtor_httpHttpMethod *METHOD __attribute__((swift_name("METHOD")));
@property (readonly) NSString *PATH __attribute__((swift_name("PATH")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CommandError")))
@interface THETACCommandError : THETACBase
- (instancetype)initWithCode:(NSString *)code message:(NSString *)message __attribute__((swift_name("init(code:message:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) THETACCommandErrorCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACCommandError *)doCopyCode:(NSString *)code message:(NSString *)message __attribute__((swift_name("doCopy(code:message:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *code __attribute__((swift_name("code")));
@property (readonly) NSString *message __attribute__((swift_name("message")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CommandError.Companion")))
@interface THETACCommandErrorCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACCommandErrorCompanion *shared __attribute__((swift_name("shared")));
- (id<THETACKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CommandProgress")))
@interface THETACCommandProgress : THETACBase
- (instancetype)initWithCompletion:(float)completion __attribute__((swift_name("init(completion:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) THETACCommandProgressCompanion *companion __attribute__((swift_name("companion")));
- (float)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACCommandProgress *)doCopyCompletion:(float)completion __attribute__((swift_name("doCopy(completion:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) float completion __attribute__((swift_name("completion")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CommandProgress.Companion")))
@interface THETACCommandProgressCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACCommandProgressCompanion *shared __attribute__((swift_name("shared")));
- (id<THETACKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CommandState")))
@interface THETACCommandState : THETACKotlinEnum<THETACCommandState *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) THETACCommandStateCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) THETACCommandState *done __attribute__((swift_name("done")));
@property (class, readonly) THETACCommandState *inProgress __attribute__((swift_name("inProgress")));
@property (class, readonly) THETACCommandState *error __attribute__((swift_name("error")));
+ (THETACKotlinArray<THETACCommandState *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CommandState.Companion")))
@interface THETACCommandStateCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACCommandStateCompanion *shared __attribute__((swift_name("shared")));
- (id<THETACKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<THETACKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(THETACKotlinArray<id<THETACKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ConvertVideoFormatsParams")))
@interface THETACConvertVideoFormatsParams : THETACBase
- (instancetype)initWithFileUrl:(NSString *)fileUrl size:(THETACVideoFormat * _Nullable)size projectionType:(THETAC_ProjectionType * _Nullable)projectionType codec:(NSString * _Nullable)codec topBottomCorrection:(THETACTopBottomCorrection * _Nullable)topBottomCorrection __attribute__((swift_name("init(fileUrl:size:projectionType:codec:topBottomCorrection:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) THETACConvertVideoFormatsParamsCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACVideoFormat * _Nullable)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETAC_ProjectionType * _Nullable)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACTopBottomCorrection * _Nullable)component5 __attribute__((swift_name("component5()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACConvertVideoFormatsParams *)doCopyFileUrl:(NSString *)fileUrl size:(THETACVideoFormat * _Nullable)size projectionType:(THETAC_ProjectionType * _Nullable)projectionType codec:(NSString * _Nullable)codec topBottomCorrection:(THETACTopBottomCorrection * _Nullable)topBottomCorrection __attribute__((swift_name("doCopy(fileUrl:size:projectionType:codec:topBottomCorrection:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable codec __attribute__((swift_name("codec")));
@property (readonly) NSString *fileUrl __attribute__((swift_name("fileUrl")));
@property (readonly) THETAC_ProjectionType * _Nullable projectionType __attribute__((swift_name("projectionType")));
@property (readonly) THETACVideoFormat * _Nullable size __attribute__((swift_name("size")));
@property (readonly) THETACTopBottomCorrection * _Nullable topBottomCorrection __attribute__((swift_name("topBottomCorrection")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ConvertVideoFormatsParams.Companion")))
@interface THETACConvertVideoFormatsParamsCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACConvertVideoFormatsParamsCompanion *shared __attribute__((swift_name("shared")));
- (id<THETACKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ConvertVideoFormatsRequest")))
@interface THETACConvertVideoFormatsRequest : THETACBase <THETACCommandApiRequest>
- (instancetype)initWithName:(NSString *)name parameters:(THETACConvertVideoFormatsParams *)parameters __attribute__((swift_name("init(name:parameters:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) THETACConvertVideoFormatsRequestCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACConvertVideoFormatsParams *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACConvertVideoFormatsRequest *)doCopyName:(NSString *)name parameters:(THETACConvertVideoFormatsParams *)parameters __attribute__((swift_name("doCopy(name:parameters:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) THETACConvertVideoFormatsParams *parameters __attribute__((swift_name("parameters")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ConvertVideoFormatsRequest.Companion")))
@interface THETACConvertVideoFormatsRequestCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACConvertVideoFormatsRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<THETACKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ConvertVideoFormatsResponse")))
@interface THETACConvertVideoFormatsResponse : THETACBase <THETACCommandApiResponse>
- (instancetype)initWithName:(NSString *)name state:(THETACCommandState *)state id:(NSString * _Nullable)id results:(THETACResultConvertVideoFormats * _Nullable)results error:(THETACCommandError * _Nullable)error progress:(THETACCommandProgress * _Nullable)progress __attribute__((swift_name("init(name:state:id:results:error:progress:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) THETACConvertVideoFormatsResponseCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACCommandState *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACResultConvertVideoFormats * _Nullable)component4 __attribute__((swift_name("component4()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACCommandError * _Nullable)component5 __attribute__((swift_name("component5()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACCommandProgress * _Nullable)component6 __attribute__((swift_name("component6()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACConvertVideoFormatsResponse *)doCopyName:(NSString *)name state:(THETACCommandState *)state id:(NSString * _Nullable)id results:(THETACResultConvertVideoFormats * _Nullable)results error:(THETACCommandError * _Nullable)error progress:(THETACCommandProgress * _Nullable)progress __attribute__((swift_name("doCopy(name:state:id:results:error:progress:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) THETACCommandError * _Nullable error __attribute__((swift_name("error")));
@property (readonly) NSString * _Nullable id __attribute__((swift_name("id")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) THETACCommandProgress * _Nullable progress __attribute__((swift_name("progress")));
@property (readonly) THETACResultConvertVideoFormats * _Nullable results __attribute__((swift_name("results")));
@property (readonly) THETACCommandState *state __attribute__((swift_name("state")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ConvertVideoFormatsResponse.Companion")))
@interface THETACConvertVideoFormatsResponseCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACConvertVideoFormatsResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<THETACKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DeleteAccessPointParams")))
@interface THETACDeleteAccessPointParams : THETACBase
- (instancetype)initWithSsid:(NSString *)ssid __attribute__((swift_name("init(ssid:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) THETACDeleteAccessPointParamsCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACDeleteAccessPointParams *)doCopySsid:(NSString *)ssid __attribute__((swift_name("doCopy(ssid:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *ssid __attribute__((swift_name("ssid")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DeleteAccessPointParams.Companion")))
@interface THETACDeleteAccessPointParamsCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACDeleteAccessPointParamsCompanion *shared __attribute__((swift_name("shared")));
- (id<THETACKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DeleteAccessPointRequest")))
@interface THETACDeleteAccessPointRequest : THETACBase <THETACCommandApiRequest>
- (instancetype)initWithName:(NSString *)name parameters:(THETACDeleteAccessPointParams *)parameters __attribute__((swift_name("init(name:parameters:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) THETACDeleteAccessPointRequestCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACDeleteAccessPointParams *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACDeleteAccessPointRequest *)doCopyName:(NSString *)name parameters:(THETACDeleteAccessPointParams *)parameters __attribute__((swift_name("doCopy(name:parameters:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) THETACDeleteAccessPointParams *parameters __attribute__((swift_name("parameters")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DeleteAccessPointRequest.Companion")))
@interface THETACDeleteAccessPointRequestCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACDeleteAccessPointRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<THETACKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DeleteAccessPointResponse")))
@interface THETACDeleteAccessPointResponse : THETACBase <THETACCommandApiResponse>
- (instancetype)initWithName:(NSString *)name state:(THETACCommandState *)state id:(NSString * _Nullable)id results:(THETACKotlinx_serialization_jsonJsonElement * _Nullable)results error:(THETACCommandError * _Nullable)error progress:(THETACCommandProgress * _Nullable)progress __attribute__((swift_name("init(name:state:id:results:error:progress:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) THETACDeleteAccessPointResponseCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACCommandState *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACKotlinx_serialization_jsonJsonElement * _Nullable)component4 __attribute__((swift_name("component4()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACCommandError * _Nullable)component5 __attribute__((swift_name("component5()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACCommandProgress * _Nullable)component6 __attribute__((swift_name("component6()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACDeleteAccessPointResponse *)doCopyName:(NSString *)name state:(THETACCommandState *)state id:(NSString * _Nullable)id results:(THETACKotlinx_serialization_jsonJsonElement * _Nullable)results error:(THETACCommandError * _Nullable)error progress:(THETACCommandProgress * _Nullable)progress __attribute__((swift_name("doCopy(name:state:id:results:error:progress:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) THETACCommandError * _Nullable error __attribute__((swift_name("error")));
@property (readonly) NSString * _Nullable id __attribute__((swift_name("id")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) THETACCommandProgress * _Nullable progress __attribute__((swift_name("progress")));
@property (readonly) THETACKotlinx_serialization_jsonJsonElement * _Nullable results __attribute__((swift_name("results")));
@property (readonly) THETACCommandState *state __attribute__((swift_name("state")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DeleteAccessPointResponse.Companion")))
@interface THETACDeleteAccessPointResponseCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACDeleteAccessPointResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<THETACKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DeleteMySettingParams")))
@interface THETACDeleteMySettingParams : THETACBase
- (instancetype)initWithMode:(THETACCaptureMode * _Nullable)mode __attribute__((swift_name("init(mode:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) THETACDeleteMySettingParamsCompanion *companion __attribute__((swift_name("companion")));
- (THETACCaptureMode * _Nullable)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACDeleteMySettingParams *)doCopyMode:(THETACCaptureMode * _Nullable)mode __attribute__((swift_name("doCopy(mode:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) THETACCaptureMode * _Nullable mode __attribute__((swift_name("mode")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DeleteMySettingParams.Companion")))
@interface THETACDeleteMySettingParamsCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACDeleteMySettingParamsCompanion *shared __attribute__((swift_name("shared")));
- (id<THETACKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DeleteMySettingRequest")))
@interface THETACDeleteMySettingRequest : THETACBase <THETACCommandApiRequest>
- (instancetype)initWithName:(NSString *)name parameters:(THETACDeleteMySettingParams *)parameters __attribute__((swift_name("init(name:parameters:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) THETACDeleteMySettingRequestCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACDeleteMySettingParams *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACDeleteMySettingRequest *)doCopyName:(NSString *)name parameters:(THETACDeleteMySettingParams *)parameters __attribute__((swift_name("doCopy(name:parameters:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) THETACDeleteMySettingParams *parameters __attribute__((swift_name("parameters")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DeleteMySettingRequest.Companion")))
@interface THETACDeleteMySettingRequestCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACDeleteMySettingRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<THETACKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DeleteMySettingResponse")))
@interface THETACDeleteMySettingResponse : THETACBase <THETACCommandApiResponse>
- (instancetype)initWithName:(NSString *)name state:(THETACCommandState *)state id:(NSString * _Nullable)id results:(THETACKotlinx_serialization_jsonJsonElement * _Nullable)results error:(THETACCommandError * _Nullable)error progress:(THETACCommandProgress * _Nullable)progress __attribute__((swift_name("init(name:state:id:results:error:progress:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) THETACDeleteMySettingResponseCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACCommandState *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACKotlinx_serialization_jsonJsonElement * _Nullable)component4 __attribute__((swift_name("component4()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACCommandError * _Nullable)component5 __attribute__((swift_name("component5()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACCommandProgress * _Nullable)component6 __attribute__((swift_name("component6()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACDeleteMySettingResponse *)doCopyName:(NSString *)name state:(THETACCommandState *)state id:(NSString * _Nullable)id results:(THETACKotlinx_serialization_jsonJsonElement * _Nullable)results error:(THETACCommandError * _Nullable)error progress:(THETACCommandProgress * _Nullable)progress __attribute__((swift_name("doCopy(name:state:id:results:error:progress:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) THETACCommandError * _Nullable error __attribute__((swift_name("error")));
@property (readonly) NSString * _Nullable id __attribute__((swift_name("id")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) THETACCommandProgress * _Nullable progress __attribute__((swift_name("progress")));
@property (readonly) THETACKotlinx_serialization_jsonJsonElement * _Nullable results __attribute__((swift_name("results")));
@property (readonly) THETACCommandState *state __attribute__((swift_name("state")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DeleteMySettingResponse.Companion")))
@interface THETACDeleteMySettingResponseCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACDeleteMySettingResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<THETACKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DeleteParams")))
@interface THETACDeleteParams : THETACBase
- (instancetype)initWithFileUrls:(NSArray<NSString *> *)fileUrls __attribute__((swift_name("init(fileUrls:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) THETACDeleteParamsCompanion *companion __attribute__((swift_name("companion")));
- (NSArray<NSString *> *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACDeleteParams *)doCopyFileUrls:(NSArray<NSString *> *)fileUrls __attribute__((swift_name("doCopy(fileUrls:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<NSString *> *fileUrls __attribute__((swift_name("fileUrls")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DeleteParams.Companion")))
@interface THETACDeleteParamsCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACDeleteParamsCompanion *shared __attribute__((swift_name("shared")));
- (id<THETACKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DeleteRequest")))
@interface THETACDeleteRequest : THETACBase <THETACCommandApiRequest>
- (instancetype)initWithName:(NSString *)name parameters:(THETACDeleteParams *)parameters __attribute__((swift_name("init(name:parameters:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) THETACDeleteRequestCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACDeleteParams *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACDeleteRequest *)doCopyName:(NSString *)name parameters:(THETACDeleteParams *)parameters __attribute__((swift_name("doCopy(name:parameters:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) THETACDeleteParams *parameters __attribute__((swift_name("parameters")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DeleteRequest.Companion")))
@interface THETACDeleteRequestCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACDeleteRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<THETACKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DeleteResponse")))
@interface THETACDeleteResponse : THETACBase <THETACCommandApiResponse>
- (instancetype)initWithName:(NSString *)name state:(THETACCommandState *)state id:(NSString * _Nullable)id results:(THETACKotlinx_serialization_jsonJsonElement * _Nullable)results error:(THETACCommandError * _Nullable)error progress:(THETACCommandProgress * _Nullable)progress __attribute__((swift_name("init(name:state:id:results:error:progress:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) THETACDeleteResponseCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACCommandState *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACKotlinx_serialization_jsonJsonElement * _Nullable)component4 __attribute__((swift_name("component4()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACCommandError * _Nullable)component5 __attribute__((swift_name("component5()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACCommandProgress * _Nullable)component6 __attribute__((swift_name("component6()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACDeleteResponse *)doCopyName:(NSString *)name state:(THETACCommandState *)state id:(NSString * _Nullable)id results:(THETACKotlinx_serialization_jsonJsonElement * _Nullable)results error:(THETACCommandError * _Nullable)error progress:(THETACCommandProgress * _Nullable)progress __attribute__((swift_name("doCopy(name:state:id:results:error:progress:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) THETACCommandError * _Nullable error __attribute__((swift_name("error")));
@property (readonly) NSString * _Nullable id __attribute__((swift_name("id")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) THETACCommandProgress * _Nullable progress __attribute__((swift_name("progress")));
@property (readonly) THETACKotlinx_serialization_jsonJsonElement * _Nullable results __attribute__((swift_name("results")));
@property (readonly) THETACCommandState *state __attribute__((swift_name("state")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DeleteResponse.Companion")))
@interface THETACDeleteResponseCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACDeleteResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<THETACKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EmptyParameter")))
@interface THETACEmptyParameter : THETACBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) THETACEmptyParameterCompanion *companion __attribute__((swift_name("companion")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EmptyParameter.Companion")))
@interface THETACEmptyParameterCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACEmptyParameterCompanion *shared __attribute__((swift_name("shared")));
- (id<THETACKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EndPoint")))
@interface THETACEndPoint : THETACBase
- (instancetype)initWithHttpPort:(int32_t)httpPort httpUpdatesPort:(int32_t)httpUpdatesPort __attribute__((swift_name("init(httpPort:httpUpdatesPort:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) THETACEndPointCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (int32_t)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACEndPoint *)doCopyHttpPort:(int32_t)httpPort httpUpdatesPort:(int32_t)httpUpdatesPort __attribute__((swift_name("doCopy(httpPort:httpUpdatesPort:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t httpPort __attribute__((swift_name("httpPort")));
@property (readonly) int32_t httpUpdatesPort __attribute__((swift_name("httpUpdatesPort")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EndPoint.Companion")))
@interface THETACEndPointCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACEndPointCompanion *shared __attribute__((swift_name("shared")));
- (id<THETACKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ExifInfo")))
@interface THETACExifInfo : THETACBase
- (instancetype)initWithExifVersion:(NSString *)ExifVersion ImageDescription:(NSString *)ImageDescription DateTime:(NSString *)DateTime ImageWidth:(THETACInt * _Nullable)ImageWidth ImageLength:(THETACInt * _Nullable)ImageLength ColorSpace:(int32_t)ColorSpace Compression:(THETACInt * _Nullable)Compression Orientation:(int32_t)Orientation Flash:(int32_t)Flash FocalLength:(float)FocalLength WhiteBalance:(int32_t)WhiteBalance ExposureTime:(double)ExposureTime FNumber:(double)FNumber ExposureProgram:(int32_t)ExposureProgram PhotographicSensitivity:(int32_t)PhotographicSensitivity ApertureValue:(double)ApertureValue BrightnessValue:(float)BrightnessValue ExposureBiasValue:(float)ExposureBiasValue GPSLatitudeRef:(NSString * _Nullable)GPSLatitudeRef GPSLatitude:(THETACDouble * _Nullable)GPSLatitude GPSLongitudeRef:(NSString * _Nullable)GPSLongitudeRef GPSLongitude:(THETACDouble * _Nullable)GPSLongitude Make:(NSString *)Make Model:(NSString *)Model Software:(NSString *)Software Copyright:(NSString *)Copyright __attribute__((swift_name("init(ExifVersion:ImageDescription:DateTime:ImageWidth:ImageLength:ColorSpace:Compression:Orientation:Flash:FocalLength:WhiteBalance:ExposureTime:FNumber:ExposureProgram:PhotographicSensitivity:ApertureValue:BrightnessValue:ExposureBiasValue:GPSLatitudeRef:GPSLatitude:GPSLongitudeRef:GPSLongitude:Make:Model:Software:Copyright:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) THETACExifInfoCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (float)component10 __attribute__((swift_name("component10()"))) __attribute__((deprecated("use corresponding property instead")));
- (int32_t)component11 __attribute__((swift_name("component11()"))) __attribute__((deprecated("use corresponding property instead")));
- (double)component12 __attribute__((swift_name("component12()"))) __attribute__((deprecated("use corresponding property instead")));
- (double)component13 __attribute__((swift_name("component13()"))) __attribute__((deprecated("use corresponding property instead")));
- (int32_t)component14 __attribute__((swift_name("component14()"))) __attribute__((deprecated("use corresponding property instead")));
- (int32_t)component15 __attribute__((swift_name("component15()"))) __attribute__((deprecated("use corresponding property instead")));
- (double)component16 __attribute__((swift_name("component16()"))) __attribute__((deprecated("use corresponding property instead")));
- (float)component17 __attribute__((swift_name("component17()"))) __attribute__((deprecated("use corresponding property instead")));
- (float)component18 __attribute__((swift_name("component18()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component19 __attribute__((swift_name("component19()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACDouble * _Nullable)component20 __attribute__((swift_name("component20()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component21 __attribute__((swift_name("component21()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACDouble * _Nullable)component22 __attribute__((swift_name("component22()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component23 __attribute__((swift_name("component23()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component24 __attribute__((swift_name("component24()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component25 __attribute__((swift_name("component25()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component26 __attribute__((swift_name("component26()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACInt * _Nullable)component4 __attribute__((swift_name("component4()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACInt * _Nullable)component5 __attribute__((swift_name("component5()"))) __attribute__((deprecated("use corresponding property instead")));
- (int32_t)component6 __attribute__((swift_name("component6()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACInt * _Nullable)component7 __attribute__((swift_name("component7()"))) __attribute__((deprecated("use corresponding property instead")));
- (int32_t)component8 __attribute__((swift_name("component8()"))) __attribute__((deprecated("use corresponding property instead")));
- (int32_t)component9 __attribute__((swift_name("component9()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACExifInfo *)doCopyExifVersion:(NSString *)ExifVersion ImageDescription:(NSString *)ImageDescription DateTime:(NSString *)DateTime ImageWidth:(THETACInt * _Nullable)ImageWidth ImageLength:(THETACInt * _Nullable)ImageLength ColorSpace:(int32_t)ColorSpace Compression:(THETACInt * _Nullable)Compression Orientation:(int32_t)Orientation Flash:(int32_t)Flash FocalLength:(float)FocalLength WhiteBalance:(int32_t)WhiteBalance ExposureTime:(double)ExposureTime FNumber:(double)FNumber ExposureProgram:(int32_t)ExposureProgram PhotographicSensitivity:(int32_t)PhotographicSensitivity ApertureValue:(double)ApertureValue BrightnessValue:(float)BrightnessValue ExposureBiasValue:(float)ExposureBiasValue GPSLatitudeRef:(NSString * _Nullable)GPSLatitudeRef GPSLatitude:(THETACDouble * _Nullable)GPSLatitude GPSLongitudeRef:(NSString * _Nullable)GPSLongitudeRef GPSLongitude:(THETACDouble * _Nullable)GPSLongitude Make:(NSString *)Make Model:(NSString *)Model Software:(NSString *)Software Copyright:(NSString *)Copyright __attribute__((swift_name("doCopy(ExifVersion:ImageDescription:DateTime:ImageWidth:ImageLength:ColorSpace:Compression:Orientation:Flash:FocalLength:WhiteBalance:ExposureTime:FNumber:ExposureProgram:PhotographicSensitivity:ApertureValue:BrightnessValue:ExposureBiasValue:GPSLatitudeRef:GPSLatitude:GPSLongitudeRef:GPSLongitude:Make:Model:Software:Copyright:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) double ApertureValue __attribute__((swift_name("ApertureValue")));
@property (readonly) float BrightnessValue __attribute__((swift_name("BrightnessValue")));
@property (readonly) int32_t ColorSpace __attribute__((swift_name("ColorSpace")));
@property (readonly) THETACInt * _Nullable Compression __attribute__((swift_name("Compression")));
@property (readonly) NSString *Copyright __attribute__((swift_name("Copyright")));
@property (readonly) NSString *DateTime __attribute__((swift_name("DateTime")));
@property (readonly) NSString *ExifVersion __attribute__((swift_name("ExifVersion")));
@property (readonly) float ExposureBiasValue __attribute__((swift_name("ExposureBiasValue")));
@property (readonly) int32_t ExposureProgram __attribute__((swift_name("ExposureProgram")));
@property (readonly) double ExposureTime __attribute__((swift_name("ExposureTime")));
@property (readonly) double FNumber __attribute__((swift_name("FNumber")));
@property (readonly) int32_t Flash __attribute__((swift_name("Flash")));
@property (readonly) float FocalLength __attribute__((swift_name("FocalLength")));
@property (readonly) THETACDouble * _Nullable GPSLatitude __attribute__((swift_name("GPSLatitude")));
@property (readonly) NSString * _Nullable GPSLatitudeRef __attribute__((swift_name("GPSLatitudeRef")));
@property (readonly) THETACDouble * _Nullable GPSLongitude __attribute__((swift_name("GPSLongitude")));
@property (readonly) NSString * _Nullable GPSLongitudeRef __attribute__((swift_name("GPSLongitudeRef")));
@property (readonly) NSString *ImageDescription __attribute__((swift_name("ImageDescription")));
@property (readonly) THETACInt * _Nullable ImageLength __attribute__((swift_name("ImageLength")));
@property (readonly) THETACInt * _Nullable ImageWidth __attribute__((swift_name("ImageWidth")));
@property (readonly) NSString *Make __attribute__((swift_name("Make")));
@property (readonly) NSString *Model __attribute__((swift_name("Model")));
@property (readonly) int32_t Orientation __attribute__((swift_name("Orientation")));
@property (readonly) int32_t PhotographicSensitivity __attribute__((swift_name("PhotographicSensitivity")));
@property (readonly) NSString *Software __attribute__((swift_name("Software")));
@property (readonly) int32_t WhiteBalance __attribute__((swift_name("WhiteBalance")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ExifInfo.Companion")))
@interface THETACExifInfoCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACExifInfoCompanion *shared __attribute__((swift_name("shared")));
- (id<THETACKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FileType")))
@interface THETACFileType : THETACKotlinEnum<THETACFileType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) THETACFileTypeCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) THETACFileType *all __attribute__((swift_name("all")));
@property (class, readonly) THETACFileType *image __attribute__((swift_name("image")));
@property (class, readonly) THETACFileType *video __attribute__((swift_name("video")));
+ (THETACKotlinArray<THETACFileType *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FileType.Companion")))
@interface THETACFileTypeCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACFileTypeCompanion *shared __attribute__((swift_name("shared")));
- (id<THETACKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<THETACKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(THETACKotlinArray<id<THETACKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FinishWlanRequest")))
@interface THETACFinishWlanRequest : THETACBase <THETACCommandApiRequest>
- (instancetype)initWithName:(NSString *)name parameters:(THETACEmptyParameter *)parameters __attribute__((swift_name("init(name:parameters:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) THETACFinishWlanRequestCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACEmptyParameter *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACFinishWlanRequest *)doCopyName:(NSString *)name parameters:(THETACEmptyParameter *)parameters __attribute__((swift_name("doCopy(name:parameters:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) THETACEmptyParameter *parameters __attribute__((swift_name("parameters")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FinishWlanRequest.Companion")))
@interface THETACFinishWlanRequestCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACFinishWlanRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<THETACKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FinishWlanResponse")))
@interface THETACFinishWlanResponse : THETACBase <THETACCommandApiResponse>
- (instancetype)initWithName:(NSString *)name state:(THETACCommandState *)state id:(NSString * _Nullable)id results:(THETACKotlinx_serialization_jsonJsonElement * _Nullable)results error:(THETACCommandError * _Nullable)error progress:(THETACCommandProgress * _Nullable)progress __attribute__((swift_name("init(name:state:id:results:error:progress:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) THETACFinishWlanResponseCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACCommandState *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACKotlinx_serialization_jsonJsonElement * _Nullable)component4 __attribute__((swift_name("component4()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACCommandError * _Nullable)component5 __attribute__((swift_name("component5()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACCommandProgress * _Nullable)component6 __attribute__((swift_name("component6()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACFinishWlanResponse *)doCopyName:(NSString *)name state:(THETACCommandState *)state id:(NSString * _Nullable)id results:(THETACKotlinx_serialization_jsonJsonElement * _Nullable)results error:(THETACCommandError * _Nullable)error progress:(THETACCommandProgress * _Nullable)progress __attribute__((swift_name("doCopy(name:state:id:results:error:progress:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) THETACCommandError * _Nullable error __attribute__((swift_name("error")));
@property (readonly) NSString * _Nullable id __attribute__((swift_name("id")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) THETACCommandProgress * _Nullable progress __attribute__((swift_name("progress")));
@property (readonly) THETACKotlinx_serialization_jsonJsonElement * _Nullable results __attribute__((swift_name("results")));
@property (readonly) THETACCommandState *state __attribute__((swift_name("state")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FinishWlanResponse.Companion")))
@interface THETACFinishWlanResponseCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACFinishWlanResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<THETACKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FirstShootingEnum")))
@interface THETACFirstShootingEnum : THETACKotlinEnum<THETACFirstShootingEnum *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) THETACFirstShootingEnumCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) THETACFirstShootingEnum *front __attribute__((swift_name("front")));
@property (class, readonly) THETACFirstShootingEnum *rear __attribute__((swift_name("rear")));
+ (THETACKotlinArray<THETACFirstShootingEnum *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FirstShootingEnum.Companion")))
@interface THETACFirstShootingEnumCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACFirstShootingEnumCompanion *shared __attribute__((swift_name("shared")));
- (id<THETACKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<THETACKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(THETACKotlinArray<id<THETACKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetLivePreviewRequest")))
@interface THETACGetLivePreviewRequest : THETACBase <THETACCommandApiRequest>
- (instancetype)initWithName:(NSString *)name parameters:(THETACEmptyParameter *)parameters __attribute__((swift_name("init(name:parameters:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) THETACGetLivePreviewRequestCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACEmptyParameter *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACGetLivePreviewRequest *)doCopyName:(NSString *)name parameters:(THETACEmptyParameter *)parameters __attribute__((swift_name("doCopy(name:parameters:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) THETACEmptyParameter *parameters __attribute__((swift_name("parameters")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetLivePreviewRequest.Companion")))
@interface THETACGetLivePreviewRequestCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACGetLivePreviewRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<THETACKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetMetadataParams")))
@interface THETACGetMetadataParams : THETACBase
- (instancetype)initWithFileUrl:(NSString *)fileUrl __attribute__((swift_name("init(fileUrl:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) THETACGetMetadataParamsCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACGetMetadataParams *)doCopyFileUrl:(NSString *)fileUrl __attribute__((swift_name("doCopy(fileUrl:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *fileUrl __attribute__((swift_name("fileUrl")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetMetadataParams.Companion")))
@interface THETACGetMetadataParamsCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACGetMetadataParamsCompanion *shared __attribute__((swift_name("shared")));
- (id<THETACKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetMetadataRequest")))
@interface THETACGetMetadataRequest : THETACBase <THETACCommandApiRequest>
- (instancetype)initWithName:(NSString *)name parameters:(THETACGetMetadataParams *)parameters __attribute__((swift_name("init(name:parameters:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) THETACGetMetadataRequestCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACGetMetadataParams *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACGetMetadataRequest *)doCopyName:(NSString *)name parameters:(THETACGetMetadataParams *)parameters __attribute__((swift_name("doCopy(name:parameters:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) THETACGetMetadataParams *parameters __attribute__((swift_name("parameters")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetMetadataRequest.Companion")))
@interface THETACGetMetadataRequestCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACGetMetadataRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<THETACKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetMetadataResponse")))
@interface THETACGetMetadataResponse : THETACBase <THETACCommandApiResponse>
- (instancetype)initWithName:(NSString *)name state:(THETACCommandState *)state id:(NSString * _Nullable)id results:(THETACResultGetMetadata * _Nullable)results error:(THETACCommandError * _Nullable)error progress:(THETACCommandProgress * _Nullable)progress __attribute__((swift_name("init(name:state:id:results:error:progress:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) THETACGetMetadataResponseCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACCommandState *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACResultGetMetadata * _Nullable)component4 __attribute__((swift_name("component4()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACCommandError * _Nullable)component5 __attribute__((swift_name("component5()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACCommandProgress * _Nullable)component6 __attribute__((swift_name("component6()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACGetMetadataResponse *)doCopyName:(NSString *)name state:(THETACCommandState *)state id:(NSString * _Nullable)id results:(THETACResultGetMetadata * _Nullable)results error:(THETACCommandError * _Nullable)error progress:(THETACCommandProgress * _Nullable)progress __attribute__((swift_name("doCopy(name:state:id:results:error:progress:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) THETACCommandError * _Nullable error __attribute__((swift_name("error")));
@property (readonly) NSString * _Nullable id __attribute__((swift_name("id")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) THETACCommandProgress * _Nullable progress __attribute__((swift_name("progress")));
@property (readonly) THETACResultGetMetadata * _Nullable results __attribute__((swift_name("results")));
@property (readonly) THETACCommandState *state __attribute__((swift_name("state")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetMetadataResponse.Companion")))
@interface THETACGetMetadataResponseCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACGetMetadataResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<THETACKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetMySettingParams")))
@interface THETACGetMySettingParams : THETACBase
- (instancetype)initWithMode:(THETACCaptureMode * _Nullable)mode optionNames:(NSArray<NSString *> * _Nullable)optionNames __attribute__((swift_name("init(mode:optionNames:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) THETACGetMySettingParamsCompanion *companion __attribute__((swift_name("companion")));
- (THETACCaptureMode * _Nullable)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSArray<NSString *> * _Nullable)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACGetMySettingParams *)doCopyMode:(THETACCaptureMode * _Nullable)mode optionNames:(NSArray<NSString *> * _Nullable)optionNames __attribute__((swift_name("doCopy(mode:optionNames:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) THETACCaptureMode * _Nullable mode __attribute__((swift_name("mode")));
@property (readonly) NSArray<NSString *> * _Nullable optionNames __attribute__((swift_name("optionNames")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetMySettingParams.Companion")))
@interface THETACGetMySettingParamsCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACGetMySettingParamsCompanion *shared __attribute__((swift_name("shared")));
- (id<THETACKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetMySettingRequest")))
@interface THETACGetMySettingRequest : THETACBase <THETACCommandApiRequest>
- (instancetype)initWithName:(NSString *)name parameters:(THETACGetMySettingParams *)parameters __attribute__((swift_name("init(name:parameters:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) THETACGetMySettingRequestCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACGetMySettingParams *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACGetMySettingRequest *)doCopyName:(NSString *)name parameters:(THETACGetMySettingParams *)parameters __attribute__((swift_name("doCopy(name:parameters:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) THETACGetMySettingParams *parameters __attribute__((swift_name("parameters")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetMySettingRequest.Companion")))
@interface THETACGetMySettingRequestCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACGetMySettingRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<THETACKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetMySettingResponse")))
@interface THETACGetMySettingResponse : THETACBase <THETACCommandApiResponse>
- (instancetype)initWithName:(NSString *)name state:(THETACCommandState *)state id:(NSString * _Nullable)id results:(THETACResultGetMySetting * _Nullable)results error:(THETACCommandError * _Nullable)error progress:(THETACCommandProgress * _Nullable)progress __attribute__((swift_name("init(name:state:id:results:error:progress:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) THETACGetMySettingResponseCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACCommandState *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACResultGetMySetting * _Nullable)component4 __attribute__((swift_name("component4()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACCommandError * _Nullable)component5 __attribute__((swift_name("component5()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACCommandProgress * _Nullable)component6 __attribute__((swift_name("component6()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACGetMySettingResponse *)doCopyName:(NSString *)name state:(THETACCommandState *)state id:(NSString * _Nullable)id results:(THETACResultGetMySetting * _Nullable)results error:(THETACCommandError * _Nullable)error progress:(THETACCommandProgress * _Nullable)progress __attribute__((swift_name("doCopy(name:state:id:results:error:progress:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) THETACCommandError * _Nullable error __attribute__((swift_name("error")));
@property (readonly) NSString * _Nullable id __attribute__((swift_name("id")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) THETACCommandProgress * _Nullable progress __attribute__((swift_name("progress")));
@property (readonly) THETACResultGetMySetting * _Nullable results __attribute__((swift_name("results")));
@property (readonly) THETACCommandState *state __attribute__((swift_name("state")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetMySettingResponse.Companion")))
@interface THETACGetMySettingResponseCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACGetMySettingResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<THETACKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetOptionsParams")))
@interface THETACGetOptionsParams : THETACBase
- (instancetype)initWithOptionNames:(NSArray<NSString *> *)optionNames __attribute__((swift_name("init(optionNames:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) THETACGetOptionsParamsCompanion *companion __attribute__((swift_name("companion")));
- (NSArray<NSString *> *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACGetOptionsParams *)doCopyOptionNames:(NSArray<NSString *> *)optionNames __attribute__((swift_name("doCopy(optionNames:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<NSString *> *optionNames __attribute__((swift_name("optionNames")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetOptionsParams.Companion")))
@interface THETACGetOptionsParamsCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACGetOptionsParamsCompanion *shared __attribute__((swift_name("shared")));
- (id<THETACKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetOptionsRequest")))
@interface THETACGetOptionsRequest : THETACBase <THETACCommandApiRequest>
- (instancetype)initWithName:(NSString *)name parameters:(THETACGetOptionsParams *)parameters __attribute__((swift_name("init(name:parameters:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) THETACGetOptionsRequestCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACGetOptionsParams *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACGetOptionsRequest *)doCopyName:(NSString *)name parameters:(THETACGetOptionsParams *)parameters __attribute__((swift_name("doCopy(name:parameters:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) THETACGetOptionsParams *parameters __attribute__((swift_name("parameters")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetOptionsRequest.Companion")))
@interface THETACGetOptionsRequestCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACGetOptionsRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<THETACKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetOptionsResponse")))
@interface THETACGetOptionsResponse : THETACBase <THETACCommandApiResponse>
- (instancetype)initWithName:(NSString *)name state:(THETACCommandState *)state id:(NSString * _Nullable)id results:(THETACResultGetOptions * _Nullable)results error:(THETACCommandError * _Nullable)error progress:(THETACCommandProgress * _Nullable)progress __attribute__((swift_name("init(name:state:id:results:error:progress:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) THETACGetOptionsResponseCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACCommandState *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACResultGetOptions * _Nullable)component4 __attribute__((swift_name("component4()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACCommandError * _Nullable)component5 __attribute__((swift_name("component5()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACCommandProgress * _Nullable)component6 __attribute__((swift_name("component6()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACGetOptionsResponse *)doCopyName:(NSString *)name state:(THETACCommandState *)state id:(NSString * _Nullable)id results:(THETACResultGetOptions * _Nullable)results error:(THETACCommandError * _Nullable)error progress:(THETACCommandProgress * _Nullable)progress __attribute__((swift_name("doCopy(name:state:id:results:error:progress:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) THETACCommandError * _Nullable error __attribute__((swift_name("error")));
@property (readonly) NSString * _Nullable id __attribute__((swift_name("id")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) THETACCommandProgress * _Nullable progress __attribute__((swift_name("progress")));
@property (readonly) THETACResultGetOptions * _Nullable results __attribute__((swift_name("results")));
@property (readonly) THETACCommandState *state __attribute__((swift_name("state")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetOptionsResponse.Companion")))
@interface THETACGetOptionsResponseCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACGetOptionsResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<THETACKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetPluginLicenseParams")))
@interface THETACGetPluginLicenseParams : THETACBase
- (instancetype)initWithPackageName:(NSString *)packageName __attribute__((swift_name("init(packageName:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) THETACGetPluginLicenseParamsCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACGetPluginLicenseParams *)doCopyPackageName:(NSString *)packageName __attribute__((swift_name("doCopy(packageName:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *packageName __attribute__((swift_name("packageName")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetPluginLicenseParams.Companion")))
@interface THETACGetPluginLicenseParamsCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACGetPluginLicenseParamsCompanion *shared __attribute__((swift_name("shared")));
- (id<THETACKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetPluginLicenseRequest")))
@interface THETACGetPluginLicenseRequest : THETACBase <THETACCommandApiRequest>
- (instancetype)initWithName:(NSString *)name parameters:(THETACGetPluginLicenseParams *)parameters __attribute__((swift_name("init(name:parameters:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) THETACGetPluginLicenseRequestCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACGetPluginLicenseParams *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACGetPluginLicenseRequest *)doCopyName:(NSString *)name parameters:(THETACGetPluginLicenseParams *)parameters __attribute__((swift_name("doCopy(name:parameters:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) THETACGetPluginLicenseParams *parameters __attribute__((swift_name("parameters")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetPluginLicenseRequest.Companion")))
@interface THETACGetPluginLicenseRequestCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACGetPluginLicenseRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<THETACKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetPluginOrdersRequest")))
@interface THETACGetPluginOrdersRequest : THETACBase <THETACCommandApiRequest>
- (instancetype)initWithName:(NSString *)name parameters:(THETACEmptyParameter *)parameters __attribute__((swift_name("init(name:parameters:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) THETACGetPluginOrdersRequestCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACEmptyParameter *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACGetPluginOrdersRequest *)doCopyName:(NSString *)name parameters:(THETACEmptyParameter *)parameters __attribute__((swift_name("doCopy(name:parameters:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) THETACEmptyParameter *parameters __attribute__((swift_name("parameters")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetPluginOrdersRequest.Companion")))
@interface THETACGetPluginOrdersRequestCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACGetPluginOrdersRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<THETACKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetPluginOrdersResponse")))
@interface THETACGetPluginOrdersResponse : THETACBase <THETACCommandApiResponse>
- (instancetype)initWithName:(NSString *)name state:(THETACCommandState *)state id:(NSString * _Nullable)id results:(THETACResultGetPluginOrders * _Nullable)results error:(THETACCommandError * _Nullable)error progress:(THETACCommandProgress * _Nullable)progress __attribute__((swift_name("init(name:state:id:results:error:progress:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) THETACGetPluginOrdersResponseCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACCommandState *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACResultGetPluginOrders * _Nullable)component4 __attribute__((swift_name("component4()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACCommandError * _Nullable)component5 __attribute__((swift_name("component5()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACCommandProgress * _Nullable)component6 __attribute__((swift_name("component6()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACGetPluginOrdersResponse *)doCopyName:(NSString *)name state:(THETACCommandState *)state id:(NSString * _Nullable)id results:(THETACResultGetPluginOrders * _Nullable)results error:(THETACCommandError * _Nullable)error progress:(THETACCommandProgress * _Nullable)progress __attribute__((swift_name("doCopy(name:state:id:results:error:progress:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) THETACCommandError * _Nullable error __attribute__((swift_name("error")));
@property (readonly) NSString * _Nullable id __attribute__((swift_name("id")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) THETACCommandProgress * _Nullable progress __attribute__((swift_name("progress")));
@property (readonly) THETACResultGetPluginOrders * _Nullable results __attribute__((swift_name("results")));
@property (readonly) THETACCommandState *state __attribute__((swift_name("state")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetPluginOrdersResponse.Companion")))
@interface THETACGetPluginOrdersResponseCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACGetPluginOrdersResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<THETACKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GpsInfo")))
@interface THETACGpsInfo : THETACBase
- (instancetype)initWithLat:(THETACFloat * _Nullable)lat lng:(THETACFloat * _Nullable)lng _altitude:(THETACFloat * _Nullable)_altitude _dateTimeZone:(NSString * _Nullable)_dateTimeZone _datum:(NSString * _Nullable)_datum __attribute__((swift_name("init(lat:lng:_altitude:_dateTimeZone:_datum:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) THETACGpsInfoCompanion *companion __attribute__((swift_name("companion")));
- (THETACFloat * _Nullable)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACFloat * _Nullable)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACFloat * _Nullable)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component5 __attribute__((swift_name("component5()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACGpsInfo *)doCopyLat:(THETACFloat * _Nullable)lat lng:(THETACFloat * _Nullable)lng _altitude:(THETACFloat * _Nullable)_altitude _dateTimeZone:(NSString * _Nullable)_dateTimeZone _datum:(NSString * _Nullable)_datum __attribute__((swift_name("doCopy(lat:lng:_altitude:_dateTimeZone:_datum:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) THETACFloat * _Nullable _altitude __attribute__((swift_name("_altitude")));
@property (readonly) NSString * _Nullable _dateTimeZone __attribute__((swift_name("_dateTimeZone")));
@property (readonly) NSString * _Nullable _datum __attribute__((swift_name("_datum")));
@property (readonly) THETACFloat * _Nullable lat __attribute__((swift_name("lat")));
@property (readonly) THETACFloat * _Nullable lng __attribute__((swift_name("lng")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GpsInfo.Companion")))
@interface THETACGpsInfoCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACGpsInfoCompanion *shared __attribute__((swift_name("shared")));
- (id<THETACKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GpsTagRecording")))
@interface THETACGpsTagRecording : THETACKotlinEnum<THETACGpsTagRecording *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) THETACGpsTagRecordingCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) THETACGpsTagRecording *on __attribute__((swift_name("on")));
@property (class, readonly) THETACGpsTagRecording *off __attribute__((swift_name("off")));
+ (THETACKotlinArray<THETACGpsTagRecording *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GpsTagRecording.Companion")))
@interface THETACGpsTagRecordingCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACGpsTagRecordingCompanion *shared __attribute__((swift_name("shared")));
- (id<THETACKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<THETACKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(THETACKotlinArray<id<THETACKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ImageFilter")))
@interface THETACImageFilter : THETACKotlinEnum<THETACImageFilter *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) THETACImageFilterCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) THETACImageFilter *off __attribute__((swift_name("off")));
@property (class, readonly) THETACImageFilter *drComp __attribute__((swift_name("drComp")));
@property (class, readonly) THETACImageFilter *noiseReduction __attribute__((swift_name("noiseReduction")));
@property (class, readonly) THETACImageFilter *hdr __attribute__((swift_name("hdr")));
@property (class, readonly) THETACImageFilter *hhHdr __attribute__((swift_name("hhHdr")));
+ (THETACKotlinArray<THETACImageFilter *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ImageFilter.Companion")))
@interface THETACImageFilterCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACImageFilterCompanion *shared __attribute__((swift_name("shared")));
- (id<THETACKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<THETACKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(THETACKotlinArray<id<THETACKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ImageStitching")))
@interface THETACImageStitching : THETACKotlinEnum<THETACImageStitching *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) THETACImageStitchingCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) THETACImageStitching *auto_ __attribute__((swift_name("auto_")));
@property (class, readonly) THETACImageStitching *static_ __attribute__((swift_name("static_")));
@property (class, readonly) THETACImageStitching *dynamic __attribute__((swift_name("dynamic")));
@property (class, readonly) THETACImageStitching *dynamicAuto __attribute__((swift_name("dynamicAuto")));
@property (class, readonly) THETACImageStitching *dynamicSemiauto __attribute__((swift_name("dynamicSemiauto")));
@property (class, readonly) THETACImageStitching *dynamicSave __attribute__((swift_name("dynamicSave")));
@property (class, readonly) THETACImageStitching *dynamicLoad __attribute__((swift_name("dynamicLoad")));
@property (class, readonly) THETACImageStitching *none __attribute__((swift_name("none")));
+ (THETACKotlinArray<THETACImageStitching *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ImageStitching.Companion")))
@interface THETACImageStitchingCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACImageStitchingCompanion *shared __attribute__((swift_name("shared")));
- (id<THETACKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<THETACKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(THETACKotlinArray<id<THETACKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InfoApi")))
@interface THETACInfoApi : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)infoApi __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACInfoApi *shared __attribute__((swift_name("shared")));
@property (readonly) THETACKtor_httpHttpMethod *METHOD __attribute__((swift_name("METHOD")));
@property (readonly) NSString *PATH __attribute__((swift_name("PATH")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InfoApiResponse")))
@interface THETACInfoApiResponse : THETACBase
- (instancetype)initWithManufacturer:(NSString *)manufacturer model:(NSString *)model serialNumber:(NSString *)serialNumber _wlanMacAddress:(NSString * _Nullable)_wlanMacAddress _bluetoothMacAddress:(NSString * _Nullable)_bluetoothMacAddress firmwareVersion:(NSString *)firmwareVersion supportUrl:(NSString *)supportUrl gps:(BOOL)gps gyro:(BOOL)gyro uptime:(int32_t)uptime api:(NSArray<NSString *> *)api endpoints:(THETACEndPoint *)endpoints apiLevel:(NSArray<THETACInt *> *)apiLevel __attribute__((swift_name("init(manufacturer:model:serialNumber:_wlanMacAddress:_bluetoothMacAddress:firmwareVersion:supportUrl:gps:gyro:uptime:api:endpoints:apiLevel:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) THETACInfoApiResponseCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (int32_t)component10 __attribute__((swift_name("component10()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSArray<NSString *> *)component11 __attribute__((swift_name("component11()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACEndPoint *)component12 __attribute__((swift_name("component12()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSArray<THETACInt *> *)component13 __attribute__((swift_name("component13()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component5 __attribute__((swift_name("component5()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component6 __attribute__((swift_name("component6()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component7 __attribute__((swift_name("component7()"))) __attribute__((deprecated("use corresponding property instead")));
- (BOOL)component8 __attribute__((swift_name("component8()"))) __attribute__((deprecated("use corresponding property instead")));
- (BOOL)component9 __attribute__((swift_name("component9()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACInfoApiResponse *)doCopyManufacturer:(NSString *)manufacturer model:(NSString *)model serialNumber:(NSString *)serialNumber _wlanMacAddress:(NSString * _Nullable)_wlanMacAddress _bluetoothMacAddress:(NSString * _Nullable)_bluetoothMacAddress firmwareVersion:(NSString *)firmwareVersion supportUrl:(NSString *)supportUrl gps:(BOOL)gps gyro:(BOOL)gyro uptime:(int32_t)uptime api:(NSArray<NSString *> *)api endpoints:(THETACEndPoint *)endpoints apiLevel:(NSArray<THETACInt *> *)apiLevel __attribute__((swift_name("doCopy(manufacturer:model:serialNumber:_wlanMacAddress:_bluetoothMacAddress:firmwareVersion:supportUrl:gps:gyro:uptime:api:endpoints:apiLevel:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable _bluetoothMacAddress __attribute__((swift_name("_bluetoothMacAddress")));
@property (readonly) NSString * _Nullable _wlanMacAddress __attribute__((swift_name("_wlanMacAddress")));
@property (readonly) NSArray<NSString *> *api __attribute__((swift_name("api")));
@property (readonly) NSArray<THETACInt *> *apiLevel __attribute__((swift_name("apiLevel")));
@property (readonly) THETACEndPoint *endpoints __attribute__((swift_name("endpoints")));
@property (readonly) NSString *firmwareVersion __attribute__((swift_name("firmwareVersion")));
@property (readonly) BOOL gps __attribute__((swift_name("gps")));
@property (readonly) BOOL gyro __attribute__((swift_name("gyro")));
@property (readonly) NSString *manufacturer __attribute__((swift_name("manufacturer")));
@property (readonly) NSString *model __attribute__((swift_name("model")));
@property (readonly) NSString *serialNumber __attribute__((swift_name("serialNumber")));
@property (readonly) NSString *supportUrl __attribute__((swift_name("supportUrl")));
@property (readonly) int32_t uptime __attribute__((swift_name("uptime")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InfoApiResponse.Companion")))
@interface THETACInfoApiResponseCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACInfoApiResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<THETACKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IpAddressAllocation")))
@interface THETACIpAddressAllocation : THETACKotlinEnum<THETACIpAddressAllocation *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) THETACIpAddressAllocationCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) THETACIpAddressAllocation *dynamic __attribute__((swift_name("dynamic")));
@property (class, readonly) THETACIpAddressAllocation *static_ __attribute__((swift_name("static_")));
+ (THETACKotlinArray<THETACIpAddressAllocation *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IpAddressAllocation.Companion")))
@interface THETACIpAddressAllocationCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACIpAddressAllocationCompanion *shared __attribute__((swift_name("shared")));
- (id<THETACKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<THETACKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(THETACKotlinArray<id<THETACKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Language")))
@interface THETACLanguage : THETACKotlinEnum<THETACLanguage *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) THETACLanguageCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) THETACLanguage *us __attribute__((swift_name("us")));
@property (class, readonly) THETACLanguage *gb __attribute__((swift_name("gb")));
@property (class, readonly) THETACLanguage *ja __attribute__((swift_name("ja")));
@property (class, readonly) THETACLanguage *fr __attribute__((swift_name("fr")));
@property (class, readonly) THETACLanguage *de __attribute__((swift_name("de")));
@property (class, readonly) THETACLanguage *tw __attribute__((swift_name("tw")));
@property (class, readonly) THETACLanguage *cn __attribute__((swift_name("cn")));
@property (class, readonly) THETACLanguage *it __attribute__((swift_name("it")));
@property (class, readonly) THETACLanguage *ko __attribute__((swift_name("ko")));
+ (THETACKotlinArray<THETACLanguage *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Language.Companion")))
@interface THETACLanguageCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACLanguageCompanion *shared __attribute__((swift_name("shared")));
- (id<THETACKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<THETACKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(THETACKotlinArray<id<THETACKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ListAccessPointsRequest")))
@interface THETACListAccessPointsRequest : THETACBase <THETACCommandApiRequest>
- (instancetype)initWithName:(NSString *)name parameters:(THETACEmptyParameter *)parameters __attribute__((swift_name("init(name:parameters:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) THETACListAccessPointsRequestCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACEmptyParameter *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACListAccessPointsRequest *)doCopyName:(NSString *)name parameters:(THETACEmptyParameter *)parameters __attribute__((swift_name("doCopy(name:parameters:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) THETACEmptyParameter *parameters __attribute__((swift_name("parameters")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ListAccessPointsRequest.Companion")))
@interface THETACListAccessPointsRequestCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACListAccessPointsRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<THETACKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ListAccessPointsResponse")))
@interface THETACListAccessPointsResponse : THETACBase <THETACCommandApiResponse>
- (instancetype)initWithName:(NSString *)name state:(THETACCommandState *)state id:(NSString * _Nullable)id results:(THETACResultListAccessPoints * _Nullable)results error:(THETACCommandError * _Nullable)error progress:(THETACCommandProgress * _Nullable)progress __attribute__((swift_name("init(name:state:id:results:error:progress:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) THETACListAccessPointsResponseCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACCommandState *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACResultListAccessPoints * _Nullable)component4 __attribute__((swift_name("component4()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACCommandError * _Nullable)component5 __attribute__((swift_name("component5()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACCommandProgress * _Nullable)component6 __attribute__((swift_name("component6()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACListAccessPointsResponse *)doCopyName:(NSString *)name state:(THETACCommandState *)state id:(NSString * _Nullable)id results:(THETACResultListAccessPoints * _Nullable)results error:(THETACCommandError * _Nullable)error progress:(THETACCommandProgress * _Nullable)progress __attribute__((swift_name("doCopy(name:state:id:results:error:progress:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) THETACCommandError * _Nullable error __attribute__((swift_name("error")));
@property (readonly) NSString * _Nullable id __attribute__((swift_name("id")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) THETACCommandProgress * _Nullable progress __attribute__((swift_name("progress")));
@property (readonly) THETACResultListAccessPoints * _Nullable results __attribute__((swift_name("results")));
@property (readonly) THETACCommandState *state __attribute__((swift_name("state")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ListAccessPointsResponse.Companion")))
@interface THETACListAccessPointsResponseCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACListAccessPointsResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<THETACKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ListFilesParams")))
@interface THETACListFilesParams : THETACBase
- (instancetype)initWithFileType:(THETACFileType *)fileType startPosition:(THETACInt * _Nullable)startPosition _startFileUrl:(NSString * _Nullable)_startFileUrl entryCount:(int32_t)entryCount maxThumbSize:(int32_t)maxThumbSize _detail:(THETACBoolean * _Nullable)_detail _sort:(THETACSortOrder * _Nullable)_sort _storage:(THETACStorage * _Nullable)_storage __attribute__((swift_name("init(fileType:startPosition:_startFileUrl:entryCount:maxThumbSize:_detail:_sort:_storage:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) THETACListFilesParamsCompanion *companion __attribute__((swift_name("companion")));
- (THETACFileType *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACInt * _Nullable)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (int32_t)component4 __attribute__((swift_name("component4()"))) __attribute__((deprecated("use corresponding property instead")));
- (int32_t)component5 __attribute__((swift_name("component5()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACBoolean * _Nullable)component6 __attribute__((swift_name("component6()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACSortOrder * _Nullable)component7 __attribute__((swift_name("component7()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACStorage * _Nullable)component8 __attribute__((swift_name("component8()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACListFilesParams *)doCopyFileType:(THETACFileType *)fileType startPosition:(THETACInt * _Nullable)startPosition _startFileUrl:(NSString * _Nullable)_startFileUrl entryCount:(int32_t)entryCount maxThumbSize:(int32_t)maxThumbSize _detail:(THETACBoolean * _Nullable)_detail _sort:(THETACSortOrder * _Nullable)_sort _storage:(THETACStorage * _Nullable)_storage __attribute__((swift_name("doCopy(fileType:startPosition:_startFileUrl:entryCount:maxThumbSize:_detail:_sort:_storage:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) THETACBoolean * _Nullable _detail __attribute__((swift_name("_detail")));
@property (readonly) THETACSortOrder * _Nullable _sort __attribute__((swift_name("_sort")));
@property (readonly) NSString * _Nullable _startFileUrl __attribute__((swift_name("_startFileUrl")));
@property (readonly) THETACStorage * _Nullable _storage __attribute__((swift_name("_storage")));
@property (readonly) int32_t entryCount __attribute__((swift_name("entryCount")));
@property (readonly) THETACFileType *fileType __attribute__((swift_name("fileType")));
@property (readonly) int32_t maxThumbSize __attribute__((swift_name("maxThumbSize")));
@property (readonly) THETACInt * _Nullable startPosition __attribute__((swift_name("startPosition")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ListFilesParams.Companion")))
@interface THETACListFilesParamsCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACListFilesParamsCompanion *shared __attribute__((swift_name("shared")));
- (id<THETACKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ListFilesRequest")))
@interface THETACListFilesRequest : THETACBase <THETACCommandApiRequest>
- (instancetype)initWithName:(NSString *)name parameters:(THETACListFilesParams *)parameters __attribute__((swift_name("init(name:parameters:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) THETACListFilesRequestCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACListFilesParams *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACListFilesRequest *)doCopyName:(NSString *)name parameters:(THETACListFilesParams *)parameters __attribute__((swift_name("doCopy(name:parameters:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) THETACListFilesParams *parameters __attribute__((swift_name("parameters")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ListFilesRequest.Companion")))
@interface THETACListFilesRequestCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACListFilesRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<THETACKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ListFilesResponse")))
@interface THETACListFilesResponse : THETACBase <THETACCommandApiResponse>
- (instancetype)initWithName:(NSString *)name state:(THETACCommandState *)state id:(NSString * _Nullable)id results:(THETACResultListFiles * _Nullable)results error:(THETACCommandError * _Nullable)error progress:(THETACCommandProgress * _Nullable)progress __attribute__((swift_name("init(name:state:id:results:error:progress:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) THETACListFilesResponseCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACCommandState *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACResultListFiles * _Nullable)component4 __attribute__((swift_name("component4()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACCommandError * _Nullable)component5 __attribute__((swift_name("component5()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACCommandProgress * _Nullable)component6 __attribute__((swift_name("component6()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACListFilesResponse *)doCopyName:(NSString *)name state:(THETACCommandState *)state id:(NSString * _Nullable)id results:(THETACResultListFiles * _Nullable)results error:(THETACCommandError * _Nullable)error progress:(THETACCommandProgress * _Nullable)progress __attribute__((swift_name("doCopy(name:state:id:results:error:progress:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) THETACCommandError * _Nullable error __attribute__((swift_name("error")));
@property (readonly) NSString * _Nullable id __attribute__((swift_name("id")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) THETACCommandProgress * _Nullable progress __attribute__((swift_name("progress")));
@property (readonly) THETACResultListFiles * _Nullable results __attribute__((swift_name("results")));
@property (readonly) THETACCommandState *state __attribute__((swift_name("state")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ListFilesResponse.Companion")))
@interface THETACListFilesResponseCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACListFilesResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<THETACKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ListPluginsRequest")))
@interface THETACListPluginsRequest : THETACBase <THETACCommandApiRequest>
- (instancetype)initWithName:(NSString *)name parameters:(THETACEmptyParameter *)parameters __attribute__((swift_name("init(name:parameters:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) THETACListPluginsRequestCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACEmptyParameter *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACListPluginsRequest *)doCopyName:(NSString *)name parameters:(THETACEmptyParameter *)parameters __attribute__((swift_name("doCopy(name:parameters:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) THETACEmptyParameter *parameters __attribute__((swift_name("parameters")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ListPluginsRequest.Companion")))
@interface THETACListPluginsRequestCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACListPluginsRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<THETACKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ListPluginsResponse")))
@interface THETACListPluginsResponse : THETACBase <THETACCommandApiResponse>
- (instancetype)initWithName:(NSString *)name state:(THETACCommandState *)state id:(NSString * _Nullable)id results:(THETACResultListPlugins * _Nullable)results error:(THETACCommandError * _Nullable)error progress:(THETACCommandProgress * _Nullable)progress __attribute__((swift_name("init(name:state:id:results:error:progress:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) THETACListPluginsResponseCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACCommandState *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACResultListPlugins * _Nullable)component4 __attribute__((swift_name("component4()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACCommandError * _Nullable)component5 __attribute__((swift_name("component5()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACCommandProgress * _Nullable)component6 __attribute__((swift_name("component6()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACListPluginsResponse *)doCopyName:(NSString *)name state:(THETACCommandState *)state id:(NSString * _Nullable)id results:(THETACResultListPlugins * _Nullable)results error:(THETACCommandError * _Nullable)error progress:(THETACCommandProgress * _Nullable)progress __attribute__((swift_name("doCopy(name:state:id:results:error:progress:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) THETACCommandError * _Nullable error __attribute__((swift_name("error")));
@property (readonly) NSString * _Nullable id __attribute__((swift_name("id")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) THETACCommandProgress * _Nullable progress __attribute__((swift_name("progress")));
@property (readonly) THETACResultListPlugins * _Nullable results __attribute__((swift_name("results")));
@property (readonly) THETACCommandState *state __attribute__((swift_name("state")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ListPluginsResponse.Companion")))
@interface THETACListPluginsResponseCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACListPluginsResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<THETACKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MediaFileFormat")))
@interface THETACMediaFileFormat : THETACBase
- (instancetype)initWithType:(THETACMediaType * _Nullable)type width:(THETACInt * _Nullable)width height:(THETACInt * _Nullable)height _codec:(NSString * _Nullable)_codec _frameRate:(THETACInt * _Nullable)_frameRate __attribute__((swift_name("init(type:width:height:_codec:_frameRate:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) THETACMediaFileFormatCompanion *companion __attribute__((swift_name("companion")));
- (THETACMediaType * _Nullable)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACInt * _Nullable)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACInt * _Nullable)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACInt * _Nullable)component5 __attribute__((swift_name("component5()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACMediaFileFormat *)doCopyType:(THETACMediaType * _Nullable)type width:(THETACInt * _Nullable)width height:(THETACInt * _Nullable)height _codec:(NSString * _Nullable)_codec _frameRate:(THETACInt * _Nullable)_frameRate __attribute__((swift_name("doCopy(type:width:height:_codec:_frameRate:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable _codec __attribute__((swift_name("_codec")));
@property (readonly) THETACInt * _Nullable _frameRate __attribute__((swift_name("_frameRate")));
@property (readonly) THETACInt * _Nullable height __attribute__((swift_name("height")));
@property (readonly) THETACMediaType * _Nullable type __attribute__((swift_name("type")));
@property (readonly) THETACInt * _Nullable width __attribute__((swift_name("width")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MediaFileFormat.Companion")))
@interface THETACMediaFileFormatCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACMediaFileFormatCompanion *shared __attribute__((swift_name("shared")));
- (id<THETACKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MediaType")))
@interface THETACMediaType : THETACKotlinEnum<THETACMediaType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) THETACMediaTypeCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) THETACMediaType *jpeg __attribute__((swift_name("jpeg")));
@property (class, readonly) THETACMediaType *mp4 __attribute__((swift_name("mp4")));
@property (class, readonly) THETACMediaType *raw __attribute__((swift_name("raw")));
+ (THETACKotlinArray<THETACMediaType *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MediaType.Companion")))
@interface THETACMediaTypeCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACMediaTypeCompanion *shared __attribute__((swift_name("shared")));
- (id<THETACKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<THETACKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(THETACKotlinArray<id<THETACKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MicrophoneChannel")))
@interface THETACMicrophoneChannel : THETACKotlinEnum<THETACMicrophoneChannel *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) THETACMicrophoneChannelCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) THETACMicrophoneChannel *spatial __attribute__((swift_name("spatial")));
@property (class, readonly) THETACMicrophoneChannel *monaural __attribute__((swift_name("monaural")));
+ (THETACKotlinArray<THETACMicrophoneChannel *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MicrophoneChannel.Companion")))
@interface THETACMicrophoneChannelCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACMicrophoneChannelCompanion *shared __attribute__((swift_name("shared")));
- (id<THETACKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<THETACKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(THETACKotlinArray<id<THETACKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MicrophoneOption")))
@interface THETACMicrophoneOption : THETACKotlinEnum<THETACMicrophoneOption *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) THETACMicrophoneOptionCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) THETACMicrophoneOption *auto_ __attribute__((swift_name("auto_")));
@property (class, readonly) THETACMicrophoneOption *internal __attribute__((swift_name("internal")));
@property (class, readonly) THETACMicrophoneOption *external __attribute__((swift_name("external")));
+ (THETACKotlinArray<THETACMicrophoneOption *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MicrophoneOption.Companion")))
@interface THETACMicrophoneOptionCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACMicrophoneOptionCompanion *shared __attribute__((swift_name("shared")));
- (id<THETACKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<THETACKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(THETACKotlinArray<id<THETACKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NetworkType")))
@interface THETACNetworkType : THETACKotlinEnum<THETACNetworkType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) THETACNetworkTypeCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) THETACNetworkType *direct __attribute__((swift_name("direct")));
@property (class, readonly) THETACNetworkType *client __attribute__((swift_name("client")));
@property (class, readonly) THETACNetworkType *ethernet __attribute__((swift_name("ethernet")));
@property (class, readonly) THETACNetworkType *off __attribute__((swift_name("off")));
+ (THETACKotlinArray<THETACNetworkType *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NetworkType.Companion")))
@interface THETACNetworkTypeCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACNetworkTypeCompanion *shared __attribute__((swift_name("shared")));
- (id<THETACKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<THETACKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(THETACKotlinArray<id<THETACKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NumberAsIntSerializer")))
@interface THETACNumberAsIntSerializer : THETACBase <THETACKotlinx_serialization_coreKSerializer>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)numberAsIntSerializer __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACNumberAsIntSerializer *shared __attribute__((swift_name("shared")));
- (THETACInt *)deserializeDecoder:(id<THETACKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
- (void)serializeEncoder:(id<THETACKotlinx_serialization_coreEncoder>)encoder value:(THETACInt *)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<THETACKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NumberAsLongSerializer")))
@interface THETACNumberAsLongSerializer : THETACBase <THETACKotlinx_serialization_coreKSerializer>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)numberAsLongSerializer __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACNumberAsLongSerializer *shared __attribute__((swift_name("shared")));
- (THETACLong *)deserializeDecoder:(id<THETACKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
- (void)serializeEncoder:(id<THETACKotlinx_serialization_coreEncoder>)encoder value:(THETACLong *)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<THETACKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NumbersAsIntsSerializer")))
@interface THETACNumbersAsIntsSerializer : THETACBase <THETACKotlinx_serialization_coreKSerializer>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)numbersAsIntsSerializer __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACNumbersAsIntsSerializer *shared __attribute__((swift_name("shared")));
- (NSArray<THETACInt *> *)deserializeDecoder:(id<THETACKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
- (void)serializeEncoder:(id<THETACKotlinx_serialization_coreEncoder>)encoder value:(NSArray<THETACInt *> *)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<THETACKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NumbersAsLongsSerializer")))
@interface THETACNumbersAsLongsSerializer : THETACBase <THETACKotlinx_serialization_coreKSerializer>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)numbersAsLongsSerializer __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACNumbersAsLongsSerializer *shared __attribute__((swift_name("shared")));
- (NSArray<THETACLong *> *)deserializeDecoder:(id<THETACKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
- (void)serializeEncoder:(id<THETACKotlinx_serialization_coreEncoder>)encoder value:(NSArray<THETACLong *> *)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<THETACKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Options")))
@interface THETACOptions : THETACBase
- (instancetype)initWith_aiAutoThumbnail:(THETACAiAutoThumbnail * _Nullable)_aiAutoThumbnail _aiAutoThumbnailSupport:(NSArray<THETACAiAutoThumbnail *> * _Nullable)_aiAutoThumbnailSupport aperture:(THETACFloat * _Nullable)aperture apertureSupport:(NSArray<THETACFloat *> * _Nullable)apertureSupport _bitrate:(NSString * _Nullable)_bitrate _bitrateSupport:(NSArray<NSString *> * _Nullable)_bitrateSupport _bluetoothPower:(THETACBluetoothPower * _Nullable)_bluetoothPower _burstMode:(THETACBurstMode * _Nullable)_burstMode _burstOption:(THETACBurstOption * _Nullable)_burstOption _cameraControlSource:(THETACCameraControlSource * _Nullable)_cameraControlSource _cameraControlSourceSupport:(NSArray<THETACCameraControlSource *> * _Nullable)_cameraControlSourceSupport _cameraMode:(THETACCameraMode * _Nullable)_cameraMode captureInterval:(THETACInt * _Nullable)captureInterval captureIntervalSupport:(THETACCaptureIntervalSupport * _Nullable)captureIntervalSupport captureMode:(THETACCaptureMode * _Nullable)captureMode captureModeSupport:(NSArray<THETACCaptureMode *> * _Nullable)captureModeSupport captureNumber:(THETACInt * _Nullable)captureNumber captureNumberSupport:(THETACCaptureNumberSupport * _Nullable)captureNumberSupport clientVersion:(THETACInt * _Nullable)clientVersion clientVersionSupport:(NSArray<THETACInt *> * _Nullable)clientVersionSupport _colorTemperature:(THETACInt * _Nullable)_colorTemperature _compositeShootingOutputInterval:(THETACInt * _Nullable)_compositeShootingOutputInterval _compositeShootingOutputIntervalSupport:(NSArray<THETACInt *> * _Nullable)_compositeShootingOutputIntervalSupport _compositeShootingTime:(THETACInt * _Nullable)_compositeShootingTime _compositeShootingTimeSupport:(NSArray<THETACInt *> * _Nullable)_compositeShootingTimeSupport continuousNumber:(THETACInt * _Nullable)continuousNumber dateTimeZone:(NSString * _Nullable)dateTimeZone exposureCompensation:(THETACFloat * _Nullable)exposureCompensation exposureCompensationSupport:(NSArray<THETACFloat *> * _Nullable)exposureCompensationSupport exposureDelay:(THETACInt * _Nullable)exposureDelay exposureDelaySupport:(NSArray<THETACInt *> * _Nullable)exposureDelaySupport exposureProgram:(THETACInt * _Nullable)exposureProgram exposureProgramSupport:(NSArray<THETACInt *> * _Nullable)exposureProgramSupport fileFormat:(THETACMediaFileFormat * _Nullable)fileFormat fileFormatSupport:(NSArray<THETACMediaFileFormat *> * _Nullable)fileFormatSupport _filter:(THETACImageFilter * _Nullable)_filter _filterSupport:(NSArray<THETACImageFilter *> * _Nullable)_filterSupport gpsInfo:(THETACGpsInfo * _Nullable)gpsInfo _gpsTagRecording:(THETACGpsTagRecording * _Nullable)_gpsTagRecording _imageStitching:(THETACImageStitching * _Nullable)_imageStitching _imageStitchingSupport:(NSArray<THETACImageStitching *> * _Nullable)_imageStitchingSupport iso:(THETACInt * _Nullable)iso isoSupport:(NSArray<THETACInt *> * _Nullable)isoSupport isoAutoHighLimit:(THETACInt * _Nullable)isoAutoHighLimit isoAutoHighLimitSupport:(NSArray<THETACInt *> * _Nullable)isoAutoHighLimitSupport _language:(THETACLanguage * _Nullable)_language _languageSupport:(NSArray<THETACLanguage *> * _Nullable)_languageSupport _maxRecordableTime:(THETACInt * _Nullable)_maxRecordableTime _maxRecordableTimeSupport:(NSArray<THETACInt *> * _Nullable)_maxRecordableTimeSupport _microphone:(THETACMicrophoneOption * _Nullable)_microphone _microphoneSupport:(NSArray<THETACMicrophoneOption *> * _Nullable)_microphoneSupport _microphoneChannel:(THETACMicrophoneChannel * _Nullable)_microphoneChannel _microphoneChannelSupport:(NSArray<THETACMicrophoneChannel *> * _Nullable)_microphoneChannelSupport _networkType:(THETACNetworkType * _Nullable)_networkType _networkTypeSupport:(NSArray<THETACNetworkType *> * _Nullable)_networkTypeSupport offDelay:(THETACInt * _Nullable)offDelay offDelaySupport:(NSArray<THETACInt *> * _Nullable)offDelaySupport _password:(NSString * _Nullable)_password _powerSaving:(THETACPowerSaving * _Nullable)_powerSaving _powerSavingSupport:(NSArray<THETACPowerSaving *> * _Nullable)_powerSavingSupport previewFormat:(THETACPreviewFormat * _Nullable)previewFormat previewFormatSupport:(NSArray<THETACPreviewFormat *> * _Nullable)previewFormatSupport _preset:(THETACPreset * _Nullable)_preset _presetSupport:(NSArray<THETACPreset *> * _Nullable)_presetSupport _proxy:(THETACProxy * _Nullable)_proxy remainingPictures:(THETACInt * _Nullable)remainingPictures remainingSpace:(THETACLong * _Nullable)remainingSpace remainingVideoSeconds:(THETACInt * _Nullable)remainingVideoSeconds _shootingMethod:(THETACShootingMethod * _Nullable)_shootingMethod _shootingMethodSupport:(NSArray<THETACShootingMethod *> * _Nullable)_shootingMethodSupport shutterSpeed:(THETACDouble * _Nullable)shutterSpeed shutterSpeedSupport:(NSArray<THETACDouble *> * _Nullable)shutterSpeedSupport _shutterVolume:(THETACInt * _Nullable)_shutterVolume _shutterVolumeSupport:(THETACShutterVolumeSupport * _Nullable)_shutterVolumeSupport sleepDelay:(THETACInt * _Nullable)sleepDelay sleepDelaySupport:(NSArray<THETACInt *> * _Nullable)sleepDelaySupport _timeShift:(THETACTimeShift * _Nullable)_timeShift _timeShiftSupport:(NSArray<THETACTimeShift *> * _Nullable)_timeShiftSupport _topBottomCorrection:(THETACTopBottomCorrectionOption * _Nullable)_topBottomCorrection _topBottomCorrectionSupport:(NSArray<THETACTopBottomCorrectionOption *> * _Nullable)_topBottomCorrectionSupport totalSpace:(THETACLong * _Nullable)totalSpace _username:(NSString * _Nullable)_username videoStitching:(THETACVideoStitching * _Nullable)videoStitching videoStitchingSupport:(NSArray<THETACVideoStitching *> * _Nullable)videoStitchingSupport _visibilityReduction:(THETACVisibilityReduction * _Nullable)_visibilityReduction _visibilityReductionSupport:(NSArray<THETACVisibilityReduction *> * _Nullable)_visibilityReductionSupport whiteBalance:(THETACWhiteBalance * _Nullable)whiteBalance whiteBalanceSupport:(NSArray<THETACWhiteBalance *> * _Nullable)whiteBalanceSupport _whiteBalanceAutoStrength:(THETACWhiteBalanceAutoStrength * _Nullable)_whiteBalanceAutoStrength _whiteBalanceAutoStrengthSupport:(NSArray<THETACWhiteBalanceAutoStrength *> * _Nullable)_whiteBalanceAutoStrengthSupport _wlanFrequency:(THETACWlanFrequency * _Nullable)_wlanFrequency _wlanFrequencySupport:(NSArray<THETACWlanFrequency *> * _Nullable)_wlanFrequencySupport __attribute__((swift_name("init(_aiAutoThumbnail:_aiAutoThumbnailSupport:aperture:apertureSupport:_bitrate:_bitrateSupport:_bluetoothPower:_burstMode:_burstOption:_cameraControlSource:_cameraControlSourceSupport:_cameraMode:captureInterval:captureIntervalSupport:captureMode:captureModeSupport:captureNumber:captureNumberSupport:clientVersion:clientVersionSupport:_colorTemperature:_compositeShootingOutputInterval:_compositeShootingOutputIntervalSupport:_compositeShootingTime:_compositeShootingTimeSupport:continuousNumber:dateTimeZone:exposureCompensation:exposureCompensationSupport:exposureDelay:exposureDelaySupport:exposureProgram:exposureProgramSupport:fileFormat:fileFormatSupport:_filter:_filterSupport:gpsInfo:_gpsTagRecording:_imageStitching:_imageStitchingSupport:iso:isoSupport:isoAutoHighLimit:isoAutoHighLimitSupport:_language:_languageSupport:_maxRecordableTime:_maxRecordableTimeSupport:_microphone:_microphoneSupport:_microphoneChannel:_microphoneChannelSupport:_networkType:_networkTypeSupport:offDelay:offDelaySupport:_password:_powerSaving:_powerSavingSupport:previewFormat:previewFormatSupport:_preset:_presetSupport:_proxy:remainingPictures:remainingSpace:remainingVideoSeconds:_shootingMethod:_shootingMethodSupport:shutterSpeed:shutterSpeedSupport:_shutterVolume:_shutterVolumeSupport:sleepDelay:sleepDelaySupport:_timeShift:_timeShiftSupport:_topBottomCorrection:_topBottomCorrectionSupport:totalSpace:_username:videoStitching:videoStitchingSupport:_visibilityReduction:_visibilityReductionSupport:whiteBalance:whiteBalanceSupport:_whiteBalanceAutoStrength:_whiteBalanceAutoStrengthSupport:_wlanFrequency:_wlanFrequencySupport:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) THETACOptionsCompanion *companion __attribute__((swift_name("companion")));
- (THETACAiAutoThumbnail * _Nullable)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACCameraControlSource * _Nullable)component10 __attribute__((swift_name("component10()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSArray<THETACCameraControlSource *> * _Nullable)component11 __attribute__((swift_name("component11()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACCameraMode * _Nullable)component12 __attribute__((swift_name("component12()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACInt * _Nullable)component13 __attribute__((swift_name("component13()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACCaptureIntervalSupport * _Nullable)component14 __attribute__((swift_name("component14()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACCaptureMode * _Nullable)component15 __attribute__((swift_name("component15()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSArray<THETACCaptureMode *> * _Nullable)component16 __attribute__((swift_name("component16()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACInt * _Nullable)component17 __attribute__((swift_name("component17()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACCaptureNumberSupport * _Nullable)component18 __attribute__((swift_name("component18()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACInt * _Nullable)component19 __attribute__((swift_name("component19()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSArray<THETACAiAutoThumbnail *> * _Nullable)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSArray<THETACInt *> * _Nullable)component20 __attribute__((swift_name("component20()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACInt * _Nullable)component21 __attribute__((swift_name("component21()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACInt * _Nullable)component22 __attribute__((swift_name("component22()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSArray<THETACInt *> * _Nullable)component23 __attribute__((swift_name("component23()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACInt * _Nullable)component24 __attribute__((swift_name("component24()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSArray<THETACInt *> * _Nullable)component25 __attribute__((swift_name("component25()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACInt * _Nullable)component26 __attribute__((swift_name("component26()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component27 __attribute__((swift_name("component27()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACFloat * _Nullable)component28 __attribute__((swift_name("component28()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSArray<THETACFloat *> * _Nullable)component29 __attribute__((swift_name("component29()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACFloat * _Nullable)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACInt * _Nullable)component30 __attribute__((swift_name("component30()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSArray<THETACInt *> * _Nullable)component31 __attribute__((swift_name("component31()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACInt * _Nullable)component32 __attribute__((swift_name("component32()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSArray<THETACInt *> * _Nullable)component33 __attribute__((swift_name("component33()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACMediaFileFormat * _Nullable)component34 __attribute__((swift_name("component34()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSArray<THETACMediaFileFormat *> * _Nullable)component35 __attribute__((swift_name("component35()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACImageFilter * _Nullable)component36 __attribute__((swift_name("component36()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSArray<THETACImageFilter *> * _Nullable)component37 __attribute__((swift_name("component37()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACGpsInfo * _Nullable)component38 __attribute__((swift_name("component38()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACGpsTagRecording * _Nullable)component39 __attribute__((swift_name("component39()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSArray<THETACFloat *> * _Nullable)component4 __attribute__((swift_name("component4()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACImageStitching * _Nullable)component40 __attribute__((swift_name("component40()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSArray<THETACImageStitching *> * _Nullable)component41 __attribute__((swift_name("component41()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACInt * _Nullable)component42 __attribute__((swift_name("component42()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSArray<THETACInt *> * _Nullable)component43 __attribute__((swift_name("component43()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACInt * _Nullable)component44 __attribute__((swift_name("component44()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSArray<THETACInt *> * _Nullable)component45 __attribute__((swift_name("component45()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACLanguage * _Nullable)component46 __attribute__((swift_name("component46()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSArray<THETACLanguage *> * _Nullable)component47 __attribute__((swift_name("component47()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACInt * _Nullable)component48 __attribute__((swift_name("component48()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSArray<THETACInt *> * _Nullable)component49 __attribute__((swift_name("component49()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component5 __attribute__((swift_name("component5()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACMicrophoneOption * _Nullable)component50 __attribute__((swift_name("component50()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSArray<THETACMicrophoneOption *> * _Nullable)component51 __attribute__((swift_name("component51()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACMicrophoneChannel * _Nullable)component52 __attribute__((swift_name("component52()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSArray<THETACMicrophoneChannel *> * _Nullable)component53 __attribute__((swift_name("component53()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACNetworkType * _Nullable)component54 __attribute__((swift_name("component54()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSArray<THETACNetworkType *> * _Nullable)component55 __attribute__((swift_name("component55()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACInt * _Nullable)component56 __attribute__((swift_name("component56()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSArray<THETACInt *> * _Nullable)component57 __attribute__((swift_name("component57()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component58 __attribute__((swift_name("component58()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACPowerSaving * _Nullable)component59 __attribute__((swift_name("component59()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSArray<NSString *> * _Nullable)component6 __attribute__((swift_name("component6()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSArray<THETACPowerSaving *> * _Nullable)component60 __attribute__((swift_name("component60()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACPreviewFormat * _Nullable)component61 __attribute__((swift_name("component61()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSArray<THETACPreviewFormat *> * _Nullable)component62 __attribute__((swift_name("component62()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACPreset * _Nullable)component63 __attribute__((swift_name("component63()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSArray<THETACPreset *> * _Nullable)component64 __attribute__((swift_name("component64()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACProxy * _Nullable)component65 __attribute__((swift_name("component65()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACInt * _Nullable)component66 __attribute__((swift_name("component66()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACLong * _Nullable)component67 __attribute__((swift_name("component67()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACInt * _Nullable)component68 __attribute__((swift_name("component68()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACShootingMethod * _Nullable)component69 __attribute__((swift_name("component69()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACBluetoothPower * _Nullable)component7 __attribute__((swift_name("component7()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSArray<THETACShootingMethod *> * _Nullable)component70 __attribute__((swift_name("component70()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACDouble * _Nullable)component71 __attribute__((swift_name("component71()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSArray<THETACDouble *> * _Nullable)component72 __attribute__((swift_name("component72()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACInt * _Nullable)component73 __attribute__((swift_name("component73()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACShutterVolumeSupport * _Nullable)component74 __attribute__((swift_name("component74()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACInt * _Nullable)component75 __attribute__((swift_name("component75()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSArray<THETACInt *> * _Nullable)component76 __attribute__((swift_name("component76()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACTimeShift * _Nullable)component77 __attribute__((swift_name("component77()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSArray<THETACTimeShift *> * _Nullable)component78 __attribute__((swift_name("component78()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACTopBottomCorrectionOption * _Nullable)component79 __attribute__((swift_name("component79()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACBurstMode * _Nullable)component8 __attribute__((swift_name("component8()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSArray<THETACTopBottomCorrectionOption *> * _Nullable)component80 __attribute__((swift_name("component80()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACLong * _Nullable)component81 __attribute__((swift_name("component81()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component82 __attribute__((swift_name("component82()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACVideoStitching * _Nullable)component83 __attribute__((swift_name("component83()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSArray<THETACVideoStitching *> * _Nullable)component84 __attribute__((swift_name("component84()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACVisibilityReduction * _Nullable)component85 __attribute__((swift_name("component85()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSArray<THETACVisibilityReduction *> * _Nullable)component86 __attribute__((swift_name("component86()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACWhiteBalance * _Nullable)component87 __attribute__((swift_name("component87()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSArray<THETACWhiteBalance *> * _Nullable)component88 __attribute__((swift_name("component88()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACWhiteBalanceAutoStrength * _Nullable)component89 __attribute__((swift_name("component89()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACBurstOption * _Nullable)component9 __attribute__((swift_name("component9()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSArray<THETACWhiteBalanceAutoStrength *> * _Nullable)component90 __attribute__((swift_name("component90()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACWlanFrequency * _Nullable)component91 __attribute__((swift_name("component91()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSArray<THETACWlanFrequency *> * _Nullable)component92 __attribute__((swift_name("component92()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACOptions *)doCopy_aiAutoThumbnail:(THETACAiAutoThumbnail * _Nullable)_aiAutoThumbnail _aiAutoThumbnailSupport:(NSArray<THETACAiAutoThumbnail *> * _Nullable)_aiAutoThumbnailSupport aperture:(THETACFloat * _Nullable)aperture apertureSupport:(NSArray<THETACFloat *> * _Nullable)apertureSupport _bitrate:(NSString * _Nullable)_bitrate _bitrateSupport:(NSArray<NSString *> * _Nullable)_bitrateSupport _bluetoothPower:(THETACBluetoothPower * _Nullable)_bluetoothPower _burstMode:(THETACBurstMode * _Nullable)_burstMode _burstOption:(THETACBurstOption * _Nullable)_burstOption _cameraControlSource:(THETACCameraControlSource * _Nullable)_cameraControlSource _cameraControlSourceSupport:(NSArray<THETACCameraControlSource *> * _Nullable)_cameraControlSourceSupport _cameraMode:(THETACCameraMode * _Nullable)_cameraMode captureInterval:(THETACInt * _Nullable)captureInterval captureIntervalSupport:(THETACCaptureIntervalSupport * _Nullable)captureIntervalSupport captureMode:(THETACCaptureMode * _Nullable)captureMode captureModeSupport:(NSArray<THETACCaptureMode *> * _Nullable)captureModeSupport captureNumber:(THETACInt * _Nullable)captureNumber captureNumberSupport:(THETACCaptureNumberSupport * _Nullable)captureNumberSupport clientVersion:(THETACInt * _Nullable)clientVersion clientVersionSupport:(NSArray<THETACInt *> * _Nullable)clientVersionSupport _colorTemperature:(THETACInt * _Nullable)_colorTemperature _compositeShootingOutputInterval:(THETACInt * _Nullable)_compositeShootingOutputInterval _compositeShootingOutputIntervalSupport:(NSArray<THETACInt *> * _Nullable)_compositeShootingOutputIntervalSupport _compositeShootingTime:(THETACInt * _Nullable)_compositeShootingTime _compositeShootingTimeSupport:(NSArray<THETACInt *> * _Nullable)_compositeShootingTimeSupport continuousNumber:(THETACInt * _Nullable)continuousNumber dateTimeZone:(NSString * _Nullable)dateTimeZone exposureCompensation:(THETACFloat * _Nullable)exposureCompensation exposureCompensationSupport:(NSArray<THETACFloat *> * _Nullable)exposureCompensationSupport exposureDelay:(THETACInt * _Nullable)exposureDelay exposureDelaySupport:(NSArray<THETACInt *> * _Nullable)exposureDelaySupport exposureProgram:(THETACInt * _Nullable)exposureProgram exposureProgramSupport:(NSArray<THETACInt *> * _Nullable)exposureProgramSupport fileFormat:(THETACMediaFileFormat * _Nullable)fileFormat fileFormatSupport:(NSArray<THETACMediaFileFormat *> * _Nullable)fileFormatSupport _filter:(THETACImageFilter * _Nullable)_filter _filterSupport:(NSArray<THETACImageFilter *> * _Nullable)_filterSupport gpsInfo:(THETACGpsInfo * _Nullable)gpsInfo _gpsTagRecording:(THETACGpsTagRecording * _Nullable)_gpsTagRecording _imageStitching:(THETACImageStitching * _Nullable)_imageStitching _imageStitchingSupport:(NSArray<THETACImageStitching *> * _Nullable)_imageStitchingSupport iso:(THETACInt * _Nullable)iso isoSupport:(NSArray<THETACInt *> * _Nullable)isoSupport isoAutoHighLimit:(THETACInt * _Nullable)isoAutoHighLimit isoAutoHighLimitSupport:(NSArray<THETACInt *> * _Nullable)isoAutoHighLimitSupport _language:(THETACLanguage * _Nullable)_language _languageSupport:(NSArray<THETACLanguage *> * _Nullable)_languageSupport _maxRecordableTime:(THETACInt * _Nullable)_maxRecordableTime _maxRecordableTimeSupport:(NSArray<THETACInt *> * _Nullable)_maxRecordableTimeSupport _microphone:(THETACMicrophoneOption * _Nullable)_microphone _microphoneSupport:(NSArray<THETACMicrophoneOption *> * _Nullable)_microphoneSupport _microphoneChannel:(THETACMicrophoneChannel * _Nullable)_microphoneChannel _microphoneChannelSupport:(NSArray<THETACMicrophoneChannel *> * _Nullable)_microphoneChannelSupport _networkType:(THETACNetworkType * _Nullable)_networkType _networkTypeSupport:(NSArray<THETACNetworkType *> * _Nullable)_networkTypeSupport offDelay:(THETACInt * _Nullable)offDelay offDelaySupport:(NSArray<THETACInt *> * _Nullable)offDelaySupport _password:(NSString * _Nullable)_password _powerSaving:(THETACPowerSaving * _Nullable)_powerSaving _powerSavingSupport:(NSArray<THETACPowerSaving *> * _Nullable)_powerSavingSupport previewFormat:(THETACPreviewFormat * _Nullable)previewFormat previewFormatSupport:(NSArray<THETACPreviewFormat *> * _Nullable)previewFormatSupport _preset:(THETACPreset * _Nullable)_preset _presetSupport:(NSArray<THETACPreset *> * _Nullable)_presetSupport _proxy:(THETACProxy * _Nullable)_proxy remainingPictures:(THETACInt * _Nullable)remainingPictures remainingSpace:(THETACLong * _Nullable)remainingSpace remainingVideoSeconds:(THETACInt * _Nullable)remainingVideoSeconds _shootingMethod:(THETACShootingMethod * _Nullable)_shootingMethod _shootingMethodSupport:(NSArray<THETACShootingMethod *> * _Nullable)_shootingMethodSupport shutterSpeed:(THETACDouble * _Nullable)shutterSpeed shutterSpeedSupport:(NSArray<THETACDouble *> * _Nullable)shutterSpeedSupport _shutterVolume:(THETACInt * _Nullable)_shutterVolume _shutterVolumeSupport:(THETACShutterVolumeSupport * _Nullable)_shutterVolumeSupport sleepDelay:(THETACInt * _Nullable)sleepDelay sleepDelaySupport:(NSArray<THETACInt *> * _Nullable)sleepDelaySupport _timeShift:(THETACTimeShift * _Nullable)_timeShift _timeShiftSupport:(NSArray<THETACTimeShift *> * _Nullable)_timeShiftSupport _topBottomCorrection:(THETACTopBottomCorrectionOption * _Nullable)_topBottomCorrection _topBottomCorrectionSupport:(NSArray<THETACTopBottomCorrectionOption *> * _Nullable)_topBottomCorrectionSupport totalSpace:(THETACLong * _Nullable)totalSpace _username:(NSString * _Nullable)_username videoStitching:(THETACVideoStitching * _Nullable)videoStitching videoStitchingSupport:(NSArray<THETACVideoStitching *> * _Nullable)videoStitchingSupport _visibilityReduction:(THETACVisibilityReduction * _Nullable)_visibilityReduction _visibilityReductionSupport:(NSArray<THETACVisibilityReduction *> * _Nullable)_visibilityReductionSupport whiteBalance:(THETACWhiteBalance * _Nullable)whiteBalance whiteBalanceSupport:(NSArray<THETACWhiteBalance *> * _Nullable)whiteBalanceSupport _whiteBalanceAutoStrength:(THETACWhiteBalanceAutoStrength * _Nullable)_whiteBalanceAutoStrength _whiteBalanceAutoStrengthSupport:(NSArray<THETACWhiteBalanceAutoStrength *> * _Nullable)_whiteBalanceAutoStrengthSupport _wlanFrequency:(THETACWlanFrequency * _Nullable)_wlanFrequency _wlanFrequencySupport:(NSArray<THETACWlanFrequency *> * _Nullable)_wlanFrequencySupport __attribute__((swift_name("doCopy(_aiAutoThumbnail:_aiAutoThumbnailSupport:aperture:apertureSupport:_bitrate:_bitrateSupport:_bluetoothPower:_burstMode:_burstOption:_cameraControlSource:_cameraControlSourceSupport:_cameraMode:captureInterval:captureIntervalSupport:captureMode:captureModeSupport:captureNumber:captureNumberSupport:clientVersion:clientVersionSupport:_colorTemperature:_compositeShootingOutputInterval:_compositeShootingOutputIntervalSupport:_compositeShootingTime:_compositeShootingTimeSupport:continuousNumber:dateTimeZone:exposureCompensation:exposureCompensationSupport:exposureDelay:exposureDelaySupport:exposureProgram:exposureProgramSupport:fileFormat:fileFormatSupport:_filter:_filterSupport:gpsInfo:_gpsTagRecording:_imageStitching:_imageStitchingSupport:iso:isoSupport:isoAutoHighLimit:isoAutoHighLimitSupport:_language:_languageSupport:_maxRecordableTime:_maxRecordableTimeSupport:_microphone:_microphoneSupport:_microphoneChannel:_microphoneChannelSupport:_networkType:_networkTypeSupport:offDelay:offDelaySupport:_password:_powerSaving:_powerSavingSupport:previewFormat:previewFormatSupport:_preset:_presetSupport:_proxy:remainingPictures:remainingSpace:remainingVideoSeconds:_shootingMethod:_shootingMethodSupport:shutterSpeed:shutterSpeedSupport:_shutterVolume:_shutterVolumeSupport:sleepDelay:sleepDelaySupport:_timeShift:_timeShiftSupport:_topBottomCorrection:_topBottomCorrectionSupport:totalSpace:_username:videoStitching:videoStitchingSupport:_visibilityReduction:_visibilityReductionSupport:whiteBalance:whiteBalanceSupport:_whiteBalanceAutoStrength:_whiteBalanceAutoStrengthSupport:_wlanFrequency:_wlanFrequencySupport:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property THETACAiAutoThumbnail * _Nullable _aiAutoThumbnail __attribute__((swift_name("_aiAutoThumbnail")));
@property NSArray<THETACAiAutoThumbnail *> * _Nullable _aiAutoThumbnailSupport __attribute__((swift_name("_aiAutoThumbnailSupport")));
@property NSString * _Nullable _bitrate __attribute__((swift_name("_bitrate")));
@property NSArray<NSString *> * _Nullable _bitrateSupport __attribute__((swift_name("_bitrateSupport")));
@property THETACBluetoothPower * _Nullable _bluetoothPower __attribute__((swift_name("_bluetoothPower")));
@property THETACBurstMode * _Nullable _burstMode __attribute__((swift_name("_burstMode")));
@property THETACBurstOption * _Nullable _burstOption __attribute__((swift_name("_burstOption")));
@property THETACCameraControlSource * _Nullable _cameraControlSource __attribute__((swift_name("_cameraControlSource")));
@property NSArray<THETACCameraControlSource *> * _Nullable _cameraControlSourceSupport __attribute__((swift_name("_cameraControlSourceSupport")));
@property THETACCameraMode * _Nullable _cameraMode __attribute__((swift_name("_cameraMode")));
@property THETACInt * _Nullable _colorTemperature __attribute__((swift_name("_colorTemperature")));
@property THETACInt * _Nullable _compositeShootingOutputInterval __attribute__((swift_name("_compositeShootingOutputInterval")));
@property NSArray<THETACInt *> * _Nullable _compositeShootingOutputIntervalSupport __attribute__((swift_name("_compositeShootingOutputIntervalSupport")));
@property THETACInt * _Nullable _compositeShootingTime __attribute__((swift_name("_compositeShootingTime")));
@property NSArray<THETACInt *> * _Nullable _compositeShootingTimeSupport __attribute__((swift_name("_compositeShootingTimeSupport")));
@property THETACImageFilter * _Nullable _filter __attribute__((swift_name("_filter")));
@property NSArray<THETACImageFilter *> * _Nullable _filterSupport __attribute__((swift_name("_filterSupport")));
@property THETACGpsTagRecording * _Nullable _gpsTagRecording __attribute__((swift_name("_gpsTagRecording")));
@property THETACImageStitching * _Nullable _imageStitching __attribute__((swift_name("_imageStitching")));
@property NSArray<THETACImageStitching *> * _Nullable _imageStitchingSupport __attribute__((swift_name("_imageStitchingSupport")));
@property THETACLanguage * _Nullable _language __attribute__((swift_name("_language")));
@property NSArray<THETACLanguage *> * _Nullable _languageSupport __attribute__((swift_name("_languageSupport")));
@property THETACInt * _Nullable _maxRecordableTime __attribute__((swift_name("_maxRecordableTime")));
@property NSArray<THETACInt *> * _Nullable _maxRecordableTimeSupport __attribute__((swift_name("_maxRecordableTimeSupport")));
@property THETACMicrophoneOption * _Nullable _microphone __attribute__((swift_name("_microphone")));
@property THETACMicrophoneChannel * _Nullable _microphoneChannel __attribute__((swift_name("_microphoneChannel")));
@property NSArray<THETACMicrophoneChannel *> * _Nullable _microphoneChannelSupport __attribute__((swift_name("_microphoneChannelSupport")));
@property NSArray<THETACMicrophoneOption *> * _Nullable _microphoneSupport __attribute__((swift_name("_microphoneSupport")));
@property THETACNetworkType * _Nullable _networkType __attribute__((swift_name("_networkType")));
@property NSArray<THETACNetworkType *> * _Nullable _networkTypeSupport __attribute__((swift_name("_networkTypeSupport")));
@property NSString * _Nullable _password __attribute__((swift_name("_password")));
@property THETACPowerSaving * _Nullable _powerSaving __attribute__((swift_name("_powerSaving")));
@property NSArray<THETACPowerSaving *> * _Nullable _powerSavingSupport __attribute__((swift_name("_powerSavingSupport")));
@property THETACPreset * _Nullable _preset __attribute__((swift_name("_preset")));
@property NSArray<THETACPreset *> * _Nullable _presetSupport __attribute__((swift_name("_presetSupport")));
@property THETACProxy * _Nullable _proxy __attribute__((swift_name("_proxy")));
@property THETACShootingMethod * _Nullable _shootingMethod __attribute__((swift_name("_shootingMethod")));
@property NSArray<THETACShootingMethod *> * _Nullable _shootingMethodSupport __attribute__((swift_name("_shootingMethodSupport")));
@property THETACInt * _Nullable _shutterVolume __attribute__((swift_name("_shutterVolume")));
@property THETACShutterVolumeSupport * _Nullable _shutterVolumeSupport __attribute__((swift_name("_shutterVolumeSupport")));
@property THETACTimeShift * _Nullable _timeShift __attribute__((swift_name("_timeShift")));
@property NSArray<THETACTimeShift *> * _Nullable _timeShiftSupport __attribute__((swift_name("_timeShiftSupport")));
@property THETACTopBottomCorrectionOption * _Nullable _topBottomCorrection __attribute__((swift_name("_topBottomCorrection")));
@property NSArray<THETACTopBottomCorrectionOption *> * _Nullable _topBottomCorrectionSupport __attribute__((swift_name("_topBottomCorrectionSupport")));
@property NSString * _Nullable _username __attribute__((swift_name("_username")));
@property THETACVisibilityReduction * _Nullable _visibilityReduction __attribute__((swift_name("_visibilityReduction")));
@property NSArray<THETACVisibilityReduction *> * _Nullable _visibilityReductionSupport __attribute__((swift_name("_visibilityReductionSupport")));
@property THETACWhiteBalanceAutoStrength * _Nullable _whiteBalanceAutoStrength __attribute__((swift_name("_whiteBalanceAutoStrength")));
@property NSArray<THETACWhiteBalanceAutoStrength *> * _Nullable _whiteBalanceAutoStrengthSupport __attribute__((swift_name("_whiteBalanceAutoStrengthSupport")));
@property THETACWlanFrequency * _Nullable _wlanFrequency __attribute__((swift_name("_wlanFrequency")));
@property NSArray<THETACWlanFrequency *> * _Nullable _wlanFrequencySupport __attribute__((swift_name("_wlanFrequencySupport")));
@property THETACFloat * _Nullable aperture __attribute__((swift_name("aperture")));
@property NSArray<THETACFloat *> * _Nullable apertureSupport __attribute__((swift_name("apertureSupport")));
@property THETACInt * _Nullable captureInterval __attribute__((swift_name("captureInterval")));
@property THETACCaptureIntervalSupport * _Nullable captureIntervalSupport __attribute__((swift_name("captureIntervalSupport")));
@property THETACCaptureMode * _Nullable captureMode __attribute__((swift_name("captureMode")));
@property NSArray<THETACCaptureMode *> * _Nullable captureModeSupport __attribute__((swift_name("captureModeSupport")));
@property THETACInt * _Nullable captureNumber __attribute__((swift_name("captureNumber")));
@property THETACCaptureNumberSupport * _Nullable captureNumberSupport __attribute__((swift_name("captureNumberSupport")));
@property THETACInt * _Nullable clientVersion __attribute__((swift_name("clientVersion")));
@property NSArray<THETACInt *> * _Nullable clientVersionSupport __attribute__((swift_name("clientVersionSupport")));
@property THETACInt * _Nullable continuousNumber __attribute__((swift_name("continuousNumber")));
@property NSString * _Nullable dateTimeZone __attribute__((swift_name("dateTimeZone")));
@property THETACFloat * _Nullable exposureCompensation __attribute__((swift_name("exposureCompensation")));
@property NSArray<THETACFloat *> * _Nullable exposureCompensationSupport __attribute__((swift_name("exposureCompensationSupport")));
@property THETACInt * _Nullable exposureDelay __attribute__((swift_name("exposureDelay")));
@property NSArray<THETACInt *> * _Nullable exposureDelaySupport __attribute__((swift_name("exposureDelaySupport")));
@property THETACInt * _Nullable exposureProgram __attribute__((swift_name("exposureProgram")));
@property NSArray<THETACInt *> * _Nullable exposureProgramSupport __attribute__((swift_name("exposureProgramSupport")));
@property THETACMediaFileFormat * _Nullable fileFormat __attribute__((swift_name("fileFormat")));
@property NSArray<THETACMediaFileFormat *> * _Nullable fileFormatSupport __attribute__((swift_name("fileFormatSupport")));
@property THETACGpsInfo * _Nullable gpsInfo __attribute__((swift_name("gpsInfo")));
@property THETACInt * _Nullable iso __attribute__((swift_name("iso")));
@property THETACInt * _Nullable isoAutoHighLimit __attribute__((swift_name("isoAutoHighLimit")));
@property NSArray<THETACInt *> * _Nullable isoAutoHighLimitSupport __attribute__((swift_name("isoAutoHighLimitSupport")));
@property NSArray<THETACInt *> * _Nullable isoSupport __attribute__((swift_name("isoSupport")));
@property THETACInt * _Nullable offDelay __attribute__((swift_name("offDelay")));
@property NSArray<THETACInt *> * _Nullable offDelaySupport __attribute__((swift_name("offDelaySupport")));
@property THETACPreviewFormat * _Nullable previewFormat __attribute__((swift_name("previewFormat")));
@property NSArray<THETACPreviewFormat *> * _Nullable previewFormatSupport __attribute__((swift_name("previewFormatSupport")));
@property THETACInt * _Nullable remainingPictures __attribute__((swift_name("remainingPictures")));
@property THETACLong * _Nullable remainingSpace __attribute__((swift_name("remainingSpace")));
@property THETACInt * _Nullable remainingVideoSeconds __attribute__((swift_name("remainingVideoSeconds")));
@property THETACDouble * _Nullable shutterSpeed __attribute__((swift_name("shutterSpeed")));
@property NSArray<THETACDouble *> * _Nullable shutterSpeedSupport __attribute__((swift_name("shutterSpeedSupport")));
@property THETACInt * _Nullable sleepDelay __attribute__((swift_name("sleepDelay")));
@property NSArray<THETACInt *> * _Nullable sleepDelaySupport __attribute__((swift_name("sleepDelaySupport")));
@property THETACLong * _Nullable totalSpace __attribute__((swift_name("totalSpace")));
@property THETACVideoStitching * _Nullable videoStitching __attribute__((swift_name("videoStitching")));
@property NSArray<THETACVideoStitching *> * _Nullable videoStitchingSupport __attribute__((swift_name("videoStitchingSupport")));
@property THETACWhiteBalance * _Nullable whiteBalance __attribute__((swift_name("whiteBalance")));
@property NSArray<THETACWhiteBalance *> * _Nullable whiteBalanceSupport __attribute__((swift_name("whiteBalanceSupport")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Options.Companion")))
@interface THETACOptionsCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACOptionsCompanion *shared __attribute__((swift_name("shared")));
- (id<THETACKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Plugin")))
@interface THETACPlugin : THETACBase
- (instancetype)initWithPluginName:(NSString *)pluginName packageName:(NSString *)packageName version:(NSString *)version type:(NSString *)type running:(BOOL)running foreground:(BOOL)foreground boot:(BOOL)boot force:(THETACBoolean * _Nullable)force bootOptions:(NSString * _Nullable)bootOptions webServer:(BOOL)webServer exitStatus:(NSString *)exitStatus message:(NSString *)message __attribute__((swift_name("init(pluginName:packageName:version:type:running:foreground:boot:force:bootOptions:webServer:exitStatus:message:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) THETACPluginCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (BOOL)component10 __attribute__((swift_name("component10()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component11 __attribute__((swift_name("component11()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component12 __attribute__((swift_name("component12()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component4 __attribute__((swift_name("component4()"))) __attribute__((deprecated("use corresponding property instead")));
- (BOOL)component5 __attribute__((swift_name("component5()"))) __attribute__((deprecated("use corresponding property instead")));
- (BOOL)component6 __attribute__((swift_name("component6()"))) __attribute__((deprecated("use corresponding property instead")));
- (BOOL)component7 __attribute__((swift_name("component7()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACBoolean * _Nullable)component8 __attribute__((swift_name("component8()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component9 __attribute__((swift_name("component9()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACPlugin *)doCopyPluginName:(NSString *)pluginName packageName:(NSString *)packageName version:(NSString *)version type:(NSString *)type running:(BOOL)running foreground:(BOOL)foreground boot:(BOOL)boot force:(THETACBoolean * _Nullable)force bootOptions:(NSString * _Nullable)bootOptions webServer:(BOOL)webServer exitStatus:(NSString *)exitStatus message:(NSString *)message __attribute__((swift_name("doCopy(pluginName:packageName:version:type:running:foreground:boot:force:bootOptions:webServer:exitStatus:message:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL boot __attribute__((swift_name("boot")));
@property (readonly) NSString * _Nullable bootOptions __attribute__((swift_name("bootOptions")));
@property (readonly) NSString *exitStatus __attribute__((swift_name("exitStatus")));
@property (readonly) THETACBoolean * _Nullable force __attribute__((swift_name("force")));
@property (readonly) BOOL foreground __attribute__((swift_name("foreground")));
@property (readonly) NSString *message __attribute__((swift_name("message")));
@property (readonly) NSString *packageName __attribute__((swift_name("packageName")));
@property (readonly) NSString *pluginName __attribute__((swift_name("pluginName")));
@property (readonly) BOOL running __attribute__((swift_name("running")));
@property (readonly) NSString *type __attribute__((swift_name("type")));
@property (readonly) NSString *version __attribute__((swift_name("version")));
@property (readonly) BOOL webServer __attribute__((swift_name("webServer")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Plugin.Companion")))
@interface THETACPluginCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACPluginCompanion *shared __attribute__((swift_name("shared")));
- (id<THETACKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PluginControlParams")))
@interface THETACPluginControlParams : THETACBase
- (instancetype)initWithAction:(NSString *)action plugin:(NSString * _Nullable)plugin __attribute__((swift_name("init(action:plugin:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) THETACPluginControlParamsCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACPluginControlParams *)doCopyAction:(NSString *)action plugin:(NSString * _Nullable)plugin __attribute__((swift_name("doCopy(action:plugin:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *action __attribute__((swift_name("action")));
@property (readonly) NSString * _Nullable plugin __attribute__((swift_name("plugin")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PluginControlParams.Companion")))
@interface THETACPluginControlParamsCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACPluginControlParamsCompanion *shared __attribute__((swift_name("shared")));
- (id<THETACKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PluginControlRequest")))
@interface THETACPluginControlRequest : THETACBase <THETACCommandApiRequest>
- (instancetype)initWithName:(NSString *)name parameters:(THETACPluginControlParams *)parameters __attribute__((swift_name("init(name:parameters:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) THETACPluginControlRequestCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACPluginControlParams *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACPluginControlRequest *)doCopyName:(NSString *)name parameters:(THETACPluginControlParams *)parameters __attribute__((swift_name("doCopy(name:parameters:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) THETACPluginControlParams *parameters __attribute__((swift_name("parameters")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PluginControlRequest.Companion")))
@interface THETACPluginControlRequestCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACPluginControlRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<THETACKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PluginControlResponse")))
@interface THETACPluginControlResponse : THETACBase <THETACCommandApiResponse>
- (instancetype)initWithName:(NSString *)name state:(THETACCommandState *)state id:(NSString * _Nullable)id results:(THETACKotlinx_serialization_jsonJsonElement * _Nullable)results error:(THETACCommandError * _Nullable)error progress:(THETACCommandProgress * _Nullable)progress __attribute__((swift_name("init(name:state:id:results:error:progress:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) THETACPluginControlResponseCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACCommandState *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACKotlinx_serialization_jsonJsonElement * _Nullable)component4 __attribute__((swift_name("component4()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACCommandError * _Nullable)component5 __attribute__((swift_name("component5()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACCommandProgress * _Nullable)component6 __attribute__((swift_name("component6()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACPluginControlResponse *)doCopyName:(NSString *)name state:(THETACCommandState *)state id:(NSString * _Nullable)id results:(THETACKotlinx_serialization_jsonJsonElement * _Nullable)results error:(THETACCommandError * _Nullable)error progress:(THETACCommandProgress * _Nullable)progress __attribute__((swift_name("doCopy(name:state:id:results:error:progress:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) THETACCommandError * _Nullable error __attribute__((swift_name("error")));
@property (readonly) NSString * _Nullable id __attribute__((swift_name("id")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) THETACCommandProgress * _Nullable progress __attribute__((swift_name("progress")));
@property (readonly) THETACKotlinx_serialization_jsonJsonElement * _Nullable results __attribute__((swift_name("results")));
@property (readonly) THETACCommandState *state __attribute__((swift_name("state")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PluginControlResponse.Companion")))
@interface THETACPluginControlResponseCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACPluginControlResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<THETACKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PowerSaving")))
@interface THETACPowerSaving : THETACKotlinEnum<THETACPowerSaving *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) THETACPowerSavingCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) THETACPowerSaving *on __attribute__((swift_name("on")));
@property (class, readonly) THETACPowerSaving *off __attribute__((swift_name("off")));
+ (THETACKotlinArray<THETACPowerSaving *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PowerSaving.Companion")))
@interface THETACPowerSavingCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACPowerSavingCompanion *shared __attribute__((swift_name("shared")));
- (id<THETACKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<THETACKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(THETACKotlinArray<id<THETACKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Preset")))
@interface THETACPreset : THETACKotlinEnum<THETACPreset *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) THETACPresetCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) THETACPreset *face __attribute__((swift_name("face")));
@property (class, readonly) THETACPreset *nightView __attribute__((swift_name("nightView")));
@property (class, readonly) THETACPreset *lensByLensExposure __attribute__((swift_name("lensByLensExposure")));
@property (class, readonly) THETACPreset *room __attribute__((swift_name("room")));
+ (THETACKotlinArray<THETACPreset *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Preset.Companion")))
@interface THETACPresetCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACPresetCompanion *shared __attribute__((swift_name("shared")));
- (id<THETACKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<THETACKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(THETACKotlinArray<id<THETACKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PreviewFormat")))
@interface THETACPreviewFormat : THETACBase
- (instancetype)initWithWidth:(THETACInt * _Nullable)width height:(THETACInt * _Nullable)height framerate:(THETACInt * _Nullable)framerate __attribute__((swift_name("init(width:height:framerate:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) THETACPreviewFormatCompanion *companion __attribute__((swift_name("companion")));
- (THETACInt * _Nullable)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACInt * _Nullable)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACInt * _Nullable)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACPreviewFormat *)doCopyWidth:(THETACInt * _Nullable)width height:(THETACInt * _Nullable)height framerate:(THETACInt * _Nullable)framerate __attribute__((swift_name("doCopy(width:height:framerate:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) THETACInt * _Nullable framerate __attribute__((swift_name("framerate")));
@property (readonly) THETACInt * _Nullable height __attribute__((swift_name("height")));
@property (readonly) THETACInt * _Nullable width __attribute__((swift_name("width")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PreviewFormat.Companion")))
@interface THETACPreviewFormatCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACPreviewFormatCompanion *shared __attribute__((swift_name("shared")));
- (id<THETACKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ProjectionType")))
@interface THETACProjectionType : THETACKotlinEnum<THETACProjectionType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) THETACProjectionTypeCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) THETACProjectionType *equirectangular __attribute__((swift_name("equirectangular")));
+ (THETACKotlinArray<THETACProjectionType *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ProjectionType.Companion")))
@interface THETACProjectionTypeCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACProjectionTypeCompanion *shared __attribute__((swift_name("shared")));
- (id<THETACKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<THETACKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(THETACKotlinArray<id<THETACKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Proxy")))
@interface THETACProxy : THETACBase
- (instancetype)initWithUse:(BOOL)use url:(NSString * _Nullable)url port:(THETACInt * _Nullable)port userid:(NSString * _Nullable)userid password:(NSString * _Nullable)password __attribute__((swift_name("init(use:url:port:userid:password:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) THETACProxyCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACInt * _Nullable)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component5 __attribute__((swift_name("component5()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACProxy *)doCopyUse:(BOOL)use url:(NSString * _Nullable)url port:(THETACInt * _Nullable)port userid:(NSString * _Nullable)userid password:(NSString * _Nullable)password __attribute__((swift_name("doCopy(use:url:port:userid:password:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable password __attribute__((swift_name("password")));
@property (readonly) THETACInt * _Nullable port __attribute__((swift_name("port")));
@property (readonly) NSString * _Nullable url __attribute__((swift_name("url")));
@property (readonly) BOOL use __attribute__((swift_name("use")));
@property (readonly) NSString * _Nullable userid __attribute__((swift_name("userid")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Proxy.Companion")))
@interface THETACProxyCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACProxyCompanion *shared __attribute__((swift_name("shared")));
- (id<THETACKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ResetRequest")))
@interface THETACResetRequest : THETACBase <THETACCommandApiRequest>
- (instancetype)initWithName:(NSString *)name parameters:(THETACEmptyParameter *)parameters __attribute__((swift_name("init(name:parameters:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) THETACResetRequestCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACEmptyParameter *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACResetRequest *)doCopyName:(NSString *)name parameters:(THETACEmptyParameter *)parameters __attribute__((swift_name("doCopy(name:parameters:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) THETACEmptyParameter *parameters __attribute__((swift_name("parameters")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ResetRequest.Companion")))
@interface THETACResetRequestCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACResetRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<THETACKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ResetResponse")))
@interface THETACResetResponse : THETACBase <THETACCommandApiResponse>
- (instancetype)initWithName:(NSString *)name state:(THETACCommandState *)state id:(NSString * _Nullable)id results:(THETACKotlinx_serialization_jsonJsonElement * _Nullable)results error:(THETACCommandError * _Nullable)error progress:(THETACCommandProgress * _Nullable)progress __attribute__((swift_name("init(name:state:id:results:error:progress:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) THETACResetResponseCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACCommandState *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACKotlinx_serialization_jsonJsonElement * _Nullable)component4 __attribute__((swift_name("component4()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACCommandError * _Nullable)component5 __attribute__((swift_name("component5()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACCommandProgress * _Nullable)component6 __attribute__((swift_name("component6()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACResetResponse *)doCopyName:(NSString *)name state:(THETACCommandState *)state id:(NSString * _Nullable)id results:(THETACKotlinx_serialization_jsonJsonElement * _Nullable)results error:(THETACCommandError * _Nullable)error progress:(THETACCommandProgress * _Nullable)progress __attribute__((swift_name("doCopy(name:state:id:results:error:progress:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) THETACCommandError * _Nullable error __attribute__((swift_name("error")));
@property (readonly) NSString * _Nullable id __attribute__((swift_name("id")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) THETACCommandProgress * _Nullable progress __attribute__((swift_name("progress")));
@property (readonly) THETACKotlinx_serialization_jsonJsonElement * _Nullable results __attribute__((swift_name("results")));
@property (readonly) THETACCommandState *state __attribute__((swift_name("state")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ResetResponse.Companion")))
@interface THETACResetResponseCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACResetResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<THETACKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ResultConvertVideoFormats")))
@interface THETACResultConvertVideoFormats : THETACBase
- (instancetype)initWithFileUrl:(NSString *)fileUrl __attribute__((swift_name("init(fileUrl:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) THETACResultConvertVideoFormatsCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACResultConvertVideoFormats *)doCopyFileUrl:(NSString *)fileUrl __attribute__((swift_name("doCopy(fileUrl:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *fileUrl __attribute__((swift_name("fileUrl")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ResultConvertVideoFormats.Companion")))
@interface THETACResultConvertVideoFormatsCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACResultConvertVideoFormatsCompanion *shared __attribute__((swift_name("shared")));
- (id<THETACKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ResultGetMetadata")))
@interface THETACResultGetMetadata : THETACBase
- (instancetype)initWithExif:(THETACExifInfo *)exif xmp:(THETACXmpInfo *)xmp __attribute__((swift_name("init(exif:xmp:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) THETACResultGetMetadataCompanion *companion __attribute__((swift_name("companion")));
- (THETACExifInfo *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACXmpInfo *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACResultGetMetadata *)doCopyExif:(THETACExifInfo *)exif xmp:(THETACXmpInfo *)xmp __attribute__((swift_name("doCopy(exif:xmp:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) THETACExifInfo *exif __attribute__((swift_name("exif")));
@property (readonly) THETACXmpInfo *xmp __attribute__((swift_name("xmp")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ResultGetMetadata.Companion")))
@interface THETACResultGetMetadataCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACResultGetMetadataCompanion *shared __attribute__((swift_name("shared")));
- (id<THETACKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ResultGetMySetting")))
@interface THETACResultGetMySetting : THETACBase
- (instancetype)initWithOptions:(THETACOptions *)options __attribute__((swift_name("init(options:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) THETACResultGetMySettingCompanion *companion __attribute__((swift_name("companion")));
- (THETACOptions *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACResultGetMySetting *)doCopyOptions:(THETACOptions *)options __attribute__((swift_name("doCopy(options:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) THETACOptions *options __attribute__((swift_name("options")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ResultGetMySetting.Companion")))
@interface THETACResultGetMySettingCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACResultGetMySettingCompanion *shared __attribute__((swift_name("shared")));
- (id<THETACKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ResultGetOptions")))
@interface THETACResultGetOptions : THETACBase
- (instancetype)initWithOptions:(THETACOptions *)options __attribute__((swift_name("init(options:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) THETACResultGetOptionsCompanion *companion __attribute__((swift_name("companion")));
- (THETACOptions *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACResultGetOptions *)doCopyOptions:(THETACOptions *)options __attribute__((swift_name("doCopy(options:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) THETACOptions *options __attribute__((swift_name("options")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ResultGetOptions.Companion")))
@interface THETACResultGetOptionsCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACResultGetOptionsCompanion *shared __attribute__((swift_name("shared")));
- (id<THETACKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ResultGetPluginOrders")))
@interface THETACResultGetPluginOrders : THETACBase
- (instancetype)initWithPluginOrders:(NSArray<NSString *> *)pluginOrders __attribute__((swift_name("init(pluginOrders:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) THETACResultGetPluginOrdersCompanion *companion __attribute__((swift_name("companion")));
- (NSArray<NSString *> *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACResultGetPluginOrders *)doCopyPluginOrders:(NSArray<NSString *> *)pluginOrders __attribute__((swift_name("doCopy(pluginOrders:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<NSString *> *pluginOrders __attribute__((swift_name("pluginOrders")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ResultGetPluginOrders.Companion")))
@interface THETACResultGetPluginOrdersCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACResultGetPluginOrdersCompanion *shared __attribute__((swift_name("shared")));
- (id<THETACKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ResultListAccessPoints")))
@interface THETACResultListAccessPoints : THETACBase
- (instancetype)initWithAccessPoints:(NSArray<THETACAccessPoint *> *)accessPoints __attribute__((swift_name("init(accessPoints:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) THETACResultListAccessPointsCompanion *companion __attribute__((swift_name("companion")));
- (NSArray<THETACAccessPoint *> *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACResultListAccessPoints *)doCopyAccessPoints:(NSArray<THETACAccessPoint *> *)accessPoints __attribute__((swift_name("doCopy(accessPoints:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<THETACAccessPoint *> *accessPoints __attribute__((swift_name("accessPoints")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ResultListAccessPoints.Companion")))
@interface THETACResultListAccessPointsCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACResultListAccessPointsCompanion *shared __attribute__((swift_name("shared")));
- (id<THETACKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ResultListFiles")))
@interface THETACResultListFiles : THETACBase
- (instancetype)initWithEntries:(NSArray<THETACCameraFileInfo *> *)entries totalEntries:(int32_t)totalEntries __attribute__((swift_name("init(entries:totalEntries:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) THETACResultListFilesCompanion *companion __attribute__((swift_name("companion")));
- (NSArray<THETACCameraFileInfo *> *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (int32_t)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACResultListFiles *)doCopyEntries:(NSArray<THETACCameraFileInfo *> *)entries totalEntries:(int32_t)totalEntries __attribute__((swift_name("doCopy(entries:totalEntries:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<THETACCameraFileInfo *> *entries __attribute__((swift_name("entries")));
@property (readonly) int32_t totalEntries __attribute__((swift_name("totalEntries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ResultListFiles.Companion")))
@interface THETACResultListFilesCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACResultListFilesCompanion *shared __attribute__((swift_name("shared")));
- (id<THETACKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ResultListPlugins")))
@interface THETACResultListPlugins : THETACBase
- (instancetype)initWithPlugins:(NSArray<THETACPlugin *> *)plugins __attribute__((swift_name("init(plugins:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) THETACResultListPluginsCompanion *companion __attribute__((swift_name("companion")));
- (NSArray<THETACPlugin *> *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACResultListPlugins *)doCopyPlugins:(NSArray<THETACPlugin *> *)plugins __attribute__((swift_name("doCopy(plugins:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<THETACPlugin *> *plugins __attribute__((swift_name("plugins")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ResultListPlugins.Companion")))
@interface THETACResultListPluginsCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACResultListPluginsCompanion *shared __attribute__((swift_name("shared")));
- (id<THETACKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ResultSetBluetoothDevice")))
@interface THETACResultSetBluetoothDevice : THETACBase
- (instancetype)initWithDeviceName:(NSString *)deviceName __attribute__((swift_name("init(deviceName:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) THETACResultSetBluetoothDeviceCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACResultSetBluetoothDevice *)doCopyDeviceName:(NSString *)deviceName __attribute__((swift_name("doCopy(deviceName:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *deviceName __attribute__((swift_name("deviceName")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ResultSetBluetoothDevice.Companion")))
@interface THETACResultSetBluetoothDeviceCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACResultSetBluetoothDeviceCompanion *shared __attribute__((swift_name("shared")));
- (id<THETACKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ResultSetOptions")))
@interface THETACResultSetOptions : THETACBase
- (instancetype)initWithOptions:(THETACOptions *)options __attribute__((swift_name("init(options:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) THETACResultSetOptionsCompanion *companion __attribute__((swift_name("companion")));
- (THETACOptions *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACResultSetOptions *)doCopyOptions:(THETACOptions *)options __attribute__((swift_name("doCopy(options:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) THETACOptions *options __attribute__((swift_name("options")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ResultSetOptions.Companion")))
@interface THETACResultSetOptionsCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACResultSetOptionsCompanion *shared __attribute__((swift_name("shared")));
- (id<THETACKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ResultStartCapture")))
@interface THETACResultStartCapture : THETACBase
- (instancetype)initWithFileUrls:(NSArray<NSString *> * _Nullable)fileUrls fileUrl:(NSString * _Nullable)fileUrl __attribute__((swift_name("init(fileUrls:fileUrl:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) THETACResultStartCaptureCompanion *companion __attribute__((swift_name("companion")));
- (NSArray<NSString *> * _Nullable)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACResultStartCapture *)doCopyFileUrls:(NSArray<NSString *> * _Nullable)fileUrls fileUrl:(NSString * _Nullable)fileUrl __attribute__((swift_name("doCopy(fileUrls:fileUrl:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable fileUrl __attribute__((swift_name("fileUrl")));
@property (readonly) NSArray<NSString *> * _Nullable fileUrls __attribute__((swift_name("fileUrls")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ResultStartCapture.Companion")))
@interface THETACResultStartCaptureCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACResultStartCaptureCompanion *shared __attribute__((swift_name("shared")));
- (id<THETACKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ResultStartSession")))
@interface THETACResultStartSession : THETACBase
- (instancetype)initWithSessionId:(NSString *)sessionId timeout:(int32_t)timeout __attribute__((swift_name("init(sessionId:timeout:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) THETACResultStartSessionCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (int32_t)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACResultStartSession *)doCopySessionId:(NSString *)sessionId timeout:(int32_t)timeout __attribute__((swift_name("doCopy(sessionId:timeout:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *sessionId __attribute__((swift_name("sessionId")));
@property (readonly) int32_t timeout __attribute__((swift_name("timeout")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ResultStartSession.Companion")))
@interface THETACResultStartSessionCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACResultStartSessionCompanion *shared __attribute__((swift_name("shared")));
- (id<THETACKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ResultStopCapture")))
@interface THETACResultStopCapture : THETACBase
- (instancetype)initWithFileUrls:(NSArray<NSString *> * _Nullable)fileUrls fileUrl:(NSString * _Nullable)fileUrl __attribute__((swift_name("init(fileUrls:fileUrl:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) THETACResultStopCaptureCompanion *companion __attribute__((swift_name("companion")));
- (NSArray<NSString *> * _Nullable)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACResultStopCapture *)doCopyFileUrls:(NSArray<NSString *> * _Nullable)fileUrls fileUrl:(NSString * _Nullable)fileUrl __attribute__((swift_name("doCopy(fileUrls:fileUrl:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable fileUrl __attribute__((swift_name("fileUrl")));
@property (readonly) NSArray<NSString *> * _Nullable fileUrls __attribute__((swift_name("fileUrls")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ResultStopCapture.Companion")))
@interface THETACResultStopCaptureCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACResultStopCaptureCompanion *shared __attribute__((swift_name("shared")));
- (id<THETACKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ResultTakePicture")))
@interface THETACResultTakePicture : THETACBase
- (instancetype)initWithFileUrl:(NSString *)fileUrl _dngFileUrl:(NSString * _Nullable)_dngFileUrl __attribute__((swift_name("init(fileUrl:_dngFileUrl:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) THETACResultTakePictureCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACResultTakePicture *)doCopyFileUrl:(NSString *)fileUrl _dngFileUrl:(NSString * _Nullable)_dngFileUrl __attribute__((swift_name("doCopy(fileUrl:_dngFileUrl:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable _dngFileUrl __attribute__((swift_name("_dngFileUrl")));
@property (readonly) NSString *fileUrl __attribute__((swift_name("fileUrl")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ResultTakePicture.Companion")))
@interface THETACResultTakePictureCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACResultTakePictureCompanion *shared __attribute__((swift_name("shared")));
- (id<THETACKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SetAccessPointParams")))
@interface THETACSetAccessPointParams : THETACBase
- (instancetype)initWithSsid:(NSString *)ssid ssidStealth:(THETACBoolean * _Nullable)ssidStealth security:(THETACAuthenticationMode * _Nullable)security password:(NSString * _Nullable)password connectionPriority:(THETACInt * _Nullable)connectionPriority ipAddressAllocation:(THETACIpAddressAllocation * _Nullable)ipAddressAllocation ipAddress:(NSString * _Nullable)ipAddress subnetMask:(NSString * _Nullable)subnetMask defaultGateway:(NSString * _Nullable)defaultGateway proxy:(THETACProxy * _Nullable)proxy __attribute__((swift_name("init(ssid:ssidStealth:security:password:connectionPriority:ipAddressAllocation:ipAddress:subnetMask:defaultGateway:proxy:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) THETACSetAccessPointParamsCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACProxy * _Nullable)component10 __attribute__((swift_name("component10()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACBoolean * _Nullable)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACAuthenticationMode * _Nullable)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACInt * _Nullable)component5 __attribute__((swift_name("component5()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACIpAddressAllocation * _Nullable)component6 __attribute__((swift_name("component6()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component7 __attribute__((swift_name("component7()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component8 __attribute__((swift_name("component8()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component9 __attribute__((swift_name("component9()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACSetAccessPointParams *)doCopySsid:(NSString *)ssid ssidStealth:(THETACBoolean * _Nullable)ssidStealth security:(THETACAuthenticationMode * _Nullable)security password:(NSString * _Nullable)password connectionPriority:(THETACInt * _Nullable)connectionPriority ipAddressAllocation:(THETACIpAddressAllocation * _Nullable)ipAddressAllocation ipAddress:(NSString * _Nullable)ipAddress subnetMask:(NSString * _Nullable)subnetMask defaultGateway:(NSString * _Nullable)defaultGateway proxy:(THETACProxy * _Nullable)proxy __attribute__((swift_name("doCopy(ssid:ssidStealth:security:password:connectionPriority:ipAddressAllocation:ipAddress:subnetMask:defaultGateway:proxy:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) THETACInt * _Nullable connectionPriority __attribute__((swift_name("connectionPriority")));
@property (readonly) NSString * _Nullable defaultGateway __attribute__((swift_name("defaultGateway")));
@property (readonly) NSString * _Nullable ipAddress __attribute__((swift_name("ipAddress")));
@property (readonly) THETACIpAddressAllocation * _Nullable ipAddressAllocation __attribute__((swift_name("ipAddressAllocation")));
@property (readonly) NSString * _Nullable password __attribute__((swift_name("password")));
@property (readonly) THETACProxy * _Nullable proxy __attribute__((swift_name("proxy")));
@property (readonly) THETACAuthenticationMode * _Nullable security __attribute__((swift_name("security")));
@property (readonly) NSString *ssid __attribute__((swift_name("ssid")));
@property (readonly) THETACBoolean * _Nullable ssidStealth __attribute__((swift_name("ssidStealth")));
@property (readonly) NSString * _Nullable subnetMask __attribute__((swift_name("subnetMask")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SetAccessPointParams.Companion")))
@interface THETACSetAccessPointParamsCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACSetAccessPointParamsCompanion *shared __attribute__((swift_name("shared")));
- (id<THETACKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SetAccessPointRequest")))
@interface THETACSetAccessPointRequest : THETACBase <THETACCommandApiRequest>
- (instancetype)initWithName:(NSString *)name parameters:(THETACSetAccessPointParams *)parameters __attribute__((swift_name("init(name:parameters:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) THETACSetAccessPointRequestCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACSetAccessPointParams *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACSetAccessPointRequest *)doCopyName:(NSString *)name parameters:(THETACSetAccessPointParams *)parameters __attribute__((swift_name("doCopy(name:parameters:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) THETACSetAccessPointParams *parameters __attribute__((swift_name("parameters")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SetAccessPointRequest.Companion")))
@interface THETACSetAccessPointRequestCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACSetAccessPointRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<THETACKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SetAccessPointResponse")))
@interface THETACSetAccessPointResponse : THETACBase <THETACCommandApiResponse>
- (instancetype)initWithName:(NSString *)name state:(THETACCommandState *)state id:(NSString * _Nullable)id results:(THETACKotlinx_serialization_jsonJsonElement * _Nullable)results error:(THETACCommandError * _Nullable)error progress:(THETACCommandProgress * _Nullable)progress __attribute__((swift_name("init(name:state:id:results:error:progress:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) THETACSetAccessPointResponseCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACCommandState *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACKotlinx_serialization_jsonJsonElement * _Nullable)component4 __attribute__((swift_name("component4()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACCommandError * _Nullable)component5 __attribute__((swift_name("component5()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACCommandProgress * _Nullable)component6 __attribute__((swift_name("component6()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACSetAccessPointResponse *)doCopyName:(NSString *)name state:(THETACCommandState *)state id:(NSString * _Nullable)id results:(THETACKotlinx_serialization_jsonJsonElement * _Nullable)results error:(THETACCommandError * _Nullable)error progress:(THETACCommandProgress * _Nullable)progress __attribute__((swift_name("doCopy(name:state:id:results:error:progress:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) THETACCommandError * _Nullable error __attribute__((swift_name("error")));
@property (readonly) NSString * _Nullable id __attribute__((swift_name("id")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) THETACCommandProgress * _Nullable progress __attribute__((swift_name("progress")));
@property (readonly) THETACKotlinx_serialization_jsonJsonElement * _Nullable results __attribute__((swift_name("results")));
@property (readonly) THETACCommandState *state __attribute__((swift_name("state")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SetAccessPointResponse.Companion")))
@interface THETACSetAccessPointResponseCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACSetAccessPointResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<THETACKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SetBluetoothDeviceParams")))
@interface THETACSetBluetoothDeviceParams : THETACBase
- (instancetype)initWithUuid:(NSString *)uuid __attribute__((swift_name("init(uuid:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) THETACSetBluetoothDeviceParamsCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACSetBluetoothDeviceParams *)doCopyUuid:(NSString *)uuid __attribute__((swift_name("doCopy(uuid:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *uuid __attribute__((swift_name("uuid")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SetBluetoothDeviceParams.Companion")))
@interface THETACSetBluetoothDeviceParamsCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACSetBluetoothDeviceParamsCompanion *shared __attribute__((swift_name("shared")));
- (id<THETACKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SetBluetoothDeviceRequest")))
@interface THETACSetBluetoothDeviceRequest : THETACBase <THETACCommandApiRequest>
- (instancetype)initWithName:(NSString *)name parameters:(THETACSetBluetoothDeviceParams *)parameters __attribute__((swift_name("init(name:parameters:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) THETACSetBluetoothDeviceRequestCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACSetBluetoothDeviceParams *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACSetBluetoothDeviceRequest *)doCopyName:(NSString *)name parameters:(THETACSetBluetoothDeviceParams *)parameters __attribute__((swift_name("doCopy(name:parameters:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) THETACSetBluetoothDeviceParams *parameters __attribute__((swift_name("parameters")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SetBluetoothDeviceRequest.Companion")))
@interface THETACSetBluetoothDeviceRequestCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACSetBluetoothDeviceRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<THETACKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SetBluetoothDeviceResponse")))
@interface THETACSetBluetoothDeviceResponse : THETACBase <THETACCommandApiResponse>
- (instancetype)initWithName:(NSString *)name state:(THETACCommandState *)state id:(NSString * _Nullable)id results:(THETACResultSetBluetoothDevice * _Nullable)results error:(THETACCommandError * _Nullable)error progress:(THETACCommandProgress * _Nullable)progress __attribute__((swift_name("init(name:state:id:results:error:progress:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) THETACSetBluetoothDeviceResponseCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACCommandState *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACResultSetBluetoothDevice * _Nullable)component4 __attribute__((swift_name("component4()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACCommandError * _Nullable)component5 __attribute__((swift_name("component5()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACCommandProgress * _Nullable)component6 __attribute__((swift_name("component6()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACSetBluetoothDeviceResponse *)doCopyName:(NSString *)name state:(THETACCommandState *)state id:(NSString * _Nullable)id results:(THETACResultSetBluetoothDevice * _Nullable)results error:(THETACCommandError * _Nullable)error progress:(THETACCommandProgress * _Nullable)progress __attribute__((swift_name("doCopy(name:state:id:results:error:progress:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) THETACCommandError * _Nullable error __attribute__((swift_name("error")));
@property (readonly) NSString * _Nullable id __attribute__((swift_name("id")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) THETACCommandProgress * _Nullable progress __attribute__((swift_name("progress")));
@property (readonly) THETACResultSetBluetoothDevice * _Nullable results __attribute__((swift_name("results")));
@property (readonly) THETACCommandState *state __attribute__((swift_name("state")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SetBluetoothDeviceResponse.Companion")))
@interface THETACSetBluetoothDeviceResponseCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACSetBluetoothDeviceResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<THETACKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SetMySettingParams")))
@interface THETACSetMySettingParams : THETACBase
- (instancetype)initWithMode:(THETACCaptureMode * _Nullable)mode options:(THETACOptions *)options __attribute__((swift_name("init(mode:options:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) THETACSetMySettingParamsCompanion *companion __attribute__((swift_name("companion")));
- (THETACCaptureMode * _Nullable)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACOptions *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACSetMySettingParams *)doCopyMode:(THETACCaptureMode * _Nullable)mode options:(THETACOptions *)options __attribute__((swift_name("doCopy(mode:options:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) THETACCaptureMode * _Nullable mode __attribute__((swift_name("mode")));
@property (readonly) THETACOptions *options __attribute__((swift_name("options")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SetMySettingParams.Companion")))
@interface THETACSetMySettingParamsCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACSetMySettingParamsCompanion *shared __attribute__((swift_name("shared")));
- (id<THETACKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SetMySettingRequest")))
@interface THETACSetMySettingRequest : THETACBase <THETACCommandApiRequest>
- (instancetype)initWithName:(NSString *)name parameters:(THETACSetMySettingParams *)parameters __attribute__((swift_name("init(name:parameters:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) THETACSetMySettingRequestCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACSetMySettingParams *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACSetMySettingRequest *)doCopyName:(NSString *)name parameters:(THETACSetMySettingParams *)parameters __attribute__((swift_name("doCopy(name:parameters:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) THETACSetMySettingParams *parameters __attribute__((swift_name("parameters")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SetMySettingRequest.Companion")))
@interface THETACSetMySettingRequestCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACSetMySettingRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<THETACKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SetMySettingResponse")))
@interface THETACSetMySettingResponse : THETACBase <THETACCommandApiResponse>
- (instancetype)initWithName:(NSString *)name state:(THETACCommandState *)state id:(NSString * _Nullable)id results:(THETACKotlinx_serialization_jsonJsonElement * _Nullable)results error:(THETACCommandError * _Nullable)error progress:(THETACCommandProgress * _Nullable)progress __attribute__((swift_name("init(name:state:id:results:error:progress:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) THETACSetMySettingResponseCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACCommandState *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACKotlinx_serialization_jsonJsonElement * _Nullable)component4 __attribute__((swift_name("component4()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACCommandError * _Nullable)component5 __attribute__((swift_name("component5()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACCommandProgress * _Nullable)component6 __attribute__((swift_name("component6()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACSetMySettingResponse *)doCopyName:(NSString *)name state:(THETACCommandState *)state id:(NSString * _Nullable)id results:(THETACKotlinx_serialization_jsonJsonElement * _Nullable)results error:(THETACCommandError * _Nullable)error progress:(THETACCommandProgress * _Nullable)progress __attribute__((swift_name("doCopy(name:state:id:results:error:progress:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) THETACCommandError * _Nullable error __attribute__((swift_name("error")));
@property (readonly) NSString * _Nullable id __attribute__((swift_name("id")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) THETACCommandProgress * _Nullable progress __attribute__((swift_name("progress")));
@property (readonly) THETACKotlinx_serialization_jsonJsonElement * _Nullable results __attribute__((swift_name("results")));
@property (readonly) THETACCommandState *state __attribute__((swift_name("state")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SetMySettingResponse.Companion")))
@interface THETACSetMySettingResponseCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACSetMySettingResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<THETACKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SetOptionsParams")))
@interface THETACSetOptionsParams : THETACBase
- (instancetype)initWithOptions:(THETACOptions *)options __attribute__((swift_name("init(options:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithSessionId:(NSString * _Nullable)sessionId options:(THETACOptions *)options __attribute__((swift_name("init(sessionId:options:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) THETACSetOptionsParamsCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACOptions *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACSetOptionsParams *)doCopySessionId:(NSString * _Nullable)sessionId options:(THETACOptions *)options __attribute__((swift_name("doCopy(sessionId:options:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) THETACOptions *options __attribute__((swift_name("options")));
@property (readonly) NSString * _Nullable sessionId __attribute__((swift_name("sessionId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SetOptionsParams.Companion")))
@interface THETACSetOptionsParamsCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACSetOptionsParamsCompanion *shared __attribute__((swift_name("shared")));
- (id<THETACKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SetOptionsRequest")))
@interface THETACSetOptionsRequest : THETACBase <THETACCommandApiRequest>
- (instancetype)initWithName:(NSString *)name parameters:(THETACSetOptionsParams *)parameters __attribute__((swift_name("init(name:parameters:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) THETACSetOptionsRequestCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACSetOptionsParams *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACSetOptionsRequest *)doCopyName:(NSString *)name parameters:(THETACSetOptionsParams *)parameters __attribute__((swift_name("doCopy(name:parameters:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) THETACSetOptionsParams *parameters __attribute__((swift_name("parameters")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SetOptionsRequest.Companion")))
@interface THETACSetOptionsRequestCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACSetOptionsRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<THETACKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SetOptionsResponse")))
@interface THETACSetOptionsResponse : THETACBase <THETACCommandApiResponse>
- (instancetype)initWithName:(NSString *)name state:(THETACCommandState *)state id:(NSString * _Nullable)id results:(THETACResultSetOptions * _Nullable)results error:(THETACCommandError * _Nullable)error progress:(THETACCommandProgress * _Nullable)progress __attribute__((swift_name("init(name:state:id:results:error:progress:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) THETACSetOptionsResponseCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACCommandState *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACResultSetOptions * _Nullable)component4 __attribute__((swift_name("component4()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACCommandError * _Nullable)component5 __attribute__((swift_name("component5()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACCommandProgress * _Nullable)component6 __attribute__((swift_name("component6()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACSetOptionsResponse *)doCopyName:(NSString *)name state:(THETACCommandState *)state id:(NSString * _Nullable)id results:(THETACResultSetOptions * _Nullable)results error:(THETACCommandError * _Nullable)error progress:(THETACCommandProgress * _Nullable)progress __attribute__((swift_name("doCopy(name:state:id:results:error:progress:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) THETACCommandError * _Nullable error __attribute__((swift_name("error")));
@property (readonly) NSString * _Nullable id __attribute__((swift_name("id")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) THETACCommandProgress * _Nullable progress __attribute__((swift_name("progress")));
@property (readonly) THETACResultSetOptions * _Nullable results __attribute__((swift_name("results")));
@property (readonly) THETACCommandState *state __attribute__((swift_name("state")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SetOptionsResponse.Companion")))
@interface THETACSetOptionsResponseCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACSetOptionsResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<THETACKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SetPluginOrdersParams")))
@interface THETACSetPluginOrdersParams : THETACBase
- (instancetype)initWithPluginOrders:(NSArray<NSString *> *)pluginOrders __attribute__((swift_name("init(pluginOrders:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) THETACSetPluginOrdersParamsCompanion *companion __attribute__((swift_name("companion")));
- (NSArray<NSString *> *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACSetPluginOrdersParams *)doCopyPluginOrders:(NSArray<NSString *> *)pluginOrders __attribute__((swift_name("doCopy(pluginOrders:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<NSString *> *pluginOrders __attribute__((swift_name("pluginOrders")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SetPluginOrdersParams.Companion")))
@interface THETACSetPluginOrdersParamsCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACSetPluginOrdersParamsCompanion *shared __attribute__((swift_name("shared")));
- (id<THETACKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SetPluginOrdersRequest")))
@interface THETACSetPluginOrdersRequest : THETACBase <THETACCommandApiRequest>
- (instancetype)initWithName:(NSString *)name parameters:(THETACSetPluginOrdersParams *)parameters __attribute__((swift_name("init(name:parameters:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) THETACSetPluginOrdersRequestCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACSetPluginOrdersParams *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACSetPluginOrdersRequest *)doCopyName:(NSString *)name parameters:(THETACSetPluginOrdersParams *)parameters __attribute__((swift_name("doCopy(name:parameters:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) THETACSetPluginOrdersParams *parameters __attribute__((swift_name("parameters")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SetPluginOrdersRequest.Companion")))
@interface THETACSetPluginOrdersRequestCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACSetPluginOrdersRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<THETACKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SetPluginOrdersResponse")))
@interface THETACSetPluginOrdersResponse : THETACBase <THETACCommandApiResponse>
- (instancetype)initWithName:(NSString *)name state:(THETACCommandState *)state id:(NSString * _Nullable)id results:(THETACKotlinx_serialization_jsonJsonElement * _Nullable)results error:(THETACCommandError * _Nullable)error progress:(THETACCommandProgress * _Nullable)progress __attribute__((swift_name("init(name:state:id:results:error:progress:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) THETACSetPluginOrdersResponseCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACCommandState *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACKotlinx_serialization_jsonJsonElement * _Nullable)component4 __attribute__((swift_name("component4()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACCommandError * _Nullable)component5 __attribute__((swift_name("component5()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACCommandProgress * _Nullable)component6 __attribute__((swift_name("component6()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACSetPluginOrdersResponse *)doCopyName:(NSString *)name state:(THETACCommandState *)state id:(NSString * _Nullable)id results:(THETACKotlinx_serialization_jsonJsonElement * _Nullable)results error:(THETACCommandError * _Nullable)error progress:(THETACCommandProgress * _Nullable)progress __attribute__((swift_name("doCopy(name:state:id:results:error:progress:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) THETACCommandError * _Nullable error __attribute__((swift_name("error")));
@property (readonly) NSString * _Nullable id __attribute__((swift_name("id")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) THETACCommandProgress * _Nullable progress __attribute__((swift_name("progress")));
@property (readonly) THETACKotlinx_serialization_jsonJsonElement * _Nullable results __attribute__((swift_name("results")));
@property (readonly) THETACCommandState *state __attribute__((swift_name("state")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SetPluginOrdersResponse.Companion")))
@interface THETACSetPluginOrdersResponseCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACSetPluginOrdersResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<THETACKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SetPluginParams")))
@interface THETACSetPluginParams : THETACBase
- (instancetype)initWithPackageName:(NSString *)packageName boot:(BOOL)boot __attribute__((swift_name("init(packageName:boot:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) THETACSetPluginParamsCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (BOOL)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACSetPluginParams *)doCopyPackageName:(NSString *)packageName boot:(BOOL)boot __attribute__((swift_name("doCopy(packageName:boot:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL boot __attribute__((swift_name("boot")));
@property (readonly) NSString *packageName __attribute__((swift_name("packageName")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SetPluginParams.Companion")))
@interface THETACSetPluginParamsCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACSetPluginParamsCompanion *shared __attribute__((swift_name("shared")));
- (id<THETACKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SetPluginRequest")))
@interface THETACSetPluginRequest : THETACBase <THETACCommandApiRequest>
- (instancetype)initWithName:(NSString *)name parameters:(THETACSetPluginParams *)parameters __attribute__((swift_name("init(name:parameters:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) THETACSetPluginRequestCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACSetPluginParams *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACSetPluginRequest *)doCopyName:(NSString *)name parameters:(THETACSetPluginParams *)parameters __attribute__((swift_name("doCopy(name:parameters:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) THETACSetPluginParams *parameters __attribute__((swift_name("parameters")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SetPluginRequest.Companion")))
@interface THETACSetPluginRequestCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACSetPluginRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<THETACKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SetPluginResponse")))
@interface THETACSetPluginResponse : THETACBase <THETACCommandApiResponse>
- (instancetype)initWithName:(NSString *)name state:(THETACCommandState *)state id:(NSString * _Nullable)id results:(THETACKotlinx_serialization_jsonJsonElement * _Nullable)results error:(THETACCommandError * _Nullable)error progress:(THETACCommandProgress * _Nullable)progress __attribute__((swift_name("init(name:state:id:results:error:progress:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) THETACSetPluginResponseCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACCommandState *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACKotlinx_serialization_jsonJsonElement * _Nullable)component4 __attribute__((swift_name("component4()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACCommandError * _Nullable)component5 __attribute__((swift_name("component5()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACCommandProgress * _Nullable)component6 __attribute__((swift_name("component6()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACSetPluginResponse *)doCopyName:(NSString *)name state:(THETACCommandState *)state id:(NSString * _Nullable)id results:(THETACKotlinx_serialization_jsonJsonElement * _Nullable)results error:(THETACCommandError * _Nullable)error progress:(THETACCommandProgress * _Nullable)progress __attribute__((swift_name("doCopy(name:state:id:results:error:progress:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) THETACCommandError * _Nullable error __attribute__((swift_name("error")));
@property (readonly) NSString * _Nullable id __attribute__((swift_name("id")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) THETACCommandProgress * _Nullable progress __attribute__((swift_name("progress")));
@property (readonly) THETACKotlinx_serialization_jsonJsonElement * _Nullable results __attribute__((swift_name("results")));
@property (readonly) THETACCommandState *state __attribute__((swift_name("state")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SetPluginResponse.Companion")))
@interface THETACSetPluginResponseCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACSetPluginResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<THETACKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ShootingFunction")))
@interface THETACShootingFunction : THETACKotlinEnum<THETACShootingFunction *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) THETACShootingFunctionCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) THETACShootingFunction *normal __attribute__((swift_name("normal")));
@property (class, readonly) THETACShootingFunction *selfTimer __attribute__((swift_name("selfTimer")));
@property (class, readonly) THETACShootingFunction *mySetting __attribute__((swift_name("mySetting")));
+ (THETACKotlinArray<THETACShootingFunction *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ShootingFunction.Companion")))
@interface THETACShootingFunctionCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACShootingFunctionCompanion *shared __attribute__((swift_name("shared")));
- (id<THETACKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<THETACKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(THETACKotlinArray<id<THETACKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ShootingMethod")))
@interface THETACShootingMethod : THETACKotlinEnum<THETACShootingMethod *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) THETACShootingMethodCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) THETACShootingMethod *normal __attribute__((swift_name("normal")));
@property (class, readonly) THETACShootingMethod *interval __attribute__((swift_name("interval")));
@property (class, readonly) THETACShootingMethod *moveInterval __attribute__((swift_name("moveInterval")));
@property (class, readonly) THETACShootingMethod *fixedInterval __attribute__((swift_name("fixedInterval")));
@property (class, readonly) THETACShootingMethod *bracket __attribute__((swift_name("bracket")));
@property (class, readonly) THETACShootingMethod *composite __attribute__((swift_name("composite")));
@property (class, readonly) THETACShootingMethod *continuous __attribute__((swift_name("continuous")));
@property (class, readonly) THETACShootingMethod *timeshift __attribute__((swift_name("timeshift")));
@property (class, readonly) THETACShootingMethod *burst __attribute__((swift_name("burst")));
+ (THETACKotlinArray<THETACShootingMethod *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ShootingMethod.Companion")))
@interface THETACShootingMethodCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACShootingMethodCompanion *shared __attribute__((swift_name("shared")));
- (id<THETACKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<THETACKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(THETACKotlinArray<id<THETACKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ShootingMode")))
@interface THETACShootingMode : THETACKotlinEnum<THETACShootingMode *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) THETACShootingModeCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) THETACShootingMode *intervalShooting __attribute__((swift_name("intervalShooting")));
@property (class, readonly) THETACShootingMode *intervalCompositeShooting __attribute__((swift_name("intervalCompositeShooting")));
@property (class, readonly) THETACShootingMode *multiBracketShooting __attribute__((swift_name("multiBracketShooting")));
@property (class, readonly) THETACShootingMode *timeShiftShooting __attribute__((swift_name("timeShiftShooting")));
@property (class, readonly) THETACShootingMode *burstShooting __attribute__((swift_name("burstShooting")));
@property (class, readonly) THETACShootingMode *continuousShooting __attribute__((swift_name("continuousShooting")));
+ (THETACKotlinArray<THETACShootingMode *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ShootingMode.Companion")))
@interface THETACShootingModeCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACShootingModeCompanion *shared __attribute__((swift_name("shared")));
- (id<THETACKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<THETACKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(THETACKotlinArray<id<THETACKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ShutterVolumeSupport")))
@interface THETACShutterVolumeSupport : THETACBase
- (instancetype)initWithMinShutterVolume:(THETACInt * _Nullable)minShutterVolume maxShutterVolume:(THETACInt * _Nullable)maxShutterVolume __attribute__((swift_name("init(minShutterVolume:maxShutterVolume:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) THETACShutterVolumeSupportCompanion *companion __attribute__((swift_name("companion")));
- (THETACInt * _Nullable)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACInt * _Nullable)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACShutterVolumeSupport *)doCopyMinShutterVolume:(THETACInt * _Nullable)minShutterVolume maxShutterVolume:(THETACInt * _Nullable)maxShutterVolume __attribute__((swift_name("doCopy(minShutterVolume:maxShutterVolume:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) THETACInt * _Nullable maxShutterVolume __attribute__((swift_name("maxShutterVolume")));
@property (readonly) THETACInt * _Nullable minShutterVolume __attribute__((swift_name("minShutterVolume")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ShutterVolumeSupport.Companion")))
@interface THETACShutterVolumeSupportCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACShutterVolumeSupportCompanion *shared __attribute__((swift_name("shared")));
- (id<THETACKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SortOrder")))
@interface THETACSortOrder : THETACKotlinEnum<THETACSortOrder *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) THETACSortOrderCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) THETACSortOrder *newest __attribute__((swift_name("newest")));
@property (class, readonly) THETACSortOrder *oldest __attribute__((swift_name("oldest")));
+ (THETACKotlinArray<THETACSortOrder *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SortOrder.Companion")))
@interface THETACSortOrderCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACSortOrderCompanion *shared __attribute__((swift_name("shared")));
- (id<THETACKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<THETACKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(THETACKotlinArray<id<THETACKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StartCaptureParams")))
@interface THETACStartCaptureParams : THETACBase
- (instancetype)initWith_mode:(THETACShootingMode * _Nullable)_mode __attribute__((swift_name("init(_mode:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) THETACStartCaptureParamsCompanion *companion __attribute__((swift_name("companion")));
- (THETACShootingMode * _Nullable)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACStartCaptureParams *)doCopy_mode:(THETACShootingMode * _Nullable)_mode __attribute__((swift_name("doCopy(_mode:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) THETACShootingMode * _Nullable _mode __attribute__((swift_name("_mode")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StartCaptureParams.Companion")))
@interface THETACStartCaptureParamsCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACStartCaptureParamsCompanion *shared __attribute__((swift_name("shared")));
- (id<THETACKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StartCaptureRequest")))
@interface THETACStartCaptureRequest : THETACBase <THETACCommandApiRequest>
- (instancetype)initWithName:(NSString *)name parameters:(THETACStartCaptureParams *)parameters __attribute__((swift_name("init(name:parameters:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) THETACStartCaptureRequestCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACStartCaptureParams *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACStartCaptureRequest *)doCopyName:(NSString *)name parameters:(THETACStartCaptureParams *)parameters __attribute__((swift_name("doCopy(name:parameters:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) THETACStartCaptureParams *parameters __attribute__((swift_name("parameters")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StartCaptureRequest.Companion")))
@interface THETACStartCaptureRequestCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACStartCaptureRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<THETACKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StartCaptureResponse")))
@interface THETACStartCaptureResponse : THETACBase <THETACCommandApiResponse>
- (instancetype)initWithName:(NSString *)name state:(THETACCommandState *)state id:(NSString * _Nullable)id results:(THETACResultStartCapture * _Nullable)results error:(THETACCommandError * _Nullable)error progress:(THETACCommandProgress * _Nullable)progress __attribute__((swift_name("init(name:state:id:results:error:progress:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) THETACStartCaptureResponseCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACCommandState *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACResultStartCapture * _Nullable)component4 __attribute__((swift_name("component4()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACCommandError * _Nullable)component5 __attribute__((swift_name("component5()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACCommandProgress * _Nullable)component6 __attribute__((swift_name("component6()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACStartCaptureResponse *)doCopyName:(NSString *)name state:(THETACCommandState *)state id:(NSString * _Nullable)id results:(THETACResultStartCapture * _Nullable)results error:(THETACCommandError * _Nullable)error progress:(THETACCommandProgress * _Nullable)progress __attribute__((swift_name("doCopy(name:state:id:results:error:progress:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) THETACCommandError * _Nullable error __attribute__((swift_name("error")));
@property (readonly) NSString * _Nullable id __attribute__((swift_name("id")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) THETACCommandProgress * _Nullable progress __attribute__((swift_name("progress")));
@property (readonly) THETACResultStartCapture * _Nullable results __attribute__((swift_name("results")));
@property (readonly) THETACCommandState *state __attribute__((swift_name("state")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StartCaptureResponse.Companion")))
@interface THETACStartCaptureResponseCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACStartCaptureResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<THETACKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StartSessionRequest")))
@interface THETACStartSessionRequest : THETACBase <THETACCommandApiRequest>
- (instancetype)initWithName:(NSString *)name parameters:(THETACEmptyParameter *)parameters __attribute__((swift_name("init(name:parameters:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) THETACStartSessionRequestCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACEmptyParameter *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACStartSessionRequest *)doCopyName:(NSString *)name parameters:(THETACEmptyParameter *)parameters __attribute__((swift_name("doCopy(name:parameters:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) THETACEmptyParameter *parameters __attribute__((swift_name("parameters")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StartSessionRequest.Companion")))
@interface THETACStartSessionRequestCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACStartSessionRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<THETACKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StartSessionResponse")))
@interface THETACStartSessionResponse : THETACBase <THETACCommandApiResponse>
- (instancetype)initWithName:(NSString *)name state:(THETACCommandState *)state id:(NSString * _Nullable)id results:(THETACResultStartSession * _Nullable)results error:(THETACCommandError * _Nullable)error progress:(THETACCommandProgress * _Nullable)progress __attribute__((swift_name("init(name:state:id:results:error:progress:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) THETACStartSessionResponseCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACCommandState *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACResultStartSession * _Nullable)component4 __attribute__((swift_name("component4()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACCommandError * _Nullable)component5 __attribute__((swift_name("component5()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACCommandProgress * _Nullable)component6 __attribute__((swift_name("component6()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACStartSessionResponse *)doCopyName:(NSString *)name state:(THETACCommandState *)state id:(NSString * _Nullable)id results:(THETACResultStartSession * _Nullable)results error:(THETACCommandError * _Nullable)error progress:(THETACCommandProgress * _Nullable)progress __attribute__((swift_name("doCopy(name:state:id:results:error:progress:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) THETACCommandError * _Nullable error __attribute__((swift_name("error")));
@property (readonly) NSString * _Nullable id __attribute__((swift_name("id")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) THETACCommandProgress * _Nullable progress __attribute__((swift_name("progress")));
@property (readonly) THETACResultStartSession * _Nullable results __attribute__((swift_name("results")));
@property (readonly) THETACCommandState *state __attribute__((swift_name("state")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StartSessionResponse.Companion")))
@interface THETACStartSessionResponseCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACStartSessionResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<THETACKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StateApi")))
@interface THETACStateApi : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)stateApi __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACStateApi *shared __attribute__((swift_name("shared")));
@property (readonly) THETACKtor_httpHttpMethod *METHOD __attribute__((swift_name("METHOD")));
@property (readonly) NSString *PATH __attribute__((swift_name("PATH")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StateApiResponse")))
@interface THETACStateApiResponse : THETACBase
- (instancetype)initWithFingerprint:(NSString *)fingerprint state:(THETACCameraState *)state __attribute__((swift_name("init(fingerprint:state:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) THETACStateApiResponseCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACCameraState *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACStateApiResponse *)doCopyFingerprint:(NSString *)fingerprint state:(THETACCameraState *)state __attribute__((swift_name("doCopy(fingerprint:state:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *fingerprint __attribute__((swift_name("fingerprint")));
@property (readonly) THETACCameraState *state __attribute__((swift_name("state")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StateApiResponse.Companion")))
@interface THETACStateApiResponseCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACStateApiResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<THETACKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StatusApi")))
@interface THETACStatusApi : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)statusApi __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACStatusApi *shared __attribute__((swift_name("shared")));
@property (readonly) THETACKtor_httpHttpMethod *METHOD __attribute__((swift_name("METHOD")));
@property (readonly) NSString *PATH __attribute__((swift_name("PATH")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StatusApiParams")))
@interface THETACStatusApiParams : THETACBase
- (instancetype)initWithName:(NSString * _Nullable)name id:(NSString * _Nullable)id __attribute__((swift_name("init(name:id:)"))) __attribute__((objc_designated_initializer));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACStatusApiParams *)doCopyName:(NSString * _Nullable)name id:(NSString * _Nullable)id __attribute__((swift_name("doCopy(name:id:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable id __attribute__((swift_name("id")));
@property (readonly) NSString * _Nullable name __attribute__((swift_name("name")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StatusApiRequest")))
@interface THETACStatusApiRequest : THETACBase
- (instancetype)initWithName:(NSString * _Nullable)name id:(NSString * _Nullable)id __attribute__((swift_name("init(name:id:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) THETACStatusApiRequestCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACStatusApiRequest *)doCopyName:(NSString * _Nullable)name id:(NSString * _Nullable)id __attribute__((swift_name("doCopy(name:id:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable id __attribute__((swift_name("id")));
@property (readonly) NSString * _Nullable name __attribute__((swift_name("name")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StatusApiRequest.Companion")))
@interface THETACStatusApiRequestCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACStatusApiRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<THETACKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StopCaptureRequest")))
@interface THETACStopCaptureRequest : THETACBase <THETACCommandApiRequest>
- (instancetype)initWithName:(NSString *)name parameters:(THETACEmptyParameter *)parameters __attribute__((swift_name("init(name:parameters:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) THETACStopCaptureRequestCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACEmptyParameter *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACStopCaptureRequest *)doCopyName:(NSString *)name parameters:(THETACEmptyParameter *)parameters __attribute__((swift_name("doCopy(name:parameters:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) THETACEmptyParameter *parameters __attribute__((swift_name("parameters")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StopCaptureRequest.Companion")))
@interface THETACStopCaptureRequestCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACStopCaptureRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<THETACKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StopCaptureResponse")))
@interface THETACStopCaptureResponse : THETACBase <THETACCommandApiResponse>
- (instancetype)initWithName:(NSString *)name state:(THETACCommandState *)state id:(NSString * _Nullable)id results:(THETACResultStopCapture * _Nullable)results error:(THETACCommandError * _Nullable)error progress:(THETACCommandProgress * _Nullable)progress __attribute__((swift_name("init(name:state:id:results:error:progress:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) THETACStopCaptureResponseCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACCommandState *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACResultStopCapture * _Nullable)component4 __attribute__((swift_name("component4()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACCommandError * _Nullable)component5 __attribute__((swift_name("component5()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACCommandProgress * _Nullable)component6 __attribute__((swift_name("component6()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACStopCaptureResponse *)doCopyName:(NSString *)name state:(THETACCommandState *)state id:(NSString * _Nullable)id results:(THETACResultStopCapture * _Nullable)results error:(THETACCommandError * _Nullable)error progress:(THETACCommandProgress * _Nullable)progress __attribute__((swift_name("doCopy(name:state:id:results:error:progress:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) THETACCommandError * _Nullable error __attribute__((swift_name("error")));
@property (readonly) NSString * _Nullable id __attribute__((swift_name("id")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) THETACCommandProgress * _Nullable progress __attribute__((swift_name("progress")));
@property (readonly) THETACResultStopCapture * _Nullable results __attribute__((swift_name("results")));
@property (readonly) THETACCommandState *state __attribute__((swift_name("state")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StopCaptureResponse.Companion")))
@interface THETACStopCaptureResponseCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACStopCaptureResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<THETACKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StopSelfTimerRequest")))
@interface THETACStopSelfTimerRequest : THETACBase <THETACCommandApiRequest>
- (instancetype)initWithName:(NSString *)name parameters:(THETACEmptyParameter *)parameters __attribute__((swift_name("init(name:parameters:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) THETACStopSelfTimerRequestCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACEmptyParameter *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACStopSelfTimerRequest *)doCopyName:(NSString *)name parameters:(THETACEmptyParameter *)parameters __attribute__((swift_name("doCopy(name:parameters:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) THETACEmptyParameter *parameters __attribute__((swift_name("parameters")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StopSelfTimerRequest.Companion")))
@interface THETACStopSelfTimerRequestCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACStopSelfTimerRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<THETACKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StopSelfTimerResponse")))
@interface THETACStopSelfTimerResponse : THETACBase <THETACCommandApiResponse>
- (instancetype)initWithName:(NSString *)name state:(THETACCommandState *)state id:(NSString * _Nullable)id results:(THETACKotlinx_serialization_jsonJsonElement * _Nullable)results error:(THETACCommandError * _Nullable)error progress:(THETACCommandProgress * _Nullable)progress __attribute__((swift_name("init(name:state:id:results:error:progress:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) THETACStopSelfTimerResponseCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACCommandState *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACKotlinx_serialization_jsonJsonElement * _Nullable)component4 __attribute__((swift_name("component4()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACCommandError * _Nullable)component5 __attribute__((swift_name("component5()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACCommandProgress * _Nullable)component6 __attribute__((swift_name("component6()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACStopSelfTimerResponse *)doCopyName:(NSString *)name state:(THETACCommandState *)state id:(NSString * _Nullable)id results:(THETACKotlinx_serialization_jsonJsonElement * _Nullable)results error:(THETACCommandError * _Nullable)error progress:(THETACCommandProgress * _Nullable)progress __attribute__((swift_name("doCopy(name:state:id:results:error:progress:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) THETACCommandError * _Nullable error __attribute__((swift_name("error")));
@property (readonly) NSString * _Nullable id __attribute__((swift_name("id")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) THETACCommandProgress * _Nullable progress __attribute__((swift_name("progress")));
@property (readonly) THETACKotlinx_serialization_jsonJsonElement * _Nullable results __attribute__((swift_name("results")));
@property (readonly) THETACCommandState *state __attribute__((swift_name("state")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StopSelfTimerResponse.Companion")))
@interface THETACStopSelfTimerResponseCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACStopSelfTimerResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<THETACKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Storage")))
@interface THETACStorage : THETACKotlinEnum<THETACStorage *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) THETACStorageCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) THETACStorage *in __attribute__((swift_name("in")));
@property (class, readonly) THETACStorage *sd __attribute__((swift_name("sd")));
@property (class, readonly) THETACStorage *default_ __attribute__((swift_name("default_")));
+ (THETACKotlinArray<THETACStorage *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Storage.Companion")))
@interface THETACStorageCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACStorageCompanion *shared __attribute__((swift_name("shared")));
- (id<THETACKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<THETACKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(THETACKotlinArray<id<THETACKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StorageOption")))
@interface THETACStorageOption : THETACKotlinEnum<THETACStorageOption *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) THETACStorageOptionCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) THETACStorageOption *in __attribute__((swift_name("in")));
@property (class, readonly) THETACStorageOption *sd __attribute__((swift_name("sd")));
+ (THETACKotlinArray<THETACStorageOption *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StorageOption.Companion")))
@interface THETACStorageOptionCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACStorageOptionCompanion *shared __attribute__((swift_name("shared")));
- (id<THETACKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<THETACKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(THETACKotlinArray<id<THETACKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TakePictureRequest")))
@interface THETACTakePictureRequest : THETACBase <THETACCommandApiRequest>
- (instancetype)initWithName:(NSString *)name parameters:(THETACEmptyParameter *)parameters __attribute__((swift_name("init(name:parameters:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) THETACTakePictureRequestCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACEmptyParameter *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACTakePictureRequest *)doCopyName:(NSString *)name parameters:(THETACEmptyParameter *)parameters __attribute__((swift_name("doCopy(name:parameters:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) THETACEmptyParameter *parameters __attribute__((swift_name("parameters")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TakePictureRequest.Companion")))
@interface THETACTakePictureRequestCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACTakePictureRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<THETACKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TakePictureResponse")))
@interface THETACTakePictureResponse : THETACBase <THETACCommandApiResponse>
- (instancetype)initWithName:(NSString *)name state:(THETACCommandState *)state id:(NSString * _Nullable)id results:(THETACResultTakePicture * _Nullable)results error:(THETACCommandError * _Nullable)error progress:(THETACCommandProgress * _Nullable)progress __attribute__((swift_name("init(name:state:id:results:error:progress:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) THETACTakePictureResponseCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACCommandState *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACResultTakePicture * _Nullable)component4 __attribute__((swift_name("component4()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACCommandError * _Nullable)component5 __attribute__((swift_name("component5()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACCommandProgress * _Nullable)component6 __attribute__((swift_name("component6()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACTakePictureResponse *)doCopyName:(NSString *)name state:(THETACCommandState *)state id:(NSString * _Nullable)id results:(THETACResultTakePicture * _Nullable)results error:(THETACCommandError * _Nullable)error progress:(THETACCommandProgress * _Nullable)progress __attribute__((swift_name("doCopy(name:state:id:results:error:progress:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) THETACCommandError * _Nullable error __attribute__((swift_name("error")));
@property (readonly) NSString * _Nullable id __attribute__((swift_name("id")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) THETACCommandProgress * _Nullable progress __attribute__((swift_name("progress")));
@property (readonly) THETACResultTakePicture * _Nullable results __attribute__((swift_name("results")));
@property (readonly) THETACCommandState *state __attribute__((swift_name("state")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TakePictureResponse.Companion")))
@interface THETACTakePictureResponseCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACTakePictureResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<THETACKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TimeShift")))
@interface THETACTimeShift : THETACBase
- (instancetype)initWithFirstShooting:(THETACFirstShootingEnum * _Nullable)firstShooting firstInterval:(THETACInt * _Nullable)firstInterval secondInterval:(THETACInt * _Nullable)secondInterval __attribute__((swift_name("init(firstShooting:firstInterval:secondInterval:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) THETACTimeShiftCompanion *companion __attribute__((swift_name("companion")));
- (THETACFirstShootingEnum * _Nullable)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACInt * _Nullable)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACInt * _Nullable)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACTimeShift *)doCopyFirstShooting:(THETACFirstShootingEnum * _Nullable)firstShooting firstInterval:(THETACInt * _Nullable)firstInterval secondInterval:(THETACInt * _Nullable)secondInterval __attribute__((swift_name("doCopy(firstShooting:firstInterval:secondInterval:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property THETACInt * _Nullable firstInterval __attribute__((swift_name("firstInterval")));
@property THETACFirstShootingEnum * _Nullable firstShooting __attribute__((swift_name("firstShooting")));
@property THETACInt * _Nullable secondInterval __attribute__((swift_name("secondInterval")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TimeShift.Companion")))
@interface THETACTimeShiftCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACTimeShiftCompanion *shared __attribute__((swift_name("shared")));
- (id<THETACKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TopBottomCorrection")))
@interface THETACTopBottomCorrection : THETACKotlinEnum<THETACTopBottomCorrection *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) THETACTopBottomCorrectionCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) THETACTopBottomCorrection *apply __attribute__((swift_name("apply")));
@property (class, readonly) THETACTopBottomCorrection *applyFixedDirection __attribute__((swift_name("applyFixedDirection")));
@property (class, readonly) THETACTopBottomCorrection *disapply __attribute__((swift_name("disapply")));
+ (THETACKotlinArray<THETACTopBottomCorrection *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TopBottomCorrection.Companion")))
@interface THETACTopBottomCorrectionCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACTopBottomCorrectionCompanion *shared __attribute__((swift_name("shared")));
- (id<THETACKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<THETACKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(THETACKotlinArray<id<THETACKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TopBottomCorrectionOption")))
@interface THETACTopBottomCorrectionOption : THETACKotlinEnum<THETACTopBottomCorrectionOption *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) THETACTopBottomCorrectionOptionCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) THETACTopBottomCorrectionOption *apply __attribute__((swift_name("apply")));
@property (class, readonly) THETACTopBottomCorrectionOption *applyAuto __attribute__((swift_name("applyAuto")));
@property (class, readonly) THETACTopBottomCorrectionOption *applySemiauto __attribute__((swift_name("applySemiauto")));
@property (class, readonly) THETACTopBottomCorrectionOption *applySave __attribute__((swift_name("applySave")));
@property (class, readonly) THETACTopBottomCorrectionOption *applyLoad __attribute__((swift_name("applyLoad")));
@property (class, readonly) THETACTopBottomCorrectionOption *disapply __attribute__((swift_name("disapply")));
@property (class, readonly) THETACTopBottomCorrectionOption *manual __attribute__((swift_name("manual")));
+ (THETACKotlinArray<THETACTopBottomCorrectionOption *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TopBottomCorrectionOption.Companion")))
@interface THETACTopBottomCorrectionOptionCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACTopBottomCorrectionOptionCompanion *shared __attribute__((swift_name("shared")));
- (id<THETACKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<THETACKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(THETACKotlinArray<id<THETACKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UnknownResponse")))
@interface THETACUnknownResponse : THETACBase <THETACCommandApiResponse>
- (instancetype)initWithName:(NSString *)name state:(THETACCommandState *)state id:(NSString * _Nullable)id results:(THETACKotlinx_serialization_jsonJsonElement * _Nullable)results error:(THETACCommandError * _Nullable)error progress:(THETACCommandProgress * _Nullable)progress __attribute__((swift_name("init(name:state:id:results:error:progress:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) THETACUnknownResponseCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACCommandState *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACKotlinx_serialization_jsonJsonElement * _Nullable)component4 __attribute__((swift_name("component4()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACCommandError * _Nullable)component5 __attribute__((swift_name("component5()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACCommandProgress * _Nullable)component6 __attribute__((swift_name("component6()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACUnknownResponse *)doCopyName:(NSString *)name state:(THETACCommandState *)state id:(NSString * _Nullable)id results:(THETACKotlinx_serialization_jsonJsonElement * _Nullable)results error:(THETACCommandError * _Nullable)error progress:(THETACCommandProgress * _Nullable)progress __attribute__((swift_name("doCopy(name:state:id:results:error:progress:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) THETACCommandError * _Nullable error __attribute__((swift_name("error")));
@property (readonly) NSString * _Nullable id __attribute__((swift_name("id")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) THETACCommandProgress * _Nullable progress __attribute__((swift_name("progress")));
@property (readonly) THETACKotlinx_serialization_jsonJsonElement * _Nullable results __attribute__((swift_name("results")));
@property (readonly) THETACCommandState *state __attribute__((swift_name("state")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UnknownResponse.Companion")))
@interface THETACUnknownResponseCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACUnknownResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<THETACKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VideoFormat")))
@interface THETACVideoFormat : THETACKotlinEnum<THETACVideoFormat *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) THETACVideoFormatCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) THETACVideoFormat *video2k __attribute__((swift_name("video2k")));
@property (class, readonly) THETACVideoFormat *video4k __attribute__((swift_name("video4k")));
+ (THETACKotlinArray<THETACVideoFormat *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VideoFormat.Companion")))
@interface THETACVideoFormatCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACVideoFormatCompanion *shared __attribute__((swift_name("shared")));
- (id<THETACKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<THETACKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(THETACKotlinArray<id<THETACKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VideoStitching")))
@interface THETACVideoStitching : THETACKotlinEnum<THETACVideoStitching *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) THETACVideoStitchingCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) THETACVideoStitching *none __attribute__((swift_name("none")));
@property (class, readonly) THETACVideoStitching *ondevice __attribute__((swift_name("ondevice")));
+ (THETACKotlinArray<THETACVideoStitching *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VideoStitching.Companion")))
@interface THETACVideoStitchingCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACVideoStitchingCompanion *shared __attribute__((swift_name("shared")));
- (id<THETACKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<THETACKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(THETACKotlinArray<id<THETACKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VisibilityReduction")))
@interface THETACVisibilityReduction : THETACKotlinEnum<THETACVisibilityReduction *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) THETACVisibilityReductionCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) THETACVisibilityReduction *on __attribute__((swift_name("on")));
@property (class, readonly) THETACVisibilityReduction *off __attribute__((swift_name("off")));
+ (THETACKotlinArray<THETACVisibilityReduction *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VisibilityReduction.Companion")))
@interface THETACVisibilityReductionCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACVisibilityReductionCompanion *shared __attribute__((swift_name("shared")));
- (id<THETACKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<THETACKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(THETACKotlinArray<id<THETACKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WhiteBalance")))
@interface THETACWhiteBalance : THETACKotlinEnum<THETACWhiteBalance *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) THETACWhiteBalanceCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) THETACWhiteBalance *auto_ __attribute__((swift_name("auto_")));
@property (class, readonly) THETACWhiteBalance *daylight __attribute__((swift_name("daylight")));
@property (class, readonly) THETACWhiteBalance *shade __attribute__((swift_name("shade")));
@property (class, readonly) THETACWhiteBalance *cloudyDaylight __attribute__((swift_name("cloudyDaylight")));
@property (class, readonly) THETACWhiteBalance *incandescent __attribute__((swift_name("incandescent")));
@property (class, readonly) THETACWhiteBalance *WarmWhiteFluorescent __attribute__((swift_name("WarmWhiteFluorescent")));
@property (class, readonly) THETACWhiteBalance *DaylightFluorescent __attribute__((swift_name("DaylightFluorescent")));
@property (class, readonly) THETACWhiteBalance *DaywhiteFluorescent __attribute__((swift_name("DaywhiteFluorescent")));
@property (class, readonly) THETACWhiteBalance *fluorescent __attribute__((swift_name("fluorescent")));
@property (class, readonly) THETACWhiteBalance *BulbFluorescent __attribute__((swift_name("BulbFluorescent")));
@property (class, readonly) THETACWhiteBalance *ColorTemperature __attribute__((swift_name("ColorTemperature")));
@property (class, readonly) THETACWhiteBalance *Underwater __attribute__((swift_name("Underwater")));
+ (THETACKotlinArray<THETACWhiteBalance *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WhiteBalance.Companion")))
@interface THETACWhiteBalanceCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACWhiteBalanceCompanion *shared __attribute__((swift_name("shared")));
- (id<THETACKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<THETACKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(THETACKotlinArray<id<THETACKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WhiteBalanceAutoStrength")))
@interface THETACWhiteBalanceAutoStrength : THETACKotlinEnum<THETACWhiteBalanceAutoStrength *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) THETACWhiteBalanceAutoStrengthCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) THETACWhiteBalanceAutoStrength *on __attribute__((swift_name("on")));
@property (class, readonly) THETACWhiteBalanceAutoStrength *off __attribute__((swift_name("off")));
+ (THETACKotlinArray<THETACWhiteBalanceAutoStrength *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WhiteBalanceAutoStrength.Companion")))
@interface THETACWhiteBalanceAutoStrengthCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACWhiteBalanceAutoStrengthCompanion *shared __attribute__((swift_name("shared")));
- (id<THETACKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<THETACKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(THETACKotlinArray<id<THETACKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WlanFrequency")))
@interface THETACWlanFrequency : THETACKotlinEnum<THETACWlanFrequency *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) THETACWlanFrequencyCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) THETACWlanFrequency *ghz24 __attribute__((swift_name("ghz24")));
@property (class, readonly) THETACWlanFrequency *ghz5 __attribute__((swift_name("ghz5")));
+ (THETACKotlinArray<THETACWlanFrequency *> *)values __attribute__((swift_name("values()")));
@property (readonly) double frequency __attribute__((swift_name("frequency")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WlanFrequency.Companion")))
@interface THETACWlanFrequencyCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACWlanFrequencyCompanion *shared __attribute__((swift_name("shared")));
- (id<THETACKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<THETACKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(THETACKotlinArray<id<THETACKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WlanFrequencySerializer")))
@interface THETACWlanFrequencySerializer : THETACBase <THETACKotlinx_serialization_coreKSerializer>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)wlanFrequencySerializer __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACWlanFrequencySerializer *shared __attribute__((swift_name("shared")));
- (THETACWlanFrequency *)deserializeDecoder:(id<THETACKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
- (void)serializeEncoder:(id<THETACKotlinx_serialization_coreEncoder>)encoder value:(THETACWlanFrequency *)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<THETACKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("XmpInfo")))
@interface THETACXmpInfo : THETACBase
- (instancetype)initWithProjectionType:(THETACProjectionType *)ProjectionType UsePanoramaViewer:(BOOL)UsePanoramaViewer PoseHeadingDegrees:(THETACDouble * _Nullable)PoseHeadingDegrees CroppedAreaImageWidthPixels:(int32_t)CroppedAreaImageWidthPixels CroppedAreaImageHeightPixels:(int32_t)CroppedAreaImageHeightPixels FullPanoWidthPixels:(int32_t)FullPanoWidthPixels FullPanoHeightPixels:(int32_t)FullPanoHeightPixels CroppedAreaLeftPixels:(int32_t)CroppedAreaLeftPixels CroppedAreaTopPixels:(int32_t)CroppedAreaTopPixels __attribute__((swift_name("init(ProjectionType:UsePanoramaViewer:PoseHeadingDegrees:CroppedAreaImageWidthPixels:CroppedAreaImageHeightPixels:FullPanoWidthPixels:FullPanoHeightPixels:CroppedAreaLeftPixels:CroppedAreaTopPixels:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) THETACXmpInfoCompanion *companion __attribute__((swift_name("companion")));
- (THETACProjectionType *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (BOOL)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACDouble * _Nullable)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (int32_t)component4 __attribute__((swift_name("component4()"))) __attribute__((deprecated("use corresponding property instead")));
- (int32_t)component5 __attribute__((swift_name("component5()"))) __attribute__((deprecated("use corresponding property instead")));
- (int32_t)component6 __attribute__((swift_name("component6()"))) __attribute__((deprecated("use corresponding property instead")));
- (int32_t)component7 __attribute__((swift_name("component7()"))) __attribute__((deprecated("use corresponding property instead")));
- (int32_t)component8 __attribute__((swift_name("component8()"))) __attribute__((deprecated("use corresponding property instead")));
- (int32_t)component9 __attribute__((swift_name("component9()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACXmpInfo *)doCopyProjectionType:(THETACProjectionType *)ProjectionType UsePanoramaViewer:(BOOL)UsePanoramaViewer PoseHeadingDegrees:(THETACDouble * _Nullable)PoseHeadingDegrees CroppedAreaImageWidthPixels:(int32_t)CroppedAreaImageWidthPixels CroppedAreaImageHeightPixels:(int32_t)CroppedAreaImageHeightPixels FullPanoWidthPixels:(int32_t)FullPanoWidthPixels FullPanoHeightPixels:(int32_t)FullPanoHeightPixels CroppedAreaLeftPixels:(int32_t)CroppedAreaLeftPixels CroppedAreaTopPixels:(int32_t)CroppedAreaTopPixels __attribute__((swift_name("doCopy(ProjectionType:UsePanoramaViewer:PoseHeadingDegrees:CroppedAreaImageWidthPixels:CroppedAreaImageHeightPixels:FullPanoWidthPixels:FullPanoHeightPixels:CroppedAreaLeftPixels:CroppedAreaTopPixels:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t CroppedAreaImageHeightPixels __attribute__((swift_name("CroppedAreaImageHeightPixels")));
@property (readonly) int32_t CroppedAreaImageWidthPixels __attribute__((swift_name("CroppedAreaImageWidthPixels")));
@property (readonly) int32_t CroppedAreaLeftPixels __attribute__((swift_name("CroppedAreaLeftPixels")));
@property (readonly) int32_t CroppedAreaTopPixels __attribute__((swift_name("CroppedAreaTopPixels")));
@property (readonly) int32_t FullPanoHeightPixels __attribute__((swift_name("FullPanoHeightPixels")));
@property (readonly) int32_t FullPanoWidthPixels __attribute__((swift_name("FullPanoWidthPixels")));
@property (readonly) THETACDouble * _Nullable PoseHeadingDegrees __attribute__((swift_name("PoseHeadingDegrees")));
@property (readonly) THETACProjectionType *ProjectionType __attribute__((swift_name("ProjectionType")));
@property (readonly) BOOL UsePanoramaViewer __attribute__((swift_name("UsePanoramaViewer")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("XmpInfo.Companion")))
@interface THETACXmpInfoCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACXmpInfoCompanion *shared __attribute__((swift_name("shared")));
- (id<THETACKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("_ProjectionType")))
@interface THETAC_ProjectionType : THETACKotlinEnum<THETAC_ProjectionType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) THETAC_ProjectionTypeCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) THETAC_ProjectionType *equirectangular __attribute__((swift_name("equirectangular")));
@property (class, readonly) THETAC_ProjectionType *dualFisheye __attribute__((swift_name("dualFisheye")));
@property (class, readonly) THETAC_ProjectionType *fisheye __attribute__((swift_name("fisheye")));
+ (THETACKotlinArray<THETAC_ProjectionType *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("_ProjectionType.Companion")))
@interface THETAC_ProjectionTypeCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETAC_ProjectionTypeCompanion *shared __attribute__((swift_name("shared")));
- (id<THETACKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<THETACKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(THETACKotlinArray<id<THETACKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepositoryKt")))
@interface THETACThetaRepositoryKt : THETACBase
@property (class, readonly) int64_t CHECK_COMMAND_STATUS_INTERVAL __attribute__((swift_name("CHECK_COMMAND_STATUS_INTERVAL")));
@property (class, readonly) unichar FIRST_CHAR_OF_SERIAL_NUMBER_SC2_B __attribute__((swift_name("FIRST_CHAR_OF_SERIAL_NUMBER_SC2_B")));
@property (class, readonly) int32_t SIZE_OF_SET_PLUGIN_ORDERS_ARGUMENT_LIST_FOR_Z1 __attribute__((swift_name("SIZE_OF_SET_PLUGIN_ORDERS_ARGUMENT_LIST_FOR_Z1")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DigestAuthKt")))
@interface THETACDigestAuthKt : THETACBase
+ (NSString *)makeDigestHeaderUsername:(NSString *)username password:(NSString *)password uri:(NSString *)uri method:(NSString *)method realm:(NSString * _Nullable)realm nonce:(NSString * _Nullable)nonce qop:(NSString *)qop __attribute__((swift_name("makeDigestHeader(username:password:uri:method:realm:nonce:qop:)")));
@property (class, readonly) NSString *DEFAULT_AUTH_QOP __attribute__((swift_name("DEFAULT_AUTH_QOP")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PlatformKt")))
@interface THETACPlatformKt : THETACBase
+ (NSData *)frameFromPacket:(THETACKotlinPair<THETACKotlinByteArray *, THETACInt *> *)packet __attribute__((swift_name("frameFrom(packet:)")));
+ (NSString *)randomUUID __attribute__((swift_name("randomUUID()")));
@property (class, readonly) NSMutableData *data __attribute__((swift_name("data")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ApiClientKt")))
@interface THETACApiClientKt : THETACBase
+ (id<THETACPreviewClient>)getHPreviewClient __attribute__((swift_name("getHPreviewClient()")));
+ (THETACKtor_client_coreHttpClient *)getHttpClient __attribute__((swift_name("getHttpClient()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StatusApiKt")))
@interface THETACStatusApiKt : THETACBase

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
+ (id<THETACCommandApiResponse>)decodeStatusApiResponseBody:(NSString * _Nullable)body __attribute__((swift_name("decodeStatusApiResponse(body:)")));
@end

__attribute__((swift_name("Ktor_utilsStringValues")))
@protocol THETACKtor_utilsStringValues
@required
- (BOOL)containsName:(NSString *)name __attribute__((swift_name("contains(name:)")));
- (BOOL)containsName:(NSString *)name value:(NSString *)value __attribute__((swift_name("contains(name:value:)")));
- (NSSet<id<THETACKotlinMapEntry>> *)entries __attribute__((swift_name("entries()")));
- (void)forEachBody:(void (^)(NSString *, NSArray<NSString *> *))body __attribute__((swift_name("forEach(body:)")));
- (NSString * _Nullable)getName:(NSString *)name __attribute__((swift_name("get(name:)")));
- (NSArray<NSString *> * _Nullable)getAllName:(NSString *)name __attribute__((swift_name("getAll(name:)")));
- (BOOL)isEmpty __attribute__((swift_name("isEmpty()")));
- (NSSet<NSString *> *)names __attribute__((swift_name("names()")));
@property (readonly) BOOL caseInsensitiveName __attribute__((swift_name("caseInsensitiveName")));
@end

__attribute__((swift_name("Ktor_httpHeaders")))
@protocol THETACKtor_httpHeaders <THETACKtor_utilsStringValues>
@required
@end

__attribute__((swift_name("Ktor_ioByteReadChannel")))
@protocol THETACKtor_ioByteReadChannel
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)awaitContentWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("awaitContent(completionHandler:)")));
- (BOOL)cancelCause:(THETACKotlinThrowable * _Nullable)cause __attribute__((swift_name("cancel(cause:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)discardMax:(int64_t)max completionHandler:(void (^)(THETACLong * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("discard(max:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)peekToDestination:(THETACKtor_ioMemory *)destination destinationOffset:(int64_t)destinationOffset offset:(int64_t)offset min:(int64_t)min max:(int64_t)max completionHandler:(void (^)(THETACLong * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("peekTo(destination:destinationOffset:offset:min:max:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readAvailableDst:(THETACKtor_ioChunkBuffer *)dst completionHandler:(void (^)(THETACInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readAvailable(dst:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readAvailableDst:(THETACKotlinByteArray *)dst offset:(int32_t)offset length:(int32_t)length completionHandler:(void (^)(THETACInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readAvailable(dst:offset:length:completionHandler:)")));
- (int32_t)readAvailableMin:(int32_t)min block:(void (^)(THETACKtor_ioBuffer *))block __attribute__((swift_name("readAvailable(min:block:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readAvailableDst:(void *)dst offset:(int32_t)offset length:(int32_t)length completionHandler_:(void (^)(THETACInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readAvailable(dst:offset:length:completionHandler_:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readAvailableDst:(void *)dst offset:(int64_t)offset length:(int64_t)length completionHandler__:(void (^)(THETACInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readAvailable(dst:offset:length:completionHandler__:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readBooleanWithCompletionHandler:(void (^)(THETACBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readBoolean(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readByteWithCompletionHandler:(void (^)(THETACByte * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readByte(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readDoubleWithCompletionHandler:(void (^)(THETACDouble * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readDouble(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFloatWithCompletionHandler:(void (^)(THETACFloat * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readFloat(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFullyDst:(THETACKtor_ioChunkBuffer *)dst n:(int32_t)n completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("readFully(dst:n:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFullyDst:(THETACKotlinByteArray *)dst offset:(int32_t)offset length:(int32_t)length completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("readFully(dst:offset:length:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFullyDst:(void *)dst offset:(int32_t)offset length:(int32_t)length completionHandler_:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("readFully(dst:offset:length:completionHandler_:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFullyDst:(void *)dst offset:(int64_t)offset length:(int64_t)length completionHandler__:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("readFully(dst:offset:length:completionHandler__:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readIntWithCompletionHandler:(void (^)(THETACInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readInt(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readLongWithCompletionHandler:(void (^)(THETACLong * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readLong(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readPacketSize:(int32_t)size completionHandler:(void (^)(THETACKtor_ioByteReadPacket * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readPacket(size:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readRemainingLimit:(int64_t)limit completionHandler:(void (^)(THETACKtor_ioByteReadPacket * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readRemaining(limit:completionHandler:)")));
- (void)readSessionConsumer:(void (^)(id<THETACKtor_ioReadSession>))consumer __attribute__((swift_name("readSession(consumer:)"))) __attribute__((deprecated("Use read { } instead.")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readShortWithCompletionHandler:(void (^)(THETACShort * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readShort(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readSuspendableSessionConsumer:(id<THETACKotlinSuspendFunction1>)consumer completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("readSuspendableSession(consumer:completionHandler:)"))) __attribute__((deprecated("Use read { } instead.")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readUTF8LineLimit:(int32_t)limit completionHandler:(void (^)(NSString * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("readUTF8Line(limit:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readUTF8LineToOut:(id<THETACKotlinAppendable>)out limit:(int32_t)limit completionHandler:(void (^)(THETACBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readUTF8LineTo(out:limit:completionHandler:)")));
@property (readonly) int32_t availableForRead __attribute__((swift_name("availableForRead")));
@property (readonly) THETACKotlinThrowable * _Nullable closedCause __attribute__((swift_name("closedCause")));
@property (readonly) BOOL isClosedForRead __attribute__((swift_name("isClosedForRead")));
@property (readonly) BOOL isClosedForWrite __attribute__((swift_name("isClosedForWrite")));
@property (readonly) int64_t totalBytesRead __attribute__((swift_name("totalBytesRead")));
@end

__attribute__((swift_name("KotlinIllegalStateException")))
@interface THETACKotlinIllegalStateException : THETACKotlinRuntimeException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(THETACKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(THETACKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.4")
*/
__attribute__((swift_name("KotlinCancellationException")))
@interface THETACKotlinCancellationException : THETACKotlinIllegalStateException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(THETACKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(THETACKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("Ktor_ioCloseable")))
@protocol THETACKtor_ioCloseable
@required
- (void)close __attribute__((swift_name("close()")));
@end

__attribute__((swift_name("Ktor_ioInput")))
@interface THETACKtor_ioInput : THETACBase <THETACKtor_ioCloseable>
- (instancetype)initWithHead:(THETACKtor_ioChunkBuffer *)head remaining:(int64_t)remaining pool:(id<THETACKtor_ioObjectPool>)pool __attribute__((swift_name("init(head:remaining:pool:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) THETACKtor_ioInputCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)canRead __attribute__((swift_name("canRead()")));
- (void)close __attribute__((swift_name("close()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)closeSource __attribute__((swift_name("closeSource()")));
- (int32_t)discardN:(int32_t)n __attribute__((swift_name("discard(n:)")));
- (int64_t)discardN_:(int64_t)n __attribute__((swift_name("discard(n_:)")));
- (void)discardExactN:(int32_t)n __attribute__((swift_name("discardExact(n:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (THETACKtor_ioChunkBuffer * _Nullable)fill __attribute__((swift_name("fill()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (int32_t)fillDestination:(THETACKtor_ioMemory *)destination offset:(int32_t)offset length:(int32_t)length __attribute__((swift_name("fill(destination:offset:length:)")));
- (BOOL)hasBytesN:(int32_t)n __attribute__((swift_name("hasBytes(n:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)markNoMoreChunksAvailable __attribute__((swift_name("markNoMoreChunksAvailable()")));
- (int64_t)peekToDestination:(THETACKtor_ioMemory *)destination destinationOffset:(int64_t)destinationOffset offset:(int64_t)offset min:(int64_t)min max:(int64_t)max __attribute__((swift_name("peekTo(destination:destinationOffset:offset:min:max:)")));
- (int32_t)peekToBuffer:(THETACKtor_ioChunkBuffer *)buffer __attribute__((swift_name("peekTo(buffer:)")));
- (int8_t)readByte __attribute__((swift_name("readByte()")));
- (NSString *)readTextMin:(int32_t)min max:(int32_t)max __attribute__((swift_name("readText(min:max:)")));
- (int32_t)readTextOut:(id<THETACKotlinAppendable>)out min:(int32_t)min max:(int32_t)max __attribute__((swift_name("readText(out:min:max:)")));
- (NSString *)readTextExactExactCharacters:(int32_t)exactCharacters __attribute__((swift_name("readTextExact(exactCharacters:)")));
- (void)readTextExactOut:(id<THETACKotlinAppendable>)out exactCharacters:(int32_t)exactCharacters __attribute__((swift_name("readTextExact(out:exactCharacters:)")));
- (void)release_ __attribute__((swift_name("release()")));
- (int32_t)tryPeek __attribute__((swift_name("tryPeek()")));
@property (readonly) BOOL endOfInput __attribute__((swift_name("endOfInput")));
@property (readonly) id<THETACKtor_ioObjectPool> pool __attribute__((swift_name("pool")));
@property (readonly) int64_t remaining __attribute__((swift_name("remaining")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioByteReadPacket")))
@interface THETACKtor_ioByteReadPacket : THETACKtor_ioInput
- (instancetype)initWithHead:(THETACKtor_ioChunkBuffer *)head pool:(id<THETACKtor_ioObjectPool>)pool __attribute__((swift_name("init(head:pool:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithHead:(THETACKtor_ioChunkBuffer *)head remaining:(int64_t)remaining pool:(id<THETACKtor_ioObjectPool>)pool __attribute__((swift_name("init(head:remaining:pool:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) THETACKtor_ioByteReadPacketCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)closeSource __attribute__((swift_name("closeSource()")));
- (THETACKtor_ioByteReadPacket *)doCopy __attribute__((swift_name("doCopy()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (THETACKtor_ioChunkBuffer * _Nullable)fill __attribute__((swift_name("fill()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (int32_t)fillDestination:(THETACKtor_ioMemory *)destination offset:(int32_t)offset length:(int32_t)length __attribute__((swift_name("fill(destination:offset:length:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinRegex")))
@interface THETACKotlinRegex : THETACBase
- (instancetype)initWithPattern:(NSString *)pattern __attribute__((swift_name("init(pattern:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPattern:(NSString *)pattern option:(THETACKotlinRegexOption *)option __attribute__((swift_name("init(pattern:option:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPattern:(NSString *)pattern options:(NSSet<THETACKotlinRegexOption *> *)options __attribute__((swift_name("init(pattern:options:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) THETACKotlinRegexCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)containsMatchInInput:(id)input __attribute__((swift_name("containsMatchIn(input:)")));
- (id<THETACKotlinMatchResult> _Nullable)findInput:(id)input startIndex:(int32_t)startIndex __attribute__((swift_name("find(input:startIndex:)")));
- (id<THETACKotlinSequence>)findAllInput:(id)input startIndex:(int32_t)startIndex __attribute__((swift_name("findAll(input:startIndex:)")));

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.7")
*/
- (id<THETACKotlinMatchResult> _Nullable)matchAtInput:(id)input index:(int32_t)index __attribute__((swift_name("matchAt(input:index:)")));
- (id<THETACKotlinMatchResult> _Nullable)matchEntireInput:(id)input __attribute__((swift_name("matchEntire(input:)")));
- (BOOL)matchesInput:(id)input __attribute__((swift_name("matches(input:)")));

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.7")
*/
- (BOOL)matchesAtInput:(id)input index:(int32_t)index __attribute__((swift_name("matchesAt(input:index:)")));
- (NSString *)replaceInput:(id)input transform:(id (^)(id<THETACKotlinMatchResult>))transform __attribute__((swift_name("replace(input:transform:)")));
- (NSString *)replaceInput:(id)input replacement:(NSString *)replacement __attribute__((swift_name("replace(input:replacement:)")));
- (NSString *)replaceFirstInput:(id)input replacement:(NSString *)replacement __attribute__((swift_name("replaceFirst(input:replacement:)")));
- (NSArray<NSString *> *)splitInput:(id)input limit:(int32_t)limit __attribute__((swift_name("split(input:limit:)")));

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.6")
*/
- (id<THETACKotlinSequence>)splitToSequenceInput:(id)input limit:(int32_t)limit __attribute__((swift_name("splitToSequence(input:limit:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSSet<THETACKotlinRegexOption *> *options __attribute__((swift_name("options")));
@property (readonly) NSString *pattern __attribute__((swift_name("pattern")));
@end

__attribute__((swift_name("KotlinCharSequence")))
@protocol THETACKotlinCharSequence
@required
- (unichar)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id)subSequenceStartIndex:(int32_t)startIndex endIndex:(int32_t)endIndex __attribute__((swift_name("subSequence(startIndex:endIndex:)")));
@property (readonly) int32_t length __attribute__((swift_name("length")));
@end

__attribute__((swift_name("KotlinAppendable")))
@protocol THETACKotlinAppendable
@required
- (id<THETACKotlinAppendable>)appendValue:(unichar)value __attribute__((swift_name("append(value:)")));
- (id<THETACKotlinAppendable>)appendValue_:(id _Nullable)value __attribute__((swift_name("append(value_:)")));
- (id<THETACKotlinAppendable>)appendValue:(id _Nullable)value startIndex:(int32_t)startIndex endIndex:(int32_t)endIndex __attribute__((swift_name("append(value:startIndex:endIndex:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinStringBuilder")))
@interface THETACKotlinStringBuilder : THETACBase <THETACKotlinCharSequence, THETACKotlinAppendable>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithCapacity:(int32_t)capacity __attribute__((swift_name("init(capacity:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithContent:(NSString *)content __attribute__((swift_name("init(content:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithContent_:(id)content __attribute__((swift_name("init(content_:)"))) __attribute__((objc_designated_initializer));
- (THETACKotlinStringBuilder *)appendValue__:(id _Nullable)value __attribute__((swift_name("append(value__:)")));
- (THETACKotlinStringBuilder *)appendValue___:(BOOL)value __attribute__((swift_name("append(value___:)")));
- (THETACKotlinStringBuilder *)appendValue____:(int8_t)value __attribute__((swift_name("append(value____:)")));
- (THETACKotlinStringBuilder *)appendValue:(unichar)value __attribute__((swift_name("append(value:)")));
- (THETACKotlinStringBuilder *)appendValue_____:(THETACKotlinCharArray *)value __attribute__((swift_name("append(value_____:)")));
- (THETACKotlinStringBuilder *)appendValue_:(id _Nullable)value __attribute__((swift_name("append(value_:)")));
- (THETACKotlinStringBuilder *)appendValue:(id _Nullable)value startIndex:(int32_t)startIndex endIndex:(int32_t)endIndex __attribute__((swift_name("append(value:startIndex:endIndex:)")));
- (THETACKotlinStringBuilder *)appendValue______:(double)value __attribute__((swift_name("append(value______:)")));
- (THETACKotlinStringBuilder *)appendValue_______:(float)value __attribute__((swift_name("append(value_______:)")));
- (THETACKotlinStringBuilder *)appendValue________:(int32_t)value __attribute__((swift_name("append(value________:)")));
- (THETACKotlinStringBuilder *)appendValue_________:(int64_t)value __attribute__((swift_name("append(value_________:)")));
- (THETACKotlinStringBuilder *)appendValue__________:(int16_t)value __attribute__((swift_name("append(value__________:)")));
- (THETACKotlinStringBuilder *)appendValue___________:(NSString * _Nullable)value __attribute__((swift_name("append(value___________:)")));

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.4")
*/
- (THETACKotlinStringBuilder *)appendRangeValue:(THETACKotlinCharArray *)value startIndex:(int32_t)startIndex endIndex:(int32_t)endIndex __attribute__((swift_name("appendRange(value:startIndex:endIndex:)")));

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.4")
*/
- (THETACKotlinStringBuilder *)appendRangeValue:(id)value startIndex:(int32_t)startIndex endIndex_:(int32_t)endIndex __attribute__((swift_name("appendRange(value:startIndex:endIndex_:)")));
- (int32_t)capacity __attribute__((swift_name("capacity()")));

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.4")
*/
- (THETACKotlinStringBuilder *)deleteAtIndex:(int32_t)index __attribute__((swift_name("deleteAt(index:)")));

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.4")
*/
- (THETACKotlinStringBuilder *)deleteRangeStartIndex:(int32_t)startIndex endIndex:(int32_t)endIndex __attribute__((swift_name("deleteRange(startIndex:endIndex:)")));
- (void)ensureCapacityMinimumCapacity:(int32_t)minimumCapacity __attribute__((swift_name("ensureCapacity(minimumCapacity:)")));
- (unichar)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.4")
*/
- (int32_t)indexOfString:(NSString *)string __attribute__((swift_name("indexOf(string:)")));

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.4")
*/
- (int32_t)indexOfString:(NSString *)string startIndex:(int32_t)startIndex __attribute__((swift_name("indexOf(string:startIndex:)")));
- (THETACKotlinStringBuilder *)insertIndex:(int32_t)index value:(id _Nullable)value __attribute__((swift_name("insert(index:value:)")));
- (THETACKotlinStringBuilder *)insertIndex:(int32_t)index value_:(BOOL)value __attribute__((swift_name("insert(index:value_:)")));
- (THETACKotlinStringBuilder *)insertIndex:(int32_t)index value__:(int8_t)value __attribute__((swift_name("insert(index:value__:)")));
- (THETACKotlinStringBuilder *)insertIndex:(int32_t)index value___:(unichar)value __attribute__((swift_name("insert(index:value___:)")));
- (THETACKotlinStringBuilder *)insertIndex:(int32_t)index value____:(THETACKotlinCharArray *)value __attribute__((swift_name("insert(index:value____:)")));
- (THETACKotlinStringBuilder *)insertIndex:(int32_t)index value_____:(id _Nullable)value __attribute__((swift_name("insert(index:value_____:)")));
- (THETACKotlinStringBuilder *)insertIndex:(int32_t)index value______:(double)value __attribute__((swift_name("insert(index:value______:)")));
- (THETACKotlinStringBuilder *)insertIndex:(int32_t)index value_______:(float)value __attribute__((swift_name("insert(index:value_______:)")));
- (THETACKotlinStringBuilder *)insertIndex:(int32_t)index value________:(int32_t)value __attribute__((swift_name("insert(index:value________:)")));
- (THETACKotlinStringBuilder *)insertIndex:(int32_t)index value_________:(int64_t)value __attribute__((swift_name("insert(index:value_________:)")));
- (THETACKotlinStringBuilder *)insertIndex:(int32_t)index value__________:(int16_t)value __attribute__((swift_name("insert(index:value__________:)")));
- (THETACKotlinStringBuilder *)insertIndex:(int32_t)index value___________:(NSString * _Nullable)value __attribute__((swift_name("insert(index:value___________:)")));

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.4")
*/
- (THETACKotlinStringBuilder *)insertRangeIndex:(int32_t)index value:(THETACKotlinCharArray *)value startIndex:(int32_t)startIndex endIndex:(int32_t)endIndex __attribute__((swift_name("insertRange(index:value:startIndex:endIndex:)")));

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.4")
*/
- (THETACKotlinStringBuilder *)insertRangeIndex:(int32_t)index value:(id)value startIndex:(int32_t)startIndex endIndex_:(int32_t)endIndex __attribute__((swift_name("insertRange(index:value:startIndex:endIndex_:)")));

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.4")
*/
- (int32_t)lastIndexOfString:(NSString *)string __attribute__((swift_name("lastIndexOf(string:)")));

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.4")
*/
- (int32_t)lastIndexOfString:(NSString *)string startIndex:(int32_t)startIndex __attribute__((swift_name("lastIndexOf(string:startIndex:)")));
- (THETACKotlinStringBuilder *)reverse __attribute__((swift_name("reverse()")));
- (void)setIndex:(int32_t)index value:(unichar)value __attribute__((swift_name("set(index:value:)")));
- (void)setLengthNewLength:(int32_t)newLength __attribute__((swift_name("setLength(newLength:)")));

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.4")
*/
- (THETACKotlinStringBuilder *)setRangeStartIndex:(int32_t)startIndex endIndex:(int32_t)endIndex value:(NSString *)value __attribute__((swift_name("setRange(startIndex:endIndex:value:)")));
- (id)subSequenceStartIndex:(int32_t)startIndex endIndex:(int32_t)endIndex __attribute__((swift_name("subSequence(startIndex:endIndex:)")));

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.4")
*/
- (NSString *)substringStartIndex:(int32_t)startIndex __attribute__((swift_name("substring(startIndex:)")));
- (NSString *)substringStartIndex:(int32_t)startIndex endIndex:(int32_t)endIndex __attribute__((swift_name("substring(startIndex:endIndex:)")));

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.4")
*/
- (void)toCharArrayDestination:(THETACKotlinCharArray *)destination destinationOffset:(int32_t)destinationOffset startIndex:(int32_t)startIndex endIndex:(int32_t)endIndex __attribute__((swift_name("toCharArray(destination:destinationOffset:startIndex:endIndex:)")));
- (NSString *)description __attribute__((swift_name("description()")));
- (void)trimToSize __attribute__((swift_name("trimToSize()")));
@property (readonly) int32_t length __attribute__((swift_name("length")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinByteArray")))
@interface THETACKotlinByteArray : THETACBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(THETACByte *(^)(THETACInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (int8_t)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (THETACKotlinByteIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(int8_t)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinPair")))
@interface THETACKotlinPair<__covariant A, __covariant B> : THETACBase
- (instancetype)initWithFirst:(A _Nullable)first second:(B _Nullable)second __attribute__((swift_name("init(first:second:)"))) __attribute__((objc_designated_initializer));
- (A _Nullable)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (B _Nullable)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACKotlinPair<A, B> *)doCopyFirst:(A _Nullable)first second:(B _Nullable)second __attribute__((swift_name("doCopy(first:second:)")));
- (BOOL)equalsOther:(id _Nullable)other __attribute__((swift_name("equals(other:)")));
- (int32_t)hashCode __attribute__((swift_name("hashCode()")));
- (NSString *)toString __attribute__((swift_name("toString()")));
@property (readonly) A _Nullable first __attribute__((swift_name("first")));
@property (readonly) B _Nullable second __attribute__((swift_name("second")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface THETACKotlinArray<T> : THETACBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(THETACInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<THETACKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreFlow")))
@protocol THETACKotlinx_coroutines_coreFlow
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)collectCollector:(id<THETACKotlinx_coroutines_coreFlowCollector>)collector completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("collect(collector:completionHandler:)")));
@end

__attribute__((swift_name("KotlinFunction")))
@protocol THETACKotlinFunction
@required
@end

__attribute__((swift_name("KotlinSuspendFunction1")))
@protocol THETACKotlinSuspendFunction1 <THETACKotlinFunction>
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeP1:(id _Nullable)p1 completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(p1:completionHandler:)")));
@end

__attribute__((swift_name("Ktor_httpHttpMessage")))
@protocol THETACKtor_httpHttpMessage
@required
@property (readonly) id<THETACKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineScope")))
@protocol THETACKotlinx_coroutines_coreCoroutineScope
@required
@property (readonly) id<THETACKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@end

__attribute__((swift_name("Ktor_client_coreHttpResponse")))
@interface THETACKtor_client_coreHttpResponse : THETACBase <THETACKtor_httpHttpMessage, THETACKotlinx_coroutines_coreCoroutineScope>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) THETACKtor_client_coreHttpClientCall *call __attribute__((swift_name("call")));
@property (readonly) id<THETACKtor_ioByteReadChannel> content __attribute__((swift_name("content")));
@property (readonly) THETACKtor_utilsGMTDate *requestTime __attribute__((swift_name("requestTime")));
@property (readonly) THETACKtor_utilsGMTDate *responseTime __attribute__((swift_name("responseTime")));
@property (readonly) THETACKtor_httpHttpStatusCode *status __attribute__((swift_name("status")));
@property (readonly) THETACKtor_httpHttpProtocolVersion *version __attribute__((swift_name("version")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpClient")))
@interface THETACKtor_client_coreHttpClient : THETACBase <THETACKotlinx_coroutines_coreCoroutineScope, THETACKtor_ioCloseable>
- (instancetype)initWithEngine:(id<THETACKtor_client_coreHttpClientEngine>)engine userConfig:(THETACKtor_client_coreHttpClientConfig<THETACKtor_client_coreHttpClientEngineConfig *> *)userConfig __attribute__((swift_name("init(engine:userConfig:)"))) __attribute__((objc_designated_initializer));
- (void)close __attribute__((swift_name("close()")));
- (THETACKtor_client_coreHttpClient *)configBlock:(void (^)(THETACKtor_client_coreHttpClientConfig<id> *))block __attribute__((swift_name("config(block:)")));
- (BOOL)isSupportedCapability:(id<THETACKtor_client_coreHttpClientEngineCapability>)capability __attribute__((swift_name("isSupported(capability:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<THETACKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) id<THETACKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@property (readonly) id<THETACKtor_client_coreHttpClientEngine> engine __attribute__((swift_name("engine")));
@property (readonly) THETACKtor_client_coreHttpClientEngineConfig *engineConfig __attribute__((swift_name("engineConfig")));
@property (readonly) THETACKtor_eventsEvents *monitor __attribute__((swift_name("monitor")));
@property (readonly) THETACKtor_client_coreHttpReceivePipeline *receivePipeline __attribute__((swift_name("receivePipeline")));
@property (readonly) THETACKtor_client_coreHttpRequestPipeline *requestPipeline __attribute__((swift_name("requestPipeline")));
@property (readonly) THETACKtor_client_coreHttpResponsePipeline *responsePipeline __attribute__((swift_name("responsePipeline")));
@property (readonly) THETACKtor_client_coreHttpSendPipeline *sendPipeline __attribute__((swift_name("sendPipeline")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinEnumCompanion")))
@interface THETACKotlinEnumCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACKotlinEnumCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("KotlinKDeclarationContainer")))
@protocol THETACKotlinKDeclarationContainer
@required
@end

__attribute__((swift_name("KotlinKAnnotatedElement")))
@protocol THETACKotlinKAnnotatedElement
@required
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
__attribute__((swift_name("KotlinKClassifier")))
@protocol THETACKotlinKClassifier
@required
@end

__attribute__((swift_name("KotlinKClass")))
@protocol THETACKotlinKClass <THETACKotlinKDeclarationContainer, THETACKotlinKAnnotatedElement, THETACKotlinKClassifier>
@required

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
- (BOOL)isInstanceValue:(id _Nullable)value __attribute__((swift_name("isInstance(value:)")));
@property (readonly) NSString * _Nullable qualifiedName __attribute__((swift_name("qualifiedName")));
@property (readonly) NSString * _Nullable simpleName __attribute__((swift_name("simpleName")));
@end

__attribute__((swift_name("Ktor_client_coreResponseException")))
@interface THETACKtor_client_coreResponseException : THETACKotlinIllegalStateException
- (instancetype)initWithResponse:(THETACKtor_client_coreHttpResponse *)response __attribute__((swift_name("init(response:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable("Please, provide response text in constructor")));
- (instancetype)initWithResponse:(THETACKtor_client_coreHttpResponse *)response cachedResponseText:(NSString *)cachedResponseText __attribute__((swift_name("init(response:cachedResponseText:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(THETACKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithCause:(THETACKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (readonly) THETACKtor_client_coreHttpResponse *response __attribute__((swift_name("response")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreEncoder")))
@protocol THETACKotlinx_serialization_coreEncoder
@required
- (id<THETACKotlinx_serialization_coreCompositeEncoder>)beginCollectionDescriptor:(id<THETACKotlinx_serialization_coreSerialDescriptor>)descriptor collectionSize:(int32_t)collectionSize __attribute__((swift_name("beginCollection(descriptor:collectionSize:)")));
- (id<THETACKotlinx_serialization_coreCompositeEncoder>)beginStructureDescriptor:(id<THETACKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (void)encodeBooleanValue:(BOOL)value __attribute__((swift_name("encodeBoolean(value:)")));
- (void)encodeByteValue:(int8_t)value __attribute__((swift_name("encodeByte(value:)")));
- (void)encodeCharValue:(unichar)value __attribute__((swift_name("encodeChar(value:)")));
- (void)encodeDoubleValue:(double)value __attribute__((swift_name("encodeDouble(value:)")));
- (void)encodeEnumEnumDescriptor:(id<THETACKotlinx_serialization_coreSerialDescriptor>)enumDescriptor index:(int32_t)index __attribute__((swift_name("encodeEnum(enumDescriptor:index:)")));
- (void)encodeFloatValue:(float)value __attribute__((swift_name("encodeFloat(value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<THETACKotlinx_serialization_coreEncoder>)encodeInlineInlineDescriptor:(id<THETACKotlinx_serialization_coreSerialDescriptor>)inlineDescriptor __attribute__((swift_name("encodeInline(inlineDescriptor:)")));
- (void)encodeIntValue:(int32_t)value __attribute__((swift_name("encodeInt(value:)")));
- (void)encodeLongValue:(int64_t)value __attribute__((swift_name("encodeLong(value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNotNullMark __attribute__((swift_name("encodeNotNullMark()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNull __attribute__((swift_name("encodeNull()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNullableSerializableValueSerializer:(id<THETACKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableValue(serializer:value:)")));
- (void)encodeSerializableValueSerializer:(id<THETACKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableValue(serializer:value:)")));
- (void)encodeShortValue:(int16_t)value __attribute__((swift_name("encodeShort(value:)")));
- (void)encodeStringValue:(NSString *)value __attribute__((swift_name("encodeString(value:)")));
@property (readonly) THETACKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerialDescriptor")))
@protocol THETACKotlinx_serialization_coreSerialDescriptor
@required

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (NSArray<id<THETACKotlinAnnotation>> *)getElementAnnotationsIndex:(int32_t)index __attribute__((swift_name("getElementAnnotations(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<THETACKotlinx_serialization_coreSerialDescriptor>)getElementDescriptorIndex:(int32_t)index __attribute__((swift_name("getElementDescriptor(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (int32_t)getElementIndexName:(NSString *)name __attribute__((swift_name("getElementIndex(name:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (NSString *)getElementNameIndex:(int32_t)index __attribute__((swift_name("getElementName(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)isElementOptionalIndex:(int32_t)index __attribute__((swift_name("isElementOptional(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) NSArray<id<THETACKotlinAnnotation>> *annotations __attribute__((swift_name("annotations")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) int32_t elementsCount __attribute__((swift_name("elementsCount")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) BOOL isInline __attribute__((swift_name("isInline")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) BOOL isNullable __attribute__((swift_name("isNullable")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) THETACKotlinx_serialization_coreSerialKind *kind __attribute__((swift_name("kind")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) NSString *serialName __attribute__((swift_name("serialName")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreDecoder")))
@protocol THETACKotlinx_serialization_coreDecoder
@required
- (id<THETACKotlinx_serialization_coreCompositeDecoder>)beginStructureDescriptor:(id<THETACKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (BOOL)decodeBoolean __attribute__((swift_name("decodeBoolean()")));
- (int8_t)decodeByte __attribute__((swift_name("decodeByte()")));
- (unichar)decodeChar __attribute__((swift_name("decodeChar()")));
- (double)decodeDouble __attribute__((swift_name("decodeDouble()")));
- (int32_t)decodeEnumEnumDescriptor:(id<THETACKotlinx_serialization_coreSerialDescriptor>)enumDescriptor __attribute__((swift_name("decodeEnum(enumDescriptor:)")));
- (float)decodeFloat __attribute__((swift_name("decodeFloat()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<THETACKotlinx_serialization_coreDecoder>)decodeInlineInlineDescriptor:(id<THETACKotlinx_serialization_coreSerialDescriptor>)inlineDescriptor __attribute__((swift_name("decodeInline(inlineDescriptor:)")));
- (int32_t)decodeInt __attribute__((swift_name("decodeInt()")));
- (int64_t)decodeLong __attribute__((swift_name("decodeLong()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)decodeNotNullMark __attribute__((swift_name("decodeNotNullMark()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (THETACKotlinNothing * _Nullable)decodeNull __attribute__((swift_name("decodeNull()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableValueDeserializer:(id<THETACKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableValue(deserializer:)")));
- (id _Nullable)decodeSerializableValueDeserializer:(id<THETACKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableValue(deserializer:)")));
- (int16_t)decodeShort __attribute__((swift_name("decodeShort()")));
- (NSString *)decodeString __attribute__((swift_name("decodeString()")));
@property (readonly) THETACKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_jsonJsonElement")))
@interface THETACKotlinx_serialization_jsonJsonElement : THETACBase
@property (class, readonly, getter=companion) THETACKotlinx_serialization_jsonJsonElementCompanion *companion __attribute__((swift_name("companion")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpMethod")))
@interface THETACKtor_httpHttpMethod : THETACBase
- (instancetype)initWithValue:(NSString *)value __attribute__((swift_name("init(value:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) THETACKtor_httpHttpMethodCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACKtor_httpHttpMethod *)doCopyValue:(NSString *)value __attribute__((swift_name("doCopy(value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((swift_name("KotlinMapEntry")))
@protocol THETACKotlinMapEntry
@required
@property (readonly) id _Nullable key __attribute__((swift_name("key")));
@property (readonly) id _Nullable value_ __attribute__((swift_name("value_")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioMemory")))
@interface THETACKtor_ioMemory : THETACBase
- (instancetype)initWithPointer:(void *)pointer size:(int64_t)size __attribute__((swift_name("init(pointer:size:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) THETACKtor_ioMemoryCompanion *companion __attribute__((swift_name("companion")));
- (void)doCopyToDestination:(THETACKtor_ioMemory *)destination offset:(int32_t)offset length:(int32_t)length destinationOffset:(int32_t)destinationOffset __attribute__((swift_name("doCopyTo(destination:offset:length:destinationOffset:)")));
- (void)doCopyToDestination:(THETACKtor_ioMemory *)destination offset:(int64_t)offset length:(int64_t)length destinationOffset_:(int64_t)destinationOffset __attribute__((swift_name("doCopyTo(destination:offset:length:destinationOffset_:)")));
- (int8_t)loadAtIndex:(int32_t)index __attribute__((swift_name("loadAt(index:)")));
- (int8_t)loadAtIndex_:(int64_t)index __attribute__((swift_name("loadAt(index_:)")));
- (THETACKtor_ioMemory *)sliceOffset:(int32_t)offset length:(int32_t)length __attribute__((swift_name("slice(offset:length:)")));
- (THETACKtor_ioMemory *)sliceOffset:(int64_t)offset length_:(int64_t)length __attribute__((swift_name("slice(offset:length_:)")));
- (void)storeAtIndex:(int32_t)index value:(int8_t)value __attribute__((swift_name("storeAt(index:value:)")));
- (void)storeAtIndex:(int64_t)index value_:(int8_t)value __attribute__((swift_name("storeAt(index:value_:)")));
@property (readonly) void *pointer __attribute__((swift_name("pointer")));
@property (readonly) int64_t size __attribute__((swift_name("size")));
@property (readonly) int32_t size32 __attribute__((swift_name("size32")));
@end

__attribute__((swift_name("Ktor_ioBuffer")))
@interface THETACKtor_ioBuffer : THETACBase
- (instancetype)initWithMemory:(THETACKtor_ioMemory *)memory __attribute__((swift_name("init(memory:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) THETACKtor_ioBufferCompanion *companion __attribute__((swift_name("companion")));
- (void)commitWrittenCount:(int32_t)count __attribute__((swift_name("commitWritten(count:)")));
- (void)discardExactCount:(int32_t)count __attribute__((swift_name("discardExact(count:)")));
- (THETACKtor_ioBuffer *)duplicate __attribute__((swift_name("duplicate()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)duplicateToCopy:(THETACKtor_ioBuffer *)copy __attribute__((swift_name("duplicateTo(copy:)")));
- (int8_t)readByte __attribute__((swift_name("readByte()")));
- (void)reserveEndGapEndGap:(int32_t)endGap __attribute__((swift_name("reserveEndGap(endGap:)")));
- (void)reserveStartGapStartGap:(int32_t)startGap __attribute__((swift_name("reserveStartGap(startGap:)")));
- (void)reset __attribute__((swift_name("reset()")));
- (void)resetForRead __attribute__((swift_name("resetForRead()")));
- (void)resetForWrite __attribute__((swift_name("resetForWrite()")));
- (void)resetForWriteLimit:(int32_t)limit __attribute__((swift_name("resetForWrite(limit:)")));
- (void)rewindCount:(int32_t)count __attribute__((swift_name("rewind(count:)")));
- (NSString *)description __attribute__((swift_name("description()")));
- (int32_t)tryPeekByte __attribute__((swift_name("tryPeekByte()")));
- (int32_t)tryReadByte __attribute__((swift_name("tryReadByte()")));
- (void)writeByteValue:(int8_t)value __attribute__((swift_name("writeByte(value:)")));
@property (readonly) int32_t capacity __attribute__((swift_name("capacity")));
@property (readonly) int32_t endGap __attribute__((swift_name("endGap")));
@property (readonly) int32_t limit __attribute__((swift_name("limit")));
@property (readonly) THETACKtor_ioMemory *memory __attribute__((swift_name("memory")));
@property (readonly) int32_t readPosition __attribute__((swift_name("readPosition")));
@property (readonly) int32_t readRemaining __attribute__((swift_name("readRemaining")));
@property (readonly) int32_t startGap __attribute__((swift_name("startGap")));
@property (readonly) int32_t writePosition __attribute__((swift_name("writePosition")));
@property (readonly) int32_t writeRemaining __attribute__((swift_name("writeRemaining")));
@end

__attribute__((swift_name("Ktor_ioChunkBuffer")))
@interface THETACKtor_ioChunkBuffer : THETACKtor_ioBuffer
- (instancetype)initWithMemory:(THETACKtor_ioMemory *)memory origin:(THETACKtor_ioChunkBuffer * _Nullable)origin parentPool:(id<THETACKtor_ioObjectPool> _Nullable)parentPool __attribute__((swift_name("init(memory:origin:parentPool:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMemory:(THETACKtor_ioMemory *)memory __attribute__((swift_name("init(memory:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) THETACKtor_ioChunkBufferCompanion *companion __attribute__((swift_name("companion")));
- (THETACKtor_ioChunkBuffer * _Nullable)cleanNext __attribute__((swift_name("cleanNext()")));
- (THETACKtor_ioChunkBuffer *)duplicate __attribute__((swift_name("duplicate()")));
- (void)releasePool:(id<THETACKtor_ioObjectPool>)pool __attribute__((swift_name("release(pool:)")));
- (void)reset __attribute__((swift_name("reset()")));
@property THETACKtor_ioChunkBuffer * _Nullable next __attribute__((swift_name("next")));
@property (readonly) THETACKtor_ioChunkBuffer * _Nullable origin __attribute__((swift_name("origin")));
@property (readonly) int32_t referenceCount __attribute__((swift_name("referenceCount")));
@end

__attribute__((swift_name("Ktor_ioReadSession")))
@protocol THETACKtor_ioReadSession
@required
- (int32_t)discardN:(int32_t)n __attribute__((swift_name("discard(n:)")));
- (THETACKtor_ioChunkBuffer * _Nullable)requestAtLeast:(int32_t)atLeast __attribute__((swift_name("request(atLeast:)")));
@property (readonly) int32_t availableForRead __attribute__((swift_name("availableForRead")));
@end

__attribute__((swift_name("Ktor_ioObjectPool")))
@protocol THETACKtor_ioObjectPool <THETACKtor_ioCloseable>
@required
- (id)borrow __attribute__((swift_name("borrow()")));
- (void)dispose __attribute__((swift_name("dispose()")));
- (void)recycleInstance:(id)instance __attribute__((swift_name("recycle(instance:)")));
@property (readonly) int32_t capacity __attribute__((swift_name("capacity")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioInput.Companion")))
@interface THETACKtor_ioInputCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACKtor_ioInputCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioByteReadPacket.Companion")))
@interface THETACKtor_ioByteReadPacketCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACKtor_ioByteReadPacketCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) THETACKtor_ioByteReadPacket *Empty __attribute__((swift_name("Empty")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinRegexOption")))
@interface THETACKotlinRegexOption : THETACKotlinEnum<THETACKotlinRegexOption *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) THETACKotlinRegexOption *ignoreCase __attribute__((swift_name("ignoreCase")));
@property (class, readonly) THETACKotlinRegexOption *multiline __attribute__((swift_name("multiline")));
@property (class, readonly) THETACKotlinRegexOption *literal __attribute__((swift_name("literal")));
@property (class, readonly) THETACKotlinRegexOption *unixLines __attribute__((swift_name("unixLines")));
@property (class, readonly) THETACKotlinRegexOption *comments __attribute__((swift_name("comments")));
@property (class, readonly) THETACKotlinRegexOption *dotMatchesAll __attribute__((swift_name("dotMatchesAll")));
@property (class, readonly) THETACKotlinRegexOption *canonEq __attribute__((swift_name("canonEq")));
+ (THETACKotlinArray<THETACKotlinRegexOption *> *)values __attribute__((swift_name("values()")));
@property (readonly) int32_t mask __attribute__((swift_name("mask")));
@property (readonly) int32_t value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinRegex.Companion")))
@interface THETACKotlinRegexCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACKotlinRegexCompanion *shared __attribute__((swift_name("shared")));
- (NSString *)escapeLiteral:(NSString *)literal __attribute__((swift_name("escape(literal:)")));
- (NSString *)escapeReplacementLiteral:(NSString *)literal __attribute__((swift_name("escapeReplacement(literal:)")));
- (THETACKotlinRegex *)fromLiteralLiteral:(NSString *)literal __attribute__((swift_name("fromLiteral(literal:)")));
@end

__attribute__((swift_name("KotlinMatchResult")))
@protocol THETACKotlinMatchResult
@required
- (id<THETACKotlinMatchResult> _Nullable)next_ __attribute__((swift_name("next()")));
@property (readonly) THETACKotlinMatchResultDestructured *destructured __attribute__((swift_name("destructured")));
@property (readonly) NSArray<NSString *> *groupValues __attribute__((swift_name("groupValues")));
@property (readonly) id<THETACKotlinMatchGroupCollection> groups __attribute__((swift_name("groups")));
@property (readonly) THETACKotlinIntRange *range __attribute__((swift_name("range")));
@property (readonly) NSString *value_ __attribute__((swift_name("value_")));
@end

__attribute__((swift_name("KotlinSequence")))
@protocol THETACKotlinSequence
@required
- (id<THETACKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinCharArray")))
@interface THETACKotlinCharArray : THETACBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(id (^)(THETACInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (unichar)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (THETACKotlinCharIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(unichar)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((swift_name("KotlinIterator")))
@protocol THETACKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next_ __attribute__((swift_name("next()")));
@end

__attribute__((swift_name("KotlinByteIterator")))
@interface THETACKotlinByteIterator : THETACBase <THETACKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (THETACByte *)next_ __attribute__((swift_name("next()")));
- (int8_t)nextByte __attribute__((swift_name("nextByte()")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreFlowCollector")))
@protocol THETACKotlinx_coroutines_coreFlowCollector
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)emitValue:(id _Nullable)value completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("emit(value:completionHandler:)")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinCoroutineContext")))
@protocol THETACKotlinCoroutineContext
@required
- (id _Nullable)foldInitial:(id _Nullable)initial operation:(id _Nullable (^)(id _Nullable, id<THETACKotlinCoroutineContextElement>))operation __attribute__((swift_name("fold(initial:operation:)")));
- (id<THETACKotlinCoroutineContextElement> _Nullable)getKey:(id<THETACKotlinCoroutineContextKey>)key __attribute__((swift_name("get(key:)")));
- (id<THETACKotlinCoroutineContext>)minusKeyKey:(id<THETACKotlinCoroutineContextKey>)key __attribute__((swift_name("minusKey(key:)")));
- (id<THETACKotlinCoroutineContext>)plusContext:(id<THETACKotlinCoroutineContext>)context __attribute__((swift_name("plus(context:)")));
@end

__attribute__((swift_name("Ktor_client_coreHttpClientCall")))
@interface THETACKtor_client_coreHttpClientCall : THETACBase <THETACKotlinx_coroutines_coreCoroutineScope>
- (instancetype)initWithClient:(THETACKtor_client_coreHttpClient *)client requestData:(THETACKtor_client_coreHttpRequestData *)requestData responseData:(THETACKtor_client_coreHttpResponseData *)responseData __attribute__((swift_name("init(client:requestData:responseData:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithClient:(THETACKtor_client_coreHttpClient *)client __attribute__((swift_name("init(client:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) THETACKtor_client_coreHttpClientCallCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)bodyInfo:(THETACKtor_utilsTypeInfo *)info completionHandler:(void (^)(id _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("body(info:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)bodyNullableInfo:(THETACKtor_utilsTypeInfo *)info completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("bodyNullable(info:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)getResponseContentWithCompletionHandler:(void (^)(id<THETACKtor_ioByteReadChannel> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getResponseContent(completionHandler:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL allowDoubleReceive __attribute__((swift_name("allowDoubleReceive")));
@property (readonly) id<THETACKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) THETACKtor_client_coreHttpClient *client __attribute__((swift_name("client")));
@property (readonly) id<THETACKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@property id<THETACKtor_client_coreHttpRequest> request __attribute__((swift_name("request")));
@property THETACKtor_client_coreHttpResponse *response __attribute__((swift_name("response")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsGMTDate")))
@interface THETACKtor_utilsGMTDate : THETACBase <THETACKotlinComparable>
@property (class, readonly, getter=companion) THETACKtor_utilsGMTDateCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(THETACKtor_utilsGMTDate *)other __attribute__((swift_name("compareTo(other:)")));
- (int32_t)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (int32_t)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (int32_t)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACKtor_utilsWeekDay *)component4 __attribute__((swift_name("component4()"))) __attribute__((deprecated("use corresponding property instead")));
- (int32_t)component5 __attribute__((swift_name("component5()"))) __attribute__((deprecated("use corresponding property instead")));
- (int32_t)component6 __attribute__((swift_name("component6()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACKtor_utilsMonth *)component7 __attribute__((swift_name("component7()"))) __attribute__((deprecated("use corresponding property instead")));
- (int32_t)component8 __attribute__((swift_name("component8()"))) __attribute__((deprecated("use corresponding property instead")));
- (int64_t)component9 __attribute__((swift_name("component9()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACKtor_utilsGMTDate *)doCopySeconds:(int32_t)seconds minutes:(int32_t)minutes hours:(int32_t)hours dayOfWeek:(THETACKtor_utilsWeekDay *)dayOfWeek dayOfMonth:(int32_t)dayOfMonth dayOfYear:(int32_t)dayOfYear month:(THETACKtor_utilsMonth *)month year:(int32_t)year timestamp:(int64_t)timestamp __attribute__((swift_name("doCopy(seconds:minutes:hours:dayOfWeek:dayOfMonth:dayOfYear:month:year:timestamp:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t dayOfMonth __attribute__((swift_name("dayOfMonth")));
@property (readonly) THETACKtor_utilsWeekDay *dayOfWeek __attribute__((swift_name("dayOfWeek")));
@property (readonly) int32_t dayOfYear __attribute__((swift_name("dayOfYear")));
@property (readonly) int32_t hours __attribute__((swift_name("hours")));
@property (readonly) int32_t minutes __attribute__((swift_name("minutes")));
@property (readonly) THETACKtor_utilsMonth *month __attribute__((swift_name("month")));
@property (readonly) int32_t seconds __attribute__((swift_name("seconds")));
@property (readonly) int64_t timestamp __attribute__((swift_name("timestamp")));
@property (readonly) int32_t year __attribute__((swift_name("year")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpStatusCode")))
@interface THETACKtor_httpHttpStatusCode : THETACBase
- (instancetype)initWithValue:(int32_t)value description:(NSString *)description __attribute__((swift_name("init(value:description:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) THETACKtor_httpHttpStatusCodeCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACKtor_httpHttpStatusCode *)doCopyValue:(int32_t)value description:(NSString *)description __attribute__((swift_name("doCopy(value:description:)")));
- (THETACKtor_httpHttpStatusCode *)descriptionValue:(NSString *)value __attribute__((swift_name("description(value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *description_ __attribute__((swift_name("description_")));
@property (readonly) int32_t value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpProtocolVersion")))
@interface THETACKtor_httpHttpProtocolVersion : THETACBase
- (instancetype)initWithName:(NSString *)name major:(int32_t)major minor:(int32_t)minor __attribute__((swift_name("init(name:major:minor:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) THETACKtor_httpHttpProtocolVersionCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (int32_t)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (int32_t)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACKtor_httpHttpProtocolVersion *)doCopyName:(NSString *)name major:(int32_t)major minor:(int32_t)minor __attribute__((swift_name("doCopy(name:major:minor:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t major __attribute__((swift_name("major")));
@property (readonly) int32_t minor __attribute__((swift_name("minor")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((swift_name("Ktor_client_coreHttpClientEngine")))
@protocol THETACKtor_client_coreHttpClientEngine <THETACKotlinx_coroutines_coreCoroutineScope, THETACKtor_ioCloseable>
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeData:(THETACKtor_client_coreHttpRequestData *)data completionHandler:(void (^)(THETACKtor_client_coreHttpResponseData * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(data:completionHandler:)")));
- (void)installClient:(THETACKtor_client_coreHttpClient *)client __attribute__((swift_name("install(client:)")));
@property (readonly) THETACKtor_client_coreHttpClientEngineConfig *config __attribute__((swift_name("config")));
@property (readonly) THETACKotlinx_coroutines_coreCoroutineDispatcher *dispatcher __attribute__((swift_name("dispatcher")));
@property (readonly) NSSet<id<THETACKtor_client_coreHttpClientEngineCapability>> *supportedCapabilities __attribute__((swift_name("supportedCapabilities")));
@end

__attribute__((swift_name("Ktor_client_coreHttpClientEngineConfig")))
@interface THETACKtor_client_coreHttpClientEngineConfig : THETACBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property BOOL pipelining __attribute__((swift_name("pipelining")));
@property THETACKtor_client_coreProxyConfig * _Nullable proxy __attribute__((swift_name("proxy")));
@property int32_t threadsCount __attribute__((swift_name("threadsCount")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpClientConfig")))
@interface THETACKtor_client_coreHttpClientConfig<T> : THETACBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (THETACKtor_client_coreHttpClientConfig<T> *)clone __attribute__((swift_name("clone()")));
- (void)engineBlock:(void (^)(T))block __attribute__((swift_name("engine(block:)")));
- (void)installClient:(THETACKtor_client_coreHttpClient *)client __attribute__((swift_name("install(client:)")));
- (void)installPlugin:(id<THETACKtor_client_coreHttpClientPlugin>)plugin configure:(void (^)(id))configure __attribute__((swift_name("install(plugin:configure:)")));
- (void)installKey:(NSString *)key block:(void (^)(THETACKtor_client_coreHttpClient *))block __attribute__((swift_name("install(key:block:)")));
- (void)plusAssignOther:(THETACKtor_client_coreHttpClientConfig<T> *)other __attribute__((swift_name("plusAssign(other:)")));
@property BOOL developmentMode __attribute__((swift_name("developmentMode")));
@property BOOL expectSuccess __attribute__((swift_name("expectSuccess")));
@property BOOL followRedirects __attribute__((swift_name("followRedirects")));
@property BOOL useDefaultTransformers __attribute__((swift_name("useDefaultTransformers")));
@end

__attribute__((swift_name("Ktor_client_coreHttpClientEngineCapability")))
@protocol THETACKtor_client_coreHttpClientEngineCapability
@required
@end

__attribute__((swift_name("Ktor_utilsAttributes")))
@protocol THETACKtor_utilsAttributes
@required
- (id)computeIfAbsentKey:(THETACKtor_utilsAttributeKey<id> *)key block:(id (^)(void))block __attribute__((swift_name("computeIfAbsent(key:block:)")));
- (BOOL)containsKey:(THETACKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("contains(key:)")));
- (id)getKey_:(THETACKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("get(key_:)")));
- (id _Nullable)getOrNullKey:(THETACKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("getOrNull(key:)")));
- (void)putKey:(THETACKtor_utilsAttributeKey<id> *)key value:(id)value __attribute__((swift_name("put(key:value:)")));
- (void)removeKey:(THETACKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("remove(key:)")));
- (id)takeKey:(THETACKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("take(key:)")));
- (id _Nullable)takeOrNullKey:(THETACKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("takeOrNull(key:)")));
@property (readonly) NSArray<THETACKtor_utilsAttributeKey<id> *> *allKeys __attribute__((swift_name("allKeys")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_eventsEvents")))
@interface THETACKtor_eventsEvents : THETACBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)raiseDefinition:(THETACKtor_eventsEventDefinition<id> *)definition value:(id _Nullable)value __attribute__((swift_name("raise(definition:value:)")));
- (id<THETACKotlinx_coroutines_coreDisposableHandle>)subscribeDefinition:(THETACKtor_eventsEventDefinition<id> *)definition handler:(void (^)(id _Nullable))handler __attribute__((swift_name("subscribe(definition:handler:)")));
- (void)unsubscribeDefinition:(THETACKtor_eventsEventDefinition<id> *)definition handler:(void (^)(id _Nullable))handler __attribute__((swift_name("unsubscribe(definition:handler:)")));
@end

__attribute__((swift_name("Ktor_utilsPipeline")))
@interface THETACKtor_utilsPipeline<TSubject, TContext> : THETACBase
- (instancetype)initWithPhase:(THETACKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<THETACKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhases:(THETACKotlinArray<THETACKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer));
- (void)addPhasePhase:(THETACKtor_utilsPipelinePhase *)phase __attribute__((swift_name("addPhase(phase:)")));
- (void)afterIntercepted __attribute__((swift_name("afterIntercepted()")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeContext:(TContext)context subject:(TSubject)subject completionHandler:(void (^)(TSubject _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(context:subject:completionHandler:)")));
- (void)insertPhaseAfterReference:(THETACKtor_utilsPipelinePhase *)reference phase:(THETACKtor_utilsPipelinePhase *)phase __attribute__((swift_name("insertPhaseAfter(reference:phase:)")));
- (void)insertPhaseBeforeReference:(THETACKtor_utilsPipelinePhase *)reference phase:(THETACKtor_utilsPipelinePhase *)phase __attribute__((swift_name("insertPhaseBefore(reference:phase:)")));
- (void)interceptPhase:(THETACKtor_utilsPipelinePhase *)phase block:(id<THETACKotlinSuspendFunction2>)block __attribute__((swift_name("intercept(phase:block:)")));
- (NSArray<id<THETACKotlinSuspendFunction2>> *)interceptorsForPhasePhase:(THETACKtor_utilsPipelinePhase *)phase __attribute__((swift_name("interceptorsForPhase(phase:)")));
- (void)mergeFrom:(THETACKtor_utilsPipeline<TSubject, TContext> *)from __attribute__((swift_name("merge(from:)")));
- (void)mergePhasesFrom:(THETACKtor_utilsPipeline<TSubject, TContext> *)from __attribute__((swift_name("mergePhases(from:)")));
- (void)resetFromFrom:(THETACKtor_utilsPipeline<TSubject, TContext> *)from __attribute__((swift_name("resetFrom(from:)")));
@property (readonly) id<THETACKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@property (readonly, getter=isEmpty_) BOOL isEmpty __attribute__((swift_name("isEmpty")));
@property (readonly) NSArray<THETACKtor_utilsPipelinePhase *> *items __attribute__((swift_name("items")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpReceivePipeline")))
@interface THETACKtor_client_coreHttpReceivePipeline : THETACKtor_utilsPipeline<THETACKtor_client_coreHttpResponse *, THETACKotlinUnit *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhase:(THETACKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<THETACKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhases:(THETACKotlinArray<THETACKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) THETACKtor_client_coreHttpReceivePipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestPipeline")))
@interface THETACKtor_client_coreHttpRequestPipeline : THETACKtor_utilsPipeline<id, THETACKtor_client_coreHttpRequestBuilder *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhase:(THETACKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<THETACKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhases:(THETACKotlinArray<THETACKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) THETACKtor_client_coreHttpRequestPipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponsePipeline")))
@interface THETACKtor_client_coreHttpResponsePipeline : THETACKtor_utilsPipeline<THETACKtor_client_coreHttpResponseContainer *, THETACKtor_client_coreHttpClientCall *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhase:(THETACKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<THETACKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhases:(THETACKotlinArray<THETACKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) THETACKtor_client_coreHttpResponsePipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpSendPipeline")))
@interface THETACKtor_client_coreHttpSendPipeline : THETACKtor_utilsPipeline<id, THETACKtor_client_coreHttpRequestBuilder *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhase:(THETACKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<THETACKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhases:(THETACKotlinArray<THETACKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) THETACKtor_client_coreHttpSendPipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreCompositeEncoder")))
@protocol THETACKotlinx_serialization_coreCompositeEncoder
@required
- (void)encodeBooleanElementDescriptor:(id<THETACKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(BOOL)value __attribute__((swift_name("encodeBooleanElement(descriptor:index:value:)")));
- (void)encodeByteElementDescriptor:(id<THETACKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int8_t)value __attribute__((swift_name("encodeByteElement(descriptor:index:value:)")));
- (void)encodeCharElementDescriptor:(id<THETACKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(unichar)value __attribute__((swift_name("encodeCharElement(descriptor:index:value:)")));
- (void)encodeDoubleElementDescriptor:(id<THETACKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(double)value __attribute__((swift_name("encodeDoubleElement(descriptor:index:value:)")));
- (void)encodeFloatElementDescriptor:(id<THETACKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(float)value __attribute__((swift_name("encodeFloatElement(descriptor:index:value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<THETACKotlinx_serialization_coreEncoder>)encodeInlineElementDescriptor:(id<THETACKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("encodeInlineElement(descriptor:index:)")));
- (void)encodeIntElementDescriptor:(id<THETACKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int32_t)value __attribute__((swift_name("encodeIntElement(descriptor:index:value:)")));
- (void)encodeLongElementDescriptor:(id<THETACKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int64_t)value __attribute__((swift_name("encodeLongElement(descriptor:index:value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNullableSerializableElementDescriptor:(id<THETACKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<THETACKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeSerializableElementDescriptor:(id<THETACKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<THETACKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeShortElementDescriptor:(id<THETACKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int16_t)value __attribute__((swift_name("encodeShortElement(descriptor:index:value:)")));
- (void)encodeStringElementDescriptor:(id<THETACKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(NSString *)value __attribute__((swift_name("encodeStringElement(descriptor:index:value:)")));
- (void)endStructureDescriptor:(id<THETACKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)shouldEncodeElementDefaultDescriptor:(id<THETACKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("shouldEncodeElementDefault(descriptor:index:)")));
@property (readonly) THETACKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModule")))
@interface THETACKotlinx_serialization_coreSerializersModule : THETACBase

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)dumpToCollector:(id<THETACKotlinx_serialization_coreSerializersModuleCollector>)collector __attribute__((swift_name("dumpTo(collector:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<THETACKotlinx_serialization_coreKSerializer> _Nullable)getContextualKClass:(id<THETACKotlinKClass>)kClass typeArgumentsSerializers:(NSArray<id<THETACKotlinx_serialization_coreKSerializer>> *)typeArgumentsSerializers __attribute__((swift_name("getContextual(kClass:typeArgumentsSerializers:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<THETACKotlinx_serialization_coreSerializationStrategy> _Nullable)getPolymorphicBaseClass:(id<THETACKotlinKClass>)baseClass value:(id)value __attribute__((swift_name("getPolymorphic(baseClass:value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<THETACKotlinx_serialization_coreDeserializationStrategy> _Nullable)getPolymorphicBaseClass:(id<THETACKotlinKClass>)baseClass serializedClassName:(NSString * _Nullable)serializedClassName __attribute__((swift_name("getPolymorphic(baseClass:serializedClassName:)")));
@end

__attribute__((swift_name("KotlinAnnotation")))
@protocol THETACKotlinAnnotation
@required
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("Kotlinx_serialization_coreSerialKind")))
@interface THETACKotlinx_serialization_coreSerialKind : THETACBase
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreCompositeDecoder")))
@protocol THETACKotlinx_serialization_coreCompositeDecoder
@required
- (BOOL)decodeBooleanElementDescriptor:(id<THETACKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeBooleanElement(descriptor:index:)")));
- (int8_t)decodeByteElementDescriptor:(id<THETACKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeByteElement(descriptor:index:)")));
- (unichar)decodeCharElementDescriptor:(id<THETACKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeCharElement(descriptor:index:)")));
- (int32_t)decodeCollectionSizeDescriptor:(id<THETACKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeCollectionSize(descriptor:)")));
- (double)decodeDoubleElementDescriptor:(id<THETACKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeDoubleElement(descriptor:index:)")));
- (int32_t)decodeElementIndexDescriptor:(id<THETACKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeElementIndex(descriptor:)")));
- (float)decodeFloatElementDescriptor:(id<THETACKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeFloatElement(descriptor:index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<THETACKotlinx_serialization_coreDecoder>)decodeInlineElementDescriptor:(id<THETACKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeInlineElement(descriptor:index:)")));
- (int32_t)decodeIntElementDescriptor:(id<THETACKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeIntElement(descriptor:index:)")));
- (int64_t)decodeLongElementDescriptor:(id<THETACKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeLongElement(descriptor:index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableElementDescriptor:(id<THETACKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<THETACKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeNullableSerializableElement(descriptor:index:deserializer:previousValue:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)decodeSequentially __attribute__((swift_name("decodeSequentially()")));
- (id _Nullable)decodeSerializableElementDescriptor:(id<THETACKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<THETACKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (int16_t)decodeShortElementDescriptor:(id<THETACKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeShortElement(descriptor:index:)")));
- (NSString *)decodeStringElementDescriptor:(id<THETACKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeStringElement(descriptor:index:)")));
- (void)endStructureDescriptor:(id<THETACKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
@property (readonly) THETACKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinNothing")))
@interface THETACKotlinNothing : THETACBase
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_jsonJsonElement.Companion")))
@interface THETACKotlinx_serialization_jsonJsonElementCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACKotlinx_serialization_jsonJsonElementCompanion *shared __attribute__((swift_name("shared")));
- (id<THETACKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpMethod.Companion")))
@interface THETACKtor_httpHttpMethodCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACKtor_httpHttpMethodCompanion *shared __attribute__((swift_name("shared")));
- (THETACKtor_httpHttpMethod *)parseMethod:(NSString *)method __attribute__((swift_name("parse(method:)")));
@property (readonly) NSArray<THETACKtor_httpHttpMethod *> *DefaultMethods __attribute__((swift_name("DefaultMethods")));
@property (readonly) THETACKtor_httpHttpMethod *Delete __attribute__((swift_name("Delete")));
@property (readonly) THETACKtor_httpHttpMethod *Get __attribute__((swift_name("Get")));
@property (readonly) THETACKtor_httpHttpMethod *Head __attribute__((swift_name("Head")));
@property (readonly) THETACKtor_httpHttpMethod *Options __attribute__((swift_name("Options")));
@property (readonly) THETACKtor_httpHttpMethod *Patch __attribute__((swift_name("Patch")));
@property (readonly) THETACKtor_httpHttpMethod *Post __attribute__((swift_name("Post")));
@property (readonly) THETACKtor_httpHttpMethod *Put __attribute__((swift_name("Put")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioMemory.Companion")))
@interface THETACKtor_ioMemoryCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACKtor_ioMemoryCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) THETACKtor_ioMemory *Empty __attribute__((swift_name("Empty")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioBuffer.Companion")))
@interface THETACKtor_ioBufferCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACKtor_ioBufferCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) THETACKtor_ioBuffer *Empty __attribute__((swift_name("Empty")));
@property (readonly) int32_t ReservedSize __attribute__((swift_name("ReservedSize")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioChunkBuffer.Companion")))
@interface THETACKtor_ioChunkBufferCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACKtor_ioChunkBufferCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) THETACKtor_ioChunkBuffer *Empty __attribute__((swift_name("Empty")));
@property (readonly) id<THETACKtor_ioObjectPool> EmptyPool __attribute__((swift_name("EmptyPool")));
@property (readonly) id<THETACKtor_ioObjectPool> Pool __attribute__((swift_name("Pool")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinMatchResultDestructured")))
@interface THETACKotlinMatchResultDestructured : THETACBase
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component10 __attribute__((swift_name("component10()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (NSString *)component5 __attribute__((swift_name("component5()")));
- (NSString *)component6 __attribute__((swift_name("component6()")));
- (NSString *)component7 __attribute__((swift_name("component7()")));
- (NSString *)component8 __attribute__((swift_name("component8()")));
- (NSString *)component9 __attribute__((swift_name("component9()")));
- (NSArray<NSString *> *)toList __attribute__((swift_name("toList()")));
@property (readonly) id<THETACKotlinMatchResult> match __attribute__((swift_name("match")));
@end

__attribute__((swift_name("KotlinIterable")))
@protocol THETACKotlinIterable
@required
- (id<THETACKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
@end

__attribute__((swift_name("KotlinCollection")))
@protocol THETACKotlinCollection <THETACKotlinIterable>
@required
- (BOOL)containsElement:(id _Nullable)element __attribute__((swift_name("contains(element:)")));
- (BOOL)containsAllElements:(id)elements __attribute__((swift_name("containsAll(elements:)")));
- (BOOL)isEmpty __attribute__((swift_name("isEmpty()")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((swift_name("KotlinMatchGroupCollection")))
@protocol THETACKotlinMatchGroupCollection <THETACKotlinCollection>
@required
- (THETACKotlinMatchGroup * _Nullable)getIndex_:(int32_t)index __attribute__((swift_name("get(index_:)")));
@end

__attribute__((swift_name("KotlinIntProgression")))
@interface THETACKotlinIntProgression : THETACBase <THETACKotlinIterable>
@property (class, readonly, getter=companion) THETACKotlinIntProgressionCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)isEmpty __attribute__((swift_name("isEmpty()")));
- (THETACKotlinIntIterator *)iterator __attribute__((swift_name("iterator()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t first __attribute__((swift_name("first")));
@property (readonly) int32_t last __attribute__((swift_name("last")));
@property (readonly) int32_t step __attribute__((swift_name("step")));
@end

__attribute__((swift_name("KotlinClosedRange")))
@protocol THETACKotlinClosedRange
@required
- (BOOL)containsValue:(id)value __attribute__((swift_name("contains(value:)")));
- (BOOL)isEmpty __attribute__((swift_name("isEmpty()")));
@property (readonly) id endInclusive __attribute__((swift_name("endInclusive")));
@property (readonly) id start __attribute__((swift_name("start")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.7")
 *   kotlin.ExperimentalStdlibApi
*/
__attribute__((swift_name("KotlinOpenEndRange")))
@protocol THETACKotlinOpenEndRange
@required
- (BOOL)containsValue_:(id)value __attribute__((swift_name("contains(value_:)")));
- (BOOL)isEmpty __attribute__((swift_name("isEmpty()")));
@property (readonly) id endExclusive __attribute__((swift_name("endExclusive")));
@property (readonly) id start __attribute__((swift_name("start")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinIntRange")))
@interface THETACKotlinIntRange : THETACKotlinIntProgression <THETACKotlinClosedRange, THETACKotlinOpenEndRange>
- (instancetype)initWithStart:(int32_t)start endInclusive:(int32_t)endInclusive __attribute__((swift_name("init(start:endInclusive:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) THETACKotlinIntRangeCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)containsValue:(THETACInt *)value __attribute__((swift_name("contains(value:)")));
- (BOOL)containsValue_:(THETACInt *)value __attribute__((swift_name("contains(value_:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)isEmpty __attribute__((swift_name("isEmpty()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.7")
 *   kotlin.ExperimentalStdlibApi
*/
@property (readonly) THETACInt *endExclusive __attribute__((swift_name("endExclusive"))) __attribute__((deprecated("Can throw an exception when it's impossible to represent the value with Int type, for example, when the range includes MAX_VALUE. It's recommended to use 'endInclusive' property that doesn't throw.")));
@property (readonly) THETACInt *endInclusive __attribute__((swift_name("endInclusive")));
@property (readonly) THETACInt *start __attribute__((swift_name("start")));
@end

__attribute__((swift_name("KotlinCharIterator")))
@interface THETACKotlinCharIterator : THETACBase <THETACKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (id)next_ __attribute__((swift_name("next()")));
- (unichar)nextChar __attribute__((swift_name("nextChar()")));
@end

__attribute__((swift_name("KotlinCoroutineContextElement")))
@protocol THETACKotlinCoroutineContextElement <THETACKotlinCoroutineContext>
@required
@property (readonly) id<THETACKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
@end

__attribute__((swift_name("KotlinCoroutineContextKey")))
@protocol THETACKotlinCoroutineContextKey
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestData")))
@interface THETACKtor_client_coreHttpRequestData : THETACBase
- (instancetype)initWithUrl:(THETACKtor_httpUrl *)url method:(THETACKtor_httpHttpMethod *)method headers:(id<THETACKtor_httpHeaders>)headers body:(THETACKtor_httpOutgoingContent *)body executionContext:(id<THETACKotlinx_coroutines_coreJob>)executionContext attributes:(id<THETACKtor_utilsAttributes>)attributes __attribute__((swift_name("init(url:method:headers:body:executionContext:attributes:)"))) __attribute__((objc_designated_initializer));
- (id _Nullable)getCapabilityOrNullKey:(id<THETACKtor_client_coreHttpClientEngineCapability>)key __attribute__((swift_name("getCapabilityOrNull(key:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<THETACKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) THETACKtor_httpOutgoingContent *body __attribute__((swift_name("body")));
@property (readonly) id<THETACKotlinx_coroutines_coreJob> executionContext __attribute__((swift_name("executionContext")));
@property (readonly) id<THETACKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@property (readonly) THETACKtor_httpHttpMethod *method __attribute__((swift_name("method")));
@property (readonly) THETACKtor_httpUrl *url __attribute__((swift_name("url")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponseData")))
@interface THETACKtor_client_coreHttpResponseData : THETACBase
- (instancetype)initWithStatusCode:(THETACKtor_httpHttpStatusCode *)statusCode requestTime:(THETACKtor_utilsGMTDate *)requestTime headers:(id<THETACKtor_httpHeaders>)headers version:(THETACKtor_httpHttpProtocolVersion *)version body:(id)body callContext:(id<THETACKotlinCoroutineContext>)callContext __attribute__((swift_name("init(statusCode:requestTime:headers:version:body:callContext:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id body __attribute__((swift_name("body")));
@property (readonly) id<THETACKotlinCoroutineContext> callContext __attribute__((swift_name("callContext")));
@property (readonly) id<THETACKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@property (readonly) THETACKtor_utilsGMTDate *requestTime __attribute__((swift_name("requestTime")));
@property (readonly) THETACKtor_utilsGMTDate *responseTime __attribute__((swift_name("responseTime")));
@property (readonly) THETACKtor_httpHttpStatusCode *statusCode __attribute__((swift_name("statusCode")));
@property (readonly) THETACKtor_httpHttpProtocolVersion *version __attribute__((swift_name("version")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpClientCall.Companion")))
@interface THETACKtor_client_coreHttpClientCallCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACKtor_client_coreHttpClientCallCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) THETACKtor_utilsAttributeKey<id> *CustomResponse __attribute__((swift_name("CustomResponse"))) __attribute__((unavailable("This is going to be removed. Please file a ticket with clarification why and what for do you need it.")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsTypeInfo")))
@interface THETACKtor_utilsTypeInfo : THETACBase
- (instancetype)initWithType:(id<THETACKotlinKClass>)type reifiedType:(id<THETACKotlinKType>)reifiedType kotlinType:(id<THETACKotlinKType> _Nullable)kotlinType __attribute__((swift_name("init(type:reifiedType:kotlinType:)"))) __attribute__((objc_designated_initializer));
- (id<THETACKotlinKClass>)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (id<THETACKotlinKType>)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (id<THETACKotlinKType> _Nullable)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACKtor_utilsTypeInfo *)doCopyType:(id<THETACKotlinKClass>)type reifiedType:(id<THETACKotlinKType>)reifiedType kotlinType:(id<THETACKotlinKType> _Nullable)kotlinType __attribute__((swift_name("doCopy(type:reifiedType:kotlinType:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<THETACKotlinKType> _Nullable kotlinType __attribute__((swift_name("kotlinType")));
@property (readonly) id<THETACKotlinKType> reifiedType __attribute__((swift_name("reifiedType")));
@property (readonly) id<THETACKotlinKClass> type __attribute__((swift_name("type")));
@end

__attribute__((swift_name("Ktor_client_coreHttpRequest")))
@protocol THETACKtor_client_coreHttpRequest <THETACKtor_httpHttpMessage, THETACKotlinx_coroutines_coreCoroutineScope>
@required
@property (readonly) id<THETACKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) THETACKtor_client_coreHttpClientCall *call __attribute__((swift_name("call")));
@property (readonly) THETACKtor_httpOutgoingContent *content __attribute__((swift_name("content")));
@property (readonly) THETACKtor_httpHttpMethod *method __attribute__((swift_name("method")));
@property (readonly) THETACKtor_httpUrl *url __attribute__((swift_name("url")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsGMTDate.Companion")))
@interface THETACKtor_utilsGMTDateCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACKtor_utilsGMTDateCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) THETACKtor_utilsGMTDate *START __attribute__((swift_name("START")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsWeekDay")))
@interface THETACKtor_utilsWeekDay : THETACKotlinEnum<THETACKtor_utilsWeekDay *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) THETACKtor_utilsWeekDayCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) THETACKtor_utilsWeekDay *monday __attribute__((swift_name("monday")));
@property (class, readonly) THETACKtor_utilsWeekDay *tuesday __attribute__((swift_name("tuesday")));
@property (class, readonly) THETACKtor_utilsWeekDay *wednesday __attribute__((swift_name("wednesday")));
@property (class, readonly) THETACKtor_utilsWeekDay *thursday __attribute__((swift_name("thursday")));
@property (class, readonly) THETACKtor_utilsWeekDay *friday __attribute__((swift_name("friday")));
@property (class, readonly) THETACKtor_utilsWeekDay *saturday __attribute__((swift_name("saturday")));
@property (class, readonly) THETACKtor_utilsWeekDay *sunday __attribute__((swift_name("sunday")));
+ (THETACKotlinArray<THETACKtor_utilsWeekDay *> *)values __attribute__((swift_name("values()")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsMonth")))
@interface THETACKtor_utilsMonth : THETACKotlinEnum<THETACKtor_utilsMonth *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) THETACKtor_utilsMonthCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) THETACKtor_utilsMonth *january __attribute__((swift_name("january")));
@property (class, readonly) THETACKtor_utilsMonth *february __attribute__((swift_name("february")));
@property (class, readonly) THETACKtor_utilsMonth *march __attribute__((swift_name("march")));
@property (class, readonly) THETACKtor_utilsMonth *april __attribute__((swift_name("april")));
@property (class, readonly) THETACKtor_utilsMonth *may __attribute__((swift_name("may")));
@property (class, readonly) THETACKtor_utilsMonth *june __attribute__((swift_name("june")));
@property (class, readonly) THETACKtor_utilsMonth *july __attribute__((swift_name("july")));
@property (class, readonly) THETACKtor_utilsMonth *august __attribute__((swift_name("august")));
@property (class, readonly) THETACKtor_utilsMonth *september __attribute__((swift_name("september")));
@property (class, readonly) THETACKtor_utilsMonth *october __attribute__((swift_name("october")));
@property (class, readonly) THETACKtor_utilsMonth *november __attribute__((swift_name("november")));
@property (class, readonly) THETACKtor_utilsMonth *december __attribute__((swift_name("december")));
+ (THETACKotlinArray<THETACKtor_utilsMonth *> *)values __attribute__((swift_name("values()")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpStatusCode.Companion")))
@interface THETACKtor_httpHttpStatusCodeCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACKtor_httpHttpStatusCodeCompanion *shared __attribute__((swift_name("shared")));
- (THETACKtor_httpHttpStatusCode *)fromValueValue:(int32_t)value __attribute__((swift_name("fromValue(value:)")));
@property (readonly) THETACKtor_httpHttpStatusCode *Accepted __attribute__((swift_name("Accepted")));
@property (readonly) THETACKtor_httpHttpStatusCode *BadGateway __attribute__((swift_name("BadGateway")));
@property (readonly) THETACKtor_httpHttpStatusCode *BadRequest __attribute__((swift_name("BadRequest")));
@property (readonly) THETACKtor_httpHttpStatusCode *Conflict __attribute__((swift_name("Conflict")));
@property (readonly) THETACKtor_httpHttpStatusCode *Continue __attribute__((swift_name("Continue")));
@property (readonly) THETACKtor_httpHttpStatusCode *Created __attribute__((swift_name("Created")));
@property (readonly) THETACKtor_httpHttpStatusCode *ExpectationFailed __attribute__((swift_name("ExpectationFailed")));
@property (readonly) THETACKtor_httpHttpStatusCode *FailedDependency __attribute__((swift_name("FailedDependency")));
@property (readonly) THETACKtor_httpHttpStatusCode *Forbidden __attribute__((swift_name("Forbidden")));
@property (readonly) THETACKtor_httpHttpStatusCode *Found __attribute__((swift_name("Found")));
@property (readonly) THETACKtor_httpHttpStatusCode *GatewayTimeout __attribute__((swift_name("GatewayTimeout")));
@property (readonly) THETACKtor_httpHttpStatusCode *Gone __attribute__((swift_name("Gone")));
@property (readonly) THETACKtor_httpHttpStatusCode *InsufficientStorage __attribute__((swift_name("InsufficientStorage")));
@property (readonly) THETACKtor_httpHttpStatusCode *InternalServerError __attribute__((swift_name("InternalServerError")));
@property (readonly) THETACKtor_httpHttpStatusCode *LengthRequired __attribute__((swift_name("LengthRequired")));
@property (readonly) THETACKtor_httpHttpStatusCode *Locked __attribute__((swift_name("Locked")));
@property (readonly) THETACKtor_httpHttpStatusCode *MethodNotAllowed __attribute__((swift_name("MethodNotAllowed")));
@property (readonly) THETACKtor_httpHttpStatusCode *MovedPermanently __attribute__((swift_name("MovedPermanently")));
@property (readonly) THETACKtor_httpHttpStatusCode *MultiStatus __attribute__((swift_name("MultiStatus")));
@property (readonly) THETACKtor_httpHttpStatusCode *MultipleChoices __attribute__((swift_name("MultipleChoices")));
@property (readonly) THETACKtor_httpHttpStatusCode *NoContent __attribute__((swift_name("NoContent")));
@property (readonly) THETACKtor_httpHttpStatusCode *NonAuthoritativeInformation __attribute__((swift_name("NonAuthoritativeInformation")));
@property (readonly) THETACKtor_httpHttpStatusCode *NotAcceptable __attribute__((swift_name("NotAcceptable")));
@property (readonly) THETACKtor_httpHttpStatusCode *NotFound __attribute__((swift_name("NotFound")));
@property (readonly) THETACKtor_httpHttpStatusCode *NotImplemented __attribute__((swift_name("NotImplemented")));
@property (readonly) THETACKtor_httpHttpStatusCode *NotModified __attribute__((swift_name("NotModified")));
@property (readonly) THETACKtor_httpHttpStatusCode *OK __attribute__((swift_name("OK")));
@property (readonly) THETACKtor_httpHttpStatusCode *PartialContent __attribute__((swift_name("PartialContent")));
@property (readonly) THETACKtor_httpHttpStatusCode *PayloadTooLarge __attribute__((swift_name("PayloadTooLarge")));
@property (readonly) THETACKtor_httpHttpStatusCode *PaymentRequired __attribute__((swift_name("PaymentRequired")));
@property (readonly) THETACKtor_httpHttpStatusCode *PermanentRedirect __attribute__((swift_name("PermanentRedirect")));
@property (readonly) THETACKtor_httpHttpStatusCode *PreconditionFailed __attribute__((swift_name("PreconditionFailed")));
@property (readonly) THETACKtor_httpHttpStatusCode *Processing __attribute__((swift_name("Processing")));
@property (readonly) THETACKtor_httpHttpStatusCode *ProxyAuthenticationRequired __attribute__((swift_name("ProxyAuthenticationRequired")));
@property (readonly) THETACKtor_httpHttpStatusCode *RequestHeaderFieldTooLarge __attribute__((swift_name("RequestHeaderFieldTooLarge")));
@property (readonly) THETACKtor_httpHttpStatusCode *RequestTimeout __attribute__((swift_name("RequestTimeout")));
@property (readonly) THETACKtor_httpHttpStatusCode *RequestURITooLong __attribute__((swift_name("RequestURITooLong")));
@property (readonly) THETACKtor_httpHttpStatusCode *RequestedRangeNotSatisfiable __attribute__((swift_name("RequestedRangeNotSatisfiable")));
@property (readonly) THETACKtor_httpHttpStatusCode *ResetContent __attribute__((swift_name("ResetContent")));
@property (readonly) THETACKtor_httpHttpStatusCode *SeeOther __attribute__((swift_name("SeeOther")));
@property (readonly) THETACKtor_httpHttpStatusCode *ServiceUnavailable __attribute__((swift_name("ServiceUnavailable")));
@property (readonly) THETACKtor_httpHttpStatusCode *SwitchProxy __attribute__((swift_name("SwitchProxy")));
@property (readonly) THETACKtor_httpHttpStatusCode *SwitchingProtocols __attribute__((swift_name("SwitchingProtocols")));
@property (readonly) THETACKtor_httpHttpStatusCode *TemporaryRedirect __attribute__((swift_name("TemporaryRedirect")));
@property (readonly) THETACKtor_httpHttpStatusCode *TooManyRequests __attribute__((swift_name("TooManyRequests")));
@property (readonly) THETACKtor_httpHttpStatusCode *Unauthorized __attribute__((swift_name("Unauthorized")));
@property (readonly) THETACKtor_httpHttpStatusCode *UnprocessableEntity __attribute__((swift_name("UnprocessableEntity")));
@property (readonly) THETACKtor_httpHttpStatusCode *UnsupportedMediaType __attribute__((swift_name("UnsupportedMediaType")));
@property (readonly) THETACKtor_httpHttpStatusCode *UpgradeRequired __attribute__((swift_name("UpgradeRequired")));
@property (readonly) THETACKtor_httpHttpStatusCode *UseProxy __attribute__((swift_name("UseProxy")));
@property (readonly) THETACKtor_httpHttpStatusCode *VariantAlsoNegotiates __attribute__((swift_name("VariantAlsoNegotiates")));
@property (readonly) THETACKtor_httpHttpStatusCode *VersionNotSupported __attribute__((swift_name("VersionNotSupported")));
@property (readonly) NSArray<THETACKtor_httpHttpStatusCode *> *allStatusCodes __attribute__((swift_name("allStatusCodes")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpProtocolVersion.Companion")))
@interface THETACKtor_httpHttpProtocolVersionCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACKtor_httpHttpProtocolVersionCompanion *shared __attribute__((swift_name("shared")));
- (THETACKtor_httpHttpProtocolVersion *)fromValueName:(NSString *)name major:(int32_t)major minor:(int32_t)minor __attribute__((swift_name("fromValue(name:major:minor:)")));
- (THETACKtor_httpHttpProtocolVersion *)parseValue:(id)value __attribute__((swift_name("parse(value:)")));
@property (readonly) THETACKtor_httpHttpProtocolVersion *HTTP_1_0 __attribute__((swift_name("HTTP_1_0")));
@property (readonly) THETACKtor_httpHttpProtocolVersion *HTTP_1_1 __attribute__((swift_name("HTTP_1_1")));
@property (readonly) THETACKtor_httpHttpProtocolVersion *HTTP_2_0 __attribute__((swift_name("HTTP_2_0")));
@property (readonly) THETACKtor_httpHttpProtocolVersion *QUIC __attribute__((swift_name("QUIC")));
@property (readonly) THETACKtor_httpHttpProtocolVersion *SPDY_3 __attribute__((swift_name("SPDY_3")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinAbstractCoroutineContextElement")))
@interface THETACKotlinAbstractCoroutineContextElement : THETACBase <THETACKotlinCoroutineContextElement>
- (instancetype)initWithKey:(id<THETACKotlinCoroutineContextKey>)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer));
@property (readonly) id<THETACKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinContinuationInterceptor")))
@protocol THETACKotlinContinuationInterceptor <THETACKotlinCoroutineContextElement>
@required
- (id<THETACKotlinContinuation>)interceptContinuationContinuation:(id<THETACKotlinContinuation>)continuation __attribute__((swift_name("interceptContinuation(continuation:)")));
- (void)releaseInterceptedContinuationContinuation:(id<THETACKotlinContinuation>)continuation __attribute__((swift_name("releaseInterceptedContinuation(continuation:)")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineDispatcher")))
@interface THETACKotlinx_coroutines_coreCoroutineDispatcher : THETACKotlinAbstractCoroutineContextElement <THETACKotlinContinuationInterceptor>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithKey:(id<THETACKotlinCoroutineContextKey>)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) THETACKotlinx_coroutines_coreCoroutineDispatcherKey *companion __attribute__((swift_name("companion")));
- (void)dispatchContext:(id<THETACKotlinCoroutineContext>)context block:(id<THETACKotlinx_coroutines_coreRunnable>)block __attribute__((swift_name("dispatch(context:block:)")));
- (void)dispatchYieldContext:(id<THETACKotlinCoroutineContext>)context block:(id<THETACKotlinx_coroutines_coreRunnable>)block __attribute__((swift_name("dispatchYield(context:block:)")));
- (id<THETACKotlinContinuation>)interceptContinuationContinuation:(id<THETACKotlinContinuation>)continuation __attribute__((swift_name("interceptContinuation(continuation:)")));
- (BOOL)isDispatchNeededContext:(id<THETACKotlinCoroutineContext>)context __attribute__((swift_name("isDispatchNeeded(context:)")));

/**
 * @note annotations
 *   kotlinx.coroutines.ExperimentalCoroutinesApi
*/
- (THETACKotlinx_coroutines_coreCoroutineDispatcher *)limitedParallelismParallelism:(int32_t)parallelism __attribute__((swift_name("limitedParallelism(parallelism:)")));
- (THETACKotlinx_coroutines_coreCoroutineDispatcher *)plusOther:(THETACKotlinx_coroutines_coreCoroutineDispatcher *)other __attribute__((swift_name("plus(other:)"))) __attribute__((unavailable("Operator '+' on two CoroutineDispatcher objects is meaningless. CoroutineDispatcher is a coroutine context element and `+` is a set-sum operator for coroutine contexts. The dispatcher to the right of `+` just replaces the dispatcher to the left.")));
- (void)releaseInterceptedContinuationContinuation:(id<THETACKotlinContinuation>)continuation __attribute__((swift_name("releaseInterceptedContinuation(continuation:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreProxyConfig")))
@interface THETACKtor_client_coreProxyConfig : THETACBase
- (instancetype)initWithUrl:(THETACKtor_httpUrl *)url __attribute__((swift_name("init(url:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) THETACKtor_httpUrl *url __attribute__((swift_name("url")));
@end

__attribute__((swift_name("Ktor_client_coreHttpClientPlugin")))
@protocol THETACKtor_client_coreHttpClientPlugin
@required
- (void)installPlugin:(id)plugin scope:(THETACKtor_client_coreHttpClient *)scope __attribute__((swift_name("install(plugin:scope:)")));
- (id)prepareBlock:(void (^)(id))block __attribute__((swift_name("prepare(block:)")));
@property (readonly) THETACKtor_utilsAttributeKey<id> *key __attribute__((swift_name("key")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsAttributeKey")))
@interface THETACKtor_utilsAttributeKey<T> : THETACBase
- (instancetype)initWithName:(NSString *)name __attribute__((swift_name("init(name:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((swift_name("Ktor_eventsEventDefinition")))
@interface THETACKtor_eventsEventDefinition<T> : THETACBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreDisposableHandle")))
@protocol THETACKotlinx_coroutines_coreDisposableHandle
@required
- (void)dispose __attribute__((swift_name("dispose()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsPipelinePhase")))
@interface THETACKtor_utilsPipelinePhase : THETACBase
- (instancetype)initWithName:(NSString *)name __attribute__((swift_name("init(name:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((swift_name("KotlinSuspendFunction2")))
@protocol THETACKotlinSuspendFunction2 <THETACKotlinFunction>
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeP1:(id _Nullable)p1 p2:(id _Nullable)p2 completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(p1:p2:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpReceivePipeline.Phases")))
@interface THETACKtor_client_coreHttpReceivePipelinePhases : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACKtor_client_coreHttpReceivePipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) THETACKtor_utilsPipelinePhase *After __attribute__((swift_name("After")));
@property (readonly) THETACKtor_utilsPipelinePhase *Before __attribute__((swift_name("Before")));
@property (readonly) THETACKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinUnit")))
@interface THETACKotlinUnit : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)unit __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACKotlinUnit *shared __attribute__((swift_name("shared")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestPipeline.Phases")))
@interface THETACKtor_client_coreHttpRequestPipelinePhases : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACKtor_client_coreHttpRequestPipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) THETACKtor_utilsPipelinePhase *Before __attribute__((swift_name("Before")));
@property (readonly) THETACKtor_utilsPipelinePhase *Render __attribute__((swift_name("Render")));
@property (readonly) THETACKtor_utilsPipelinePhase *Send __attribute__((swift_name("Send")));
@property (readonly) THETACKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@property (readonly) THETACKtor_utilsPipelinePhase *Transform __attribute__((swift_name("Transform")));
@end

__attribute__((swift_name("Ktor_httpHttpMessageBuilder")))
@protocol THETACKtor_httpHttpMessageBuilder
@required
@property (readonly) THETACKtor_httpHeadersBuilder *headers __attribute__((swift_name("headers")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestBuilder")))
@interface THETACKtor_client_coreHttpRequestBuilder : THETACBase <THETACKtor_httpHttpMessageBuilder>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) THETACKtor_client_coreHttpRequestBuilderCompanion *companion __attribute__((swift_name("companion")));
- (THETACKtor_client_coreHttpRequestData *)build __attribute__((swift_name("build()")));
- (id _Nullable)getCapabilityOrNullKey:(id<THETACKtor_client_coreHttpClientEngineCapability>)key __attribute__((swift_name("getCapabilityOrNull(key:)")));
- (void)setAttributesBlock:(void (^)(id<THETACKtor_utilsAttributes>))block __attribute__((swift_name("setAttributes(block:)")));
- (void)setCapabilityKey:(id<THETACKtor_client_coreHttpClientEngineCapability>)key capability:(id)capability __attribute__((swift_name("setCapability(key:capability:)")));
- (THETACKtor_client_coreHttpRequestBuilder *)takeFromBuilder:(THETACKtor_client_coreHttpRequestBuilder *)builder __attribute__((swift_name("takeFrom(builder:)")));
- (THETACKtor_client_coreHttpRequestBuilder *)takeFromWithExecutionContextBuilder:(THETACKtor_client_coreHttpRequestBuilder *)builder __attribute__((swift_name("takeFromWithExecutionContext(builder:)")));
- (void)urlBlock:(void (^)(THETACKtor_httpURLBuilder *, THETACKtor_httpURLBuilder *))block __attribute__((swift_name("url(block:)")));
@property (readonly) id<THETACKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property id body __attribute__((swift_name("body")));
@property THETACKtor_utilsTypeInfo * _Nullable bodyType __attribute__((swift_name("bodyType")));
@property (readonly) id<THETACKotlinx_coroutines_coreJob> executionContext __attribute__((swift_name("executionContext")));
@property (readonly) THETACKtor_httpHeadersBuilder *headers __attribute__((swift_name("headers")));
@property THETACKtor_httpHttpMethod *method __attribute__((swift_name("method")));
@property (readonly) THETACKtor_httpURLBuilder *url __attribute__((swift_name("url")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponsePipeline.Phases")))
@interface THETACKtor_client_coreHttpResponsePipelinePhases : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACKtor_client_coreHttpResponsePipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) THETACKtor_utilsPipelinePhase *After __attribute__((swift_name("After")));
@property (readonly) THETACKtor_utilsPipelinePhase *Parse __attribute__((swift_name("Parse")));
@property (readonly) THETACKtor_utilsPipelinePhase *Receive __attribute__((swift_name("Receive")));
@property (readonly) THETACKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@property (readonly) THETACKtor_utilsPipelinePhase *Transform __attribute__((swift_name("Transform")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponseContainer")))
@interface THETACKtor_client_coreHttpResponseContainer : THETACBase
- (instancetype)initWithExpectedType:(THETACKtor_utilsTypeInfo *)expectedType response:(id)response __attribute__((swift_name("init(expectedType:response:)"))) __attribute__((objc_designated_initializer));
- (THETACKtor_utilsTypeInfo *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (id)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACKtor_client_coreHttpResponseContainer *)doCopyExpectedType:(THETACKtor_utilsTypeInfo *)expectedType response:(id)response __attribute__((swift_name("doCopy(expectedType:response:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) THETACKtor_utilsTypeInfo *expectedType __attribute__((swift_name("expectedType")));
@property (readonly) id response __attribute__((swift_name("response")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpSendPipeline.Phases")))
@interface THETACKtor_client_coreHttpSendPipelinePhases : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACKtor_client_coreHttpSendPipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) THETACKtor_utilsPipelinePhase *Before __attribute__((swift_name("Before")));
@property (readonly) THETACKtor_utilsPipelinePhase *Engine __attribute__((swift_name("Engine")));
@property (readonly) THETACKtor_utilsPipelinePhase *Monitoring __attribute__((swift_name("Monitoring")));
@property (readonly) THETACKtor_utilsPipelinePhase *Receive __attribute__((swift_name("Receive")));
@property (readonly) THETACKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("Kotlinx_serialization_coreSerializersModuleCollector")))
@protocol THETACKotlinx_serialization_coreSerializersModuleCollector
@required
- (void)contextualKClass:(id<THETACKotlinKClass>)kClass provider:(id<THETACKotlinx_serialization_coreKSerializer> (^)(NSArray<id<THETACKotlinx_serialization_coreKSerializer>> *))provider __attribute__((swift_name("contextual(kClass:provider:)")));
- (void)contextualKClass:(id<THETACKotlinKClass>)kClass serializer:(id<THETACKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("contextual(kClass:serializer:)")));
- (void)polymorphicBaseClass:(id<THETACKotlinKClass>)baseClass actualClass:(id<THETACKotlinKClass>)actualClass actualSerializer:(id<THETACKotlinx_serialization_coreKSerializer>)actualSerializer __attribute__((swift_name("polymorphic(baseClass:actualClass:actualSerializer:)")));
- (void)polymorphicDefaultBaseClass:(id<THETACKotlinKClass>)baseClass defaultDeserializerProvider:(id<THETACKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefault(baseClass:defaultDeserializerProvider:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)polymorphicDefaultDeserializerBaseClass:(id<THETACKotlinKClass>)baseClass defaultDeserializerProvider:(id<THETACKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefaultDeserializer(baseClass:defaultDeserializerProvider:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)polymorphicDefaultSerializerBaseClass:(id<THETACKotlinKClass>)baseClass defaultSerializerProvider:(id<THETACKotlinx_serialization_coreSerializationStrategy> _Nullable (^)(id))defaultSerializerProvider __attribute__((swift_name("polymorphicDefaultSerializer(baseClass:defaultSerializerProvider:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinMatchGroup")))
@interface THETACKotlinMatchGroup : THETACBase
- (instancetype)initWithValue:(NSString *)value range:(THETACKotlinIntRange *)range __attribute__((swift_name("init(value:range:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACKotlinIntRange *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACKotlinMatchGroup *)doCopyValue:(NSString *)value range:(THETACKotlinIntRange *)range __attribute__((swift_name("doCopy(value:range:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) THETACKotlinIntRange *range __attribute__((swift_name("range")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinIntProgression.Companion")))
@interface THETACKotlinIntProgressionCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACKotlinIntProgressionCompanion *shared __attribute__((swift_name("shared")));
- (THETACKotlinIntProgression *)fromClosedRangeRangeStart:(int32_t)rangeStart rangeEnd:(int32_t)rangeEnd step:(int32_t)step __attribute__((swift_name("fromClosedRange(rangeStart:rangeEnd:step:)")));
@end

__attribute__((swift_name("KotlinIntIterator")))
@interface THETACKotlinIntIterator : THETACBase <THETACKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (THETACInt *)next_ __attribute__((swift_name("next()")));
- (int32_t)nextInt __attribute__((swift_name("nextInt()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinIntRange.Companion")))
@interface THETACKotlinIntRangeCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACKotlinIntRangeCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) THETACKotlinIntRange *EMPTY __attribute__((swift_name("EMPTY")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpUrl")))
@interface THETACKtor_httpUrl : THETACBase
@property (class, readonly, getter=companion) THETACKtor_httpUrlCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *encodedFragment __attribute__((swift_name("encodedFragment")));
@property (readonly) NSString * _Nullable encodedPassword __attribute__((swift_name("encodedPassword")));
@property (readonly) NSString *encodedPath __attribute__((swift_name("encodedPath")));
@property (readonly) NSString *encodedPathAndQuery __attribute__((swift_name("encodedPathAndQuery")));
@property (readonly) NSString *encodedQuery __attribute__((swift_name("encodedQuery")));
@property (readonly) NSString * _Nullable encodedUser __attribute__((swift_name("encodedUser")));
@property (readonly) NSString *fragment __attribute__((swift_name("fragment")));
@property (readonly) NSString *host __attribute__((swift_name("host")));
@property (readonly) id<THETACKtor_httpParameters> parameters __attribute__((swift_name("parameters")));
@property (readonly) NSString * _Nullable password __attribute__((swift_name("password")));
@property (readonly) NSArray<NSString *> *pathSegments __attribute__((swift_name("pathSegments")));
@property (readonly) int32_t port __attribute__((swift_name("port")));
@property (readonly) THETACKtor_httpURLProtocol *protocol __attribute__((swift_name("protocol")));
@property (readonly) int32_t specifiedPort __attribute__((swift_name("specifiedPort")));
@property (readonly) BOOL trailingQuery __attribute__((swift_name("trailingQuery")));
@property (readonly) NSString * _Nullable user __attribute__((swift_name("user")));
@end

__attribute__((swift_name("Ktor_httpOutgoingContent")))
@interface THETACKtor_httpOutgoingContent : THETACBase
- (id _Nullable)getPropertyKey:(THETACKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("getProperty(key:)")));
- (void)setPropertyKey:(THETACKtor_utilsAttributeKey<id> *)key value:(id _Nullable)value __attribute__((swift_name("setProperty(key:value:)")));
- (id<THETACKtor_httpHeaders> _Nullable)trailers __attribute__((swift_name("trailers()")));
@property (readonly) THETACLong * _Nullable contentLength __attribute__((swift_name("contentLength")));
@property (readonly) THETACKtor_httpContentType * _Nullable contentType __attribute__((swift_name("contentType")));
@property (readonly) id<THETACKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@property (readonly) THETACKtor_httpHttpStatusCode * _Nullable status __attribute__((swift_name("status")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreJob")))
@protocol THETACKotlinx_coroutines_coreJob <THETACKotlinCoroutineContextElement>
@required
- (id<THETACKotlinx_coroutines_coreChildHandle>)attachChildChild:(id<THETACKotlinx_coroutines_coreChildJob>)child __attribute__((swift_name("attachChild(child:)")));
- (void)cancelCause_:(THETACKotlinCancellationException * _Nullable)cause __attribute__((swift_name("cancel(cause_:)")));
- (THETACKotlinCancellationException *)getCancellationException __attribute__((swift_name("getCancellationException()")));
- (id<THETACKotlinx_coroutines_coreDisposableHandle>)invokeOnCompletionOnCancelling:(BOOL)onCancelling invokeImmediately:(BOOL)invokeImmediately handler:(void (^)(THETACKotlinThrowable * _Nullable))handler __attribute__((swift_name("invokeOnCompletion(onCancelling:invokeImmediately:handler:)")));
- (id<THETACKotlinx_coroutines_coreDisposableHandle>)invokeOnCompletionHandler:(void (^)(THETACKotlinThrowable * _Nullable))handler __attribute__((swift_name("invokeOnCompletion(handler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)joinWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("join(completionHandler:)")));
- (id<THETACKotlinx_coroutines_coreJob>)plusOther_:(id<THETACKotlinx_coroutines_coreJob>)other __attribute__((swift_name("plus(other_:)"))) __attribute__((unavailable("Operator '+' on two Job objects is meaningless. Job is a coroutine context element and `+` is a set-sum operator for coroutine contexts. The job to the right of `+` just replaces the job the left of `+`.")));
- (BOOL)start_ __attribute__((swift_name("start()")));
@property (readonly) id<THETACKotlinSequence> children __attribute__((swift_name("children")));
@property (readonly) BOOL isActive __attribute__((swift_name("isActive")));
@property (readonly) BOOL isCancelled __attribute__((swift_name("isCancelled")));
@property (readonly) BOOL isCompleted __attribute__((swift_name("isCompleted")));
@property (readonly) id<THETACKotlinx_coroutines_coreSelectClause0> onJoin __attribute__((swift_name("onJoin")));
@end

__attribute__((swift_name("KotlinKType")))
@protocol THETACKotlinKType
@required

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
@property (readonly) NSArray<THETACKotlinKTypeProjection *> *arguments __attribute__((swift_name("arguments")));

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
@property (readonly) id<THETACKotlinKClassifier> _Nullable classifier __attribute__((swift_name("classifier")));
@property (readonly) BOOL isMarkedNullable __attribute__((swift_name("isMarkedNullable")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsWeekDay.Companion")))
@interface THETACKtor_utilsWeekDayCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACKtor_utilsWeekDayCompanion *shared __attribute__((swift_name("shared")));
- (THETACKtor_utilsWeekDay *)fromOrdinal:(int32_t)ordinal __attribute__((swift_name("from(ordinal:)")));
- (THETACKtor_utilsWeekDay *)fromValue:(NSString *)value __attribute__((swift_name("from(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsMonth.Companion")))
@interface THETACKtor_utilsMonthCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACKtor_utilsMonthCompanion *shared __attribute__((swift_name("shared")));
- (THETACKtor_utilsMonth *)fromOrdinal:(int32_t)ordinal __attribute__((swift_name("from(ordinal:)")));
- (THETACKtor_utilsMonth *)fromValue:(NSString *)value __attribute__((swift_name("from(value:)")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinContinuation")))
@protocol THETACKotlinContinuation
@required
- (void)resumeWithResult:(id _Nullable)result __attribute__((swift_name("resumeWith(result:)")));
@property (readonly) id<THETACKotlinCoroutineContext> context __attribute__((swift_name("context")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
 *   kotlin.ExperimentalStdlibApi
*/
__attribute__((swift_name("KotlinAbstractCoroutineContextKey")))
@interface THETACKotlinAbstractCoroutineContextKey<B, E> : THETACBase <THETACKotlinCoroutineContextKey>
- (instancetype)initWithBaseKey:(id<THETACKotlinCoroutineContextKey>)baseKey safeCast:(E _Nullable (^)(id<THETACKotlinCoroutineContextElement>))safeCast __attribute__((swift_name("init(baseKey:safeCast:)"))) __attribute__((objc_designated_initializer));
@end


/**
 * @note annotations
 *   kotlin.ExperimentalStdlibApi
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineDispatcher.Key")))
@interface THETACKotlinx_coroutines_coreCoroutineDispatcherKey : THETACKotlinAbstractCoroutineContextKey<id<THETACKotlinContinuationInterceptor>, THETACKotlinx_coroutines_coreCoroutineDispatcher *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithBaseKey:(id<THETACKotlinCoroutineContextKey>)baseKey safeCast:(id<THETACKotlinCoroutineContextElement> _Nullable (^)(id<THETACKotlinCoroutineContextElement>))safeCast __attribute__((swift_name("init(baseKey:safeCast:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)key __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACKotlinx_coroutines_coreCoroutineDispatcherKey *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreRunnable")))
@protocol THETACKotlinx_coroutines_coreRunnable
@required
- (void)run __attribute__((swift_name("run()")));
@end

__attribute__((swift_name("Ktor_utilsStringValuesBuilder")))
@protocol THETACKtor_utilsStringValuesBuilder
@required
- (void)appendName:(NSString *)name value:(NSString *)value __attribute__((swift_name("append(name:value:)")));
- (void)appendAllStringValues:(id<THETACKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendAll(stringValues:)")));
- (void)appendAllName:(NSString *)name values:(id)values __attribute__((swift_name("appendAll(name:values:)")));
- (void)appendMissingStringValues:(id<THETACKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendMissing(stringValues:)")));
- (void)appendMissingName:(NSString *)name values:(id)values __attribute__((swift_name("appendMissing(name:values:)")));
- (id<THETACKtor_utilsStringValues>)build __attribute__((swift_name("build()")));
- (void)clear __attribute__((swift_name("clear()")));
- (BOOL)containsName:(NSString *)name __attribute__((swift_name("contains(name:)")));
- (BOOL)containsName:(NSString *)name value:(NSString *)value __attribute__((swift_name("contains(name:value:)")));
- (NSSet<id<THETACKotlinMapEntry>> *)entries __attribute__((swift_name("entries()")));
- (NSString * _Nullable)getName:(NSString *)name __attribute__((swift_name("get(name:)")));
- (NSArray<NSString *> * _Nullable)getAllName:(NSString *)name __attribute__((swift_name("getAll(name:)")));
- (BOOL)isEmpty __attribute__((swift_name("isEmpty()")));
- (NSSet<NSString *> *)names __attribute__((swift_name("names()")));
- (void)removeName:(NSString *)name __attribute__((swift_name("remove(name:)")));
- (BOOL)removeName:(NSString *)name value:(NSString *)value __attribute__((swift_name("remove(name:value:)")));
- (void)removeKeysWithNoEntries __attribute__((swift_name("removeKeysWithNoEntries()")));
- (void)setName:(NSString *)name value:(NSString *)value __attribute__((swift_name("set(name:value:)")));
@property (readonly) BOOL caseInsensitiveName __attribute__((swift_name("caseInsensitiveName")));
@end

__attribute__((swift_name("Ktor_utilsStringValuesBuilderImpl")))
@interface THETACKtor_utilsStringValuesBuilderImpl : THETACBase <THETACKtor_utilsStringValuesBuilder>
- (instancetype)initWithCaseInsensitiveName:(BOOL)caseInsensitiveName size:(int32_t)size __attribute__((swift_name("init(caseInsensitiveName:size:)"))) __attribute__((objc_designated_initializer));
- (void)appendName:(NSString *)name value:(NSString *)value __attribute__((swift_name("append(name:value:)")));
- (void)appendAllStringValues:(id<THETACKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendAll(stringValues:)")));
- (void)appendAllName:(NSString *)name values:(id)values __attribute__((swift_name("appendAll(name:values:)")));
- (void)appendMissingStringValues:(id<THETACKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendMissing(stringValues:)")));
- (void)appendMissingName:(NSString *)name values:(id)values __attribute__((swift_name("appendMissing(name:values:)")));
- (id<THETACKtor_utilsStringValues>)build __attribute__((swift_name("build()")));
- (void)clear __attribute__((swift_name("clear()")));
- (BOOL)containsName:(NSString *)name __attribute__((swift_name("contains(name:)")));
- (BOOL)containsName:(NSString *)name value:(NSString *)value __attribute__((swift_name("contains(name:value:)")));
- (NSSet<id<THETACKotlinMapEntry>> *)entries __attribute__((swift_name("entries()")));
- (NSString * _Nullable)getName:(NSString *)name __attribute__((swift_name("get(name:)")));
- (NSArray<NSString *> * _Nullable)getAllName:(NSString *)name __attribute__((swift_name("getAll(name:)")));
- (BOOL)isEmpty __attribute__((swift_name("isEmpty()")));
- (NSSet<NSString *> *)names __attribute__((swift_name("names()")));
- (void)removeName:(NSString *)name __attribute__((swift_name("remove(name:)")));
- (BOOL)removeName:(NSString *)name value:(NSString *)value __attribute__((swift_name("remove(name:value:)")));
- (void)removeKeysWithNoEntries __attribute__((swift_name("removeKeysWithNoEntries()")));
- (void)setName:(NSString *)name value:(NSString *)value __attribute__((swift_name("set(name:value:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)validateNameName:(NSString *)name __attribute__((swift_name("validateName(name:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)validateValueValue:(NSString *)value __attribute__((swift_name("validateValue(value:)")));
@property (readonly) BOOL caseInsensitiveName __attribute__((swift_name("caseInsensitiveName")));
@property (readonly) THETACMutableDictionary<NSString *, NSMutableArray<NSString *> *> *values __attribute__((swift_name("values")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHeadersBuilder")))
@interface THETACKtor_httpHeadersBuilder : THETACKtor_utilsStringValuesBuilderImpl
- (instancetype)initWithSize:(int32_t)size __attribute__((swift_name("init(size:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCaseInsensitiveName:(BOOL)caseInsensitiveName size:(int32_t)size __attribute__((swift_name("init(caseInsensitiveName:size:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (id<THETACKtor_httpHeaders>)build __attribute__((swift_name("build()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)validateNameName:(NSString *)name __attribute__((swift_name("validateName(name:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)validateValueValue:(NSString *)value __attribute__((swift_name("validateValue(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestBuilder.Companion")))
@interface THETACKtor_client_coreHttpRequestBuilderCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACKtor_client_coreHttpRequestBuilderCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLBuilder")))
@interface THETACKtor_httpURLBuilder : THETACBase
- (instancetype)initWithProtocol:(THETACKtor_httpURLProtocol *)protocol host:(NSString *)host port:(int32_t)port user:(NSString * _Nullable)user password:(NSString * _Nullable)password pathSegments:(NSArray<NSString *> *)pathSegments parameters:(id<THETACKtor_httpParameters>)parameters fragment:(NSString *)fragment trailingQuery:(BOOL)trailingQuery __attribute__((swift_name("init(protocol:host:port:user:password:pathSegments:parameters:fragment:trailingQuery:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) THETACKtor_httpURLBuilderCompanion *companion __attribute__((swift_name("companion")));
- (THETACKtor_httpUrl *)build __attribute__((swift_name("build()")));
- (NSString *)buildString __attribute__((swift_name("buildString()")));
@property NSString *encodedFragment __attribute__((swift_name("encodedFragment")));
@property id<THETACKtor_httpParametersBuilder> encodedParameters __attribute__((swift_name("encodedParameters")));
@property NSString * _Nullable encodedPassword __attribute__((swift_name("encodedPassword")));
@property NSArray<NSString *> *encodedPathSegments __attribute__((swift_name("encodedPathSegments")));
@property NSString * _Nullable encodedUser __attribute__((swift_name("encodedUser")));
@property NSString *fragment __attribute__((swift_name("fragment")));
@property NSString *host __attribute__((swift_name("host")));
@property (readonly) id<THETACKtor_httpParametersBuilder> parameters __attribute__((swift_name("parameters")));
@property NSString * _Nullable password __attribute__((swift_name("password")));
@property NSArray<NSString *> *pathSegments __attribute__((swift_name("pathSegments")));
@property int32_t port __attribute__((swift_name("port")));
@property THETACKtor_httpURLProtocol *protocol __attribute__((swift_name("protocol")));
@property BOOL trailingQuery __attribute__((swift_name("trailingQuery")));
@property NSString * _Nullable user __attribute__((swift_name("user")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpUrl.Companion")))
@interface THETACKtor_httpUrlCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACKtor_httpUrlCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("Ktor_httpParameters")))
@protocol THETACKtor_httpParameters <THETACKtor_utilsStringValues>
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLProtocol")))
@interface THETACKtor_httpURLProtocol : THETACBase
- (instancetype)initWithName:(NSString *)name defaultPort:(int32_t)defaultPort __attribute__((swift_name("init(name:defaultPort:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) THETACKtor_httpURLProtocolCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (int32_t)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACKtor_httpURLProtocol *)doCopyName:(NSString *)name defaultPort:(int32_t)defaultPort __attribute__((swift_name("doCopy(name:defaultPort:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t defaultPort __attribute__((swift_name("defaultPort")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((swift_name("Ktor_httpHeaderValueWithParameters")))
@interface THETACKtor_httpHeaderValueWithParameters : THETACBase
- (instancetype)initWithContent:(NSString *)content parameters:(NSArray<THETACKtor_httpHeaderValueParam *> *)parameters __attribute__((swift_name("init(content:parameters:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) THETACKtor_httpHeaderValueWithParametersCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)parameterName:(NSString *)name __attribute__((swift_name("parameter(name:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *content __attribute__((swift_name("content")));
@property (readonly) NSArray<THETACKtor_httpHeaderValueParam *> *parameters __attribute__((swift_name("parameters")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpContentType")))
@interface THETACKtor_httpContentType : THETACKtor_httpHeaderValueWithParameters
- (instancetype)initWithContentType:(NSString *)contentType contentSubtype:(NSString *)contentSubtype parameters:(NSArray<THETACKtor_httpHeaderValueParam *> *)parameters __attribute__((swift_name("init(contentType:contentSubtype:parameters:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithContent:(NSString *)content parameters:(NSArray<THETACKtor_httpHeaderValueParam *> *)parameters __attribute__((swift_name("init(content:parameters:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) THETACKtor_httpContentTypeCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)matchPattern:(THETACKtor_httpContentType *)pattern __attribute__((swift_name("match(pattern:)")));
- (BOOL)matchPattern_:(NSString *)pattern __attribute__((swift_name("match(pattern_:)")));
- (THETACKtor_httpContentType *)withParameterName:(NSString *)name value:(NSString *)value __attribute__((swift_name("withParameter(name:value:)")));
- (THETACKtor_httpContentType *)withoutParameters __attribute__((swift_name("withoutParameters()")));
@property (readonly) NSString *contentSubtype __attribute__((swift_name("contentSubtype")));
@property (readonly) NSString *contentType __attribute__((swift_name("contentType")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreChildHandle")))
@protocol THETACKotlinx_coroutines_coreChildHandle <THETACKotlinx_coroutines_coreDisposableHandle>
@required
- (BOOL)childCancelledCause:(THETACKotlinThrowable *)cause __attribute__((swift_name("childCancelled(cause:)")));
@property (readonly) id<THETACKotlinx_coroutines_coreJob> _Nullable parent __attribute__((swift_name("parent")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreChildJob")))
@protocol THETACKotlinx_coroutines_coreChildJob <THETACKotlinx_coroutines_coreJob>
@required
- (void)parentCancelledParentJob:(id<THETACKotlinx_coroutines_coreParentJob>)parentJob __attribute__((swift_name("parentCancelled(parentJob:)")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreSelectClause0")))
@protocol THETACKotlinx_coroutines_coreSelectClause0
@required
- (void)registerSelectClause0Select:(id<THETACKotlinx_coroutines_coreSelectInstance>)select block:(id<THETACKotlinSuspendFunction0>)block __attribute__((swift_name("registerSelectClause0(select:block:)")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinKTypeProjection")))
@interface THETACKotlinKTypeProjection : THETACBase
- (instancetype)initWithVariance:(THETACKotlinKVariance * _Nullable)variance type:(id<THETACKotlinKType> _Nullable)type __attribute__((swift_name("init(variance:type:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) THETACKotlinKTypeProjectionCompanion *companion __attribute__((swift_name("companion")));
- (THETACKotlinKVariance * _Nullable)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (id<THETACKotlinKType> _Nullable)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACKotlinKTypeProjection *)doCopyVariance:(THETACKotlinKVariance * _Nullable)variance type:(id<THETACKotlinKType> _Nullable)type __attribute__((swift_name("doCopy(variance:type:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<THETACKotlinKType> _Nullable type __attribute__((swift_name("type")));
@property (readonly) THETACKotlinKVariance * _Nullable variance __attribute__((swift_name("variance")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLBuilder.Companion")))
@interface THETACKtor_httpURLBuilderCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACKtor_httpURLBuilderCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("Ktor_httpParametersBuilder")))
@protocol THETACKtor_httpParametersBuilder <THETACKtor_utilsStringValuesBuilder>
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLProtocol.Companion")))
@interface THETACKtor_httpURLProtocolCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACKtor_httpURLProtocolCompanion *shared __attribute__((swift_name("shared")));
- (THETACKtor_httpURLProtocol *)createOrDefaultName:(NSString *)name __attribute__((swift_name("createOrDefault(name:)")));
@property (readonly) THETACKtor_httpURLProtocol *HTTP __attribute__((swift_name("HTTP")));
@property (readonly) THETACKtor_httpURLProtocol *HTTPS __attribute__((swift_name("HTTPS")));
@property (readonly) THETACKtor_httpURLProtocol *SOCKS __attribute__((swift_name("SOCKS")));
@property (readonly) THETACKtor_httpURLProtocol *WS __attribute__((swift_name("WS")));
@property (readonly) THETACKtor_httpURLProtocol *WSS __attribute__((swift_name("WSS")));
@property (readonly) NSDictionary<NSString *, THETACKtor_httpURLProtocol *> *byName __attribute__((swift_name("byName")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHeaderValueParam")))
@interface THETACKtor_httpHeaderValueParam : THETACBase
- (instancetype)initWithName:(NSString *)name value:(NSString *)value __attribute__((swift_name("init(name:value:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithName:(NSString *)name value:(NSString *)value escapeValue:(BOOL)escapeValue __attribute__((swift_name("init(name:value:escapeValue:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (BOOL)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (THETACKtor_httpHeaderValueParam *)doCopyName:(NSString *)name value:(NSString *)value escapeValue:(BOOL)escapeValue __attribute__((swift_name("doCopy(name:value:escapeValue:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL escapeValue __attribute__((swift_name("escapeValue")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHeaderValueWithParameters.Companion")))
@interface THETACKtor_httpHeaderValueWithParametersCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACKtor_httpHeaderValueWithParametersCompanion *shared __attribute__((swift_name("shared")));
- (id _Nullable)parseValue:(NSString *)value init:(id _Nullable (^)(NSString *, NSArray<THETACKtor_httpHeaderValueParam *> *))init __attribute__((swift_name("parse(value:init:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpContentType.Companion")))
@interface THETACKtor_httpContentTypeCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACKtor_httpContentTypeCompanion *shared __attribute__((swift_name("shared")));
- (THETACKtor_httpContentType *)parseValue:(NSString *)value __attribute__((swift_name("parse(value:)")));
@property (readonly) THETACKtor_httpContentType *Any __attribute__((swift_name("Any")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreParentJob")))
@protocol THETACKotlinx_coroutines_coreParentJob <THETACKotlinx_coroutines_coreJob>
@required
- (THETACKotlinCancellationException *)getChildJobCancellationCause __attribute__((swift_name("getChildJobCancellationCause()")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreSelectInstance")))
@protocol THETACKotlinx_coroutines_coreSelectInstance
@required
- (void)disposeOnSelectHandle:(id<THETACKotlinx_coroutines_coreDisposableHandle>)handle __attribute__((swift_name("disposeOnSelect(handle:)")));
- (id _Nullable)performAtomicTrySelectDesc:(THETACKotlinx_coroutines_coreAtomicDesc *)desc __attribute__((swift_name("performAtomicTrySelect(desc:)")));
- (void)resumeSelectWithExceptionException:(THETACKotlinThrowable *)exception __attribute__((swift_name("resumeSelectWithException(exception:)")));
- (BOOL)trySelect __attribute__((swift_name("trySelect()")));
- (id _Nullable)trySelectOtherOtherOp:(THETACKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp * _Nullable)otherOp __attribute__((swift_name("trySelectOther(otherOp:)")));
@property (readonly) id<THETACKotlinContinuation> completion __attribute__((swift_name("completion")));
@property (readonly) BOOL isSelected __attribute__((swift_name("isSelected")));
@end

__attribute__((swift_name("KotlinSuspendFunction0")))
@protocol THETACKotlinSuspendFunction0 <THETACKotlinFunction>
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeWithCompletionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(completionHandler:)")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinKVariance")))
@interface THETACKotlinKVariance : THETACKotlinEnum<THETACKotlinKVariance *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) THETACKotlinKVariance *invariant __attribute__((swift_name("invariant")));
@property (class, readonly) THETACKotlinKVariance *in __attribute__((swift_name("in")));
@property (class, readonly) THETACKotlinKVariance *out __attribute__((swift_name("out")));
+ (THETACKotlinArray<THETACKotlinKVariance *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinKTypeProjection.Companion")))
@interface THETACKotlinKTypeProjectionCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACKotlinKTypeProjectionCompanion *shared __attribute__((swift_name("shared")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (THETACKotlinKTypeProjection *)contravariantType:(id<THETACKotlinKType>)type __attribute__((swift_name("contravariant(type:)")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (THETACKotlinKTypeProjection *)covariantType:(id<THETACKotlinKType>)type __attribute__((swift_name("covariant(type:)")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (THETACKotlinKTypeProjection *)invariantType:(id<THETACKotlinKType>)type __attribute__((swift_name("invariant(type:)")));
@property (readonly) THETACKotlinKTypeProjection *STAR __attribute__((swift_name("STAR")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreAtomicDesc")))
@interface THETACKotlinx_coroutines_coreAtomicDesc : THETACBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)completeOp:(THETACKotlinx_coroutines_coreAtomicOp<id> *)op failure:(id _Nullable)failure __attribute__((swift_name("complete(op:failure:)")));
- (id _Nullable)prepareOp:(THETACKotlinx_coroutines_coreAtomicOp<id> *)op __attribute__((swift_name("prepare(op:)")));
@property THETACKotlinx_coroutines_coreAtomicOp<id> *atomicOp __attribute__((swift_name("atomicOp")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreOpDescriptor")))
@interface THETACKotlinx_coroutines_coreOpDescriptor : THETACBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (BOOL)isEarlierThanThat:(THETACKotlinx_coroutines_coreOpDescriptor *)that __attribute__((swift_name("isEarlierThan(that:)")));
- (id _Nullable)performAffected:(id _Nullable)affected __attribute__((swift_name("perform(affected:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) THETACKotlinx_coroutines_coreAtomicOp<id> * _Nullable atomicOp __attribute__((swift_name("atomicOp")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_coroutines_coreLockFreeLinkedListNode.PrepareOp")))
@interface THETACKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp : THETACKotlinx_coroutines_coreOpDescriptor
- (instancetype)initWithAffected:(THETACKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(THETACKotlinx_coroutines_coreLockFreeLinkedListNode *)next desc:(THETACKotlinx_coroutines_coreLockFreeLinkedListNodeAbstractAtomicDesc *)desc __attribute__((swift_name("init(affected:next:desc:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (void)finishPrepare __attribute__((swift_name("finishPrepare()")));
- (id _Nullable)performAffected:(id _Nullable)affected __attribute__((swift_name("perform(affected:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) THETACKotlinx_coroutines_coreLockFreeLinkedListNode *affected __attribute__((swift_name("affected")));
@property (readonly) THETACKotlinx_coroutines_coreAtomicOp<id> *atomicOp __attribute__((swift_name("atomicOp")));
@property (readonly) THETACKotlinx_coroutines_coreLockFreeLinkedListNodeAbstractAtomicDesc *desc __attribute__((swift_name("desc")));
@property (readonly) THETACKotlinx_coroutines_coreLockFreeLinkedListNode *next __attribute__((swift_name("next")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreAtomicOp")))
@interface THETACKotlinx_coroutines_coreAtomicOp<__contravariant T> : THETACKotlinx_coroutines_coreOpDescriptor
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)completeAffected:(T _Nullable)affected failure:(id _Nullable)failure __attribute__((swift_name("complete(affected:failure:)")));
- (id _Nullable)decideDecision:(id _Nullable)decision __attribute__((swift_name("decide(decision:)")));
- (id _Nullable)performAffected:(id _Nullable)affected __attribute__((swift_name("perform(affected:)")));
- (id _Nullable)prepareAffected:(T _Nullable)affected __attribute__((swift_name("prepare(affected:)")));
@property (readonly) THETACKotlinx_coroutines_coreAtomicOp<id> *atomicOp __attribute__((swift_name("atomicOp")));
@property (readonly) id _Nullable consensus __attribute__((swift_name("consensus")));
@property (readonly) BOOL isDecided __attribute__((swift_name("isDecided")));
@property (readonly) int64_t opSequence __attribute__((swift_name("opSequence")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreLockFreeLinkedListNode")))
@interface THETACKotlinx_coroutines_coreLockFreeLinkedListNode : THETACBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)addLastNode:(THETACKotlinx_coroutines_coreLockFreeLinkedListNode *)node __attribute__((swift_name("addLast(node:)")));
- (BOOL)addLastIfNode:(THETACKotlinx_coroutines_coreLockFreeLinkedListNode *)node condition:(THETACBoolean *(^)(void))condition __attribute__((swift_name("addLastIf(node:condition:)")));
- (BOOL)addLastIfPrevNode:(THETACKotlinx_coroutines_coreLockFreeLinkedListNode *)node predicate:(THETACBoolean *(^)(THETACKotlinx_coroutines_coreLockFreeLinkedListNode *))predicate __attribute__((swift_name("addLastIfPrev(node:predicate:)")));
- (BOOL)addLastIfPrevAndIfNode:(THETACKotlinx_coroutines_coreLockFreeLinkedListNode *)node predicate:(THETACBoolean *(^)(THETACKotlinx_coroutines_coreLockFreeLinkedListNode *))predicate condition:(THETACBoolean *(^)(void))condition __attribute__((swift_name("addLastIfPrevAndIf(node:predicate:condition:)")));
- (BOOL)addOneIfEmptyNode:(THETACKotlinx_coroutines_coreLockFreeLinkedListNode *)node __attribute__((swift_name("addOneIfEmpty(node:)")));
- (THETACKotlinx_coroutines_coreLockFreeLinkedListNodeAddLastDesc<THETACKotlinx_coroutines_coreLockFreeLinkedListNode *> *)describeAddLastNode:(THETACKotlinx_coroutines_coreLockFreeLinkedListNode *)node __attribute__((swift_name("describeAddLast(node:)")));
- (THETACKotlinx_coroutines_coreLockFreeLinkedListNodeRemoveFirstDesc<THETACKotlinx_coroutines_coreLockFreeLinkedListNode *> *)describeRemoveFirst __attribute__((swift_name("describeRemoveFirst()")));
- (void)helpRemove __attribute__((swift_name("helpRemove()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (THETACKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable)nextIfRemoved __attribute__((swift_name("nextIfRemoved()")));
- (BOOL)remove __attribute__((swift_name("remove()")));
- (id _Nullable)removeFirstIfIsInstanceOfOrPeekIfPredicate:(THETACBoolean *(^)(id _Nullable))predicate __attribute__((swift_name("removeFirstIfIsInstanceOfOrPeekIf(predicate:)")));
- (THETACKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable)removeFirstOrNull __attribute__((swift_name("removeFirstOrNull()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL isRemoved __attribute__((swift_name("isRemoved")));
@property (readonly) id next __attribute__((swift_name("next")));
@property (readonly) THETACKotlinx_coroutines_coreLockFreeLinkedListNode *nextNode __attribute__((swift_name("nextNode")));
@property (readonly) THETACKotlinx_coroutines_coreLockFreeLinkedListNode *prevNode __attribute__((swift_name("prevNode")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreLockFreeLinkedListNode.AbstractAtomicDesc")))
@interface THETACKotlinx_coroutines_coreLockFreeLinkedListNodeAbstractAtomicDesc : THETACKotlinx_coroutines_coreAtomicDesc
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)completeOp:(THETACKotlinx_coroutines_coreAtomicOp<id> *)op failure:(id _Nullable)failure __attribute__((swift_name("complete(op:failure:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (id _Nullable)failureAffected:(THETACKotlinx_coroutines_coreLockFreeLinkedListNode *)affected __attribute__((swift_name("failure(affected:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)finishOnSuccessAffected:(THETACKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(THETACKotlinx_coroutines_coreLockFreeLinkedListNode *)next __attribute__((swift_name("finishOnSuccess(affected:next:)")));
- (void)finishPreparePrepareOp:(THETACKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp *)prepareOp __attribute__((swift_name("finishPrepare(prepareOp:)")));
- (id _Nullable)onPreparePrepareOp:(THETACKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp *)prepareOp __attribute__((swift_name("onPrepare(prepareOp:)")));
- (void)onRemovedAffected:(THETACKotlinx_coroutines_coreLockFreeLinkedListNode *)affected __attribute__((swift_name("onRemoved(affected:)")));
- (id _Nullable)prepareOp:(THETACKotlinx_coroutines_coreAtomicOp<id> *)op __attribute__((swift_name("prepare(op:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (BOOL)retryAffected:(THETACKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(id)next __attribute__((swift_name("retry(affected:next:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (THETACKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable)takeAffectedNodeOp:(THETACKotlinx_coroutines_coreOpDescriptor *)op __attribute__((swift_name("takeAffectedNode(op:)")));
- (id)updatedNextAffected:(THETACKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(THETACKotlinx_coroutines_coreLockFreeLinkedListNode *)next __attribute__((swift_name("updatedNext(affected:next:)")));
@property (readonly) THETACKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable affectedNode __attribute__((swift_name("affectedNode")));
@property (readonly) THETACKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable originalNext __attribute__((swift_name("originalNext")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreLockFreeLinkedListNodeAddLastDesc")))
@interface THETACKotlinx_coroutines_coreLockFreeLinkedListNodeAddLastDesc<T> : THETACKotlinx_coroutines_coreLockFreeLinkedListNodeAbstractAtomicDesc
- (instancetype)initWithQueue:(THETACKotlinx_coroutines_coreLockFreeLinkedListNode *)queue node:(T)node __attribute__((swift_name("init(queue:node:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)finishOnSuccessAffected:(THETACKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(THETACKotlinx_coroutines_coreLockFreeLinkedListNode *)next __attribute__((swift_name("finishOnSuccess(affected:next:)")));
- (void)finishPreparePrepareOp:(THETACKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp *)prepareOp __attribute__((swift_name("finishPrepare(prepareOp:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (BOOL)retryAffected:(THETACKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(id)next __attribute__((swift_name("retry(affected:next:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (THETACKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable)takeAffectedNodeOp:(THETACKotlinx_coroutines_coreOpDescriptor *)op __attribute__((swift_name("takeAffectedNode(op:)")));
- (id)updatedNextAffected:(THETACKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(THETACKotlinx_coroutines_coreLockFreeLinkedListNode *)next __attribute__((swift_name("updatedNext(affected:next:)")));
@property (readonly) THETACKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable affectedNode __attribute__((swift_name("affectedNode")));
@property (readonly) T node __attribute__((swift_name("node")));
@property (readonly) THETACKotlinx_coroutines_coreLockFreeLinkedListNode *originalNext __attribute__((swift_name("originalNext")));
@property (readonly) THETACKotlinx_coroutines_coreLockFreeLinkedListNode *queue __attribute__((swift_name("queue")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreLockFreeLinkedListNodeRemoveFirstDesc")))
@interface THETACKotlinx_coroutines_coreLockFreeLinkedListNodeRemoveFirstDesc<T> : THETACKotlinx_coroutines_coreLockFreeLinkedListNodeAbstractAtomicDesc
- (instancetype)initWithQueue:(THETACKotlinx_coroutines_coreLockFreeLinkedListNode *)queue __attribute__((swift_name("init(queue:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (id _Nullable)failureAffected:(THETACKotlinx_coroutines_coreLockFreeLinkedListNode *)affected __attribute__((swift_name("failure(affected:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)finishOnSuccessAffected:(THETACKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(THETACKotlinx_coroutines_coreLockFreeLinkedListNode *)next __attribute__((swift_name("finishOnSuccess(affected:next:)")));
- (void)finishPreparePrepareOp:(THETACKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp *)prepareOp __attribute__((swift_name("finishPrepare(prepareOp:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (BOOL)retryAffected:(THETACKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(id)next __attribute__((swift_name("retry(affected:next:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (THETACKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable)takeAffectedNodeOp:(THETACKotlinx_coroutines_coreOpDescriptor *)op __attribute__((swift_name("takeAffectedNode(op:)")));
- (id)updatedNextAffected:(THETACKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(THETACKotlinx_coroutines_coreLockFreeLinkedListNode *)next __attribute__((swift_name("updatedNext(affected:next:)")));
@property (readonly) THETACKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable affectedNode __attribute__((swift_name("affectedNode")));
@property (readonly) THETACKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable originalNext __attribute__((swift_name("originalNext")));
@property (readonly) THETACKotlinx_coroutines_coreLockFreeLinkedListNode *queue __attribute__((swift_name("queue")));
@property (readonly) T _Nullable result __attribute__((swift_name("result")));
@end

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
