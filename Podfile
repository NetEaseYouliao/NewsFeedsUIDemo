platform :ios, '9.0'

use_frameworks!
inhibit_all_warnings!

source 'https://github.com/CocoaPods/Specs.git'
source 'https://github.com/NetEaseYouliao/Specs.git'

plugin 'cocoapods-keys', {
  :target => "NewsFeedsUIDemo",
  :keys => [
    "NewsFeedsKey",
    "NewsFeedsSecret"
  ]}

target :NewsFeedsUIDemo do
  pod 'NewsFeedsSDK'
  pod 'NewsFeedsUISDK'
end
