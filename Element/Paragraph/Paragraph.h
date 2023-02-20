#ifndef MP2_PARAGRAPH_H_
#define MP2_PARAGRAPH_H_

#include "../Element.h"

class Paragraph : public Element {
public:
    Paragraph(std::string text);
    std::string Accept(ElementVisitor *visitor) const override;
    void setColor(std::string color) override;
    void setText(std::string text) override;
    void setBold(bool bold);
    void setItalics(bool italics);
    void setFontSize(int fontSize);
    std::string getText() const;
    int getFontSize() const;
    bool isBold() const;
    bool isItalics() const;
    std::string getColor() const;

private:
    std::string text;
    int fontSize;
    bool bold;
    bool italics;
    std::string color;
};

#endif