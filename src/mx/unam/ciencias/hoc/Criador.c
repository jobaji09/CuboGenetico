/* Criador.c generated by valac 0.34.8, the Vala compiler
 * generated from Criador.vala, do not modify */


#include <glib.h>
#include <glib-object.h>
#include "agenetico.h"
#include <float.h>
#include <math.h>
#include <gobject/gvaluecollector.h>


#define CUBO_GENETICO_TYPE_CRIADOR (cubo_genetico_criador_get_type ())
#define CUBO_GENETICO_CRIADOR(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), CUBO_GENETICO_TYPE_CRIADOR, CuboGeneticoCriador))
#define CUBO_GENETICO_CRIADOR_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), CUBO_GENETICO_TYPE_CRIADOR, CuboGeneticoCriadorClass))
#define CUBO_GENETICO_IS_CRIADOR(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), CUBO_GENETICO_TYPE_CRIADOR))
#define CUBO_GENETICO_IS_CRIADOR_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), CUBO_GENETICO_TYPE_CRIADOR))
#define CUBO_GENETICO_CRIADOR_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), CUBO_GENETICO_TYPE_CRIADOR, CuboGeneticoCriadorClass))

typedef struct _CuboGeneticoCriador CuboGeneticoCriador;
typedef struct _CuboGeneticoCriadorClass CuboGeneticoCriadorClass;
typedef struct _CuboGeneticoCriadorPrivate CuboGeneticoCriadorPrivate;

#define CUBO_GENETICO_TYPE_FENO_GENO (cubo_genetico_feno_geno_get_type ())
#define CUBO_GENETICO_FENO_GENO(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), CUBO_GENETICO_TYPE_FENO_GENO, CuboGeneticoFenoGeno))
#define CUBO_GENETICO_FENO_GENO_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), CUBO_GENETICO_TYPE_FENO_GENO, CuboGeneticoFenoGenoClass))
#define CUBO_GENETICO_IS_FENO_GENO(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), CUBO_GENETICO_TYPE_FENO_GENO))
#define CUBO_GENETICO_IS_FENO_GENO_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), CUBO_GENETICO_TYPE_FENO_GENO))
#define CUBO_GENETICO_FENO_GENO_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), CUBO_GENETICO_TYPE_FENO_GENO, CuboGeneticoFenoGenoClass))

typedef struct _CuboGeneticoFenoGeno CuboGeneticoFenoGeno;
typedef struct _CuboGeneticoFenoGenoClass CuboGeneticoFenoGenoClass;

#define CUBO_GENETICO_TYPE_FFITNESS (cubo_genetico_ffitness_get_type ())
#define CUBO_GENETICO_FFITNESS(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), CUBO_GENETICO_TYPE_FFITNESS, CuboGeneticoFFitness))
#define CUBO_GENETICO_FFITNESS_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), CUBO_GENETICO_TYPE_FFITNESS, CuboGeneticoFFitnessClass))
#define CUBO_GENETICO_IS_FFITNESS(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), CUBO_GENETICO_TYPE_FFITNESS))
#define CUBO_GENETICO_IS_FFITNESS_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), CUBO_GENETICO_TYPE_FFITNESS))
#define CUBO_GENETICO_FFITNESS_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), CUBO_GENETICO_TYPE_FFITNESS, CuboGeneticoFFitnessClass))

typedef struct _CuboGeneticoFFitness CuboGeneticoFFitness;
typedef struct _CuboGeneticoFFitnessClass CuboGeneticoFFitnessClass;
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
#define _g_rand_free0(var) ((var == NULL) ? NULL : (var = (g_rand_free (var), NULL)))

#define CUBO_GENETICO_TYPE_INDIVIDUO (cubo_genetico_individuo_get_type ())
#define CUBO_GENETICO_INDIVIDUO(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), CUBO_GENETICO_TYPE_INDIVIDUO, CuboGeneticoIndividuo))
#define CUBO_GENETICO_INDIVIDUO_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), CUBO_GENETICO_TYPE_INDIVIDUO, CuboGeneticoIndividuoClass))
#define CUBO_GENETICO_IS_INDIVIDUO(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), CUBO_GENETICO_TYPE_INDIVIDUO))
#define CUBO_GENETICO_IS_INDIVIDUO_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), CUBO_GENETICO_TYPE_INDIVIDUO))
#define CUBO_GENETICO_INDIVIDUO_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), CUBO_GENETICO_TYPE_INDIVIDUO, CuboGeneticoIndividuoClass))

