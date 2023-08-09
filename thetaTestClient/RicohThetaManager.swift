//
//  RicohThetaManager.swift
//  thetaTestClient
//
//  Created by Yueheng Shi on 2023-08-04.
//

import Foundation
import UIKit
class RThetaManager {
    var livePreviewImage: ((UIImage) -> Void)?
    var capturedImage: ((UIImage) -> Void)?
    var previewing: Bool = false
    func getLivePreview() {
        Task {
            do {
                try await theta.livePreview(
                  frameHandler: {frame in
                      guard let image = UIImage(data: frame) else { return false }
                      self.previewing = true
                      self.livePreviewImage?(image)
                      return self.previewing
                  }
                )
            } catch {
                print(error)
                self.previewing = true
            }
        }
    }
    func capture() {
        Task {
            do {
                try await theta.takePicture {photoUrl in
                    guard let url = URL(string: photoUrl) else { return }
                    guard let data = NSData(contentsOf: url) else { return }
                    guard let image = UIImage(data: data as Data) else { return }
                    self.capturedImage?(image)
                }
            } catch {
                print(error)
                // TODO: handle error
            }
        }
    }

    
   
}
