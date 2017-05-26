/* agenetico.h generated by valac 0.34.8, the Vala compiler, do not modify */


#ifndef __LIB_AGENETICO_AGENETICO_H__
#define __LIB_AGENETICO_AGENETICO_H__

#include <glib.h>
#include <glib-object.h>
#include <stdlib.h>
#include <string.h>
#include <float.h>
#include <math.h>

G_BEGIN_DECLS


#define CUBO_GENETICO_AGENETICO_TYPE_CUBO3X3 (cubo_genetico_agenetico_cubo3x3_get_type ())
#define CUBO_GENETICO_AGENETICO_CUBO3X3(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), CUBO_GENETICO_AGENETICO_TYPE_CUBO3X3, CuboGeneticoAGeneticoCubo3x3))
#define CUBO_GENETICO_AGENETICO_CUBO3X3_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), CUBO_GENETICO_AGENETICO_TYPE_CUBO3X3, CuboGeneticoAGeneticoCubo3x3Class))
#define CUBO_GENETICO_AGENETICO_IS_CUBO3X3(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), CUBO_GENETICO_AGENETICO_TYPE_CUBO3X3))
#define CUBO_GENETICO_AGENETICO_IS_CUBO3X3_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), CUBO_GENETICO_AGENETICO_TYPE_CUBO3X3))
#define CUBO_GENETICO_AGENETICO_CUBO3X3_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), CUBO_GENETICO_AGENETICO_TYPE_CUBO3X3, CuboGeneticoAGeneticoCubo3x3Class))

typedef struct _CuboGeneticoAGeneticoCubo3x3 CuboGeneticoAGeneticoCubo3x3;
typedef struct _CuboGeneticoAGeneticoCubo3x3Class CuboGeneticoAGeneticoCubo3x3Class;
typedef struct _CuboGeneticoAGeneticoCubo3x3Private CuboGeneticoAGeneticoCubo3x3Private;

#define CUBO_GENETICO_AGENETICO_TYPE_GENOTIPO (cubo_genetico_agenetico_genotipo_get_type ())
#define CUBO_GENETICO_AGENETICO_GENOTIPO(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), CUBO_GENETICO_AGENETICO_TYPE_GENOTIPO, CuboGeneticoAGeneticoGenotipo))
#define CUBO_GENETICO_AGENETICO_GENOTIPO_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), CUBO_GENETICO_AGENETICO_TYPE_GENOTIPO, CuboGeneticoAGeneticoGenotipoClass))
#define CUBO_GENETICO_AGENETICO_IS_GENOTIPO(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), CUBO_GENETICO_AGENETICO_TYPE_GENOTIPO))
#define CUBO_GENETICO_AGENETICO_IS_GENOTIPO_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), CUBO_GENETICO_AGENETICO_TYPE_GENOTIPO))
#define CUBO_GENETICO_AGENETICO_GENOTIPO_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), CUBO_GENETICO_AGENETICO_TYPE_GENOTIPO, CuboGeneticoAGeneticoGenotipoClass))

typedef struct _CuboGeneticoAGeneticoGenotipo CuboGeneticoAGeneticoGenotipo;
typedef struct _CuboGeneticoAGeneticoGenotipoClass CuboGeneticoAGeneticoGenotipoClass;
typedef struct _CuboGeneticoAGeneticoGenotipoPrivate CuboGeneticoAGeneticoGenotipoPrivate;

#define CUBO_GENETICO_AGENETICO_TYPE_FENOTIPO (cubo_genetico_agenetico_fenotipo_get_type ())
#define CUBO_GENETICO_AGENETICO_FENOTIPO(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), CUBO_GENETICO_AGENETICO_TYPE_FENOTIPO, CuboGeneticoAGeneticoFenotipo))
#define CUBO_GENETICO_AGENETICO_FENOTIPO_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), CUBO_GENETICO_AGENETICO_TYPE_FENOTIPO, CuboGeneticoAGeneticoFenotipoClass))
#define CUBO_GENETICO_AGENETICO_IS_FENOTIPO(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), CUBO_GENETICO_AGENETICO_TYPE_FENOTIPO))
#define CUBO_GENETICO_AGENETICO_IS_FENOTIPO_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), CUBO_GENETICO_AGENETICO_TYPE_FENOTIPO))
#define CUBO_GENETICO_AGENETICO_FENOTIPO_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), CUBO_GENETICO_AGENETICO_TYPE_FENOTIPO, CuboGeneticoAGeneticoFenotipoClass))

typedef struct _CuboGeneticoAGeneticoFenotipo CuboGeneticoAGeneticoFenotipo;
typedef struct _CuboGeneticoAGeneticoFenotipoClass CuboGeneticoAGeneticoFenotipoClass;
typedef struct _CuboGeneticoAGeneticoFenotipoPrivate CuboGeneticoAGeneticoFenotipoPrivate;