typedef struct _CuboGeneticoIndividuo CuboGeneticoIndividuo;
typedef struct _CuboGeneticoIndividuoClass CuboGeneticoIndividuoClass;
#define _cubo_genetico_agenetico_fenotipo_unref0(var) ((var == NULL) ? NULL : (var = (cubo_genetico_agenetico_fenotipo_unref (var), NULL)))
#define _cubo_genetico_agenetico_genotipo_unref0(var) ((var == NULL) ? NULL : (var = (cubo_genetico_agenetico_genotipo_unref (var), NULL)))

#define CUBO_GENETICO_TYPE_POBLACION (cubo_genetico_poblacion_get_type ())
#define CUBO_GENETICO_POBLACION(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), CUBO_GENETICO_TYPE_POBLACION, CuboGeneticoPoblacion))
#define CUBO_GENETICO_POBLACION_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), CUBO_GENETICO_TYPE_POBLACION, CuboGeneticoPoblacionClass))
#define CUBO_GENETICO_IS_POBLACION(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), CUBO_GENETICO_TYPE_POBLACION))
#define CUBO_GENETICO_IS_POBLACION_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), CUBO_GENETICO_TYPE_POBLACION))
#define CUBO_GENETICO_POBLACION_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), CUBO_GENETICO_TYPE_POBLACION, CuboGeneticoPoblacionClass))

typedef struct _CuboGeneticoPoblacion CuboGeneticoPoblacion;
typedef struct _CuboGeneticoPoblacionClass CuboGeneticoPoblacionClass;
#define _cubo_genetico_poblacion_unref0(var) ((var == NULL) ? NULL : (var = (cubo_genetico_poblacion_unref (var), NULL)))
typedef struct _CuboGeneticoParamSpecCriador CuboGeneticoParamSpecCriador;

struct _CuboGeneticoCriador {
	GTypeInstance parent_instance;
	volatile int ref_count;
	CuboGeneticoCriadorPrivate * priv;
};

struct _CuboGeneticoCriadorClass {
	GTypeClass parent_class;
	void (*finalize) (CuboGeneticoCriador *self);
};

struct _CuboGeneticoCriadorPrivate {
	CuboGeneticoFenoGeno* fenogeno;
	CuboGeneticoFFitness* fitness;
	GRand* rand;
};

struct _CuboGeneticoParamSpecCriador {
	GParamSpec parent_instance;
};


static gpointer cubo_genetico_criador_parent_class = NULL;

