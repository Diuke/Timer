#pragma once

namespace Timer1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: agregar c�digo de constructor aqu�
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n utilizando.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}

	protected: 

	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// Variable del dise�ador requerida.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�todo necesario para admitir el Dise�ador. No se puede modificar
		/// el contenido del m�todo con el editor de c�digo.
		/// </summary>
		void InitializeComponent(void)
		{
			this->SuspendLayout();
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(573, 335);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->Click += gcnew System::EventHandler(this, &Form1::form_click);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void form_click(System::Object^  sender, System::EventArgs^  e) {
				int x = System::Windows::Forms::Control::MousePosition.X;

				int y = System::Windows::Forms::Control::MousePosition.Y;

				int xe = System::Windows::Forms::Control::Location.X+8;

				int ye = System::Windows::Forms::Control::Location.Y+30;

				MessageBox::Show((x-xe)+" - "+(y-ye));
			 }
	};
}

