// Copyright © 2018 650 Industries. All rights reserved.

#import <ABI36_0_0UMCore/ABI36_0_0UMExportedModule.h>
#import <ABI36_0_0UMCore/ABI36_0_0UMModuleRegistryConsumer.h>

@interface ABI36_0_0EXErrorRecoveryModule : ABI36_0_0UMExportedModule

- (NSString *)userDefaultsKey;

- (BOOL)setRecoveryProps:(NSString *)props;

- (NSString *)consumeRecoveryProps;

@end
