#
# Be sure to run `pod lib lint TMKTitanFramework.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see http://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'TitanFramework'
  s.version          = '1.5.14'
  s.summary          = 'Telemedicine functionality kit'

  s.description      = <<-DESC
TODO: Add long description of the pod here.
                       DESC

  s.homepage         = 'https://github.com/antony-ulyanov/TitanFrameworkDistribution'
  s.license          = { :type => 'EULA', :file => 'LICENSE' }
  s.author           = { 'antony' => 'rumburu@gmail.com' }
  s.source           = { :git => 'https://github.com/antony-ulyanov/TitanFrameworkDistribution.git', :tag => s.version.to_s }

  s.ios.deployment_target = '10.0'
  s.swift_version = '4.2'
  
  s.public_header_files = "TitanFramework.framework/Headers/*.h"
  s.source_files = "TitanFramework.framework/Headers/*.h"
  s.vendored_frameworks = "TitanFramework.framework"
  
  s.resource_bundles = {
    'TitanFramework' => ['TitanFramework.framework/**/*.{storyboard,xib,xcdatamodel,html}']
  }

  s.static_framework = true
  s.libraries = 'c++'

  s.dependency 'GoogleWebRTC', '1.1.29400'
  s.dependency 'RxAlamofire', '~> 5.2'
  s.dependency 'RxCocoa', '~> 5.1'
  s.dependency 'Gloss', '~> 2.0'
  s.dependency 'XCGLogger', '~> 6.1.0'
  s.dependency 'SwiftDate', '~> 5.0.13'
  s.dependency 'FontBlaster', '~> 4.1.0'
  s.dependency 'SnapKit', '~> 5.0'
  s.dependency 'Validator', '~> 3.2.1'
  s.dependency 'MBProgressHUD', '~> 1.1.0'
  s.dependency 'IQKeyboardManagerSwift', '~> 6.5.5'
  s.dependency 'FSCalendar', '~> 2.8.0'
  s.dependency 'InputMask', '~> 6.0.0'
  s.dependency 'UITextView+Placeholder', '~> 1.3.3'
  s.dependency 'Mixpanel-swift', '2.6.5'  
  
end

