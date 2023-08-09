//
//  ViewController.swift
//  thetaTestClient
//
//  Created by Yueheng Shi on 2023-08-04.
//

import UIKit

class ViewController: UIViewController {

    @IBOutlet weak var capturedImageView: UIImageView!
    @IBOutlet weak var liveImageView: UIImageView!
    var manager = RThetaManager()
    override func viewDidLoad() {
        super.viewDidLoad()
    }
    override func viewWillAppear(_ animated: Bool) {
        connect()
    }
    
    @IBAction func doCapture(_ sender: Any) {
        capture()
    }
    
    func connect() {
//        manager.getLivePreview()
//        manager.livePreviewImage = { [weak self] liveImage in
//            DispatchQueue.main.async {
//                self?.liveImageView.image = liveImage
//            }
//        }
        Task {
            do {
                try await theta.livePreview(
                  frameHandler: {frame in
                      guard let image = UIImage(data: frame) else { return false }
                      DispatchQueue.main.async {
                        self.liveImageView.image = image
                      }
                      return true
                  }
                )
            } catch {
                print(error)
            }
        }
    }
    
    func capture() {
        manager.capture()
        self.manager.capturedImage = { [weak self] capturedImage in
            DispatchQueue.main.async {
                self?.capturedImageView.image = capturedImage
                self?.connect()
            }
        }
    }
}

