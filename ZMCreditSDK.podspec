Pod::Spec.new do |spec|
  spec.name             = 'ZMCreditSDK'
  spec.version          = '2.0.0'
  spec.license          = { :type => 'MIT' }
  spec.homepage         = 'http://192.168.202.61:19090/root/linewell-specs'
  spec.authors          = { 'xhuatang' => 'xhuatang@linewell.com' }
  spec.summary          = '人脸识别 SDK'
  spec.source           = { :git => 'git@192.168.202.61:root/ZMCreditSDK.git', :tag => '2.0.0' }
  spec.subspec 'ZMCreditSDKVendor' do |sss|
     sss.resource                = 'ZMCreditSDK/ZMCreditBundle.bundle'
     sss.ios.vendored_frameworks = 'ZMCreditSDK/**/*.framework'
     sss.ios.libraries = 'z','c++.1','c++abi','stdc++.6.0.9'
     sss.frameworks = 'APBToygerFacade','APPSecuritySDK','APMobileRPC','BioAuthAPI','ZolozIdentityManager','ZolozSensorServices','BioAuthEngine','MPRemoteLogging','CoreGraphics','AssetsLibrary','CoreTelephony','QuartzCore','CoreFoundation','CoreLocation','ImageIO','CoreMedia','CoreMotion','AVFoundation','Accelerate'
  end
  spec.prepare_command = <<-EOF
# 创建Module
rm -rf ZMCreditSDK/ZMCreditSDK.framework/Modules
mkdir ZMCreditSDK/ZMCreditSDK.framework/Modules
touch ZMCreditSDK/ZMCreditSDK.framework/Modules/module.modulemap
cat <<-EOF > ZMCreditSDK/ZMCreditSDK.framework/Modules/module.modulemap
framework module ZMCreditSDK {
  umbrella header "ALCreditService.h"
  export *
  module * { export * }
  link "z"
  link "c++.1"
  link "c++abi"
  link "stdc++.6.0.9"
}
\EOF

EOF
  spec.requires_arc = true
  spec.platform     = :ios, "9.0"
  spec.ios.deployment_target = '9.0'
end
