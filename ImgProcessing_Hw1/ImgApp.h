#pragma once
#define NULL 0
#define CV_BGR2GRAY 6
const char* window_name = "Image";
#include "opencv2/imgcodecs.hpp"
#include "opencv2/highgui.hpp"
#include <opencv2\highgui.hpp>
#include <string>
#include <msclr\marshal_cppstd.h>
#include "ImageClass.h"
#include "opencv2/imgproc.hpp"
#include "opencv2/imgcodecs.hpp"
#include "opencv2/highgui.hpp"

namespace ImgProcessingHw1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	/// <summary>
	/// Summary for ImgApp
	/// </summary>
	public ref class ImgApp : public System::Windows::Forms::Form
	{
	public:
		ImgApp(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ImgApp()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ DIP;
	protected:

	private: System::Windows::Forms::Label^ inputImage;


	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ Imgchosen;




	private: System::Windows::Forms::OpenFileDialog^ BrowseImg;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TrackBar^ BrtrackBar1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TrackBar^ CotrackBar2;
	private: ImageClass* OurImage = NULL;     //this is the image class that has the image we want to read it and modify it and write it.
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TrackBar^ ThretrackBar1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::SaveFileDialog^ saveImg;
	private: System::Windows::Forms::TrackBar^ trackBar1;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TrackBar^ trackBar2;
	private: System::Windows::Forms::CheckBox^ GreyCheck;
	private: System::Windows::Forms::Button^ Reset;
	private: System::Windows::Forms::CheckBox^ bitplaneenable;








	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ImgApp::typeid));
			this->DIP = (gcnew System::Windows::Forms::Label());
			this->inputImage = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->Imgchosen = (gcnew System::Windows::Forms::Label());
			this->BrowseImg = (gcnew System::Windows::Forms::OpenFileDialog());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->BrtrackBar1 = (gcnew System::Windows::Forms::TrackBar());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->CotrackBar2 = (gcnew System::Windows::Forms::TrackBar());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->ThretrackBar1 = (gcnew System::Windows::Forms::TrackBar());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->saveImg = (gcnew System::Windows::Forms::SaveFileDialog());
			this->trackBar1 = (gcnew System::Windows::Forms::TrackBar());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->trackBar2 = (gcnew System::Windows::Forms::TrackBar());
			this->GreyCheck = (gcnew System::Windows::Forms::CheckBox());
			this->Reset = (gcnew System::Windows::Forms::Button());
			this->bitplaneenable = (gcnew System::Windows::Forms::CheckBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->BrtrackBar1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CotrackBar2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ThretrackBar1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar2))->BeginInit();
			this->SuspendLayout();
			// 
			// DIP
			// 
			this->DIP->AutoSize = true;
			this->DIP->Font = (gcnew System::Drawing::Font(L"Century Gothic", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DIP->ForeColor = System::Drawing::Color::White;
			this->DIP->Location = System::Drawing::Point(333, 9);
			this->DIP->Name = L"DIP";
			this->DIP->Size = System::Drawing::Size(556, 44);
			this->DIP->TabIndex = 0;
			this->DIP->Text = L"Image Processing Application";
			// 
			// inputImage
			// 
			this->inputImage->AutoSize = true;
			this->inputImage->Font = (gcnew System::Drawing::Font(L"Century Gothic", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->inputImage->ForeColor = System::Drawing::Color::White;
			this->inputImage->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"inputImage.Image")));
			this->inputImage->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->inputImage->Location = System::Drawing::Point(57, 122);
			this->inputImage->Name = L"inputImage";
			this->inputImage->Size = System::Drawing::Size(215, 32);
			this->inputImage->TabIndex = 1;
			this->inputImage->Text = L"    Input Image:";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(372, 116);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(140, 48);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Choose File";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &ImgApp::Button1_Click);
			// 
			// Imgchosen
			// 
			this->Imgchosen->AutoSize = true;
			this->Imgchosen->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Imgchosen->ForeColor = System::Drawing::Color::White;
			this->Imgchosen->Location = System::Drawing::Point(518, 131);
			this->Imgchosen->Name = L"Imgchosen";
			this->Imgchosen->Size = System::Drawing::Size(127, 21);
			this->Imgchosen->TabIndex = 3;
			this->Imgchosen->Text = L".No File Chosen";
			// 
			// BrowseImg
			// 
			this->BrowseImg->Filter = L"\"Images Files (*.jpg, *.jpeg, *.jpe, *.jfif, *.png) | *.jpg; *.jpeg; *.jpe; *.jfi"
				L"f; *.png\"";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(12, 229);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(147, 25);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Brightness(0):";
			// 
			// BrtrackBar1
			// 
			this->BrtrackBar1->Location = System::Drawing::Point(198, 229);
			this->BrtrackBar1->Maximum = 127;
			this->BrtrackBar1->Minimum = -127;
			this->BrtrackBar1->Name = L"BrtrackBar1";
			this->BrtrackBar1->Size = System::Drawing::Size(1027, 45);
			this->BrtrackBar1->TabIndex = 5;
			this->BrtrackBar1->ValueChanged += gcnew System::EventHandler(this, &ImgApp::BrtrackBar1_ValueChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(13, 319);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(130, 25);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Contrast(0):";
			// 
			// CotrackBar2
			// 
			this->CotrackBar2->Location = System::Drawing::Point(198, 319);
			this->CotrackBar2->Maximum = 90;
			this->CotrackBar2->Minimum = -100;
			this->CotrackBar2->Name = L"CotrackBar2";
			this->CotrackBar2->Size = System::Drawing::Size(1027, 45);
			this->CotrackBar2->TabIndex = 2;
			this->CotrackBar2->Scroll += gcnew System::EventHandler(this, &ImgApp::CotrackBar2_Scroll);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(12, 435);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(168, 25);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Threshold Type:";
			// 
			// comboBox1
			// 
			this->comboBox1->CausesValidation = false;
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"Binary", L"Binary Inverted", L"To Zero", L"To Zero Inverted",
					L"Truncate"
			});
			this->comboBox1->Location = System::Drawing::Point(186, 433);
			this->comboBox1->MaxDropDownItems = 5;
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(175, 31);
			this->comboBox1->Sorted = true;
			this->comboBox1->TabIndex = 5;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(12, 515);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(208, 25);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Threshold Value(0):";
			// 
			// ThretrackBar1
			// 
			this->ThretrackBar1->Location = System::Drawing::Point(250, 515);
			this->ThretrackBar1->Maximum = 255;
			this->ThretrackBar1->Name = L"ThretrackBar1";
			this->ThretrackBar1->Size = System::Drawing::Size(975, 45);
			this->ThretrackBar1->TabIndex = 9;
			this->ThretrackBar1->Scroll += gcnew System::EventHandler(this, &ImgApp::TrackBar1_Scroll);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Century Gothic", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label5.Image")));
			this->label5->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label5->Location = System::Drawing::Point(767, 122);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(213, 32);
			this->label5->TabIndex = 10;
			this->label5->Text = L"    Save Image:";
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(986, 116);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(140, 48);
			this->button2->TabIndex = 11;
			this->button2->Text = L"Save";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &ImgApp::Button2_Click);
			// 
			// trackBar1
			// 
			this->trackBar1->Location = System::Drawing::Point(621, 433);
			this->trackBar1->Maximum = 255;
			this->trackBar1->Name = L"trackBar1";
			this->trackBar1->Size = System::Drawing::Size(604, 45);
			this->trackBar1->TabIndex = 12;
			this->trackBar1->Scroll += gcnew System::EventHandler(this, &ImgApp::TrackBar1_Scroll_1);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::White;
			this->label6->Location = System::Drawing::Point(434, 435);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(157, 25);
			this->label6->TabIndex = 13;
			this->label6->Text = L"Max Value(0):";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::White;
			this->label7->Location = System::Drawing::Point(13, 614);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(190, 25);
			this->label7->TabIndex = 14;
			this->label7->Text = L"Bit Plane Level(0):";
			// 
			// trackBar2
			// 
			this->trackBar2->Location = System::Drawing::Point(250, 614);
			this->trackBar2->Maximum = 7;
			this->trackBar2->Name = L"trackBar2";
			this->trackBar2->Size = System::Drawing::Size(975, 45);
			this->trackBar2->TabIndex = 15;
			this->trackBar2->Scroll += gcnew System::EventHandler(this, &ImgApp::TrackBar2_Scroll);
			// 
			// GreyCheck
			// 
			this->GreyCheck->AutoSize = true;
			this->GreyCheck->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->GreyCheck->ForeColor = System::Drawing::Color::White;
			this->GreyCheck->Location = System::Drawing::Point(278, 124);
			this->GreyCheck->Name = L"GreyCheck";
			this->GreyCheck->Size = System::Drawing::Size(88, 32);
			this->GreyCheck->TabIndex = 16;
			this->GreyCheck->Text = L"Grey";
			this->GreyCheck->UseVisualStyleBackColor = true;
			// 
			// Reset
			// 
			this->Reset->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Reset->Location = System::Drawing::Point(12, 698);
			this->Reset->Name = L"Reset";
			this->Reset->Size = System::Drawing::Size(140, 48);
			this->Reset->TabIndex = 17;
			this->Reset->Text = L"Reset All";
			this->Reset->UseVisualStyleBackColor = true;
			this->Reset->Click += gcnew System::EventHandler(this, &ImgApp::Reset_Click);
			// 
			// bitplaneenable
			// 
			this->bitplaneenable->AutoSize = true;
			this->bitplaneenable->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bitplaneenable->ForeColor = System::Drawing::Color::White;
			this->bitplaneenable->Location = System::Drawing::Point(18, 584);
			this->bitplaneenable->Name = L"bitplaneenable";
			this->bitplaneenable->Size = System::Drawing::Size(93, 27);
			this->bitplaneenable->TabIndex = 18;
			this->bitplaneenable->Text = L"Enable";
			this->bitplaneenable->UseVisualStyleBackColor = true;
			this->bitplaneenable->CheckedChanged += gcnew System::EventHandler(this, &ImgApp::Bitplaneenable_CheckedChanged);
			// 
			// ImgApp
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DarkCyan;
			this->ClientSize = System::Drawing::Size(1260, 758);
			this->Controls->Add(this->bitplaneenable);
			this->Controls->Add(this->Reset);
			this->Controls->Add(this->GreyCheck);
			this->Controls->Add(this->trackBar2);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->trackBar1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->ThretrackBar1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->CotrackBar2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->BrtrackBar1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->Imgchosen);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->inputImage);
			this->Controls->Add(this->DIP);
			this->Name = L"ImgApp";
			this->Text = L"ImgApp";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->BrtrackBar1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CotrackBar2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ThretrackBar1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		String^ ImgPath; //System::String
		String^ ImgName; //System::String
		String^ ImgExtention; //System::String
		double alpha = 1.0;
		int beta = 0;
		int value;
		int ThresholdingType = -1;
		int ThresholdingValue = -1;
		int ThreshouldingMaxValue = 0;
		String^ ImgSavePath;
		int* binaryArray = new int[8];
		int bitPlaneLevel;
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
		//to open the image in window
	private: System::Void Button1_Click(System::Object^ sender, System::EventArgs^ e) { //This code will be the handler of the Button1

		//Now we want to show the dialog to browse out image that we want to open.
		// we will not get error for uploading or opening a non-iamge file , because we already put the filter to image extension only.
		//the function -ShowDialog()- opens for us a dialog and return a value if we pressed OK or we pressed cancal
		//if we pressed OK after we choose the img file then it will execute the if statement code
		if (BrowseImg->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			ResetAll();//We Call Function Reset All Te Reset All Components To The Default Values
			ImgPath = System::IO::Path::GetFullPath(BrowseImg->FileName); //We Get the full path
			ImgName = System::IO::Path::GetFileName(BrowseImg->FileName); //We Get the img name only to put it as text in Imgchosen Label
			ImgExtention = System::IO::Path::GetExtension(BrowseImg->FileName);

			Imgchosen->Text = "." + ImgName; ////put img name as text in Imgchosen Label

			msclr::interop::marshal_context context;
			std::string standardStringImgPath = context.marshal_as<std::string>(ImgPath); //Convert from System::string to std::string to put it in imread function

			cv::Mat img;
			if (GreyCheck->Checked) { img = imread(standardStringImgPath, cv::IMREAD_GRAYSCALE); } //save the image in grey scale
			else { img = cv::imread(standardStringImgPath); }

			OurImage = new ImageClass();
			OurImage->set_Image(img);
			cv::imshow(window_name, OurImage->get_Image() );
			cv::waitKey(0);
		}

	}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
			 //BRIGHTNESS
			 //The Scale for brightness is -127 -> 127 , we can change it if we want
