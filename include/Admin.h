#ifndef ADMIN_H_
#define ADMIN_H_

class Admin: public Usuario
{
  public:
  Admin();
  Admin(int ,string ,string ,string ,string ,string ,string ,string );
  ~Admin();
  void datos();
  void setAdmin(string ,string ,string ,string ,string ,string ,string);
  void setCodigo(int);
};

#endif