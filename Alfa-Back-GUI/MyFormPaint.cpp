#include "MyFormPaint.h"

System::Void AlfaBackGUI::MyFormPaint::button_Quadrat_Click(System::Object ^ sender, System::EventArgs ^ e)
{
	pointFormsKreis->Clear();
	pointFormsDreieck->Clear();
	pointFormsFuenfeck->Clear();
	pointFormsStern->Clear();
	pointFormsOval->Clear();

	this->Refresh();

	Graphics ^pg = CreateGraphics();
	SolidBrush ^ brush_red = gcnew SolidBrush(Color::Red);
	Pen^ pen_black = gcnew Pen(Color::Black, 3);



	pg->DrawRectangle(pen_black, 200, 150, 300, 300);
	LinearGradientBrush ^linear = gcnew LinearGradientBrush(System::Drawing::Point(350, 100), System::Drawing::Point(350, 700), Color::Salmon, Color::Cyan);
	pg->FillRectangle(linear, 200, 150, 300, 300);

	//Point point;
	Point point1 = System::Drawing::Point(200, 150);

	_points->Add(point1);
	delete pg;
	return System::Void();
}

System::Void AlfaBackGUI::MyFormPaint::button_Oval_Click(System::Object ^ sender, System::EventArgs ^ e)
{

	pointFormsKreis->Clear();
	pointFormsDreieck->Clear();
	pointFormsFuenfeck->Clear();
	pointFormsStern->Clear();
	_points->Clear();

	this->Refresh();


	Point points = Point(200, 115);

	Graphics ^pg = CreateGraphics();
	SolidBrush ^ brush_red = gcnew SolidBrush(Color::Red);
	Pen^ pen_black = gcnew Pen(Color::Black, 3.0f);

	System::Drawing::Font ^ font1 = gcnew System::Drawing::Font("Verdana", 30);

	pg->SmoothingMode = Drawing2D::SmoothingMode::AntiAlias;

	pg->DrawEllipse(pen_black, 200, 115, 300, 370);
	LinearGradientBrush ^linear = gcnew LinearGradientBrush(System::Drawing::Point(350, 100), System::Drawing::Point(350, 700), Color::Salmon, Color::Cyan);
	pg->FillEllipse(linear, 200, 115, 300, 370);

	pointFormsOval->Add(points);

	delete pg;
	return System::Void();
}

System::Void AlfaBackGUI::MyFormPaint::button_Stern_Click(System::Object ^ sender, System::EventArgs ^ e)
{
	pointFormsKreis->Clear();
	pointFormsDreieck->Clear();
	pointFormsFuenfeck->Clear();
	pointFormsOval->Clear();
	_points->Clear();
	pointFormsStern->Clear();

	this->Refresh();

	float outerradius = 200.0F;
	float innerradius = 100.0F;

	Point Orig = Point(350, 300);
	// Create pen.

	Graphics ^pg = CreateGraphics();
	SolidBrush ^ brush_red = gcnew SolidBrush(Color::Red);
	Pen^ pen_black = gcnew Pen(Color::Black, 3.0f);

	System::Drawing::Font ^ font1 = gcnew System::Drawing::Font("Verdana", 30);


	double Ang36 = Math::PI / 5.0; // 36° x PI/180
	double Ang72 = 2.0 * Ang36; // 72° x PI/180
	float Sin36 = (float)Math::Sin(Ang36);
	float Sin72 = (float)Math::Sin(Ang72);
	float Cos36 = (float)Math::Cos(Ang36);
	float Cos72 = (float)Math::Cos(Ang72);

	array<Point>^ pnts = { Orig, Orig, Orig, Orig, Orig, Orig, Orig, Orig, Orig, Orig };

	pnts[0].Y -= 200; // top off the star, or on a clock this is 12:00 or 0:00 hours
	pnts[1].X += (int)(innerradius * Sin36);
    pnts[1].Y -= (int)(innerradius * Cos36); // 0:06 hours
	pnts[2].X += (int)(outerradius * Sin72);
    pnts[2].Y -= (int)(outerradius * Cos72); // 0:12 hours
	pnts[3].X += (int)(innerradius * Sin72);
    pnts[3].Y += (int)(innerradius * Cos72); // 0:18
	pnts[4].X += (int)(outerradius * Sin36);
    pnts[4].Y += (int)(outerradius * Cos36); // 0:24
	pnts[5].Y += (int)innerradius;
	pnts[6].X += pnts[6].X - pnts[4].X;
    pnts[6].Y = pnts[4].Y; // mirror point
	pnts[7].X += pnts[7].X - pnts[3].X;
    pnts[7].Y = pnts[3].Y; // mirror point
	pnts[8].X += pnts[8].X - pnts[2].X;
    pnts[8].Y = pnts[2].Y; // mirror point
    pnts[9].X += pnts[9].X - pnts[1].X;
    pnts[9].Y = pnts[1].Y; // mirror point

	pg->SmoothingMode = Drawing2D::SmoothingMode::AntiAlias;

	pg->DrawPolygon(pen_black, pnts);
	//pointFormsStern->AddRange(pnts);
	pointFormsStern->Add(pnts[0]);
	pointFormsStern->Add(pnts[1]);
	pointFormsStern->Add(pnts[2]);
	pointFormsStern->Add(pnts[3]);
	pointFormsStern->Add(pnts[4]);
	pointFormsStern->Add(pnts[5]);
	pointFormsStern->Add(pnts[6]);
	pointFormsStern->Add(pnts[7]);
	pointFormsStern->Add(pnts[8]);
	pointFormsStern->Add(pnts[9]);


	LinearGradientBrush ^linear = gcnew LinearGradientBrush(System::Drawing::Point(350, 100), System::Drawing::Point(350, 700), Color::Salmon, Color::Cyan);
	pg->FillPolygon(linear, pnts);
	delete pg;
	return System::Void();
}

