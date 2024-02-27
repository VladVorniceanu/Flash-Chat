//
//  WelcomeViewController.swift
//  Flash Chat iOS13
//
//  Created by Angela Yu on 21/10/2019.
//  Copyright © 2019 Angela Yu. All rights reserved.
//

import UIKit

class WelcomeViewController: UIViewController {

    @IBOutlet weak var titleLabel: UILabel!
    
    override func viewDidLoad() {
        super.viewDidLoad()

        titleLabel.text = ""
        let titleToAdd: String = "⚡️FlashChat"
        var charsAdded: Double = 0.0
        for letter in titleToAdd {
            Timer.scheduledTimer(withTimeInterval: 0.1 * charsAdded, repeats: false) { Timer in
                print("-")
                print(letter)
                self.titleLabel.text?.append(letter)
            }
            charsAdded += 1
        }
       
    }
    

}