gpointer cubo_genetico_criador_ref (gpointer instance);
void cubo_genetico_criador_unref (gpointer instance);
GParamSpec* cubo_genetico_param_spec_criador (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void cubo_genetico_value_set_criador (GValue* value, gpointer v_object);
void cubo_genetico_value_take_criador (GValue* value, gpointer v_object);
gpointer cubo_genetico_value_get_criador (const GValue* value);
GType cubo_genetico_criador_get_type (void) G_GNUC_CONST;
GType cubo_genetico_feno_geno_get_type (void) G_GNUC_CONST;
GType cubo_genetico_ffitness_get_type (void) G_GNUC_CONST;
#define CUBO_GENETICO_CRIADOR_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), CUBO_GENETICO_TYPE_CRIADOR, CuboGeneticoCriadorPrivate))
enum  {
	CUBO_GENETICO_CRIADOR_DUMMY_PROPERTY
};
CuboGeneticoCriador* cubo_genetico_criador_new (CuboGeneticoFenoGeno* fenogeno, CuboGeneticoFFitness* fitness, gint semilla);
CuboGeneticoCriador* cubo_genetico_criador_construct (GType object_type, CuboGeneticoFenoGeno* fenogeno, CuboGeneticoFFitness* fitness, gint semilla);
GType cubo_genetico_individuo_get_type (void) G_GNUC_CONST;
CuboGeneticoIndividuo* cubo_genetico_criador_individuoNuevo (CuboGeneticoCriador* self, CuboGeneticoAGeneticoGenotipo* geno);
CuboGeneticoAGeneticoFenotipo* cubo_genetico_feno_geno_decodifica (CuboGeneticoFenoGeno* self, CuboGeneticoAGeneticoGenotipo* geno);
CuboGeneticoIndividuo* cubo_genetico_individuo_new (void);
CuboGeneticoIndividuo* cubo_genetico_individuo_construct (GType object_type);
void cubo_genetico_individuo_set_genotipo (CuboGeneticoIndividuo* self, CuboGeneticoAGeneticoGenotipo* value);
void cubo_genetico_individuo_set_fenotipo (CuboGeneticoIndividuo* self, CuboGeneticoAGeneticoFenotipo* value);
gdouble cubo_genetico_ffitness_evaluacion (CuboGeneticoFFitness* self, CuboGeneticoAGeneticoFenotipo* feno);
void cubo_genetico_individuo_set_fitness (CuboGeneticoIndividuo* self, gdouble value);
CuboGeneticoIndividuo* cubo_genetico_criador_individuoNR (CuboGeneticoCriador* self);
CuboGeneticoAGeneticoGenotipo* cubo_genetico_feno_geno_genoAleatNuev (CuboGeneticoFenoGeno* self, gint n);
gpointer cubo_genetico_poblacion_ref (gpointer instance);
void cubo_genetico_poblacion_unref (gpointer instance);
GParamSpec* cubo_genetico_param_spec_poblacion (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void cubo_genetico_value_set_poblacion (GValue* value, gpointer v_object);
void cubo_genetico_value_take_poblacion (GValue* value, gpointer v_object);
gpointer cubo_genetico_value_get_poblacion (const GValue* value);
GType cubo_genetico_poblacion_get_type (void) G_GNUC_CONST;
CuboGeneticoPoblacion* cubo_genetico_criador_poblacionNuevaR (CuboGeneticoCriador* self, gint tam);
CuboGeneticoPoblacion* cubo_genetico_poblacion_new (void);
CuboGeneticoPoblacion* cubo_genetico_poblacion_construct (GType object_type);
void cubo_genetico_poblacion_agregaIndividuo (CuboGeneticoPoblacion* self, CuboGeneticoIndividuo* ind);
static void cubo_genetico_criador_finalize (CuboGeneticoCriador* obj);


static gpointer _g_object_ref0 (gpointer self) {
	return self ? g_object_ref (self) : NULL;
}


CuboGeneticoCriador* cubo_genetico_criador_construct (GType object_type, CuboGeneticoFenoGeno* fenogeno, CuboGeneticoFFitness* fitness, gint semilla) {
	CuboGeneticoCriador* self = NULL;
	CuboGeneticoFenoGeno* _tmp0_ = NULL;
	CuboGeneticoFenoGeno* _tmp1_ = NULL;
	CuboGeneticoFFitness* _tmp2_ = NULL;
	CuboGeneticoFFitness* _tmp3_ = NULL;
	GRand* _tmp4_ = NULL;
	GRand* _tmp5_ = NULL;
	gint _tmp6_ = 0;
	g_return_val_if_fail (fenogeno != NULL, NULL);
	g_return_val_if_fail (fitness != NULL, NULL);
	self = (CuboGeneticoCriador*) g_type_create_instance (object_type);
	_tmp0_ = fenogeno;
	_tmp1_ = _g_object_ref0 (_tmp0_);
	_g_object_unref0 (self->priv->fenogeno);
	self->priv->fenogeno = _tmp1_;
	_tmp2_ = fitness;
	_tmp3_ = _g_object_ref0 (_tmp2_);
	_g_object_unref0 (self->priv->fitness);
	self->priv->fitness = _tmp3_;
	_tmp4_ = g_rand_new ();
	_g_rand_free0 (self->priv->rand);
	self->priv->rand = _tmp4_;
	_tmp5_ = self->priv->rand;
	_tmp6_ = semilla;
	g_rand_set_seed (_tmp5_, (guint32) _tmp6_);
	return self;
}


CuboGeneticoCriador* cubo_genetico_criador_new (CuboGeneticoFenoGeno* fenogeno, CuboGeneticoFFitness* fitness, gint semilla) {
	return cubo_genetico_criador_construct (CUBO_GENETICO_TYPE_CRIADOR, fenogeno, fitness, semilla);
}


CuboGeneticoIndividuo* cubo_genetico_criador_individuoNuevo (CuboGeneticoCriador* self, CuboGeneticoAGeneticoGenotipo* geno) {
	CuboGeneticoIndividuo* result = NULL;
	CuboGeneticoAGeneticoFenotipo* feno = NULL;
	CuboGeneticoFenoGeno* _tmp0_ = NULL;
	CuboGeneticoAGeneticoGenotipo* _tmp1_ = NULL;
	CuboGeneticoAGeneticoFenotipo* _tmp2_ = NULL;
	CuboGeneticoIndividuo* indi = NULL;
	CuboGeneticoIndividuo* _tmp3_ = NULL;
	CuboGeneticoAGeneticoGenotipo* _tmp4_ = NULL;
	CuboGeneticoFFitness* _tmp5_ = NULL;
	gdouble _tmp6_ = 0.0;
	g_return_val_if_fail (self != NULL, NULL);
	g_return_val_if_fail (geno != NULL, NULL);
	_tmp0_ = self->priv->fenogeno;
	_tmp1_ = geno;
	_tmp2_ = cubo_genetico_feno_geno_decodifica (_tmp0_, _tmp1_);
	feno = _tmp2_;
	_tmp3_ = cubo_genetico_individuo_new ();
	indi = _tmp3_;
	_tmp4_ = geno;
	cubo_genetico_individuo_set_genotipo (indi, _tmp4_);
	cubo_genetico_individuo_set_fenotipo (indi, feno);
	_tmp5_ = self->priv->fitness;
	_tmp6_ = cubo_genetico_ffitness_evaluacion (_tmp5_, feno);
	cubo_genetico_individuo_set_fitness (indi, _tmp6_);
	result = indi;
	_cubo_genetico_agenetico_fenotipo_unref0 (feno);
	return result;
}


CuboGeneticoIndividuo* cubo_genetico_criador_individuoNR (CuboGeneticoCriador* self) {
	CuboGeneticoIndividuo* result = NULL;
	CuboGeneticoFenoGeno* _tmp0_ = NULL;
	GRand* _tmp1_ = NULL;
	gint32 _tmp2_ = 0;
	CuboGeneticoAGeneticoGenotipo* _tmp3_ = NULL;
	CuboGeneticoAGeneticoGenotipo* _tmp4_ = NULL;
	CuboGeneticoIndividuo* _tmp5_ = NULL;
	CuboGeneticoIndividuo* _tmp6_ = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->fenogeno;
	_tmp1_ = self->priv->rand;
	_tmp2_ = g_rand_int_range (_tmp1_, (gint32) 1, (gint32) 21);
	_tmp3_ = cubo_genetico_feno_geno_genoAleatNuev (_tmp0_, (gint) _tmp2_);
	_tmp4_ = _tmp3_;
	_tmp5_ = cubo_genetico_criador_individuoNuevo (self, _tmp4_);
	_tmp6_ = _tmp5_;
	_cubo_genetico_agenetico_genotipo_unref0 (_tmp4_);
	result = _tmp6_;
	return result;
}


CuboGeneticoPoblacion* cubo_genetico_criador_poblacionNuevaR (CuboGeneticoCriador* self, gint tam) {
	CuboGeneticoPoblacion* result = NULL;
	CuboGeneticoPoblacion* po = NULL;
	CuboGeneticoPoblacion* _tmp0_ = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = cubo_genetico_poblacion_new ();
	po = _tmp0_;
	{
		gint i = 0;
		i = 0;
		{
			gboolean _tmp1_ = FALSE;
			_tmp1_ = TRUE;
			while (TRUE) {
				gint _tmp3_ = 0;
				gint _tmp4_ = 0;
				CuboGeneticoPoblacion* _tmp5_ = NULL;
				CuboGeneticoIndividuo* _tmp6_ = NULL;
				CuboGeneticoIndividuo* _tmp7_ = NULL;
				if (!_tmp1_) {
					gint _tmp2_ = 0;
					_tmp2_ = i;
					i = _tmp2_ + 1;
				}
				_tmp1_ = FALSE;
				_tmp3_ = i;
				_tmp4_ = tam;
				if (!(_tmp3_ < _tmp4_)) {
					break;
				}
				_tmp5_ = po;
				_tmp6_ = cubo_genetico_criador_individuoNR (self);
				_tmp7_ = _tmp6_;
				cubo_genetico_poblacion_agregaIndividuo (_tmp5_, _tmp7_);
				_g_object_unref0 (_tmp7_);
			}
		}
	}
	result = po;
	return result;
}


static void cubo_genetico_value_criador_init (GValue* value) {
	value->data[0].v_pointer = NULL;
}


static void cubo_genetico_value_criador_free_value (GValue* value) {
	if (value->data[0].v_pointer) {
		cubo_genetico_criador_unref (value->data[0].v_pointer);
	}
}


static void cubo_genetico_value_criador_copy_value (const GValue* src_value, GValue* dest_value) {
	if (src_value->data[0].v_pointer) {
		dest_value->data[0].v_pointer = cubo_genetico_criador_ref (src_value->data[0].v_pointer);
	} else {
		dest_value->data[0].v_pointer = NULL;
	}
}


static gpointer cubo_genetico_value_criador_peek_pointer (const GValue* value) {
	return value->data[0].v_pointer;
}


static gchar* cubo_genetico_value_criador_collect_value (GValue* value, guint n_collect_values, GTypeCValue* collect_values, guint collect_flags) {
	if (collect_values[0].v_pointer) {
		CuboGeneticoCriador* object;
		object = collect_values[0].v_pointer;
		if (object->parent_instance.g_class == NULL) {
			return g_strconcat ("invalid unclassed object pointer for value type `", G_VALUE_TYPE_NAME (value), "'", NULL);
		} else if (!g_value_type_compatible (G_TYPE_FROM_INSTANCE (object), G_VALUE_TYPE (value))) {
			return g_strconcat ("invalid object type `", g_type_name (G_TYPE_FROM_INSTANCE (object)), "' for value type `", G_VALUE_TYPE_NAME (value), "'", NULL);
		}
		value->data[0].v_pointer = cubo_genetico_criador_ref (object);
	} else {
		value->data[0].v_pointer = NULL;
	}
	return NULL;
}


static gchar* cubo_genetico_value_criador_lcopy_value (const GValue* value, guint n_collect_values, GTypeCValue* collect_values, guint collect_flags) {
	CuboGeneticoCriador** object_p;
	object_p = collect_values[0].v_pointer;
	if (!object_p) {
		return g_strdup_printf ("value location for `%s' passed as NULL", G_VALUE_TYPE_NAME (value));
	}
	if (!value->data[0].v_pointer) {
		*object_p = NULL;
	} else if (collect_flags & G_VALUE_NOCOPY_CONTENTS) {
		*object_p = value->data[0].v_pointer;
	} else {
		*object_p = cubo_genetico_criador_ref (value->data[0].v_pointer);
	}
	return NULL;
}


GParamSpec* cubo_genetico_param_spec_criador (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags) {
	CuboGeneticoParamSpecCriador* spec;
	g_return_val_if_fail (g_type_is_a (object_type, CUBO_GENETICO_TYPE_CRIADOR), NULL);
	spec = g_param_spec_internal (G_TYPE_PARAM_OBJECT, name, nick, blurb, flags);
	G_PARAM_SPEC (spec)->value_type = object_type;
	return G_PARAM_SPEC (spec);
}


gpointer cubo_genetico_value_get_criador (const GValue* value) {
	g_return_val_if_fail (G_TYPE_CHECK_VALUE_TYPE (value, CUBO_GENETICO_TYPE_CRIADOR), NULL);
	return value->data[0].v_pointer;
}


void cubo_genetico_value_set_criador (GValue* value, gpointer v_object) {
	CuboGeneticoCriador* old;
	g_return_if_fail (G_TYPE_CHECK_VALUE_TYPE (value, CUBO_GENETICO_TYPE_CRIADOR));
	old = value->data[0].v_pointer;
	if (v_object) {
		g_return_if_fail (G_TYPE_CHECK_INSTANCE_TYPE (v_object, CUBO_GENETICO_TYPE_CRIADOR));
		g_return_if_fail (g_value_type_compatible (G_TYPE_FROM_INSTANCE (v_object), G_VALUE_TYPE (value)));
		value->data[0].v_pointer = v_object;
		cubo_genetico_criador_ref (value->data[0].v_pointer);
	} else {
		value->data[0].v_pointer = NULL;
	}
	if (old) {
		cubo_genetico_criador_unref (old);
	}
}


void cubo_genetico_value_take_criador (GValue* value, gpointer v_object) {
	CuboGeneticoCriador* old;
	g_return_if_fail (G_TYPE_CHECK_VALUE_TYPE (value, CUBO_GENETICO_TYPE_CRIADOR));
	old = value->data[0].v_pointer;
	if (v_object) {
		g_return_if_fail (G_TYPE_CHECK_INSTANCE_TYPE (v_object, CUBO_GENETICO_TYPE_CRIADOR));
		g_return_if_fail (g_value_type_compatible (G_TYPE_FROM_INSTANCE (v_object), G_VALUE_TYPE (value)));
		value->data[0].v_pointer = v_object;
	} else {
		value->data[0].v_pointer = NULL;
	}
	if (old) {
		cubo_genetico_criador_unref (old);
	}
}


static void cubo_genetico_criador_class_init (CuboGeneticoCriadorClass * klass) {
	cubo_genetico_criador_parent_class = g_type_class_peek_parent (klass);
	((CuboGeneticoCriadorClass *) klass)->finalize = cubo_genetico_criador_finalize;
	g_type_class_add_private (klass, sizeof (CuboGeneticoCriadorPrivate));
}


static void cubo_genetico_criador_instance_init (CuboGeneticoCriador * self) {
	self->priv = CUBO_GENETICO_CRIADOR_GET_PRIVATE (self);
	self->ref_count = 1;
}


static void cubo_genetico_criador_finalize (CuboGeneticoCriador* obj) {
	CuboGeneticoCriador * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, CUBO_GENETICO_TYPE_CRIADOR, CuboGeneticoCriador);
	g_signal_handlers_destroy (self);
	_g_object_unref0 (self->priv->fenogeno);
	_g_object_unref0 (self->priv->fitness);
	_g_rand_free0 (self->priv->rand);
}


GType cubo_genetico_criador_get_type (void) {
	static volatile gsize cubo_genetico_criador_type_id__volatile = 0;
	if (g_once_init_enter (&cubo_genetico_criador_type_id__volatile)) {
		static const GTypeValueTable g_define_type_value_table = { cubo_genetico_value_criador_init, cubo_genetico_value_criador_free_value, cubo_genetico_value_criador_copy_value, cubo_genetico_value_criador_peek_pointer, "p", cubo_genetico_value_criador_collect_value, "p", cubo_genetico_value_criador_lcopy_value };
		static const GTypeInfo g_define_type_info = { sizeof (CuboGeneticoCriadorClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) cubo_genetico_criador_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (CuboGeneticoCriador), 0, (GInstanceInitFunc) cubo_genetico_criador_instance_init, &g_define_type_value_table };
		static const GTypeFundamentalInfo g_define_type_fundamental_info = { (G_TYPE_FLAG_CLASSED | G_TYPE_FLAG_INSTANTIATABLE | G_TYPE_FLAG_DERIVABLE | G_TYPE_FLAG_DEEP_DERIVABLE) };
		GType cubo_genetico_criador_type_id;
		cubo_genetico_criador_type_id = g_type_register_fundamental (g_type_fundamental_next (), "CuboGeneticoCriador", &g_define_type_info, &g_define_type_fundamental_info, 0);
		g_once_init_leave (&cubo_genetico_criador_type_id__volatile, cubo_genetico_criador_type_id);
	}
	return cubo_genetico_criador_type_id__volatile;
}


gpointer cubo_genetico_criador_ref (gpointer instance) {
	CuboGeneticoCriador* self;
	self = instance;
	g_atomic_int_inc (&self->ref_count);
	return instance;
}


void cubo_genetico_criador_unref (gpointer instance) {
	CuboGeneticoCriador* self;
	self = instance;
	if (g_atomic_int_dec_and_test (&self->ref_count)) {
		CUBO_GENETICO_CRIADOR_GET_CLASS (self)->finalize (self);
		g_type_free_instance ((GTypeInstance *) self);
	}
}



