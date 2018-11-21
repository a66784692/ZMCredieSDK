Pod::Spec.new do |spec|
  spec.name             = 'ZMCreditSDK'
  spec.version          = '0.0.3'
  spec.homepage         = 'https://github.com/a66784692/ZMCredieSDK'
  spec.authors          = { 'zjingbo' => 'a66784692@qq.com' }
  spec.summary          = '人脸识别 SDK'
  spec.source           = { :git => 'https://github.com/a66784692/ZMCredieSDK.git', :tag => '0.0.3' }
  spec.license = { :type => 'Apache License, Version 2.0', :text => <<-LICENSE
Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at
http://www.apache.org/licenses/LICENSE-2.0
Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
LICENSE
}
  spec.subspec 'ZMCreditSDKVendor' do |sss|
     sss.resource                = 'ZMCreditSDK/ZMCreditBundle.bundle'
     sss.ios.vendored_frameworks = 'ZMCreditSDK/**/*.framework'
     sss.ios.libraries = 'z','c++.1','c++abi','stdc++.6.0.9'
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