struct _CuboGeneticoAGeneticoCubo3x3 {
	GObject parent_instance;
	CuboGeneticoAGeneticoCubo3x3Private * priv;
};

struct _CuboGeneticoAGeneticoCubo3x3Class {
	GObjectClass parent_class;
};

struct _CuboGeneticoAGeneticoGenotipo {
	GTypeInstance parent_instance;
	volatile int ref_count;
	CuboGeneticoAGeneticoGenotipoPrivate * priv;
};

struct _CuboGeneticoAGeneticoGenotipoClass {
	GTypeClass parent_class;
	void (*finalize) (CuboGeneticoAGeneticoGenotipo *self);
};

struct _CuboGeneticoAGeneticoFenotipo {
	GTypeInstance parent_instance;
	volatile int ref_count;
	CuboGeneticoAGeneticoFenotipoPrivate * priv;
};

struct _CuboGeneticoAGeneticoFenotipoClass {
	GTypeClass parent_class;
	void (*finalize) (CuboGeneticoAGeneticoFenotipo *self);
};


GType cubo_genetico_agenetico_cubo3x3_get_type (void) G_GNUC_CONST;
CuboGeneticoAGeneticoCubo3x3* cubo_genetico_agenetico_cubo3x3_new (gint* cubo, int cubo_length1, int cubo_length2);
CuboGeneticoAGeneticoCubo3x3* cubo_genetico_agenetico_cubo3x3_construct (GType object_type, gint* cubo, int cubo_length1, int cubo_length2);
gint* cubo_genetico_agenetico_cubo3x3_getActual (CuboGeneticoAGeneticoCubo3x3* self, int* result_length1, int* result_length2);
void cubo_genetico_agenetico_cubo3x3_reset (CuboGeneticoAGeneticoCubo3x3* self);
void cubo_genetico_agenetico_cubo3x3_giraCaras (CuboGeneticoAGeneticoCubo3x3* self, gchar** giros, int giros_length1);
void cubo_genetico_agenetico_cubo3x3_giraCara (CuboGeneticoAGeneticoCubo3x3* self, const gchar* i);
void cubo_genetico_agenetico_cubo3x3_to_string (CuboGeneticoAGeneticoCubo3x3* self);
void cubo_genetico_agenetico_cubo3x3_dibuja (CuboGeneticoAGeneticoCubo3x3* self, gdouble fit);
gpointer cubo_genetico_agenetico_genotipo_ref (gpointer instance);
void cubo_genetico_agenetico_genotipo_unref (gpointer instance);
GParamSpec* cubo_genetico_agenetico_param_spec_genotipo (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void cubo_genetico_agenetico_value_set_genotipo (GValue* value, gpointer v_object);
void cubo_genetico_agenetico_value_take_genotipo (GValue* value, gpointer v_object);
gpointer cubo_genetico_agenetico_value_get_genotipo (const GValue* value);
GType cubo_genetico_agenetico_genotipo_get_type (void) G_GNUC_CONST;
CuboGeneticoAGeneticoGenotipo* cubo_genetico_agenetico_genotipo_new (gint n);
CuboGeneticoAGeneticoGenotipo* cubo_genetico_agenetico_genotipo_construct (GType object_type, gint n);
gchar* cubo_genetico_agenetico_genotipo_to_string (CuboGeneticoAGeneticoGenotipo* self);
gint* cubo_genetico_agenetico_genotipo_get_genotipo (CuboGeneticoAGeneticoGenotipo* self, int* result_length1);
gpointer cubo_genetico_agenetico_fenotipo_ref (gpointer instance);
void cubo_genetico_agenetico_fenotipo_unref (gpointer instance);
GParamSpec* cubo_genetico_agenetico_param_spec_fenotipo (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void cubo_genetico_agenetico_value_set_fenotipo (GValue* value, gpointer v_object);
void cubo_genetico_agenetico_value_take_fenotipo (GValue* value, gpointer v_object);
gpointer cubo_genetico_agenetico_value_get_fenotipo (const GValue* value);
GType cubo_genetico_agenetico_fenotipo_get_type (void) G_GNUC_CONST;
CuboGeneticoAGeneticoFenotipo* cubo_genetico_agenetico_fenotipo_new (gint n);
CuboGeneticoAGeneticoFenotipo* cubo_genetico_agenetico_fenotipo_construct (GType object_type, gint n);
gchar* cubo_genetico_agenetico_fenotipo_to_string (CuboGeneticoAGeneticoFenotipo* self);
gchar** cubo_genetico_agenetico_fenotipo_get_fenotipo (CuboGeneticoAGeneticoFenotipo* self, int* result_length1);


G_END_DECLS

#endif