System::Void AlfaBackGUI::MyFormPaint::button_Kreis_Click(System::Object ^ sender, System::EventArgs ^ e)
{
	pointFormsDreieck->Clear();
	pointFormsFuenfeck->Clear();
	pointFormsStern->Clear();
	pointFormsOval->Clear();
	_points->Clear();

	this->Refresh();

	Point points = Point(200, 150);

	Graphics ^pg = CreateGraphics();
	SolidBrush ^ brush_red = gcnew SolidBrush(Color::Red);
	Pen^ pen_black = gcnew Pen(Color::Black, 3);

	System::Drawing::Font ^ font1 = gcnew System::Drawing::Font("Verdana", 30);

	pg->SmoothingMode = Drawing2D::SmoothingMode::AntiAlias;

	pg->DrawEllipse(pen_black, 200, 150, 300, 300);

	LinearGradientBrush ^linear = gcnew LinearGradientBrush(System::Drawing::Point(350, 100), System::Drawing::Point(350, 700), Color::Salmon, Color::Cyan);
	pg->FillEllipse(linear, 200, 150, 300, 300);

	pointFormsKreis->Add(points);

	delete pg;

	return System::Void();
}

System::Void AlfaBackGUI::MyFormPaint::button_Fuenfeck_Click(System::Object ^ sender, System::EventArgs ^ e)
{
	pointFormsKreis->Clear();
	pointFormsDreieck->Clear();
	pointFormsStern->Clear();
	pointFormsOval->Clear();
	_points->Clear();

	this->Refresh();

	Point points1 = Point(275, 150);
	Point points2 = Point(425, 150);
	Point points3 = Point(525, 325);
	Point points4 = Point(350, 500);
	Point points5 = Point(175, 325);
	Point points6 = Point(275, 150);

	// Create pen.
	Graphics ^pg = CreateGraphics();
	SolidBrush ^ brush_red = gcnew SolidBrush(Color::Red);
	Pen^ pen_black = gcnew Pen(Color::Black, 3.0f);

	// Create array of points that define lines to draw.
	array<Point>^ points = { points1,points2,points3,points4,points5,points6 };

	//Draw lines to screen.
	pg->SmoothingMode = Drawing2D::SmoothingMode::AntiAlias;
	pg->DrawLines(pen_black, points);
	LinearGradientBrush ^linear = gcnew LinearGradientBrush(System::Drawing::Point(350, 100), System::Drawing::Point(350, 700), Color::Salmon, Color::Cyan);
	pg->FillPolygon(linear, points);


	pointFormsFuenfeck->Add(points1);
	pointFormsFuenfeck->Add(points2);
	pointFormsFuenfeck->Add(points3);
	pointFormsFuenfeck->Add(points4);
	pointFormsFuenfeck->Add(points5);
	pointFormsFuenfeck->Add(points6);

	delete pg;

	return System::Void();
}

System::Void AlfaBackGUI::MyFormPaint::button_Dreieck_Click(System::Object ^ sender, System::EventArgs ^ e)
{
	pointFormsKreis->Clear();
	pointFormsFuenfeck->Clear();
	pointFormsStern->Clear();
	pointFormsOval->Clear();
	_points->Clear();

	this->Refresh();

	Point points1 = Point(100, 375);
	Point points2 = Point(350, 125);
	Point points3 = Point(350, 125);
	Point points4 = Point(600, 375);
	Point points5 = Point(600, 375);
	Point points6 = Point(100, 375);

	Graphics ^pg = CreateGraphics();
	SolidBrush ^ brush_red = gcnew SolidBrush(Color::Red);
	Pen^ pen_black = gcnew Pen(Color::Black, 3.0f);

	pg->SmoothingMode = Drawing2D::SmoothingMode::AntiAlias;
	// Create array of points that define lines to draw.
	array<PointF>^ points = { PointF(100,375),PointF(350,125), PointF(350,125),PointF(600,375),PointF(600,375),PointF(100,375) };

	//Draw lines to screen.
	pg->DrawLines(pen_black, points);
	LinearGradientBrush ^linear = gcnew LinearGradientBrush(System::Drawing::Point(350, 100), System::Drawing::Point(350, 700), Color::Salmon, Color::Cyan);
	pg->FillPolygon(linear, points);

	pointFormsDreieck->Add(points1);
	pointFormsDreieck->Add(points2);
	pointFormsDreieck->Add(points3);
	pointFormsDreieck->Add(points4);
	pointFormsDreieck->Add(points5);
	pointFormsDreieck->Add(points6);

	delete pg;

	return System::Void();
}

