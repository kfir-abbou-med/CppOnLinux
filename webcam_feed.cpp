#include <opencv2/opencv.hpp>
#include <iostream>

int main()
{
    // Open the default webcam (camera index 0)

    for (int i = 0; i < 5; i++)
    {
        cv::VideoCapture cap(i);

        if (!cap.isOpened())
        {
            std::cerr << "Error: Could not open webcam on index " << i  << std::endl;
            continue;// -1;
        }
        else{
            std::cout << "found webcam on index " << i << std::endl;
        }

        cv::Mat frame;
        while (true)
        {
            cap >> frame; // Capture a frame

            if (frame.empty())
            {
                std::cerr << "Error: Empty frame captured." << std::endl;
                break;
            }

            cv::imshow("Webcam Feed", frame); // Display the frame

            // Exit when 'q' is pressed
            if (cv::waitKey(1) == 'q')
                break;
        }

        cap.release();
        cv::destroyAllWindows();
    }
    return 0;
}
