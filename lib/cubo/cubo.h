/* cubo.h generated by valac 0.34.8, the Vala compiler, do not modify */


#ifndef __LIB_CUBO_CUBO_H__
#define __LIB_CUBO_CUBO_H__

#include <glib.h>
#include <glib-object.h>

G_BEGIN_DECLS


#define CUBO_GENETICO_CUBO_TYPE_CUBO3X3 (cubo_genetico_cubo_cubo3x3_get_type ())
#define CUBO_GENETICO_CUBO_CUBO3X3(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), CUBO_GENETICO_CUBO_TYPE_CUBO3X3, CuboGeneticoCuboCubo3x3))
#define CUBO_GENETICO_CUBO_CUBO3X3_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), CUBO_GENETICO_CUBO_TYPE_CUBO3X3, CuboGeneticoCuboCubo3x3Class))
#define CUBO_GENETICO_CUBO_IS_CUBO3X3(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), CUBO_GENETICO_CUBO_TYPE_CUBO3X3))
#define CUBO_GENETICO_CUBO_IS_CUBO3X3_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), CUBO_GENETICO_CUBO_TYPE_CUBO3X3))
#define CUBO_GENETICO_CUBO_CUBO3X3_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), CUBO_GENETICO_CUBO_TYPE_CUBO3X3, CuboGeneticoCuboCubo3x3Class))

typedef struct _CuboGeneticoCuboCubo3x3 CuboGeneticoCuboCubo3x3;
typedef struct _CuboGeneticoCuboCubo3x3Class CuboGeneticoCuboCubo3x3Class;
typedef struct _CuboGeneticoCuboCubo3x3Private CuboGeneticoCuboCubo3x3Private;

struct _CuboGeneticoCuboCubo3x3 {
	GObject parent_instance;
	CuboGeneticoCuboCubo3x3Private * priv;
};

struct _CuboGeneticoCuboCubo3x3Class {
	GObjectClass parent_class;
};


GType cubo_genetico_cubo_cubo3x3_get_type (void) G_GNUC_CONST;
CuboGeneticoCuboCubo3x3* cubo_genetico_cubo_cubo3x3_new (gint* cubo, int cubo_length1, int cubo_length2);
CuboGeneticoCuboCubo3x3* cubo_genetico_cubo_cubo3x3_construct (GType object_type, gint* cubo, int cubo_length1, int cubo_length2);
void cubo_genetico_cubo_cubo3x3_r (CuboGeneticoCuboCubo3x3* self);
void cubo_genetico_cubo_cubo3x3_rprima (CuboGeneticoCuboCubo3x3* self);
void cubo_genetico_cubo_cubo3x3_l (CuboGeneticoCuboCubo3x3* self);
void cubo_genetico_cubo_cubo3x3_lprima (CuboGeneticoCuboCubo3x3* self);
void cubo_genetico_cubo_cubo3x3_u (CuboGeneticoCuboCubo3x3* self);
void cubo_genetico_cubo_cubo3x3_uprima (CuboGeneticoCuboCubo3x3* self);
void cubo_genetico_cubo_cubo3x3_f (CuboGeneticoCuboCubo3x3* self);
void cubo_genetico_cubo_cubo3x3_fprima (CuboGeneticoCuboCubo3x3* self);
void cubo_genetico_cubo_cubo3x3_b (CuboGeneticoCuboCubo3x3* self);
void cubo_genetico_cubo_cubo3x3_bprima (CuboGeneticoCuboCubo3x3* self);
void cubo_genetico_cubo_cubo3x3_d (CuboGeneticoCuboCubo3x3* self);
void cubo_genetico_cubo_cubo3x3_dprima (CuboGeneticoCuboCubo3x3* self);
void cubo_genetico_cubo_cubo3x3_to_string (CuboGeneticoCuboCubo3x3* self);
void cubo_genetico_cubo_cubo3x3_dibuja (CuboGeneticoCuboCubo3x3* self);


G_END_DECLS

#endif