private: System::Void BrtrackBar1_ValueChanged(System::Object^ sender, System::EventArgs^ e) {//Handler of the Brightness trackBar 
	beta = BrtrackBar1->Value;
	label1->Text= "Brightness("+ System::Convert::ToString(beta)+"):";
	if (OurImage != NULL) {
		cv::Mat updated_image;
		OurImage->get_Image().convertTo(updated_image, -1, alpha, beta);
		updated_image = ThresholdFun(updated_image);
		if(bitplaneenable->Checked) updated_image = BitPlane(updated_image, bitPlaneLevel);
		cv::imshow(window_name, updated_image );
	}
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

		 //CONTRAST
		 //the scale for the contast is -100 -> 90 , we can change it if we want
		 //0 on trackbar stands for 1
		 //-100 -> 0 = 0.0 -> 1.0
		 //0 -> 90 = 1.0 -> 10.0
private: System::Void CotrackBar2_Scroll(System::Object^ sender, System::EventArgs^ e) {
	value = CotrackBar2->Value;
	label2->Text = "Contrast(" + System::Convert::ToString(value) + "):";
	if (value == 0) { alpha = 1.0; }
	else if (value > 0) { alpha = (value / 10.0) + 1; }
	else if (value < 0) { alpha = (value / 100.0) + 1; }

	if (OurImage != NULL) {
		cv::Mat updated_image;
		OurImage->get_Image().convertTo(updated_image, -1, alpha, beta);
		updated_image = ThresholdFun(updated_image);
		if (bitplaneenable->Checked) updated_image = BitPlane(updated_image, bitPlaneLevel);
		cv::imshow(window_name, updated_image);
	}
}


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
		 //ThreSholding Max Value
private: System::Void TrackBar1_Scroll_1(System::Object^ sender, System::EventArgs^ e) {
	label6->Text = "Max Value(" + System::Convert::ToString(trackBar1->Value) + "):";
	ThreshouldingMaxValue = trackBar1->Value;
	if (ThresholdingType != -1) {
		if (OurImage != NULL) {
			cv::Mat updated_image;
			OurImage->get_Image().convertTo(updated_image, -1, alpha, beta);  // To Save The Brightenss and Contrast into the image
			updated_image = ThresholdFun(updated_image);//We Call The Function Thresholding 
			if (bitplaneenable->Checked) updated_image = BitPlane(updated_image, bitPlaneLevel);
			cv::imshow(window_name, updated_image);
		}
	}
}

		 //Thresholding
private: System::Void TrackBar1_Scroll(System::Object^ sender, System::EventArgs^ e) {
	ThresholdingType = comboBox1->SelectedIndex;
	ThresholdingValue = ThretrackBar1->Value;
	ThreshouldingMaxValue = trackBar1->Value;
	label4->Text = "Threshold Value(" + System::Convert::ToString(ThresholdingValue) + "):";
	if (ThresholdingType != -1) {
		if (OurImage != NULL) {
			cv::Mat updated_image;
			OurImage->get_Image().convertTo(updated_image, -1, alpha, beta);  // To Save The Brightenss and Contrast into the image
			updated_image = ThresholdFun(updated_image);//We Call The Function Thresholding 
			if (bitplaneenable->Checked) updated_image = BitPlane(updated_image, bitPlaneLevel);
			cv::imshow(window_name, updated_image);
		}
	}
}
		 //ThreSholding Function
			private: cv::Mat ThresholdFun(cv::Mat imgForThreshold) {
				cv::Mat imgAfterThreshould = imgForThreshold.clone();
				if ( (ThresholdingType != -1) && (ThresholdingValue != -1) ) {
					if (OurImage != NULL) {
						//Binary
						if (ThresholdingType == 0) {
							cv::threshold(imgAfterThreshould, imgAfterThreshould, ThresholdingValue, ThreshouldingMaxValue, ThresholdingType);
						}
						//Binary Inverted
						else if (ThresholdingType == 1) {
							cv::threshold(imgAfterThreshould, imgAfterThreshould, ThresholdingValue, ThreshouldingMaxValue, ThresholdingType);
						}
						//Truncate
						else if (ThresholdingType == 2) {
							cv::threshold(imgAfterThreshould, imgAfterThreshould, ThresholdingValue, ThreshouldingMaxValue, ThresholdingType);
						}
						//To Zero
						else if (ThresholdingType == 3) {
							cv::threshold(imgAfterThreshould, imgAfterThreshould, ThresholdingValue, ThreshouldingMaxValue, ThresholdingType);
						}
						//To Zero Inverted
						else {
							cv::threshold(imgAfterThreshould, imgAfterThreshould, ThresholdingValue, ThreshouldingMaxValue, ThresholdingType);
						}
					}
				}
				return (imgAfterThreshould);
			}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
		 //To Save our Last Midified Image
private: System::Void Button2_Click(System::Object^ sender, System::EventArgs^ e) {

	if (OurImage != NULL) {
		if (saveImg->ShowDialog() == System::Windows::Forms::DialogResult::OK) {

			ImgSavePath = System::IO::Path::GetFullPath(saveImg->FileName);
			msclr::interop::marshal_context context;
			std::string standardStringImgPath = context.marshal_as<std::string>(ImgSavePath + ImgExtention);

			//Now We Will Do All What We Have Done Again To Save The Modified Image.
			cv::Mat imgToBeSave = OurImage->get_Image().clone(); // we need the clone function , because we might change the photo another time
			imgToBeSave.convertTo(imgToBeSave, -1, alpha, beta);  //The Brightenss and Contrast
			imgToBeSave = ThresholdFun(imgToBeSave);              //Thresholding
			if (bitplaneenable->Checked) imgToBeSave = BitPlane(imgToBeSave, bitPlaneLevel);
			cv::imwrite( standardStringImgPath  , imgToBeSave );
			Reset->PerformClick();
	}
}
}


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	private: void ResetAll() {
		label1->Text = "Brightness(0):";
		label2->Text = "Contrast(0):";
		label6->Text = "Max Value(0):";
		label4->Text = "Threshold Value(0):";
		label7->Text = "Bit Plane Level(0):";
		BrtrackBar1->Value = 0;
		CotrackBar2->Value = 0;
		trackBar2->Value = 0;
		this->comboBox1->SelectedIndex = -1;
		trackBar1->Value = 0;
		ThretrackBar1->Value = 0;
		alpha = 1.0;
		beta = 0;
		ThresholdingType = -1;
		ThresholdingValue = -1;
		ThreshouldingMaxValue = 0;
		bitPlaneLevel = 0;
		bitplaneenable->Checked = 0;
	}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
				//Each Pixel Has 8 greyLevels 0-7 , 8 Bits , 0-255 Values
				//Each Time : It Takes the number of a pixel , then convert it to binary and put it into array[b]
				//we multiply the bit we want to do the bit plane slicing on, with 255
				//example : if we want the bit number 7 , level 7 bitt plane slicing we just going for each pixel get the bit number 7 and multiply it by 255
	private: cv::Mat BitPlane(cv::Mat imgForBitPlane, int Level) {

		cv::Mat SrcImage = imgForBitPlane.clone();
		cv::cvtColor(SrcImage, SrcImage , CV_BGR2GRAY); //convert it to grey

		int ro = SrcImage.rows;
		int co = SrcImage.cols;

		for (int i = 0;i < ro;i++)
			for (int j = 0; j < co; j++) {
				int num = SrcImage.at<uchar>(i, j);
				DecimaltoBinary(num);
				SrcImage.at<uchar>(i, j) = binaryArray[Level] * 255;
			}
		return (SrcImage);
	}

	private: void DecimaltoBinary(int number){
				 for (int i = 0; i < 8; i++)
					 binaryArray[i] = 0;//ALL THE ARRAY = ZEROS

				 for (int j = 0;number != 0;j++) {
					 binaryArray[j] = number % 2;
					 number = number / 2;
				 }

			 }



private: System::Void TrackBar2_Scroll(System::Object^ sender, System::EventArgs^ e) {
	bitPlaneLevel = trackBar2->Value;
	label7->Text = "Bit Plane Level(" + System::Convert::ToString(bitPlaneLevel) + "):";
	if (bitplaneenable->Checked) {
		if (OurImage != NULL) {
			cv::Mat updated_image = OurImage->get_Image().clone();
			updated_image = BitPlane(updated_image, bitPlaneLevel);
			cv::imshow(window_name, updated_image);
		}
	}
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////		 
private: System::Void Reset_Click(System::Object^ sender, System::EventArgs^ e) {
	ResetAll();
	cv::imshow(window_name, OurImage->get_Image());
}

		 //if we press enable it will excute the bit plane functionality
private: System::Void Bitplaneenable_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (OurImage != NULL) {
		cv::Mat updated_image = OurImage->get_Image().clone();
		if (bitplaneenable->Checked) {
			updated_image = BitPlane(updated_image, bitPlaneLevel);
		}

		if (!bitplaneenable->Checked) {
			updated_image = OurImage->get_Image().clone();
			updated_image.convertTo(updated_image, -1, alpha, beta);
			updated_image = ThresholdFun(updated_image);
		}
		cv::imshow(window_name, updated_image);
	}
}

};
}