System::Void AlfaBackGUI::MyFormPaint::MyFormPaint_Resize(System::Object ^ sender, System::EventArgs ^ e)
{
	Control^ control = dynamic_cast<Control^>(sender);
	control->Invalidate();
}

System::Void AlfaBackGUI::MyFormPaint::MyFormPaint_Paint(System::Object ^ sender, System::Windows::Forms::PaintEventArgs ^ e)
{
	e->Graphics->SmoothingMode = Drawing2D::SmoothingMode::HighQuality;
	e->Graphics->SmoothingMode = Drawing2D::SmoothingMode::AntiAlias;

	// Create pen.
	Graphics ^pg = CreateGraphics();
	SolidBrush ^ brush_red = gcnew SolidBrush(Color::Red);
	Pen^ pen_black = gcnew Pen(Color::Black, 3.0f);
	System::Drawing::Font ^ font1 = gcnew System::Drawing::Font("Verdana", 30);
	//MyForm::OnPaint(e);


	for each(Point point in _points)
	{
		Pen ^ pen_red = gcnew Pen(Color::Red);
		{
			e->Graphics->DrawRectangle(pen_black, Rectangle(point.X, point.Y, 300, 300));
			LinearGradientBrush ^linear = gcnew LinearGradientBrush(System::Drawing::Point(350, 100), System::Drawing::Point(350, 700), Color::Salmon, Color::Cyan);
			e->Graphics->FillRectangle(linear, Rectangle(point.X, point.Y, 300, 300));
			//MessageBox::Show("panel1_Paint");
		}
	}

	for each(Point point in pointFormsKreis)
	{
		Pen ^ pen_red = gcnew Pen(Color::Red);
		{
			e->Graphics->DrawEllipse(pen_black, Rectangle(point.X, point.Y, 300, 300));
			LinearGradientBrush ^linear = gcnew LinearGradientBrush(System::Drawing::Point(350, 100), System::Drawing::Point(350, 700), Color::Salmon, Color::Cyan);
			e->Graphics->FillEllipse(linear, Rectangle(point.X, point.Y, 300, 300));
		}
	}



	for each(Point ^ point in pointFormsDreieck)
	{
		Pen ^ pen_red = gcnew Pen(Color::Red);
		{
			e->Graphics->DrawLines(pen_black, pointFormsDreieck->ToArray());
			LinearGradientBrush ^linear = gcnew LinearGradientBrush(System::Drawing::Point(350, 100), System::Drawing::Point(350, 700), Color::Salmon, Color::Cyan);
			e->Graphics->FillPolygon(linear, pointFormsDreieck->ToArray());
		}
	}



	for each(Point ^ point in pointFormsFuenfeck)
	{
		Pen ^ pen_red = gcnew Pen(Color::Red);
		{
			e->Graphics->DrawLines(pen_black, pointFormsFuenfeck->ToArray());
			LinearGradientBrush ^linear = gcnew LinearGradientBrush(System::Drawing::Point(350, 100), System::Drawing::Point(350, 700), Color::Salmon, Color::Cyan);
			e->Graphics->FillPolygon(linear, pointFormsFuenfeck->ToArray());
		}
	}


	for each(Point ^ point in pointFormsStern)
	{
		Pen ^ pen_red = gcnew Pen(Color::Red);
		{


			e->Graphics->DrawPolygon(pen_black, pointFormsStern->ToArray());
			LinearGradientBrush ^linear = gcnew LinearGradientBrush(System::Drawing::Point(350, 100), System::Drawing::Point(350, 700), Color::Salmon, Color::Cyan);
			e->Graphics->FillPolygon(linear, pointFormsStern->ToArray()); //pen_red->Brush

		}
	}

	for each(Point point in pointFormsOval)
	{
		Pen ^ pen_red = gcnew Pen(Color::Red);
		{

			e->Graphics->DrawEllipse(pen_black, Rectangle(point.X, point.Y, 300, 370));
			LinearGradientBrush ^linear = gcnew LinearGradientBrush(System::Drawing::Point(350, 100), System::Drawing::Point(350, 700), Color::Salmon, Color::Cyan);
			e->Graphics->FillEllipse(linear, Rectangle(point.X, point.Y, 300, 370));
		}
	}
}
